#!/bin/bash
source /opt/ros/galactic/setup.bash
source /home/cyberdog_sim/install/setup.bash

# 自动探测可用图像话题（最多等待 60 秒）
TOPIC=""
for i in {1..60}; do
  for t in /rgb/image_raw /rgb_camera_sensor/image_raw /image_raw; do
    if ros2 topic list | grep -q "^${t}$"; then
      TOPIC="$t"
      break
    fi
  done
  [ -n "$TOPIC" ] && break
  sleep 1
done

if [ -z "$TOPIC" ]; then
  echo "[camera] 未发现图像话题，当前话题列表："
  ros2 topic list
  exec bash
fi

RELAY_TOPIC="${TOPIC}_reliable"
echo "[camera] 原始话题: $TOPIC"
echo "[camera] 中继话题: $RELAY_TOPIC"

# 启动 QoS 中继：订阅端 best_effort，发布端 reliable，供 rqt_image_view 正常显示
python3 - <<PY &
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from sensor_msgs.msg import Image

SRC = '${TOPIC}'
DST = '${RELAY_TOPIC}'

class Relay(Node):
    def __init__(self):
        super().__init__('rgb_image_qos_relay')
        sub_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
            durability=DurabilityPolicy.VOLATILE,
        )
        pub_qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
            durability=DurabilityPolicy.VOLATILE,
        )
        self.pub = self.create_publisher(Image, DST, pub_qos)
        self.sub = self.create_subscription(Image, SRC, self.cb, sub_qos)

    def cb(self, msg):
        self.pub.publish(msg)

rclpy.init()
node = Relay()
rclpy.spin(node)
node.destroy_node()
rclpy.shutdown()
PY
RELAY_PID=$!

# 启动蓝/橙小球识别节点
ros2 run cyberdog_color_detector_py ball_detector_py_node --ros-args -p image_topic:=${TOPIC} -p debug_image_topic:=/ball/debug_image -p result_topic:=/ball/result &
BALL_PID=$!

echo "[camera] 小球识别已启动："
echo "[camera] 结果话题: /ball/result"
echo "[camera] 调试图像: /ball/debug_image"

cleanup() {
  kill "$BALL_PID" >/dev/null 2>&1 || true
  kill "$RELAY_PID" >/dev/null 2>&1 || true
}
trap cleanup EXIT INT TERM

# 有图形界面时同时显示两个窗口：原始RGB + 检测标注
if [ -n "$DISPLAY" ]; then
  python3 - <<PY
import rclpy
import cv2
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image

RAW_TOPIC = '${RELAY_TOPIC}'
DEBUG_TOPIC = '/ball/debug_image'

class DualViewer(Node):
    def __init__(self):
        super().__init__('rgb_ball_dual_viewer')
        self.bridge = CvBridge()
        self.create_subscription(Image, RAW_TOPIC, self.raw_cb, 10)
        self.create_subscription(Image, DEBUG_TOPIC, self.debug_cb, 10)

    def raw_cb(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            cv2.imshow('CyberDog RGB Camera (Raw)', frame)
            cv2.waitKey(1)
        except Exception:
            pass

    def debug_cb(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            cv2.imshow('CyberDog Ball Detection (Blue/Orange)', frame)
            cv2.waitKey(1)
        except Exception:
            pass

rclpy.init()
node = DualViewer()
try:
    rclpy.spin(node)
finally:
    node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()
PY
else
  echo "[camera] 检测到无图形环境，仅运行小球识别。"
  wait "$BALL_PID"
fi
