#!/usr/bin/env python3
import cv2
import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from std_msgs.msg import String


class QrDetectorPyNode(Node):
    def __init__(self):
        super().__init__('qr_detector_py_node')

        self.declare_parameter('image_topic', '/rgb/image_raw')
        self.declare_parameter('result_topic', '/qr/result')
        self.declare_parameter('scan_result_topic', '/qr/scan_result')
        self.declare_parameter('debug_image_topic', '/qr/debug_image')

        self.image_topic = self.get_parameter('image_topic').get_parameter_value().string_value
        self.result_topic = self.get_parameter('result_topic').get_parameter_value().string_value
        self.scan_result_topic = self.get_parameter('scan_result_topic').get_parameter_value().string_value
        self.debug_image_topic = self.get_parameter('debug_image_topic').get_parameter_value().string_value

        self.bridge = CvBridge()
        self.detector = cv2.QRCodeDetector()
        self.last_result = ''
        self.scanned_set = set()

        self.sub = self.create_subscription(Image, self.image_topic, self.image_callback, qos_profile_sensor_data)
        self.result_pub = self.create_publisher(String, self.result_topic, 10)
        self.scan_pub = self.create_publisher(String, self.scan_result_topic, 10)
        self.debug_pub = self.create_publisher(Image, self.debug_image_topic, 10)

        self.get_logger().info(f'QR detector started. image_topic={self.image_topic}')

    @staticmethod
    def _draw_qr(frame, points, text):
        if points is None:
            return
        pts = points.astype(int).reshape(-1, 2)
        for i in range(len(pts)):
            p1 = tuple(pts[i])
            p2 = tuple(pts[(i + 1) % len(pts)])
            cv2.line(frame, p1, p2, (0, 255, 0), 2)
        cv2.putText(frame, text, (pts[0][0], max(20, pts[0][1] - 10)), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)

    def image_callback(self, msg: Image):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        except Exception as exc:
            self.get_logger().error(f'cv_bridge convert failed: {exc}')
            return

        detections = []

        if hasattr(self.detector, 'detectAndDecodeMulti'):
            multi_ret = self.detector.detectAndDecodeMulti(frame)
            if len(multi_ret) >= 3:
                ok, decoded_info, points = multi_ret[0], multi_ret[1], multi_ret[2]
                if ok and points is not None and decoded_info is not None:
                    for text, pts in zip(decoded_info, points):
                        if not text:
                            continue
                        self._draw_qr(frame, pts, text)
                        detections.append(text)

        if not detections:
            text, pts, _ = self.detector.detectAndDecode(frame)
            if text:
                self._draw_qr(frame, pts, text)
                detections.append(text)

        result_text = ';'.join(detections)

        result_msg = String()
        result_msg.data = result_text
        self.result_pub.publish(result_msg)

        if result_text and result_text != self.last_result:
            self.get_logger().info(f'QR detected: {result_text}')
            self.last_result = result_text

        for code in detections:
            if code not in self.scanned_set:
                self.scanned_set.add(code)
                scan_msg = String()
                scan_msg.data = code
                self.scan_pub.publish(scan_msg)
                self.get_logger().info(f'QR scanned: {code}')

        try:
            debug_msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            debug_msg.header = msg.header
            self.debug_pub.publish(debug_msg)
        except Exception as exc:
            self.get_logger().error(f'publish debug image failed: {exc}')


def main(args=None):
    rclpy.init(args=args)
    node = QrDetectorPyNode()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
