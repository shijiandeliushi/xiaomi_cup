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

cleanup() {
  kill "$RELAY_PID" >/dev/null 2>&1 || true
}
trap cleanup EXIT INT TERM

# rqt_image_view 窗口可缩放，便于放大查看
export QT_X11_NO_MITSHM=1
exec ros2 run rqt_image_view rqt_image_view "$RELAY_TOPIC"
