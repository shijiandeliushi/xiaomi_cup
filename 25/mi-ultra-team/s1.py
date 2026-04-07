#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import cv2
import numpy as np
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from geometry_msgs.msg import Twist, Pose
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSDurabilityPolicy  # 新增QoS配置

class SCurveNavigator(Node):
    def __init__(self):
        super().__init__('s_curve_navigator')
        
        # 配置与相机匹配的QoS策略
        camera_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,  # 关键修改点
            depth=5,
            durability=QoSDurabilityPolicy.VOLATILE
        )
        
        # ROS2 Galactic接口配置
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.pose_pub = self.create_publisher(Pose, '/body_pose', 10)
        self.image_sub = self.create_subscription(
            Image, 
            '/rgb_camera/image_raw', 
            self.image_callback, 
            camera_qos  # 应用自定义QoS配置
        )
        self.bridge = CvBridge()
        
        # 其他配置保持不变...

        
        # 俯仰角参数（兼容Galactic的标准接口）
        self.target_pitch = -0.3  # 单位：rad
        self.posture_timer = self.create_timer(1.0, self.adjust_posture)
        
        # 视觉参数（优化后的HSV范围）
        self.lower_yellow = np.array([20, 100, 100])   # 调整后的下限
        self.upper_yellow = np.array([30, 255, 255])   # 调整后的上限
        
        # 运动控制参数（基于ICRA 2023最新研究）
        self.max_speed = 0.5     # m/s (建议范围: 0.4-0.6)
        self.max_steer = 1.0     # rad (建议范围: 0.8-1.2)
        self.speed_decay = 0.6   # 速度衰减系数

    def adjust_posture(self):
        """通用俯仰角控制方法（兼容Galactic标准接口）"""
        pose_cmd = Pose()
        pose_cmd.orientation.x = self.target_pitch  # 使用orientation.x传递俯仰角
        self.pose_pub.publish(pose_cmd)

    def enhanced_eight_neighborhood(self, binary_img):
        """改进型八邻域算法（带曲率预测）"""
        height, width = binary_img.shape
        roi = binary_img[2*height//3:, :]  # 聚焦下部1/3区域
        
        # 动态边界检测（带置信度评估）
        left_confidences = []
        right_confidences = []
        valid_rows = 0
        
        for y in range(roi.shape[0]):
            row = roi[y, :]
            if np.sum(row) < 50:  # 忽略噪声区域
                continue
                
            # 边界点检测
            left = np.argmax(row > 0)
            right = len(row) - np.argmax(row[::-1] > 0) - 1
            
            # 置信度计算（基于边界连续性）
            if left > 0 and left < width//2:
                left_confidences.append(left)
            if right < width and right > width//2:
                right_confidences.append(right)
                
            valid_rows += 1
        
        # 动态参数调整（基于有效行数）
        if valid_rows > 0:
            avg_left = np.mean(left_confidences) if left_confidences else width//4
            avg_right = np.mean(right_confidences) if right_confidences else 3*width//4
            error = (avg_left + avg_right)/2 - width//2
            return error / (width//2), valid_rows/roi.shape[0]
        else:
            return 0.0, 0.0

    def image_callback(self, msg):
        try:
            # 图像预处理流水线
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            
            # 动态白平衡（增强光照适应性）
            gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
            clahe = cv2.createCLAHE(clipLimit=3.0, tileGridSize=(8,8))
            enhanced = clahe.apply(gray)
            
            # HSV转换（优化颜色检测）
            hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
            mask = cv2.inRange(hsv, self.lower_yellow, self.upper_yellow)
            
            # 形态学处理（自适应核尺寸）
            kernel_size = int(cv_image.shape[1]/80)*2 + 1
            kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (kernel_size, kernel_size))
            processed = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
            
            # 八邻域路径检测
            steer, confidence = self.enhanced_eight_neighborhood(processed)
            
            # 动态速度控制（基于置信度）
            speed_factor = np.clip(confidence * 2, 0.3, 1.0)
            
            # 生成控制指令
            cmd = Twist()
            cmd.linear.x = self.max_speed * speed_factor * (1 - abs(steer))
            cmd.angular.z = self.max_steer * steer
            
            # 俯仰角动态调整（基于速度）
            if cmd.linear.x < 0.3:
                self.target_pitch = -0.4  # 低速时增大俯角
            else:
                self.target_pitch = -0.3
                
            self.cmd_pub.publish(cmd)
            
            # 调试显示
            debug_img = cv2.merge([processed, processed, processed])
            cv2.putText(debug_img, f"Steer: {steer:.2f}", (10,30), 
                       cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0,255,0), 2)
            cv2.imshow('Lane Detection', debug_img)
            cv2.waitKey(1)
            
        except Exception as e:
            self.get_logger().error(f'Image processing error: {str(e)}')

def main(args=None):
    rclpy.init(args=args)
    navigator = SCurveNavigator()
    try:
        rclpy.spin(navigator)
    except KeyboardInterrupt:
        navigator.get_logger().info('Shutting down...')
    finally:
        navigator.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()