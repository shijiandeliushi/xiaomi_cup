#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# 1) 先发 mode=7 安全停机（LCM）
PYTHONPATH="$SCRIPT_DIR:${PYTHONPATH:-}" python3 - <<'PY'
import time
import lcm
from robot_control_cmd_lcmt import robot_control_cmd_lcmt

lc = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")
msg = robot_control_cmd_lcmt()
msg.mode = 7
msg.gait_id = 0
msg.duration = 0

for _ in range(12):
    msg.life_count = (msg.life_count + 1) % 256
    lc.publish("robot_control_cmd", msg.encode())
    time.sleep(0.05)

print("[OK] 已发送 mode=7 安全停机指令")
PY

# 2) 加载环境 + 3) reset_world
# ROS setup 里可能读取未定义变量，临时关闭 nounset
set +u
source /opt/ros/galactic/setup.bash
source /home/cyberdog_sim/install/setup.bash
set -u

ros2 service call /reset_world std_srvs/srv/Empty "{}"
