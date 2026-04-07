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
        self.KP = 100.0  # 降低比例系数，减少剧烈转向
        self.KI = 0.05  # 降低积分系数
        self.KD = 0.1   # 降低微分系数
        self.max_speed = 0.3  # 添加最大速度限制
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

    def image_callback(self, msg):
        try:
            print("image_callback")
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            error, detected = self.process_image(cv_image)
            
            with self.lock:
                self.current_error = error
                self.line_detected = detected
                if not detected:
                    self.search_counter += 1
                else:
                    self.search_counter = 0
            self.debug = True
            if self.debug:
                self.get_logger().info("Calling visualize_processing")
                print("visualize_processing")
                self.visualize_processing(cv_image, error)
                
        except Exception as e:
            self.get_logger().error(f"Image processing error: {str(e)}")

    def process_image(self, img):
        img = cv2.resize(img, (self.image_width, self.image_height))
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, self.lower_yellow, self.upper_yellow)
        
        kernel = np.ones((5,5), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
        
        roi = mask[self.roi_y:self.roi_y+self.roi_height, :]
        
        contours, _ = cv2.findContours(roi, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        if contours:
            contours = [c for c in contours if cv2.contourArea(c) > 800]
            if contours:
                largest_contour = max(contours, key=cv2.contourArea)
                M = cv2.moments(largest_contour)
                if M["m00"] > 0:
                    cX = int(M["m10"] / M["m00"])
                    cY = int(M["m01"] / M["m00"]) + self.roi_y
                    error = (cX - self.target_x) / self.image_width
                    
                    self.center_line_history.append((cX, cY))
                    if len(self.center_line_history) > self.max_history_length:
                        self.center_line_history.pop(0)
                    
                    angle_offsets = [math.radians(-150), math.radians(-120), math.radians(-90), 
                                   math.radians(-60), math.radians(-30), math.radians(30), 
                                   math.radians(60), math.radians(90)]
                    
                    self.track_center_history = self.calculate_track_center(roi, angle_offsets)
                    return error, True
        
        return self.last_error * 0.7, False

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

    def visualize_processing(self, img, error):
        debug_img = img.copy()
        print("visualize_processing")
        
        # Draw ROI
        cv2.rectangle(debug_img, 
                     (0, self.roi_y), 
                     (self.image_width, self.roi_y+self.roi_height),
                     (0, 255, 255), 2)
        
        # Draw target line
        cv2.line(debug_img, 
                (self.target_x, self.roi_y),
                (self.target_x, self.roi_y+self.roi_height),
                (0, 255, 0), 2)
        
        # Draw detected line
        error_x = int(self.target_x + error * self.image_width)
        cv2.line(debug_img,
                (error_x, self.roi_y),
                (error_x, self.roi_y+self.roi_height),
                (0, 0, 255), 2)
        
        # Draw history
        if len(self.center_line_history) > 1:
            for i in range(1, len(self.center_line_history)):
                cv2.line(debug_img,
                        self.center_line_history[i-1],
                        self.center_line_history[i],
                        (255, 0, 0), 2)
        
        # Draw track centers
        with self.lock:
            for angle, center in self.track_center_history.items():
                if center is not None:
                    x, y = center
                    cv2.circle(debug_img, (x, y), 5, (0, 255, 255), -1)
                    cv2.putText(debug_img, f"{math.degrees(angle):.0f}°", (x, y), 
                              cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 1)
        
        # Status info
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
            dynamic_KP = self.KP * 0.8  # 更大比例系数
            dynamic_KI = self.KI * 0.5  # 减小积分项
            dynamic_KD = self.KD * 1.2  # 增大微分项
        elif abs_error > 0.3:  # 中等误差
            dynamic_KP = self.KP * 1.5
            dynamic_KI = self.KI
            dynamic_KD = self.KD
        else:  # 小误差
            dynamic_KP = self.KP
            dynamic_KI = self.KI * 1.5
            dynamic_KD = self.KD
        

        # 积分项改进：带积分限幅和抗饱和
        self.integral += error
        # 积分限幅
        self.integral = np.clip(self.integral, -1.0/dynamic_KI, 1.0/dynamic_KI) if dynamic_KI > 0 else 0
        # 当误差方向改变时，重置部分积分
        if error * self.last_error < 0:
            self.integral *= 0.5
            
        # 微分项改进：低通滤波
        derivative = error - self.last_error
        filtered_derivative = 0.6 * derivative + 0.4 * self.last_derivative if hasattr(self, 'last_derivative') else derivative
        self.last_derivative = filtered_derivative
        
        # 计算输出
        output = dynamic_KP * error + dynamic_KI * self.integral + self.KD * filtered_derivative
        self.last_error = error
        
        # 输出平滑处理：使用S曲线
        max_output = 0.8
        smooth_output = max_output * math.tanh(output / max_output * 3)
        
        return smooth_output


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
            
            lost_count = 0
            last_valid_direction = 0  # 记录最后有效的方向

            while rclpy.ok():
                # Get current state
                with line_follower.lock:
                    error = line_follower.current_error
                    detected = line_follower.line_detected
                    track_center_history = line_follower.track_center_history
                
                # Line lost recovery logic
                if not detected:
                    lost_count += 1
                    if lost_count > 3:  # 更快响应丢失情况
                        # 使用八领域算法进行搜索
                        angles = [angle_offsets[i] for i in range(8)]
                        distances = []
                        
                        # 模拟检测每个方向上的线（这里可以替换为实际的图像处理逻辑）
                        for angle in angles:
                            # 假设每个方向都有一个距离值，表示是否检测到线
                            # 这里使用随机值模拟，实际应用中需要通过图像处理计算
                            # print("Current angle:", angle)
                            # print("Dictionary keys:", track_center_history.keys())

                            if angle in track_center_history and track_center_history[angle] is not None:
                                distance = 0
                            else:
                                distance = np.random.randint(0, 100)  # 0表示检测到线，越大表示越远
                            distances.append(distance)
                        
                        # 找到最接近线的方向
                        min_distance = min(distances)
                        min_idx = distances.index(min_distance)
                        selected_angle = angle_offsets[min_idx]
                        
                        # 计算角度对应的索引
                        direction_idx = np.clip(int((selected_angle / math.pi + 1) * 4), 0, 4)
                        selected_dir = directions[direction_idx]
                        
                        msg.mode = 11
                        msg.gait_id = 3
                        msg.vel_des = [selected_dir[0] * 0.3, 0.0, selected_dir[1] * 0.5]  # 降低搜索速度
                        msg.step_height = [0.05, 0.05]
                        msg.rpy_des = [0,-1,0]
                        msg.life_count = (msg.life_count + 1) % 127
                        robot_ctrl.Send_cmd(msg)
                        time.sleep(0.1)
                        continue
                else:
                    lost_count = 0
                    # 更新最后有效方向
                    last_valid_direction = np.sign(error) if abs(error) > 0.1 else 0
                
                # 正常循迹控制
                turn_speed = line_follower.pid_control(error)
                forward_speed = 0.5 * (1.0 - 0.5 * abs(turn_speed))  # 调整速度曲线
                
                # 方向选择（基于PID输出）
                direction_idx = int((turn_speed + 1.0) * 2.5)  # 调整方向索引计算
                direction_idx = np.clip(direction_idx, 0, 4)
                selected_dir = directions[direction_idx]
                
                # 准备控制命令
                msg.mode = 11
                msg.gait_id = 26 if abs(turn_speed) < 0.5 else 3
                msg.vel_des = [
                    selected_dir[0] * 1.0,  # 降低转向增益
                    0.0,
                    selected_dir[1] * 0.2   # 降低前进速度
                ]
                # 根据转向程度调整步高
                msg.step_height = [0.06, 0.06] if abs(turn_speed) > 0.3 else [0.04, 0.04]
                msg.rpy_des = [0,-1,0]
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