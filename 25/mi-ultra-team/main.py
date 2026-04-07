'''
This demo show the communication interface of MR813 motion control board based on Lcm.
Dependency: 
- robot_control_cmd_lcmt.py
- robot_control_response_lcmt.py
'''
import lcm
import sys
import os
import time
from threading import Thread, Lock
import math
from robot_control_cmd_lcmt import robot_control_cmd_lcmt
from robot_control_response_lcmt import robot_control_response_lcmt

def main():
    Ctrl = Robot_Ctrl()
    Ctrl.run()
    msg = robot_control_cmd_lcmt()
    try:
        msg.mode = 12 # Recovery stand
        msg.gait_id = 0
        msg.life_count += 1 # Command will take effect when life_count update
        Ctrl.Send_cmd(msg)
        Ctrl.Wait_finish(12, 0)

        # msg.mode = 62 # Shake hand, based on position interpolation control
        # msg.gait_id = 2
        # msg.life_count += 1
        # Ctrl.Send_cmd(msg)
        # Ctrl.Wait_finish(62, 2)

        # msg.mode = 64 # Twoleg Stand
        # msg.gait_id = 0
        # msg.life_count += 1
        # Ctrl.Send_cmd(msg)
        # Ctrl.Wait_finish(64, 0)

        # msg.mode = 21 # Position interpolation control
        # msg.gait_id = 0
        # msg.rpy_des = [0, 0.3, 0] # Head up
        # msg.duration = 500 # Expected execution time, 0.5s 
        # msg.life_count += 1
        # Ctrl.Send_cmd(msg)
        # time.sleep( 0.5 )

        # msg.mode = 21 # Position interpolation control
        # msg.gait_id = 0
        # msg.rpy_des = [0, -0.3, 0] # Head down
        # msg.duration = 300 
        # msg.life_count += 1
        # Ctrl.Send_cmd(msg)
        # time.sleep( 0.3 )

        # msg.mode = 21 # Position interpolation control
        # msg.gait_id = 5
        # msg.rpy_des = [0, 0, 0]
        # msg.pos_des = [0, 0, 0.22] # Set body height
        # msg.duration = 400 
        # msg.life_count += 1
        # Ctrl.Send_cmd(msg)
        # time.sleep( 1 )

        # 曲线运动控制
       # 曲线运动控制（修改后的八邻域算法实现）
        def curve_motion(ctrl, duration=10, curve_radius=1.0):
            start_time = time.time()
            
            # S型路径参数
            amplitude = 0.4    # 转向幅度
            frequency = 0.4    # 路径频率
            forward_speed = 0.5 # 前进速度
            
            # 八邻域方向权重 (转向速度, 前进速度)
            directions = [
                (0.0, 1.0),    # 正前
                (0.2, 0.8),    # 右前
                (0.4, 0.6),    
                (0.6, 0.4),
                (0.8, 0.2),
                (1.0, 0.0),    # 原地右转
                (0.8, -0.2),
                (0.6, -0.4)    # 右后
            ]

            # 路径跟踪参数
            last_error = 0
            integral = 0
            KP = 2.0    # 比例系数
            KI = 0.1    # 积分系数
            KD = 0.5    # 微分系数

            while time.time() - start_time < duration:
                # 计算当前路径相位
                t = (time.time() - start_time) * frequency
                
                # 生成期望路径（S型）
                desired_heading = amplitude * math.sin(2 * math.pi * t)
                
                # 模拟传感器反馈（实际应通过定位系统获取）
                current_heading = desired_heading * 0.8  # 添加滞后模拟实际误差
                
                # 计算控制误差
                error = desired_heading - current_heading
                integral += error * 0.1  # 时间间隔约0.1s
                derivative = (error - last_error) / 0.1
                
                # PID控制计算
                turn_speed = KP*error + KI*integral + KD*derivative
                turn_speed = max(-0.6, min(0.6, turn_speed))  # 限幅
                
                # 八邻域方向选择
                direction_idx = int((math.atan2(turn_speed, forward_speed) + math.pi) / (math.pi/4)) % 8
                selected_dir = directions[direction_idx]
                
                # 动态调整步态参数
                gait_id = 26  # 自变频步态
                if abs(turn_speed) > 0.3:
                    gait_id = 3   # 中速踱步应对急转
                    step_height = [0.08, 0.08]
                else:
                    step_height = [0.06, 0.06]

                # 发送控制指令
                msg.mode = 11
                msg.gait_id = gait_id
                msg.vel_des = [
                    selected_dir[0] * amplitude,  # 转向分量
                    0,                            # 横向移动（保留）
                    selected_dir[1] * forward_speed  # 前进分量
                ]
                msg.step_height = step_height
                msg.life_count += 1
                ctrl.Send_cmd(msg)
                
                last_error = error
                time.sleep(60) 

        
        curve_motion(Ctrl, duration=5, curve_radius=1.0)

        msg.mode = 7    # PureDamper
        msg.gait_id = 0
        msg.life_count += 1
        Ctrl.Send_cmd(msg)
        Ctrl.Wait_finish(7, 0)

    except KeyboardInterrupt:
        pass
    Ctrl.quit()
    sys.exit()


class Robot_Ctrl(object):
    def __init__(self):
        self.rec_thread = Thread(target=self.rec_responce)
        self.send_thread = Thread(target=self.send_publish)
        self.lc_r = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")
        self.cmd_msg = robot_control_cmd_lcmt()
        self.rec_msg = robot_control_response_lcmt()
        self.send_lock = Lock()
        self.delay_cnt = 0
        self.mode_ok = 0
        self.gait_ok = 0
        self.runing = 1

    def run(self):
        self.lc_r.subscribe("robot_control_response", self.msg_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg_handler(self, channel, data):
        self.rec_msg = robot_control_response_lcmt().decode(data)
        if(self.rec_msg.order_process_bar >= 95):
            self.mode_ok = self.rec_msg.mode
        else:
            self.mode_ok = 0

    def rec_responce(self):
        while self.runing:
            self.lc_r.handle()
            time.sleep( 0.002 )

    def Wait_finish(self, mode, gait_id):
        count = 0
        while self.runing and count < 2000: #10s
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
            else:
                time.sleep(0.005)
                count += 1

    def send_publish(self):
        while self.runing:
            self.send_lock.acquire()
            if self.delay_cnt > 20: # Heartbeat signal 10HZ, It is used to maintain the heartbeat when life count is not updated
                self.lc_s.publish("robot_control_cmd",self.cmd_msg.encode())
                self.delay_cnt = 0
            self.delay_cnt += 1
            self.send_lock.release()
            time.sleep( 0.005 )

    def Send_cmd(self, msg):
        self.send_lock.acquire()
        self.delay_cnt = 50
        self.cmd_msg = msg
        self.send_lock.release()

    def quit(self):
        self.runing = 0
        self.rec_thread.join()
        self.send_thread.join()


# Main function
if __name__ == '__main__':
    main() 