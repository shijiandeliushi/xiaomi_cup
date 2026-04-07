'''
机器狗运动控制与二维码识别脚本
功能：
1. 直走50cm
2. 右转
3. 使用AI摄像头扫描二维码
4. 根据二维码内容执行不同路径：
   - A_2: 右转→前进100cm→右转→前进100cm→趴下
   - A_1: 左转→前进100cm→左转→前进100cm→趴下
'''

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
# 全局变量存储二维码内容
qr_code_content = None

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

def turn(ctrl, msg, direction, turn_angle=90.0):
    """
    精确转向函数（带自动停止）
    :param ctrl: 机器人控制对象
    :param msg: 控制消息
    :param direction: 转向方向 'left'或'right'
    :param turn_angle: 转向角度(度)，默认为90度
    """
    angle_rad = math.radians(turn_angle)
    duration_sec = 2.5  * (turn_angle / 90.0)# 总转向时间
    
    msg.mode = 11  # Locomotion模式
    msg.gait_id = 3  # TROT_MEDIUM步态
    turn_speed = angle_rad / duration_sec
    turn_speed = -turn_speed if direction == 'right' else turn_speed
    if direction == 'right':
        duration_sec *= 1.05
    if direction == 'left':
        duration_sec *= 1.05
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

def scan_qr_code(timeout=10):
    """扫描二维码，带超时"""
    global qr_code_content
    qr_code_content = None
    
    rclpy.init()
    qr_node = QRCodeDetector()
    
    start_time = time.time()
    while time.time() - start_time < timeout and qr_code_content is None:
        rclpy.spin_once(qr_node, timeout_sec=0.1)
    
    qr_node.destroy_node()
    rclpy.shutdown()
    return qr_code_content

def stand_up(ctrl,msg):
    """站立"""
    msg.mode = 12 # Recovery stand
    msg.gait_id = 0
    msg.life_count += 1 # Command will take effect when life_count update
    ctrl.Send_cmd(msg)
    ctrl.Wait_finish(12, 0)

def stop(ctrl,msg):
    """停止"""
    msg.vel_des = [0.0, 0, 0]  # 停止旋转
    msg.duration = 0
    msg.life_count += 1
    ctrl.Send_cmd(msg)
def main():
    ctrl = Robot_Ctrl()
    ctrl.run()
    msg = robot_control_cmd_lcmt()
    try:
        stand_up(ctrl,msg)
        # 1. 直走50cm
        print("开始行走")
        move_forward(ctrl, msg,90, 2)  # 假设2秒走完50cm
        
        # 2. 右转
        print("开始右转")
        turn(ctrl, msg,'right')
        move_forward(ctrl, msg,40, 2)
        print("进入扫描姿态...")
        msg.mode = 11
        msg.gait_id = 1  # 切换为更稳定的步态
        msg.vel_des = [0, 0, 0]
        msg.pos_des = [0, 0, 0.22]  # 降低重心
        ctrl.Send_cmd(msg)
        time.sleep(1)  # 等待稳定
        # 3. 扫描二维码
        print("开始检测")
        qr_content = scan_qr_code()
        if not qr_content:
            print("未检测到二维码，终止程序")
            lie_down(ctrl,msg)
            return
        
        print(f"检测到二维码内容: {qr_content}")
        
        # 4. 前进100cm
        move_forward(ctrl, msg,110, 3)  # 假设4秒走完100cm
        
        # 根据二维码内容执行不同路径
        if qr_content == "A-2":
            print("A-2")
            # A_2路径: 右转→前进100cm→右转→前进100cm→趴下
            turn(ctrl, msg,'right')
            move_forward(ctrl, msg,110, 3)
            turn(ctrl, msg,'right')
            move_forward(ctrl, msg,90, 2)
            lie_down(ctrl,msg)
            stand_up(ctrl,msg)
            turn(ctrl, msg,'right')
            stand_up(ctrl,msg)
            turn(ctrl, msg,'right')
            stand_up(ctrl,msg)
            move_forward(ctrl, msg,90, 2)
            stand_up(ctrl,msg)
            turn(ctrl, msg,'left')
            stand_up(ctrl,msg)
            move_forward(ctrl, msg,110, 3)
            stand_up(ctrl,msg)
            turn(ctrl, msg,'left')
            stand_up(ctrl,msg)
        elif qr_content == "A-1":
            print("A-1")
            # A_1路径: 左转→前进100cm→左转→前进100cm→趴下
            turn(ctrl, msg,'left')
            move_forward(ctrl, msg,120, 4.0)
            turn(ctrl, msg,'left')
            move_forward(ctrl, msg,90, 4.0)
            lie_down(ctrl,msg,5)
            stand_up(ctrl,msg)
            turn(ctrl, msg,'right')
            turn(ctrl, msg,'right')
            move_forward(ctrl, msg,80, 4.0)
            turn(ctrl, msg,'right')
            move_forward(ctrl, msg,120, 4.0)
            turn(ctrl, msg,'right')
        
        move_forward(ctrl, msg,210, 4.0)  # 假设4秒走完100cm
        # 最终趴下
        stand_up(ctrl,msg)
        turn(ctrl, msg,'right')
        stand_up(ctrl,msg)
        move_forward(ctrl, msg,90, 3)  # 假设4秒走完100cm
        
    except KeyboardInterrupt:
        pass
    ctrl.quit()
    sys.exit()

if __name__ == '__main__':
    main()
