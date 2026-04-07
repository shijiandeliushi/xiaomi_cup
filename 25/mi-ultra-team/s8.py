import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge
import lcm
import time
from threading import Thread, Lock
import math
import cv2
import numpy as np
from robot_control_cmd_lcmt import robot_control_cmd_lcmt
from robot_control_response_lcmt import robot_control_response_lcmt

class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower')
        self.debug = True  # 确保调试模式开启
        cv2.namedWindow("Line Detection", cv2.WINDOW_NORMAL)
        self.latest_image = None
        # ROS2 Setup
        camera_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1
        )
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.image_sub = self.create_subscription(
            Image, '/rgb_camera/image_raw', self.image_callback, camera_qos)
        self.bridge = CvBridge()
        
        # Image Processing Parameters
        self.image_width = 640
        self.image_height = 480
        self.roi_height = 320
        self.roi_y = 160
        self.target_x = self.image_width // 2
        
        # Color Thresholds
        self.lower_yellow = np.array([20, 80, 80])
        self.upper_yellow = np.array([35, 255, 255])
        
        # Control Parameters
        self.KP = 500.0  # 降低比例系数，减少剧烈转向
        self.KI = 0.05  # 降低积分系数
        self.KD = 0.8   # 降低微分系数
        self.max_speed = 0.2  # 添加最大速度限制
        self.last_error = 0
        self.integral = 0
        
        # State
        self.current_error = 0.0
        self.line_detected = False
        self.lock = Lock()
        self.search_counter = 0
        
        # Debug
        self.debug = True

        # Tracking
        self.center_line_history = []
        self.max_history_length = 10
        self.track_center_history = {}
         # === 物理参数 ===
        self.track_width_cm = 60        # 赛道宽度（cm）
        self.line_width_cm  = 10        # 边线宽度（cm）
        self.pixel_per_cm   = None      # 像素／厘米，首次检测后自动标定

        self.latest_debug_img = None
        self.new_debug = False


    def image_callback(self, msg):
        try:
            print("image_callback")
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            # error, detected = self.process_image(cv_image)
            center_x, error, detected = self.process_image(cv_image)
            self.latest_image = cv_image.copy()
            debug_img = self._draw_debug_overlay(cv_image, center_x, error)
            with self.lock:
               self.current_error = error
               self.line_detected = detected
               self.latest_debug_img = debug_img
               self.new_debug = True

            # with self.lock:
            #     self.current_error = error
            #     self.line_detected = detected
            #     if not detected:
            #         self.search_counter += 1
            #     else:
            #         self.search_counter = 0
            # self.debug = True
            # if self.debug:
            #     self.get_logger().info("Calling visualize_processing")
            #     print("visualize_processing")
            #     # self.visualize_processing(cv_image, error)
            #     self.visualize_processing(cv_image, center_x, error)
                
        except Exception as e:
            self.get_logger().error(f"Image processing error: {str(e)}")

    def process_image(self, img):
        img = cv2.resize(img, (self.image_width, self.image_height))
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, self.lower_yellow, self.upper_yellow)
        # 去噪
        kernel = np.ones((5, 5), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN,  kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
        roi = mask[self.roi_y:self.roi_y+self.roi_height, :]
        
        # 边缘与轮廓
        edges = cv2.Canny(roi, 50, 150)
        contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if contours:
            # 按面积取前两大
            contours = sorted(contours, key=cv2.contourArea, reverse=True)[:2]
            
            # 如果已经标定像素／厘米，则过滤掉过小的噪声轮廓
            if self.pixel_per_cm is not None:
                min_width_px = int(self.line_width_cm * self.pixel_per_cm * 0.5)
                contours = [cnt for cnt in contours if cv2.boundingRect(cnt)[2] >= min_width_px]
            
            if len(contours) == 2:
                # 计算左右线的像素位置
                x1, _, w1, _ = cv2.boundingRect(contours[0])
                x2, _, w2, _ = cv2.boundingRect(contours[1])
                left_edge  = min(x1, x2)
                right_edge = max(x1+w1, x2+w2)
                
                # 首次同时检测到时做标定
                pixel_dist = right_edge - left_edge
                if self.pixel_per_cm is None and pixel_dist > 0:
                    self.pixel_per_cm = pixel_dist / float(self.track_width_cm)
                    self.get_logger().info(f"Calibrated pixel_per_cm = {self.pixel_per_cm:.2f}")
                
                center_x = (left_edge + right_edge) / 2.0
                error    = (center_x - self.target_x) / (self.image_width / 2.0)  # 归一化到 [-1,1]
                print(f"error: {error:.2f}")
                print(f"center_x: {center_x}")
                # 计算曲率
                if abs(left_edge - right_edge) > 10:
                    print("计算曲率")
                    curvature = abs(left_edge - right_edge) / self.image_width
                    if curvature > 0.5:  # 曲率较大时动态调整中心线预测
                        center_x = (left_edge + right_edge) / 2.0 + curvature * 10  # 偏移调整
                else:
                    center_x = (left_edge + right_edge) / 2.0
                 # 检查是否为弯道衔接部分
                if len(self.center_line_history) > 1:
                    # 上一次的 center_x
                    prev_center = self.center_line_history[-1][0]
                    if abs(center_x - prev_center) > 50:
                        self.use_history = True
                        print("进入弯道衔接部分")
                else:
                    self.use_history = False
                
                if self.use_history:
                    # 使用历史信息预测下一个弯道的位置
                    print("使用历史信息预测下一个弯道的位置")
                    predicted_center_x = self.predict_next_center_x()
                    error = (predicted_center_x - self.target_x) / self.image_width
                    self.use_history = False
                    smooth_error = np.mean([e[0] for e in self.center_line_history[-5:]])
                else:
                    smooth_error = error
                self.center_line_history.append((center_x, error))
                if len(self.center_line_history) > self.max_history_length:
                    self.center_line_history.pop(0)
                print(f"[Process] 两线分支 center_x={center_x:.1f}, error={error:.2f}")
                # return smooth_error, True
                return center_x, smooth_error, True
            
         # 只检测到一条线，使用标定后的偏移补全
            elif len(contours) == 1 and self.pixel_per_cm is not None:
                x, _, w, _ = cv2.boundingRect(contours[0])
                edge_center = x + w/2.0
                # 判断这是左侧还是右侧线
                if edge_center < self.image_width/2:
                    # 丢右侧，中心在右侧
                    center_x = edge_center + self.track_width_cm * self.pixel_per_cm
                else:
                    # 丢左侧，中心在左侧
                    center_x = edge_center - self.track_width_cm * self.pixel_per_cm
                
                error = (center_x - self.target_x) / (self.image_width / 2.0)
                print(f"[Process] 单线分支 center_x={center_x:.1f}, error={error:.2f}")
                self.last_error = error
                # return error, True
                return center_x, error, True
        
        # 无线
        fallback_center = self.target_x + self.last_error*(self.image_width/2)
        fallback_error = self.last_error*0.7
        print(f"[Process] 无线分支 fallback_center={fallback_center:.1f}, error={fallback_error:.2f}")
        return fallback_center, fallback_error, False

    # 新增predict_next_center_x函数，用于预测下一个弯道的中心线位置
    def predict_next_center_x(self):
        history = np.array(self.center_line_history)[:, 0]  # 只要 center_x 列
        x = np.arange(len(history))
        interp = np.interp(x + 1, x, history)  # 插值出下一个的 center_x 序列
        return float(interp[-1])              # 返回最后一个预测值




    def calculate_track_center(self, roi, angle_offsets):
        track_center = {angle: None for angle in angle_offsets}
        for angle in angle_offsets:
            y = np.clip(int(self.roi_height*math.sin(angle)), 0, self.roi_height-1)
            row = roi[y, :]
            indices = np.where(row > 0)[0]
            if indices.size > 0:
                center_x = indices[indices.size//2]
                track_center[angle] = (center_x + self.image_width//2, y + self.roi_y)
        return track_center

    def visualize_processing(self, img, center_x, error):
        debug_img = img.copy()
        
        # 绘制ROI区域
        cv2.rectangle(debug_img, 
                    (0, self.roi_y), 
                    (self.image_width, self.roi_y+self.roi_height),
                    (0, 255, 255), 2)
        
        # 在中点位置画一个小圆
        cx = int(center_x)
        cx = np.clip(cx, 0, self.image_width - 1)  # 限制center_x在图像宽度范围内
        cy = self.roi_y + self.roi_height // 2
        print(f"Drawing circle at: ({cx}, {cy})")  # 打印调试信息，确认中点坐标
        cv2.circle(debug_img, (cx, cy), 20, (0, 0, 255), -1)

        # 绘制目标线
        cv2.line(debug_img, 
                (self.target_x, self.roi_y),
                (self.target_x, self.roi_y+self.roi_height),
                (0, 255, 0), 2)
        
        # 绘制检测到的中心线
        error_x = int(self.target_x + error * self.image_width)
        cv2.line(debug_img,
                (error_x, self.roi_y),
                (error_x, self.roi_y+self.roi_height),
                (255, 0, 0), 2)
        
        # 状态信息
        status = f"Error: {error:.2f} {'DETECTED' if self.line_detected else 'SEARCHING'}"
        cv2.putText(debug_img, status, (10, 30),
                cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 255, 255), 2)
        
        cv2.imshow("Line Detection", debug_img)
        cv2.waitKey(1)


    def pid_control(self, error):
        # 动态调整PID参数：根据误差大小自动调整参数
        abs_error = abs(error)
        
        # 急弯检测
        if abs_error > 0.8:  # 定义急弯误差阈值
            self.in_sharp_turn = True
        else:
            self.in_sharp_turn = False
        
        # 根据误差大小和急弯状态动态调整参数
        if self.in_sharp_turn:  # 急弯场景
            print("sharp turn")
            dynamic_KP = self.KP * 2.0  # 更大比例系数
            dynamic_KI = self.KI * 0.5  # 减小积分项

            dynamic_KD = self.KD * 2.0  # 增大微分项
            max_speed = 0.1  # 降低最大速度
        elif abs_error > 0.5:  # 中等误差
            print("medium error")
            dynamic_KP = self.KP * 1.5
            dynamic_KI = self.KI * 1.0
            dynamic_KD = self.KD * 1.5
            max_speed = 0.2  # 降低最大速度
        else:  # 小误差
            print("small error")

            dynamic_KP = self.KP
            dynamic_KI = self.KI 
            dynamic_KD = self.KD
            max_speed = 0.3  # 降低最大速度
        

        # 积分项改进：带积分限幅和抗饱和
        self.integral += error
        # 积分限幅
        self.integral = np.clip(self.integral, -1.0/dynamic_KI, 1.0/dynamic_KI) if dynamic_KI > 0 else 0
        # 当误差方向改变时，重置部分积分
        if error * self.last_error < 0:
            self.integral *= 0.5
            
        # 微分项改进：低通滤波
        derivative = error - self.last_error
        # filtered_derivative = 0.6 * derivative + 0.4 * self.last_derivative if hasattr(self, 'last_derivative') else derivative
        filtered_derivative = 0.8 * derivative + 0.2 * self.last_derivative if hasattr(self, 'last_derivative') else derivative
        self.last_derivative = filtered_derivative
        
        # 计算输出
        output = dynamic_KP * error + dynamic_KI * self.integral + dynamic_KD * filtered_derivative
        self.last_error = error
        
        # 输出平滑处理：使用S曲线
        max_output = 0.8
        smooth_output = max_output * math.tanh(output / max_output * 3)
            # 限制输出范围，避免过大角度
        smooth_output = np.clip(smooth_output, -0.5, 0.5)
        return smooth_output
    
    def _draw_debug_overlay(self, img, center_x, error):
        debug = img.copy()
        # 绘制 ROI
        cv2.rectangle(debug,
                      (0, self.roi_y),
                      (self.image_width, self.roi_y + self.roi_height),
                      (0, 255, 255), 2)
        # 中心点
        cx = int(center_x)
        cy = self.roi_y + self.roi_height // 2
        cv2.circle(debug, (cx, cy), 5, (255, 0, 0), -1)
        # 目标线
        cv2.line(debug,
                 (self.target_x, self.roi_y),
                 (self.target_x, self.roi_y + self.roi_height),
                 (0, 255, 0), 2)
        # 实际中心线
        error_x = int(self.target_x + error * self.image_width)
        cv2.line(debug,
                 (error_x, self.roi_y),
                 (error_x, self.roi_y + self.roi_height),
                 (0, 0, 255), 2)
        # 状态文字
        status = f"Err: {error:.2f}"
        cv2.putText(debug, status, (10, 30),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8,
                    (255,255,255), 2)
        return debug


class RobotControl:
    def __init__(self, line_follower):
        self.line_follower = line_follower
        self.rec_thread = Thread(target=self.rec_response)
        self.send_thread = Thread(target=self.send_publish)
        
        # LCM initialization
        self.lc_r = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")
        
        self.cmd_msg = robot_control_cmd_lcmt()
        self.rec_msg = robot_control_response_lcmt()
        self.send_lock = Lock()
        self.delay_cnt = 0
        self.mode_ok = 0
        self.gait_ok = 0
        self.running = True

    def run(self):
        self.lc_r.subscribe("robot_control_response", self.msg_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg_handler(self, channel, data):
        self.rec_msg = robot_control_response_lcmt().decode(data)
        if self.rec_msg.order_process_bar >= 95:
            self.mode_ok = self.rec_msg.mode
            self.gait_ok = self.rec_msg.gait_id

    def rec_response(self):
        while self.running:
            self.lc_r.handle()
            time.sleep(0.002)

    def Wait_finish(self, mode, gait_id, timeout=5.0):
        count = 0
        max_count = int(timeout / 0.005)
        while self.running and count < max_count:
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
            time.sleep(0.005)
            count += 1
        return False

    def send_publish(self):
        while self.running:
            with self.send_lock:
                if self.delay_cnt > 20:  # ~10Hz heartbeat
                    try:
                        # Ensure values are within valid range before encoding
                        self.cmd_msg.mode = max(-128, min(127, self.cmd_msg.mode))
                        self.cmd_msg.gait_id = max(-128, min(127, self.cmd_msg.gait_id))
                        self.cmd_msg.contact = max(-128, min(127, self.cmd_msg.contact))
                        self.cmd_msg.life_count = max(-128, min(127, self.cmd_msg.life_count))
                        
                        self.lc_s.publish("robot_control_cmd", self.cmd_msg.encode())
                        self.delay_cnt = 0
                    except Exception as e:
                        self.line_follower.get_logger().error(f"LCM publish error: {str(e)}")
                self.delay_cnt += 1
            time.sleep(0.005)

    def Send_cmd(self, msg):
        with self.send_lock:
            self.delay_cnt = 50
            self.cmd_msg = msg

    def quit(self):
        self.running = False
        self.rec_thread.join()
        self.send_thread.join()

def main(args=None):
    rclpy.init(args=args)
    line_follower = LineFollower()
    robot_ctrl = RobotControl(line_follower)
    robot_ctrl.run()
    
    try:
        # Initialization
        msg = robot_control_cmd_lcmt()
        msg.mode = 12  # Recovery stand
        msg.gait_id = 0
        msg.life_count = 0
        robot_ctrl.Send_cmd(msg)
        time.sleep(2.0)  # Ensure standing complete
        
        # Main control loop
        def navigate_track():
            # Direction presets: (angular, linear)
            directions = [
                (-1.0, 0.1),  # 左转较大
                (-0.5, 0.1),  # 左转较小
                (0.0, 0.5),   # 直行
                (0.5, 0.1),   # 右转较小
                (1.0, 0.1)    # 右转较大
            ]
            
            # 八领域区域划分角度（以弧度为单位）
            angle_offsets = [math.radians(-150), math.radians(-120), math.radians(-90), math.radians(-60),
                            math.radians(-30), math.radians(30), math.radians(60), math.radians(90)]
            line_follower.get_logger().info("Waiting for first image...")
            while rclpy.ok() and line_follower.latest_image is None:
                rclpy.spin_once(line_follower, timeout_sec=0.1)
            lost_count = 0
            last_valid_direction = 0  # 记录最后有效的方向
            last_valid_error = 0.0    # 记录最后有效的误差值
            search_direction = 1      # 初始搜索方向（1表示向右，-1表示向左）

            while rclpy.ok():
                rclpy.spin_once(line_follower, timeout_sec=0.01)

                with line_follower.lock:
                    if line_follower.new_debug:
                        cv2.imshow("Line Detection", line_follower.latest_debug_img)
                        cv2.waitKey(1)
                        line_follower.new_debug = False

                    error    = line_follower.current_error
                    detected = line_follower.line_detected
                    print(f"Error: {error:.2f}, Detected: {detected}")
                    track_center_history = line_follower.track_center_history
                
                # Line lost recovery logic
                if not detected:
                    lost_count += 1
                    if lost_count > 3:  # 更快响应丢失情况
                        # 使用历史信息和图像处理进行搜索
                        print("使用历史信息和图像处理进行搜索")
                        
                        # 方法1：使用最后有效的误差方向
                        if last_valid_error != 0.0:
                            search_direction = 1 if last_valid_error > 0 else -1
                        
                        # 方法2：扫描图像寻找黄色赛道线
                        try:
                            # 获取当前图像（需要确保在LineFollower类中有存储最新图像）
                            if hasattr(line_follower, 'latest_image'):
                                img = line_follower.latest_image.copy()
                                hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
                                mask = cv2.inRange(hsv, line_follower.lower_yellow, line_follower.upper_yellow)
                                
                                # 形态学操作去除噪声
                                kernel = np.ones((5,5), np.uint8)
                                mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
                                mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
                                
                                # 在ROI区域寻找轮廓
                                roi = mask[line_follower.roi_y:line_follower.roi_y+line_follower.roi_height, :]
                                contours, _ = cv2.findContours(roi, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
                                
                                if contours:
                                    # 找到最大的两个轮廓（赛道两侧）
                                    contours = sorted(contours, key=cv2.contourArea, reverse=True)[:2]
                                    
                                    if len(contours) >= 1:
                                        # 如果只找到一个轮廓，可能是赛道的一侧
                                        if len(contours) == 1:
                                            x, y, w, h = cv2.boundingRect(contours[0])
                                            center_x = x + w//2
                                            # 根据轮廓位置判断是左侧还是右侧
                                            if center_x < line_follower.image_width//2:
                                                print("可能是左侧赛道线丢失")
                                                # 可能是右侧赛道线丢失，假设赛道宽度为固定值
                                                center_x = center_x + 200  # 假设赛道宽度200像素
                                            else:
                                                # 可能是左侧赛道线丢失
                                                print("可能是右侧赛道线丢失")
                                                center_x = center_x - 200
                                        else:
                                            # 正常找到两个轮廓
                                            print("找到两个轮廓")
                                            x1, _, w1, _ = cv2.boundingRect(contours[0])
                                            x2, _, w2, _ = cv2.boundingRect(contours[1])
                                            center_x = (x1 + w1//2 + x2 + w2//2) // 2
                                        
                                        error = (center_x - line_follower.target_x) / line_follower.image_width
                                        turn_speed = line_follower.pid_control(error)
                                        
                                        # 更新最后有效误差
                                        last_valid_error = error
                                        
                                        # 准备控制命令
                                        msg.mode = 11
                                        msg.gait_id = 3  # 使用更稳定的步态
                                        msg.vel_des = [
                                            turn_speed * 0.3,  # 降低转向速度
                                            0.0,
                                            0.2  # 降低前进速度进行搜索
                                        ]
                                        msg.step_height = [0.05, 0.05]
                                        msg.rpy_des = [0, -1, 0]
                                        msg.life_count = (msg.life_count + 1) % 127
                                        robot_ctrl.Send_cmd(msg)
                                        time.sleep(0.1)
                                        continue
                        except Exception as e:
                            print(f"图像处理搜索失败: {str(e)}")
                        
                        # 方法3：使用历史中心线预测
                        if len(line_follower.center_line_history) > 0:
                            
                            # 使用最近的中心线历史预测
                            last_center_x = line_follower.center_line_history[-1][0]
                            predicted_error = (last_center_x - line_follower.target_x) / line_follower.image_width
                            turn_speed = line_follower.pid_control(predicted_error)
                            
                            msg.mode = 11
                            msg.gait_id = 3
                            msg.vel_des = [
                                turn_speed * 0.3,
                                0.0,
                                0.2  
                            ]
                            msg.step_height = [0.05, 0.05]
                            msg.rpy_des = [0, -1, 0]
                            msg.life_count = (msg.life_count + 1) % 127
                            robot_ctrl.Send_cmd(msg)
                            time.sleep(0.1)
                            continue
                        
                        # 方法4：螺旋搜索模式
                        search_direction *= -1  # 反转搜索方向
                        msg.mode = 11
                        msg.gait_id = 3
                        msg.vel_des = [
                            search_direction * 0.5,  
                            0.0,
                            0.1  
                        ]
                        msg.step_height = [0.05, 0.05]
                        msg.rpy_des = [0, -1, 0]
                        msg.life_count = (msg.life_count + 1) % 127
                        robot_ctrl.Send_cmd(msg)
                        time.sleep(0.3)
                        continue
                else:
                    lost_count = 0
                    # 更新最后有效方向
                    last_valid_direction = np.sign(error) if abs(error) > 0.1 else 0
                    last_valid_error = error
                
                    # 正常循迹控制
                    turn_speed = line_follower.pid_control(error)
                    forward_speed = 0.06 * (1.0 - 0.5 * abs(turn_speed))  # 调整速度曲线
                    
                    # 方向选择（基于PID输出）
                    direction_idx = int((turn_speed + 1.0) * 2.5)  # 调整方向索引计算
                    direction_idx = np.clip(direction_idx, 0, 4)
                    selected_dir = directions[direction_idx]
                    
                    # 准备控制命令
                    msg.mode = 11
                    msg.gait_id = 26 if abs(turn_speed) < 0.5 else 3
                    msg.vel_des = [
                        forward_speed,   # forward
                        0.0,
                        selected_dir[0] * 0.2         # yaw_rate
                    ]


                    # 根据转向程度调整步高
                    msg.step_height = [0.06, 0.06] if abs(turn_speed) > 0.3 else [0.04, 0.04]
                    msg.rpy_des = [0, -1, 0]
                    msg.life_count = (msg.life_count + 1) % 127
                    robot_ctrl.Send_cmd(msg)
                    
                    time.sleep(0.1)
            
        navigate_track()
        
    finally:
        # Clean shutdown
        msg.mode = 12
        robot_ctrl.Send_cmd(msg)
        time.sleep(1.0)
        robot_ctrl.quit()
        line_follower.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()