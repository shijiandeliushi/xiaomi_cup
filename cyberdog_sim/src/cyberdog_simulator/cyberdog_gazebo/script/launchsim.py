#!/usr/bin/env python3

# Copyright (c) 2023-2023 Beijing Xiaomi Mobile Software Co., Ltd. All rights reserved.

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os
import shutil
import subprocess
import time


PROJECT_ROOT = "/home/cyberdog_sim"
SCRIPTS = [
    ("cyberdog_gazebo", "src/cyberdog_simulator/cyberdog_gazebo/script/launchgazebo.sh"),
    ("cyberdog_visual", "src/cyberdog_simulator/cyberdog_gazebo/script/launchvisual.sh"),
    ("cyberdog_control", "src/cyberdog_simulator/cyberdog_gazebo/script/launchcontrol.sh"),
    ("cyberdog_camera", "src/cyberdog_simulator/cyberdog_gazebo/script/launchcamera.sh"),
]


def run_in_new_terminal(title: str, script_rel_path: str) -> bool:
    """优先尝试在 gnome-terminal 中启动；失败则返回 False。"""
    if not os.environ.get("DISPLAY"):
        return False
    if shutil.which("gnome-terminal") is None:
        return False

    cmd = [
        "gnome-terminal",
        f"--title={title}",
        "--",
        "bash",
        "-lc",
        f"cd {PROJECT_ROOT} && bash {script_rel_path}; exec bash",
    ]
    result = subprocess.run(cmd)
    return result.returncode == 0


def run_background(script_rel_path: str) -> None:
    """无图形终端环境下后台启动。"""
    subprocess.Popen(
        ["bash", "-lc", f"cd {PROJECT_ROOT} && bash {script_rel_path}"],
        stdout=subprocess.DEVNULL,
        stderr=subprocess.STDOUT,
    )


def launchsim():
    ok = run_in_new_terminal(*SCRIPTS[0])
    if not ok:
        run_background(SCRIPTS[0][1])

    time.sleep(5)

    for title, script in SCRIPTS[1:]:
        ok = run_in_new_terminal(title, script)
        if not ok:
            run_background(script)


if __name__ == "__main__":
    launchsim()
