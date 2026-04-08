#!/usr/bin/env python3
import math
import sys
import time
from collections import deque
import lcm
from threading import Lock, Thread

from robot_control_cmd_lcmt import robot_control_cmd_lcmt
from robot_control_response_lcmt import robot_control_response_lcmt
from localization_lcmt import localization_lcmt


def clamp(v, lo, hi):
    return max(lo, min(hi, v))


def wrap_pi(a):
    while a > math.pi:
        a -= 2.0 * math.pi
    while a < -math.pi:
        a += 2.0 * math.pi
    return a


class RobotCtrl:
    def __init__(self):
        self.rec_thread = Thread(target=self.rec_response)
        self.send_thread = Thread(target=self.send_publish)

        self.lc_r1 = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        self.lc_r2 = lcm.LCM("udpm://239.255.76.67:7667?ttl=255")
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")

        self.cmd_msg = robot_control_cmd_lcmt()
        self.rec_msg1 = robot_control_response_lcmt()
        self.rec_msg2 = localization_lcmt()

        self.send_lock = Lock()
        self.loc_lock = Lock()

        self.delay_cnt = 0
        self.mode_ok = 0
        self.gait_ok = 0
        self.loc_seq = 0
        self.running = 1

    def run(self):
        self.lc_r1.subscribe("robot_control_response", self.msg1_handler)
        self.lc_r2.subscribe("global_to_robot", self.msg2_handler)
        self.lc_r2.subscribe("localization", self.msg2_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg1_handler(self, channel, data):
        self.rec_msg1 = robot_control_response_lcmt.decode(data)
        if self.rec_msg1.order_process_bar >= 95:
            self.mode_ok = self.rec_msg1.mode
            self.gait_ok = self.rec_msg1.gait_id
        else:
            self.mode_ok = 0
            self.gait_ok = 0

    def msg2_handler(self, channel, data):
        msg = localization_lcmt.decode(data)
        with self.loc_lock:
            self.rec_msg2 = msg
            self.loc_seq += 1

    def get_loc(self):       #获取机身反馈信息
        with self.loc_lock:
            return {
                "seq": self.loc_seq,
                "xyz": list(self.rec_msg2.xyz),
                "vxyz": list(self.rec_msg2.vxyz),
                "rpy": list(self.rec_msg2.rpy),
                "omegaBody": list(self.rec_msg2.omegaBody),
                "timestamp": int(self.rec_msg2.timestamp),
            }

    def rec_response(self):
        while self.running:
            self.lc_r1.handle_timeout(20)
            self.lc_r2.handle_timeout(20)
            time.sleep(0.002)

    def wait_finish(self, mode, gait_id, timeout_s=8.0):
        t0 = time.time()
        while self.running and time.time() - t0 < timeout_s:
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
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

    def send_cmd(self, send_msg):
        with self.send_lock:
            self.delay_cnt = 50
            self.cmd_msg = send_msg

    def quit(self):
        self.running = 0
        self.rec_thread.join()
        self.send_thread.join()


def main():
    ctrl = RobotCtrl()
    ctrl.run()

    # ========= 参数（可现场微调） =========
    body_height = 0.20          # 机身目标高度(m)
    cross_speed = 0.10          # 过石板前进速度(m/s)
    step_h = 0.06               # 抬脚高度(m)

    # 俯仰角判停参数（核心）
    pitch_win_sec = 5         # 滑动窗口时长(s)，用于统计pitch波动
    pitch_sample_sec = 0.05     # 采样周期(s)
    min_forward_time = 35.0      # 最短前进时间(s)，防止起步误判停
    rough_p2p_th = 0.06         # 进入石板扰动阈值：pitch峰峰值(rad)
    rough_std_th = 0.02         # 进入石板扰动阈值：pitch标准差(rad)
    stable_p2p_th = 0.028       # 稳定判据：pitch峰峰值上限(rad)
    stable_hold_time = 1.38     # 稳定条件需连续满足时长(s)
    cross_timeout = 60.0        # 过石板最大允许时间(s)，超时保护

    # 黄线中间可用宽度 1m
    lane_width = 1.0            # 黄线内可通行宽度(m)
    y_half = lane_width * 0.5
    y_safe_margin = 0.08        # 距黄线边缘安全裕量(m)
    y_tol = 0.04                # 居中容差(m)

    turn_rate_max = 0.45        # 左转角速度上限(rad/s)
    turn_kp = 1.25              # 左转比例增益
    turn_done_deg = 4.0         # 左转完成角误差阈值(度)

    align_vy_max = 0.08         # 横向居中最大速度(m/s)
    align_kp = 0.7              # 横向居中比例增益

    send_msg = robot_control_cmd_lcmt()

    def send_mode(mode, gait, vel=None, rpy=None, pos=None, step_height=None, duration=0):
        send_msg.mode = mode
        send_msg.gait_id = gait
        if vel is not None:
            send_msg.vel_des = vel
        if rpy is not None:
            send_msg.rpy_des = rpy
        if pos is not None:
            send_msg.pos_des = pos
        if step_height is not None:
            send_msg.step_height = step_height
        send_msg.duration = duration
        send_msg.life_count = (send_msg.life_count + 1) % 256
        ctrl.send_cmd(send_msg)

    def wait_loc_ready(timeout=3.0):
        t0 = time.time()
        while time.time() - t0 < timeout:
            loc = ctrl.get_loc()
            if loc["seq"] > 0 and loc["timestamp"] > 0:
                return True
            time.sleep(0.02)
        return False

    def wait_stable(timeout=2.0):
        t0 = time.time()
        while time.time() - t0 < timeout:
            loc = ctrl.get_loc()
            roll = abs(loc["rpy"][0])
            pitch = abs(loc["rpy"][1])
            vz = abs(loc["vxyz"][2])
            if roll < 0.10 and pitch < 0.14 and vz < 0.12:
                return True
            time.sleep(0.05)
        return False

    try:
        wait_loc_ready()
        loc0 = ctrl.get_loc()
        y_center = loc0["xyz"][1]

        # 1) 恢复站立
        send_mode(12, 0, duration=0)
        ctrl.wait_finish(12, 0, timeout_s=10.0)

        # 2) 抬高机身
        send_mode(21, 5, rpy=[0.0, 0.0, 0.0], pos=[0.0, 0.0, body_height], duration=600)
        time.sleep(1.0)

        # 3) 通过石板（基于pitch波动收敛判停，而不是里程计位置）
        send_mode(11, 27, vel=[cross_speed, 0.0, 0.0], rpy=[0.0, -0.20, 0.0], step_height=[step_h, step_h], duration=0)

        pitch_hist = deque()      # 元素：(t, pitch)
        rough_seen = False        # 是否已经观察到“石板扰动”
        stable_since = None       # 连续稳定起始时刻
        t_cross_start = time.time()
        last_log = 0.0

        while True:
            now = time.time()
            if now - t_cross_start > cross_timeout:
                print("[WARN] 过石板判停超时，触发保护停止")
                break

            loc = ctrl.get_loc()
            pitch = loc["rpy"][1]

            pitch_hist.append((now, pitch))


            while pitch_hist and (now - pitch_hist[0][0]) > pitch_win_sec:
                pitch_hist.popleft()

            #print(now - pitch_hist[0][0])
            #滑动窗口增加到最大时才会计算峰峰值
            if (pitch_win_sec - pitch_sample_sec)<(now - pitch_hist[0][0]) <= pitch_win_sec:
                pitches = [p for _, p in pitch_hist]
                p_max = max(pitches)
                p_min = min(pitches)
                p2p = p_max - p_min
                
                
                

                is_stable = (
                    (now - t_cross_start) >= min_forward_time
                    and p2p < stable_p2p_th
                )

                if is_stable:
                    print("[CROSS] pitch波动已收敛，判定通过石板")
                    break
                    
                print("峰峰值：%f", p2p)    
                print(is_stable)
                

                

            time.sleep(pitch_sample_sec)

        # 4) 稳定停住
        send_mode(12, 0, vel=[0.0, 0.0, 0.0], duration=0)
        ctrl.wait_finish(12, 0, timeout_s=4.0)
        wait_stable(2.5)

        # 5) 黄线中间区域内居中（宽度1m）
        y_min = y_center - y_half + y_safe_margin
        y_max = y_center + y_half - y_safe_margin
        y_ref = y_center

        t_align = time.time()
        while time.time() - t_align < 4.0:
            loc = ctrl.get_loc()
            y = loc["xyz"][1]
            if y_min <= y <= y_max and abs(y - y_ref) <= y_tol:
                break
            vy_cmd = clamp(align_kp * (y_ref - y), -align_vy_max, align_vy_max)
            send_mode(11, 27, vel=[0.0, vy_cmd, 0.0], rpy=[0.0, -0.08, 0.0], step_height=[0.03, 0.03], duration=0)
            time.sleep(0.08)

        # 居中后先停一下
        send_mode(12, 0, vel=[0.0, 0.0, 0.0], duration=0)
        ctrl.wait_finish(12, 0, timeout_s=2.0)

        # 6) 原地左转90度（yaw闭环）
        yaw0 = ctrl.get_loc()["rpy"][2]
        yaw_target = wrap_pi(yaw0 + math.pi / 2.0)

        t_turn = time.time()
        while time.time() - t_turn < 8.0:
            loc = ctrl.get_loc()
            y = loc["xyz"][1]
            if not (y_min <= y <= y_max):
                send_mode(12, 0, vel=[0.0, 0.0, 0.0], duration=0)
                print("[WARN] 接近黄线边界，已紧急停止转向")
                break

            yaw = loc["rpy"][2]
            err = wrap_pi(yaw_target - yaw)
            if abs(err) <= math.radians(turn_done_deg):
                break

            wz = clamp(turn_kp * err, -turn_rate_max, turn_rate_max)
            send_mode(11, 27, vel=[0.0, 0.0, wz], rpy=[0.0, 0.0, 0.0], step_height=[0.03, 0.03], duration=0)
            time.sleep(0.06)

        # 7) 结束：回到稳定站立
        send_mode(12, 0, vel=[0.0, 0.0, 0.0], duration=0)
        ctrl.wait_finish(12, 0, timeout_s=6.0)
        print("[DONE] 石板通过 + 黄线内左转完成")

    except KeyboardInterrupt:
        pass
    finally:
        send_msg.mode = 12
        send_msg.gait_id = 0
        send_msg.vel_des = [0.0, 0.0, 0.0]
        send_msg.duration = 0
        send_msg.life_count = (send_msg.life_count + 1) % 256
        ctrl.send_cmd(send_msg)
        ctrl.wait_finish(12, 0, timeout_s=3.0)
        ctrl.quit()

    sys.exit(0)


if __name__ == "__main__":
    main()
