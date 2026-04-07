#!/bin/bash
source /opt/ros/galactic/setup.bash
source /home/cyberdog_sim/install/setup.bash

# 自动探测可用图像话题（最多等待 60 秒），优先选择“有发布者”的话题
has_publisher() {
  ros2 topic info "$1" 2>/dev/null | grep -Eq 'Publisher count: [1-9]'
}

TOPIC=""
# 原始窗口与小球识别优先使用 RGB 相机，不使用 D435
for i in {1..60}; do
  for t in /rgb/image_raw /rgb_camera_sensor/image_raw /image_raw; do
    if ros2 topic list | grep -q "^${t}$" && has_publisher "$t"; then
      TOPIC="$t"
      break
    fi
  done
  [ -n "$TOPIC" ] && break
  sleep 1
done

# 若 RGB 暂不可用，再回退到其它图像话题
if [ -z "$TOPIC" ]; then
  for t in /rgb/image_raw /rgb_camera_sensor/image_raw /image_raw /d435/color/image_raw /d435_camera_sensor/image_raw; do
    if ros2 topic list | grep -q "^${t}$"; then
      TOPIC="$t"
      break
    fi
  done
fi

if [ -z "$TOPIC" ]; then
  echo "[camera] 未发现图像话题，当前话题列表："
  ros2 topic list
  exec bash
fi

# 单独探测 D435 彩色与深度话题，优先有发布者的话题
D435_COLOR_TOPIC=""
for t in /d435/color/image_raw /d435_camera_sensor/image_raw; do
  if ros2 topic list | grep -q "^${t}$" && has_publisher "$t"; then
    D435_COLOR_TOPIC="$t"
    break
  fi
done
if [ -z "$D435_COLOR_TOPIC" ]; then
  for t in /d435/color/image_raw /d435_camera_sensor/image_raw; do
    if ros2 topic list | grep -q "^${t}$"; then
      D435_COLOR_TOPIC="$t"
      break
    fi
  done
fi

D435_DEPTH_TOPIC=""
for t in /d435/depth/image_raw /d435_depth_sensor/depth/image_raw /d435_depth_sensor/image_raw; do
  if ros2 topic list | grep -q "^${t}$" && has_publisher "$t"; then
    D435_DEPTH_TOPIC="$t"
    break
  fi
done
if [ -z "$D435_DEPTH_TOPIC" ]; then
  for t in /d435/depth/image_raw /d435_depth_sensor/depth/image_raw /d435_depth_sensor/image_raw; do
    if ros2 topic list | grep -q "^${t}$"; then
      D435_DEPTH_TOPIC="$t"
      break
    fi
  done
fi

RELAY_TOPIC="${TOPIC}_reliable"
echo "[camera] 原始话题: $TOPIC"
echo "[camera] 中继话题: $RELAY_TOPIC"
echo "[camera] D435彩色话题: ${D435_COLOR_TOPIC:-<未发现>}"
echo "[camera] D435深度话题: ${D435_DEPTH_TOPIC:-<未发现>}"

# 2) 启动 QoS 中继：
#    - 订阅端用 BEST_EFFORT（兼容 Gazebo 相机）
#    - 发布端用 RELIABLE（便于后续节点稳定订阅）
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

# 3) 启动蓝/橙小球识别节点
ros2 run cyberdog_color_detector_py ball_detector_py_node --ros-args \
  -p image_topic:=${TOPIC} \
  -p debug_image_topic:=/ball/debug_image \
  -p result_topic:=/ball/result &
BALL_PID=$!

echo "[camera] 小球识别已启动："
echo "[camera] 结果话题: /ball/result"
echo "[camera] 调试图像: /ball/debug_image"

# 退出脚本时同时清理后台进程
cleanup() {
  kill "$BALL_PID" >/dev/null 2>&1 || true
  kill "$RELAY_PID" >/dev/null 2>&1 || true
}
trap cleanup EXIT INT TERM

# 有图形界面时同时显示三个窗口：原始图像 + D435图像 + 检测标注
if [ -n "$DISPLAY" ]; then
  python3 - <<PY
import rclpy
import cv2
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from cv_bridge import CvBridge
from sensor_msgs.msg import Image

RAW_TOPIC = '${RELAY_TOPIC}'
D435_COLOR_TOPIC = '${D435_COLOR_TOPIC}'
D435_DEPTH_TOPIC = '${D435_DEPTH_TOPIC}'
DEBUG_TOPIC = '/ball/debug_image'

class TripleViewer(Node):
    def __init__(self):
        super().__init__('rgb_ball_triple_viewer')
        self.bridge = CvBridge()
        cv2.namedWindow('CyberDog Camera (Selected Raw)', cv2.WINDOW_NORMAL)
        cv2.namedWindow('CyberDog D435 Camera', cv2.WINDOW_NORMAL)
        cv2.namedWindow('CyberDog Ball Detection (Blue/Orange)', cv2.WINDOW_NORMAL)
        self.raw_sub = self.create_subscription(Image, RAW_TOPIC, self.raw_cb, qos_profile_sensor_data)

        self.d435_sub = None
        if D435_COLOR_TOPIC:
            self.d435_sub = self.create_subscription(Image, D435_COLOR_TOPIC, self.d435_cb, qos_profile_sensor_data)
            self.get_logger().info(f'D435 viewer subscribe color: {D435_COLOR_TOPIC}')
        elif D435_DEPTH_TOPIC:
            self.d435_sub = self.create_subscription(Image, D435_DEPTH_TOPIC, self.d435_cb, qos_profile_sensor_data)
            self.get_logger().warn(f'D435 color topic not found, fallback to depth: {D435_DEPTH_TOPIC}')
        else:
            self.get_logger().warn('D435 topic not found, D435 window will stay empty.')

        self.debug_sub = self.create_subscription(Image, DEBUG_TOPIC, self.debug_cb, qos_profile_sensor_data)
        self.create_timer(0.03, self.gui_tick)

    def gui_tick(self):
        cv2.waitKey(1)

    #原始图像显示
    def raw_cb(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            cv2.imshow('CyberDog Camera (Selected Raw)', frame)
        except Exception:
            pass

    def d435_cb(self, msg):
        try:
            # 优先显示正常彩色画面；仅在回退到深度流时显示灰度图
            if msg.encoding in ('32FC1', '16UC1'):
                depth = self.bridge.imgmsg_to_cv2(msg, desired_encoding='passthrough')
                frame = cv2.normalize(depth, None, 0, 255, cv2.NORM_MINMAX).astype('uint8')
            else:
                frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            cv2.imshow('CyberDog D435 Camera', frame)
        except Exception:
            pass
    #原始图像显示
    def debug_cb(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            cv2.imshow('CyberDog Ball Detection (Blue/Orange)', frame)
        except Exception:
            pass

rclpy.init()
node = TripleViewer()
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
