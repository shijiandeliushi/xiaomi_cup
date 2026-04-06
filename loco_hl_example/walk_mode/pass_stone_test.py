import os
import sys
import time
import toml
import lcm
from threading import Thread, Lock


def _import_lcm_types():
    current_dir = os.path.dirname(os.path.abspath(__file__))
    msg_dir = os.path.join(os.path.dirname(current_dir), "stone_plate_crossing")
    if msg_dir not in sys.path:
        sys.path.append(msg_dir)

    from robot_control_cmd_lcmt import robot_control_cmd_lcmt
    from robot_control_response_lcmt import robot_control_response_lcmt
    return robot_control_cmd_lcmt, robot_control_response_lcmt


robot_control_cmd_lcmt, robot_control_response_lcmt = _import_lcm_types()


class RobotCtrl:
    def __init__(self):
        self.rec_thread = Thread(target=self.rec_response)
        self.send_thread = Thread(target=self.send_publish)

        self.lc_r = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")

        self.cmd_msg = robot_control_cmd_lcmt()
        self.rec_msg = robot_control_response_lcmt()

        self.send_lock = Lock()
        self.delay_cnt = 0
        self.mode_ok = 0
        self.gait_ok = 0
        self.running = 1

    def run(self):
        self.lc_r.subscribe("robot_control_response", self.msg_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg_handler(self, channel, data):
        self.rec_msg = robot_control_response_lcmt.decode(data)
        if self.rec_msg.order_process_bar >= 95:
            self.mode_ok = self.rec_msg.mode
            self.gait_ok = self.rec_msg.gait_id
        else:
            self.mode_ok = 0
            self.gait_ok = 0

    def rec_response(self):
        while self.running:
            self.lc_r.handle_timeout(20)
            time.sleep(0.002)

    def wait_finish(self, mode, gait_id, timeout_s=10.0):
        count = int(timeout_s / 0.005)
        while self.running and count > 0:
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
            count -= 1
            time.sleep(0.005)
        return False

    def send_publish(self):
        while self.running:
            with self.send_lock:
                if self.delay_cnt > 20:
                    self.lc_s.publish("robot_control_cmd", self.cmd_msg.encode())
                    self.delay_cnt = 0
                self.delay_cnt += 1
            time.sleep(0.005)

    def send_cmd(self, msg):
        with self.send_lock:
            self.delay_cnt = 50
            self.cmd_msg = msg

    def quit(self):
        self.running = 0
        self.rec_thread.join()
        self.send_thread.join()


def load_pass_stone_cfg(gait_path):
    data = toml.load(gait_path)
    if "step" not in data or len(data["step"]) == 0:
        raise ValueError("pass-stone 文件缺少 step 配置")

    cfg = data["step"][0]
    step_height = cfg.get("step_height", [0.0, 0.0])
    if len(step_height) < 2 or step_height[0] <= 0.05 or step_height[1] <= 0.05:
        raise ValueError("pass-stone 要求 step_height 两个值都大于 0.05")

    vel_des = cfg.get("vel_des", [0.0, 0.0, 0.0])
    if vel_des[0] <= 0 or vel_des[1] != 0 or vel_des[2] != 0:
        raise ValueError("pass-stone 要求仅保持正向前进（vel_des=[vx>0,0,0]）")

    return cfg


def load_turn_corner_steps(gait_path):
    data = toml.load(gait_path)
    if "step" not in data or len(data["step"]) == 0:
        raise ValueError("turn-corner-fast 文件缺少 step 配置")

    steps = data["step"]
    has_turn = False
    for s in steps:
        vel_des = s.get("vel_des", [0.0, 0.0, 0.0])
        if len(vel_des) >= 3 and abs(float(vel_des[2])) > 0.2:
            has_turn = True
            break
    if not has_turn:
        raise ValueError("turn-corner-fast 未检测到有效转弯角速度（vel_des[2]）")

    return steps


def load_height_bar_steps(gait_path):
    data = toml.load(gait_path)
    if "step" not in data or len(data["step"]) == 0:
        raise ValueError("pass-height-bar-fast 文件缺少 step 配置")

    steps = data["step"]
    has_low_body = any(
        int(s.get("mode", 0)) == 21 and len(s.get("pos_des", [0.0, 0.0, 0.0])) >= 3 and float(s.get("pos_des", [0.0, 0.0, 0.0])[2]) <= 0.22
        for s in steps
    )
    if not has_low_body:
        raise ValueError("pass-height-bar-fast 未检测到有效低姿态段（mode=21 且 pos_des[2] <= 0.22）")

    return steps


def load_jump_steps(gait_path, gait_name):
    data = toml.load(gait_path)
    if "step" not in data or len(data["step"]) == 0:
        raise ValueError(f"{gait_name} 文件缺少 step 配置")

    steps = data["step"]
    has_jump_like_step = any(
        len(s.get("step_height", [0.0, 0.0])) >= 2
        and max(float(s.get("step_height", [0.0, 0.0])[0]), float(s.get("step_height", [0.0, 0.0])[1])) >= 0.10
        for s in steps
    )
    if not has_jump_like_step:
        raise ValueError(f"{gait_name} 未检测到跳跃段（step_height >= 0.10）")

    return steps


def apply_cfg_to_msg(msg, cfg):
    msg.mode = int(cfg.get("mode", 11))
    msg.gait_id = int(cfg.get("gait_id", 27))
    msg.contact = int(cfg.get("contact", 15))
    msg.value = int(cfg.get("value", 0))
    msg.duration = int(cfg.get("duration", 0))

    vel_des = cfg.get("vel_des", [0.0, 0.0, 0.0])
    rpy_des = cfg.get("rpy_des", [0.0, 0.0, 0.0])
    pos_des = cfg.get("pos_des", [0.0, 0.0, 0.0])
    ctrl_point = cfg.get("ctrl_point", [0.0, 0.0, 0.0])
    for i in range(3):
        msg.vel_des[i] = float(vel_des[i])
        msg.rpy_des[i] = float(rpy_des[i])
        msg.pos_des[i] = float(pos_des[i])
        msg.ctrl_point[i] = float(ctrl_point[i])

    acc_des = cfg.get("acc_des", [0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    foot_pose = cfg.get("foot_pose", [0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    for i in range(6):
        msg.acc_des[i] = float(acc_des[i])
        msg.foot_pose[i] = float(foot_pose[i])

    step_height = cfg.get("step_height", [0.06, 0.06])
    msg.step_height[0] = float(step_height[0])
    msg.step_height[1] = float(step_height[1])


def send_cfg(ctrl, msg, cfg):
    apply_cfg_to_msg(msg, cfg)
    msg.life_count += 1
    ctrl.send_cmd(msg)


def run_gait_sequence(ctrl, msg, steps, name):
    print(f"开始执行{name}，共 {len(steps)} 段")
    for idx, cfg in enumerate(steps, 1):
        send_cfg(ctrl, msg, cfg)
        vel = cfg.get("vel_des", [0.0, 0.0, 0.0])
        dur_ms = int(cfg.get("duration", 0))
        print(f"  step {idx}/{len(steps)}: vel={vel}, duration={dur_ms}ms")
        if dur_ms > 0:
            time.sleep(dur_ms / 1000.0)
        else:
            time.sleep(0.2)


def main():
    base_dir = os.path.dirname(os.path.abspath(__file__))
    pass_stone_file = os.path.join(base_dir, "pass-stone.toml")
    turn_corner_file = os.path.join(base_dir, "turn-corner-fast.toml")
    height_bar_file = os.path.join(base_dir, "pass-height-bar-fast.toml")
    jump_down_file = os.path.join(base_dir, "jump-high-to-low.toml")
    jump_up_file = os.path.join(base_dir, "jump-low-to-high.toml")

    pass_stone_cfg = load_pass_stone_cfg(pass_stone_file)
    turn_corner_steps = load_turn_corner_steps(turn_corner_file)
    height_bar_steps = load_height_bar_steps(height_bar_file)
    jump_down_steps = load_jump_steps(jump_down_file, "jump-high-to-low")
    jump_up_steps = load_jump_steps(jump_up_file, "jump-low-to-high")

    ctrl = RobotCtrl()
    ctrl.run()

    move_msg = robot_control_cmd_lcmt()

    standby_msg = robot_control_cmd_lcmt()
    standby_msg.mode = 12
    standby_msg.gait_id = 0
    standby_msg.vel_des = [0.0, 0.0, 0.0]
    standby_msg.duration = 0

    moving = False

    print("\n步态测试控制台")
    print("命令: start | turn | bar | jump_down | jump_up | stop | speed <vx> | status | quit\n")

    try:
        while True:
            cmd = input("[walk-mode] > ").strip()
            if cmd == "":
                continue

            if cmd == "start":
                standby_msg.life_count += 1
                ctrl.send_cmd(standby_msg)
                ctrl.wait_finish(12, 0, timeout_s=6.0)

                send_cfg(ctrl, move_msg, pass_stone_cfg)
                moving = True
                print(
                    f"开始直行: gait_id={move_msg.gait_id}, "
                    f"vel={list(move_msg.vel_des)}, step_height={list(move_msg.step_height)}"
                )

            elif cmd == "turn":
                run_gait_sequence(ctrl, move_msg, turn_corner_steps, "转弯步态")
                moving = False
                print("转弯步态执行完成")

            elif cmd == "bar":
                run_gait_sequence(ctrl, move_msg, height_bar_steps, "限高杆步态")
                moving = False
                print("限高杆步态执行完成")

            elif cmd == "jump_down":
                run_gait_sequence(ctrl, move_msg, jump_down_steps, "高处到低处跳跃步态")
                moving = False
                print("jump_down 执行完成")

            elif cmd == "jump_up":
                run_gait_sequence(ctrl, move_msg, jump_up_steps, "低处到高处跳跃步态")
                moving = False
                print("jump_up 执行完成")

            elif cmd == "stop":
                standby_msg.life_count += 1
                ctrl.send_cmd(standby_msg)
                ctrl.wait_finish(12, 0, timeout_s=6.0)
                moving = False
                print("已停止，回到站立模式")

            elif cmd.startswith("speed "):
                parts = cmd.split()
                if len(parts) != 2:
                    print("用法: speed <vx>")
                    continue
                try:
                    vx = float(parts[1])
                except ValueError:
                    print("速度必须是数字")
                    continue
                if vx <= 0:
                    print("vx 必须 > 0")
                    continue

                pass_stone_cfg["vel_des"][0] = vx
                pass_stone_cfg["vel_des"][1] = 0.0
                pass_stone_cfg["vel_des"][2] = 0.0
                if moving:
                    send_cfg(ctrl, move_msg, pass_stone_cfg)
                print(f"直行速度已更新为 {vx:.3f} m/s")

            elif cmd == "status":
                print(
                    f"moving={moving}, mode_ok={ctrl.mode_ok}, gait_ok={ctrl.gait_ok}, "
                    f"vel={list(move_msg.vel_des)}"
                )

            elif cmd in ("quit", "exit"):
                break

            else:
                print("未知命令，支持: start | turn | bar | jump_down | jump_up | stop | speed <vx> | status | quit")

    except KeyboardInterrupt:
        pass
    finally:
        standby_msg.life_count += 1
        ctrl.send_cmd(standby_msg)
        ctrl.wait_finish(12, 0, timeout_s=5.0)
        ctrl.quit()


if __name__ == "__main__":
    main()
