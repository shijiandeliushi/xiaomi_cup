#!/usr/bin/env python3
import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from std_msgs.msg import String


class BallDetectorPyNode(Node):
    def __init__(self):
        super().__init__('ball_detector_py_node')

        self.declare_parameter('image_topic', '/rgb/image_raw')
        self.declare_parameter('debug_image_topic', '/ball/debug_image')
        self.declare_parameter('result_topic', '/ball/result')

        self.image_topic = self.get_parameter('image_topic').get_parameter_value().string_value
        self.debug_image_topic = self.get_parameter('debug_image_topic').get_parameter_value().string_value
        self.result_topic = self.get_parameter('result_topic').get_parameter_value().string_value

        self.bridge = CvBridge()
        self.last_result = ''

        self.subscription = self.create_subscription(
            Image,
            self.image_topic,
            self.image_callback,
            qos_profile_sensor_data,
        )
        self.result_pub = self.create_publisher(String, self.result_topic, 10)
        self.debug_pub = self.create_publisher(Image, self.debug_image_topic, 10)

        self.get_logger().info(f'Ball detector started. image_topic={self.image_topic}')

    @staticmethod
    def detect_color_balls(frame, hsv_low, hsv_high, draw_color, label):
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, np.array(hsv_low, dtype=np.uint8), np.array(hsv_high, dtype=np.uint8))

        kernel = np.ones((5, 5), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)

        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        detections = []
        for cnt in contours:
            area = cv2.contourArea(cnt)
            if area < 120:
                continue

            perimeter = cv2.arcLength(cnt, True)
            if perimeter <= 1e-6:
                continue

            circularity = 4.0 * np.pi * area / (perimeter * perimeter)
            if circularity < 0.60:
                continue

            (x, y), radius = cv2.minEnclosingCircle(cnt)
            if radius < 6:
                continue

            center = (int(x), int(y))
            radius_i = int(radius)
            cv2.circle(frame, center, radius_i, draw_color, 2)
            cv2.putText(
                frame,
                label,
                (center[0] - 25, center[1] - radius_i - 8),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6,
                draw_color,
                2,
            )
            detections.append((label, center[0], center[1], radius_i))

        return detections

    def image_callback(self, msg: Image):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        except Exception as exc:
            self.get_logger().error(f'cv_bridge convert failed: {exc}')
            return

        blue = self.detect_color_balls(
            frame,
            hsv_low=(95, 80, 60),
            hsv_high=(135, 255, 255),
            draw_color=(255, 0, 0),
            label='blue_ball',
        )

        orange = self.detect_color_balls(
            frame,
            hsv_low=(5, 120, 80),
            hsv_high=(25, 255, 255),
            draw_color=(0, 140, 255),
            label='orange_ball',
        )

        detections = blue + orange

        result_text = ';'.join([
            f'{name}@({x},{y}),r={r}' for name, x, y, r in detections
        ])

        out = String()
        out.data = result_text
        self.result_pub.publish(out)

        if result_text and result_text != self.last_result:
            self.get_logger().info(f'Ball detected: {result_text}')
            self.last_result = result_text

        try:
            debug_msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            debug_msg.header = msg.header
            self.debug_pub.publish(debug_msg)
        except Exception as exc:
            self.get_logger().error(f'publish debug image failed: {exc}')


def main(args=None):
    rclpy.init(args=args)
    node = BallDetectorPyNode()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
