#!/usr/bin/env python3
import os
import rclpy
import cv2
import numpy as np
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist, Pose
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSDurabilityPolicy

class SCurveNavigator(Node):
    def __init__(self):
        super().__init__('s_curve_navigator')
        
        # 配置QoS策略
        camera_qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            depth=5,
            durability=QoSDurabilityPolicy.VOLATILE
        )
        
        # 初始化ROS接口
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.image_sub = self.create_subscription(
            Image, '/rgb_camera/image_raw', 
            self.image_callback, camera_qos
        )
        self.bridge = CvBridge()
        
        # 视觉处理参数（针对Gazebo仿真优化）
        self.lower_yellow = np.array([20, 120, 80])    # HSV阈值调整
        self.upper_yellow = np.array([40, 255, 255])
        self.kernel_size = 5                           # 形态学核尺寸
        
        # 运动控制参数（基于S型赛道特性优化）
        self.base_speed = 0.8       # 基础速度 (m/s)
        self.max_steer = 1.5        # 最大转向角速度 (rad/s)
        self.steer_kp = 0.8         # 转向比例系数
        self.lookahead = 0.3         # 前瞻时间 (秒)
        
        # 状态跟踪
        self.last_error = 0.0
        self.debug_mode = True      # 调试模式开关

    def process_image(self, cv_image):
        """增强型图像处理流水线"""
        # 自适应白平衡
        hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
        
        # 动态阈值调整
        lower = self.lower_yellow.copy()
        upper = self.upper_yellow.copy()
        if np.mean(hsv[:,:,2]) < 100:  # 低光照补偿
            lower[2] = max(50, lower[2])
            upper[2] = min(255, upper[2]+50)
        
        mask = cv2.inRange(hsv, lower, upper)
        
        # 自适应形态学处理
        kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, 
                    (self.kernel_size, self.kernel_size))
        processed = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
        
        return processed

def calculate_steering(self, binary_img):
    """基于滑动窗口的曲线中线检测算法（改进版）"""
    height, width = binary_img.shape
    if height == 0 or width == 0:
        return 0.0
    
    # 使用轮廓分析找到最大赛道区域（参考：https://docs.opencv.org/4.x/d4/d73/tutorial_py_contours_begin.html）
    contours, _ = cv2.findContours(binary_img, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    if not contours:
        return 0.0
    
    # 取最大轮廓（基于面积）
    max_contour = max(contours, key=cv2.contourArea)
    
    # 计算轮廓的定向边界框（参考：https://docs.opencv.org/4.x/dd/d49/tutorial_py_contour_features.html）
    rect = cv2.minAreaRect(max_contour)
    box = cv2.boxPoints(rect)
    box = np.int0(box)
    
    # 计算中线（通过轮廓的几何中心）
    M = cv2.moments(max_contour)
    if M["m00"] == 0:
        return 0.0
    cX = int(M["m10"] / M["m00"])
    cY = int(M["m01"] / M["m00"])
    
    # 滑动窗口检测（参考：https://medium.com/@mrhwick/simple-lane-detection-with-opencv-bfeb6ae54ec0）
    n_windows = 9
    window_height = height // n_windows
    current_x = cX
    
    lane_centers = []
    
    for window in range(n_windows):
        y_low = height - (window + 1) * window_height
        y_high = height - window * window_height
        
        # 定义窗口边界
        x_left = max(0, current_x - window_height)
        x_right = min(width, current_x + window_height)
        
        # 提取窗口内的有效像素
        window_mask = np.zeros_like(binary_img)
        window_mask[y_low:y_high, x_left:x_right] = 1
        masked = cv2.bitwise_and(binary_img, binary_img, mask=window_mask)
        
        # 计算窗口中心
        nonzero = masked.nonzero()
        if len(nonzero[0]) > 50:  # 有效像素阈值
            current_x = np.mean(nonzero[1]).astype(int)
            lane_centers.append(current_x)
    
    if len(lane_centers) < 3:  # 至少需要3个点进行多项式拟合
        return 0.0
    
    # 多项式拟合曲线（参考：https://numpy.org/doc/stable/reference/generated/numpy.polyfit.html）
    y_points = np.linspace(height//2, height, len(lane_centers))
    coeffs = np.polyfit(y_points, lane_centers, deg=2)  # 二次多项式拟合
    
    # 计算当前图像底部（y=height）的预期中心点
    expected_x = np.polyval(coeffs, height)
    
    # 计算转向误差
    error = (expected_x - width/2) / (width/2)
    
    # 低通滤波
    filtered_error = 0.6 * error + 0.4 * self.last_error
    self.last_error = filtered_error
    
    return filtered_error

def create_debug_display(self, raw_img, processed, error):
    """增强的调试显示（显示滑动窗口和拟合曲线）"""
    # 创建三通道显示图像
    debug_img = cv2.cvtColor(processed, cv2.COLOR_GRAY2BGR)
    
    # 绘制滑动窗口结果
    height, width = raw_img.shape[:2]
    n_windows = 9
    window_height = height // n_windows
    
    # 绘制拟合曲线（参考：https://docs.opencv.org/4.x/dc/da5/tutorial_py_drawing_functions.html）
    y_points = np.linspace(height//2, height, 50)
    coeffs = np.polyfit(np.linspace(height//2, height, len(self.last_centers)), 
                       self.last_centers, 2)
    curve_points = np.polyval(coeffs, y_points).astype(int)
    
    # 绘制曲线
    for i in range(1, len(curve_points)):
        cv2.line(debug_img, 
                (curve_points[i-1], int(y_points[i-1])),
                (curve_points[i], int(y_points[i])),
                (0, 255, 0), 2)
    
    # 叠加原始图像
    overlay = cv2.addWeighted(raw_img, 0.3, debug_img, 0.7, 0)
    
    # 绘制目标中线
    target_x = int(width/2 + error * width/2)
    cv2.line(overlay, (target_x, height), (target_x, height//2), 
            (0, 0, 255), 3)
    
    # 添加调试信息
    cv2.putText(overlay, f"Curve Error: {error:.2f}", (10, 30),
               cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)
    cv2.putText(overlay, f"Fitted Coeffs: {coeffs[0]:.4f}x² + {coeffs[1]:.2f}x + {coeffs[2]:.0f}", 
               (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 1)
    
    return overlay


    def image_callback(self, msg):
        try:
            # 图像预处理
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            processed = self.process_image(cv_image)
            
            # 路径检测
            steering_error = self.calculate_steering(processed)
            
            # 生成控制指令
            cmd = Twist()
            cmd.linear.x = self.base_speed * (1 - abs(steering_error))
            cmd.angular.z = np.clip(steering_error * self.steer_kp, 
                                   -self.max_steer, self.max_steer)
            
            # 发布控制指令
            self.cmd_pub.publish(cmd)
            
            # 调试显示
            if self.debug_mode:
                debug_img = self.create_debug_display(cv_image, processed, steering_error)
                cv2.imshow('S-Curve Navigation', debug_img)
                cv2.waitKey(1)
                
        except Exception as e:
            self.get_logger().error(f'处理失败: {str(e)}')

    def create_debug_display(self, raw_img, processed, error):
        """创建调试可视化界面"""
        # 创建三通道显示图像
        debug_img = cv2.merge([processed, processed, processed])
        
        # 叠加原始图像
        overlay = cv2.addWeighted(raw_img, 0.3, debug_img, 0.7, 0)
        
        # 绘制引导线
        height, width = raw_img.shape[:2]
        center_x = int(width/2 - error * width/2)
        cv2.line(overlay, (center_x, height), (center_x, height//2), 
                (0, 255, 0), 3)
        
        # 添加状态信息
        cv2.putText(overlay, f"Steering: {error:.2f}", (10, 30),
                   cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)
        cv2.putText(overlay, f"Speed: {self.base_speed * (1 - abs(error)):.2f}m/s", 
                   (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)
        
        return overlay

def main(args=None):
    rclpy.init(args=args)
    navigator = SCurveNavigator()
    
    try:
        rclpy.spin(navigator)
    except KeyboardInterrupt:
        navigator.get_logger().info("导航终止")
    finally:
        if navigator.debug_mode:
            cv2.destroyAllWindows()
        navigator.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
