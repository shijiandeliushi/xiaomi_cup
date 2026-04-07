import rclpy
from rclpy.node import Node
import time
from robot_control_cmd_lcmt import robot_control_cmd_lcmt
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import pyzbar.pyzbar as pyzbar
import lcm
import sys
import os
import time
from threading import Thread, Lock
from robot_control_cmd_lcmt import robot_control_cmd_lcmt
from robot_control_response_lcmt import robot_control_response_lcmt
import math
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSDurabilityPolicy
import matplotlib.pyplot as plt
import copy
import toml
from file_send_lcmt import file_send_lcmt
from remove import LineBalancer
from remove import adjust_body_angle

qr_code_content = None
arrow_direction = None


class Robot_Ctrl(object):
    def __init__(self):
        self.rec_thread = Thread(target=self.rec_responce)
        self.send_thread = Thread(target=self.send_publish)
        self.lc_r = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")
        self.cmd_msg = robot_control_cmd_lcmt()
        self.rec_msg = robot_control_response_lcmt()
        self.send_lock = Lock()
        self.delay_cnt = 0
        self.mode_ok = 0
        self.gait_ok = 0
        self.runing = 1

    def run(self):
        self.lc_r.subscribe("robot_control_response", self.msg_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg_handler(self, channel, data):
        self.rec_msg = robot_control_response_lcmt().decode(data)
        if(self.rec_msg.order_process_bar >= 95):
            self.mode_ok = self.rec_msg.mode
        else:
            self.mode_ok = 0

    def rec_responce(self):
        while self.runing:
            self.lc_r.handle()
            time.sleep( 0.002 )

    def Wait_finish(self, mode, gait_id):
        count = 0
        while self.runing and count < 2000: #10s
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
            else:
                time.sleep(0.005)
                count += 1

    def send_publish(self):
        while self.runing:
            self.send_lock.acquire()
            if self.delay_cnt > 20: # Heartbeat signal 10HZ, It is used to maintain the heartbeat when life count is not updated
                self.lc_s.publish("robot_control_cmd",self.cmd_msg.encode())
                self.delay_cnt = 0
            self.delay_cnt += 1
            self.send_lock.release()
            time.sleep( 0.005 )

    def Send_cmd(self, msg):
        self.send_lock.acquire()
        self.delay_cnt = 50
        self.cmd_msg = msg
        self.send_lock.release()

    def quit(self):
        self.runing = 0
        self.rec_thread.join()
        self.send_thread.join()

class QRCodeDetector(Node):
    def __init__(self):
        super().__init__('qr_code_detector')
        # 使用与发布端兼容的QoS配置
        qos_profile = QoSProfile(
        reliability=QoSReliabilityPolicy.BEST_EFFORT,
        durability=QoSDurabilityPolicy.VOLATILE,  # 显式声明易失性
        depth=10
    )
        
        self.subscription = self.create_subscription(
            Image,
            '/AI_camera/image_raw',
            self.image_callback,
            qos_profile=qos_profile  # 显式指定QoS
        )
        self.bridge = CvBridge()

    def visualize_image(self, cv_image, processed_image=None):
        """
        可视化原始图像和处理后的图像
        :param cv_image: 原始BGR图像(numpy数组)
        :param processed_image: 处理后的图像(numpy数组)
        """
        plt.figure(figsize=(12, 6))
        
        # 显示原始图像
        plt.subplot(1, 2 if processed_image is not None else 1, 1)
        plt.imshow(cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB))  # BGR转RGB显示
        plt.title('Original Image')
        plt.axis('off')
        
        # 显示处理后的图像（如果提供）
        if processed_image is not None:
            plt.subplot(1, 2, 2)
            if len(processed_image.shape) == 2:  # 灰度图
                plt.imshow(processed_image, cmap='gray')
            else:  # 彩色图
                plt.imshow(cv2.cvtColor(processed_image, cv2.COLOR_BGR2RGB))
            plt.title('Processed Image')
            plt.axis('off')
        
        plt.tight_layout()
        plt.show()

    def image_callback(self, msg):
        global qr_code_content
        try:
            # 转换图像格式
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='rgb8')
            
            # 图像预处理 - 转换为灰度图
            gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
            #self.visualize_image(cv_image, gray)
            # 初始化微信二维码检测器
            detector = cv2.wechat_qrcode_WeChatQRCode()
            
            # 检测二维码
            res, points = detector.detectAndDecode(gray)
            if res:
                print("res:",res)
                for qr_data in res:
                    if qr_data:  # 确保有有效数据
                        qr_code_content = qr_data
                        self.get_logger().info(f'QR Code detected: {qr_code_content}')
                        break  # 获取第一个有效二维码
            else:
                self.get_logger().debug('No QR Code detected in current frame')
                
        except Exception as e:
            self.get_logger().error(f'Image processing error: {str(e)}')

def move_forward(ctrl, msg,distance_cm, duration_sec):
    """前进指定距离"""
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3  # TROT_MEDIUM步态
    msg.vel_des = [distance_cm/100.0/duration_sec, 0, 0]  # 转换为m/s
    msg.duration = 0  # 持续运动
    msg.pos_des = [0, 0, 0.25]  # 身体高度
    msg.step_height = [0.15, 0.15]  # 摆动腿离地高度
    msg.rpy_des = [0.0, 0.0, 0.0]  # 无旋转
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    time.sleep(duration_sec)

def move_sslope(ctrl, msg, distance_cm, duration_sec):
    """上坡"""
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3
    msg.vel_des = [distance_cm/100.0/duration_sec, 0, 0]
    msg.duration = 0
    msg.pos_des = [0, 0, 0.2]
    msg.step_height = [0.06, 0.06]
    msg.rpy_des = [-0.1, -1, 0.0]
    msg.value = 2
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    time.sleep(duration_sec)

def move_xslope(ctrl, msg, distance_cm, duration_sec):
    """下坡"""
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3
    msg.vel_des = [distance_cm/100.0/duration_sec, 0, 0]
    msg.duration = 0
    msg.pos_des = [0, 0, 0.2]
    msg.step_height = [0.06, 0.06]
    msg.rpy_des = [0.15, 2.5, 0.0]
    msg.value = 2
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    time.sleep(duration_sec)
    # 停止
    #msg.vel_des = [0, 0, 0]
    #ctrl.Send_cmd(msg)

def move_stone(ctrl, msg, distance_cm, duration_sec):
    """stone"""
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3
    msg.vel_des = [distance_cm/100.0/duration_sec, 0, 0]
    msg.duration = 0
    msg.pos_des = [0, 0, 0.2]
    msg.step_height = [0.12, 0.12]
    msg.rpy_des = [-0.2, -0.4, 0.0]
    msg.value = 2
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    time.sleep(duration_sec)

def turn(ctrl, msg, direction, turn_angle=90.0):
    """
    精确转向函数（带自动停止）
    :param ctrl: 机器人控制对象
    :param msg: 控制消息
    :param direction: 转向方向 'left'或'right'
    :param turn_angle: 转向角度(度),默认为90度
    """
    angle_rad = math.radians(turn_angle)
    duration_sec = 2.5 * (turn_angle / 90.0) # 总转向时间
    
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3  # TROT_MEDIUM步态
    turn_speed = angle_rad / duration_sec
    turn_speed = -turn_speed if direction == 'right' else turn_speed
    if direction == 'right':
        duration_sec *= 1.04
    elif direction == 'left':
        duration_sec *= 1.04
    # 关键修改1：设置有限持续时间
    msg.duration = 5000  # 转换为毫秒
    
    msg.vel_des = [0.0, 0, turn_speed]  # Z轴旋转
    msg.pos_des = [0, 0, 0.25]  # 身体高度
    msg.step_height = [0.12, 0.12]
    msg.rpy_des = [0.0, 0.0, 0.0]
    msg.life_count += 1
    
    # 关键修改2：发送指令并等待执行完成
    ctrl.Send_cmd(msg)
    start_time = time.time()
    while time.time() - start_time < duration_sec + 0.5:  # 额外0.5秒容限
        time.sleep(0.01)
    
    # 关键修改3：发送停止指令
    msg.vel_des = [0.0, 0, 0]  # 停止旋转
    msg.duration = 0
    msg.life_count += 1
    ctrl.Send_cmd(msg)

def lie_down(ctrl, msg, duration=5):
    """趴下并保持指定时间"""
    msg.mode = 7  # PureDamper模式
    msg.gait_id = 0
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    ctrl.Wait_finish(7, 0)
    time.sleep(duration)

def stand_up(ctrl, msg):
    """站立"""
    msg.mode = 12  # Recovery stand
    msg.gait_id = 0
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    ctrl.Wait_finish(12, 0)

def scan_qr_code(timeout=10):
    """扫描二维码，带超时"""
    global qr_code_content
    qr_code_content = None
    
    qr_node = QRCodeDetector()
    
    start_time = time.time()
    while time.time() - start_time < timeout and qr_code_content is None:
        rclpy.spin_once(qr_node, timeout_sec=0.1)
    
    qr_node.destroy_node()
    rclpy.shutdown()
    return qr_code_content

def move_rl(ctrl, msg, distance_cm, duration_sec=1, dir="right"):
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3  # TROT_MEDIUM步态
    speed = distance_cm/100.0/duration_sec
    if dir == 'right':
        speed = -speed
    msg.vel_des = [0, speed, 0]  # 转换为m/s
    msg.duration = 0  # 持续运动
    msg.pos_des = [0, 0, 0.25]  # 身体高度
    msg.step_height = [0.15, 0.15]  # 摆动腿离地高度
    msg.rpy_des = [0.0, 0.0, 0.0]  # 无旋转
    msg.life_count += 1
    ctrl.Send_cmd(msg)
    time.sleep(duration_sec)


def crawl_low(ctrl, msg, distance_cm, duration_sec):
    """
    低爬行功能封装
    :param ctrl: Robot_Ctrl控制对象
    :param msg: robot_control_cmd_lcmt消息对象
    :param distance_cm: 爬行距离(厘米)
    :param duration_sec: 爬行持续时间(秒)
    """
    # 首先确保机器人处于站立状态
    stand_up(ctrl, msg)
    
    # 加载并发送步态参数文件
    try:
        # 加载自定义步态参数
        steps = toml.load("/home/robot/code/loco_hl_example-master/basic_motion/cp/Gait_Params_under_bar.toml")
        full_steps = {'step': []}
        
        # 准备LCM发送器
        lcm_usergait = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")
        usergait_msg = file_send_lcmt()
        
        # 转换步态参数格式
        robot_cmd = {
            'mode': 0, 'gait_id': 0, 'contact': 0, 'life_count': 0,
            'vel_des': [0.0, 0.0, 0.0],
            'rpy_des': [0.0, 0.0, 0.0],
            'pos_des': [0.0, 0.0, 0.0],
            'acc_des': [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            'ctrl_point': [0.0, 0.0, 0.0],
            'foot_pose': [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            'step_height': [0.0, 0.0],
            'value': 0, 'duration': 0
        }
        
        k = 0
        for i in steps['step']:
            cmd = copy.deepcopy(robot_cmd)
            cmd['duration'] = i['duration']
            if i['type'] == 'usergait':
                cmd['mode'] = 11  # LOCOMOTION
                cmd['gait_id'] = 110  # USERGAIT
                cmd['vel_des'] = i['body_vel_des']
                cmd['rpy_des'] = i['body_pos_des'][0:3]
                cmd['pos_des'] = i['body_pos_des'][3:6]
                cmd['foot_pose'][0:2] = i['landing_pos_des'][0:2]
                cmd['foot_pose'][2:4] = i['landing_pos_des'][3:5]
                cmd['foot_pose'][4:6] = i['landing_pos_des'][6:8]
                cmd['ctrl_point'][0:2] = i['landing_pos_des'][9:11]
                cmd['step_height'][0] = math.ceil(i['step_height'][0] * 1e3) + math.ceil(i['step_height'][1] * 1e3) * 1e3
                cmd['step_height'][1] = math.ceil(i['step_height'][2] * 1e3) + math.ceil(i['step_height'][3] * 1e3) * 1e3
                cmd['acc_des'] = i['weight']
                cmd['value'] = i['use_mpc_traj']
                cmd['contact'] = math.floor(i['landing_gain'] * 1e1)
                cmd['ctrl_point'][2] = i['mu']
                cmd['life_count'] = k
            full_steps['step'].append(cmd)
            k += 1

        # 保存完整的步态参数
        with open("/home/robot/code/loco_hl_example-master/basic_motion/cp/Gait_Params_under_full_bar.toml", 'w') as f:
            f.write("# Gait Params\n")
            f.writelines(toml.dumps(full_steps))

        # 发送步态定义和参数文件
        with open("/home/robot/code/loco_hl_example-master/basic_motion/cp/Gait_Def_under_bar.toml", 'r') as file_obj_gait_def:
            with open("/home/robot/code/loco_hl_example-master/basic_motion/cp/Gait_Params_under_full_bar.toml", 'r') as file_obj_gait_params:
                usergait_msg.data = file_obj_gait_def.read()
                lcm_usergait.publish("user_gait_file", usergait_msg.encode())
                time.sleep(0.5)
                usergait_msg.data = file_obj_gait_params.read()
                lcm_usergait.publish("user_gait_file", usergait_msg.encode())
                time.sleep(0.1)

        # 切换到自定义步态模式
        with open("/home/robot/code/loco_hl_example-master/basic_motion/cp/Usergait_List.toml", 'r') as user_gait_list:
            steps = toml.load(user_gait_list)
            for step in steps['step']:
                msg.mode = step['mode']
                msg.value = step['value']
                msg.contact = step['contact']
                msg.gait_id = step['gait_id']
                msg.duration = step['duration']
                msg.life_count += 1
                for i in range(3):
                    msg.vel_des[i] = step['vel_des'][i]
                    msg.rpy_des[i] = step['rpy_des'][i]
                    msg.pos_des[i] = step['pos_des'][i]
                    msg.acc_des[i] = step['acc_des'][i]
                    msg.acc_des[i + 3] = step['acc_des'][i + 3]
                    msg.foot_pose[i] = step['foot_pose'][i]
                    msg.ctrl_point[i] = step['ctrl_point'][i]
                for i in range(2):
                    msg.step_height[i] = step['step_height'][i]
                ctrl.Send_cmd(msg)
                time.sleep(0.1)

        # 等待爬行完成
        time.sleep(duration_sec)
        
    except Exception as e:
        print(f"低爬行设置失败: {str(e)}")
        # 异常处理：进入高阻尼模式
        msg.mode = 7  # PureDamper
        msg.gait_id = 0
        msg.duration = 0
        msg.life_count += 1
        ctrl.Send_cmd(msg)
        raise

def turn_sp():
    node = LineBalancer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    # 保证退出前清理
    node.ctrl.stop()
    node.destroy_node()
    cv2.destroyAllWindows()

def main():
    ctrl = Robot_Ctrl()
    ctrl.run()
    msg = robot_control_cmd_lcmt()
    # rclpy.init()
    try:
        stand_up(ctrl,msg)
        # 前进50cm
        print("开始直行")
        move_forward(ctrl, msg, 75, 2.0)
        stand_up(ctrl,msg)
        # 右转90度
        print("开始右转")
        turn(ctrl, msg, 'right',90)
        stand_up(ctrl,msg)
        # 前进100cm
        print("开始直行")
        move_forward(ctrl, msg, 140, 8.0)
        print("开始调整角度")
        stand_up(ctrl,msg)
        rclpy.init()
        adjust_body_angle()
        
        # 左转90度
        stand_up(ctrl,msg)
        print("开始左转")
        turn(ctrl, msg, 'left',92)
        stand_up(ctrl,msg)
        # 上坡姿态前进150cm
        print("开始上坡")
        move_sslope(ctrl, msg, 240, 6.5)  # 假设gait_type=4是上坡步态
        # stand_up(ctrl,msg)
        # 正常姿态走80cm
        print("开始直行")
        move_forward(ctrl, msg, 40, 2)
        # stand_up(ctrl,msg)
        # 下坡姿态走150cm
        print("开始下坡")
        move_xslope(ctrl, msg, 240, 6.0)  # 假设gait_type=5是下坡步态
        # stand_up(ctrl,msg)
        # 正常姿态走150cm
        # move_rl(ctrl, msg,15, 1,'right')
        print("开始直行")
        move_forward(ctrl, msg, 80, 3)
        stand_up(ctrl,msg)
        # 在黄色障碍物前方50cm处停下，趴下5s
        print("黄色障碍物前方50cm处停下，趴下5s")
        #move_forward(ctrl, msg, 50, 2.0)
        lie_down(ctrl, msg, 5)
                
        # # 重新站立前进300cm
        print("开始直行")
        stand_up(ctrl, msg)
        #move_rl(ctrl, msg, 30.0, duration_sec=1, dir="left")
        #turn(ctrl, msg, 'left', 20)
        move_forward(ctrl, msg, 300, 6)
        stand_up(ctrl,msg)
        # 扫描二维码
        turn(ctrl, msg, 'left', 15)
        move_forward(ctrl, msg,0, 2)

        print("进入扫描姿态...")
        msg.mode = 11
        msg.gait_id = 1  # 切换为更稳定的步态
        msg.vel_des = [0, 0, 0]
        msg.pos_des = [0, 0, 0.22]  # 降低重心
        ctrl.Send_cmd(msg)
        time.sleep(1)  # 等待稳定
        print("开始检测")
        qr_content = scan_qr_code()
        if not qr_content:
            print("未检测到二维码，终止程序")
            lie_down(ctrl,msg)
            return
        
        turn(ctrl, msg, 'right', 15)
        stand_up(ctrl,msg)
        rclpy.init()
        print(f"检测到二维码内容: {qr_content}")
        move_forward(ctrl, msg, 120, 5)
        stand_up(ctrl,msg)
        if qr_code_content == "B-2":
           # B_2路径
            # move_rl(ctrl, msg, 20)
            print("B_2路径")
            move_forward(ctrl, msg, 90, 4)
            lie_down(ctrl, msg, 5)
            stand_up(ctrl, msg)
            # 倒退100cm
            print("开始倒退")
            move_forward(ctrl, msg, -100, 4)
            stand_up(ctrl,msg)
            # 左转90度
            turn(ctrl, msg, 'left',95)
            stand_up(ctrl,msg)
            # 前进200cm
            move_forward(ctrl, msg, 200, 8.0)
            # 左转90度
            stand_up(ctrl,msg)
            turn(ctrl, msg, 'right',95)
            move_forward(ctrl, msg, 100,4.0)
            lie_down(ctrl,msg,5)
            stand_up(ctrl,msg)
            move_forward(ctrl, msg, -100,4)
            turn(ctrl, msg, 'left',90)
            print("开始调整角度")
            rclpy.init()
            adjust_body_angle()
            stand_up(ctrl,msg)
            turn(ctrl, msg, 'left',90)
        elif qr_code_content == "B-1":
            # B_1路径
            move_rl(ctrl, msg, 20)
            print("B_1路径")
            move_forward(ctrl, msg, 50, 2.0)
            turn(ctrl, msg, 'left')
            move_forward(ctrl, msg, 200, 8.0)
            turn(ctrl, msg, 'right')
            move_forward(ctrl, msg, 100, 4.0)
            lie_down(ctrl, msg, 5)
            stand_up(ctrl, msg)
            # 倒退100cm
            print("开始倒退")
            move_forward(ctrl, msg, -90, 4)
            # 左转180度
            print("开始左转")
            turn(ctrl, msg, 'left', 180)
            # 前进200cm
        stand_up(ctrl,msg)
        print("开始直行")
        move_forward(ctrl, msg, 210, 8.0)
        # # 趴着前进100cm
        print("开始趴着前进")
        crawl_low(ctrl, msg, 40, 5.0)
        stand_up(ctrl,msg)
        move_rl(ctrl, msg,15, 1,'left')
        print("开始石板路")
        move_stone(ctrl, msg, 570, 20)
        stand_up(ctrl,msg)
        # 趴下
        rclpy.init()
        print("开始调整角度")
        adjust_body_angle()
        turn(ctrl, msg, 'left', 90)
        move_forward(ctrl, msg, 120, 2.5)
        turn(ctrl, msg, 'right', 130)
        lie_down(ctrl, msg)
        
    except KeyboardInterrupt:
        pass
    ctrl.quit()
    sys.exit()

if __name__ == '__main__':
    main()