'''
石板通过示例（基于 LCM 通信）

动作流程：
1. 进入恢复站立（Recovery Stand）
2. 抬高机身，给越障留出更大的足端和机身余量
3. 以慢速小跑步态向前通过 4 块石板
4. 人工确认通过完成后停止前进
5. 左转 90 度进入第二赛段
5. 保持正常站立并结束程序

场景参数：
- 石板数量：4
- 每块石板宽度：0.30 m
- 石板高度：0.05 m
- 石板间隔：0.20 m
'''

import sys
import time
import lcm
from threading import Thread, Lock

# 发送给运控板的控制指令消息类型
from robot_control_cmd_lcmt import robot_control_cmd_lcmt
# 运控板返回的状态消息类型
from robot_control_response_lcmt import robot_control_response_lcmt


class RobotCtrl:
    '''
    机器人 LCM 控制封装。

    该类主要完成三件事：
    1. 订阅状态反馈通道，接收机器人当前动作执行状态。
    2. 在后台线程里持续发送控制指令/心跳，避免通信超时。
    3. 提供简单接口，供上层流程发送动作并等待动作完成。
    '''

    def __init__(self):
        # 接收线程：不断监听机器人返回的响应消息
        self.rec_thread = Thread(target=self.rec_response)
        # 发送线程：不断维持控制心跳，必要时重复发布当前命令
        self.send_thread = Thread(target=self.send_publish)

        # 反馈通道：监听 robot_control_response
        self.lc_r = lcm.LCM("udpm://239.255.76.67:7670?ttl=255")
        # 控制通道：发布 robot_control_cmd
        self.lc_s = lcm.LCM("udpm://239.255.76.67:7671?ttl=255")

        # 当前准备发送给机器狗的命令缓存
        self.cmd_msg = robot_control_cmd_lcmt()
        # 最近一次收到的反馈消息缓存
        self.rec_msg = robot_control_response_lcmt()

        # 发送命令时需要加锁，避免多个线程同时修改同一条消息
        self.send_lock = Lock()

        # 发送延时计数器：用于控制心跳重发频率
        self.delay_cnt = 0

        # mode_ok / gait_ok 用来记录“已经基本执行完成”的模式和步态
        # 这里的判断依据来自反馈中的 order_process_bar
        self.mode_ok = 0
        self.gait_ok = 0

        # 线程运行标记，1 表示继续运行，0 表示准备退出
        self.running = 1

    def run(self):
        '''
        启动控制器。

        先注册反馈回调，再启动发送线程和接收线程。
        '''
        self.lc_r.subscribe("robot_control_response", self.msg_handler)
        self.send_thread.start()
        self.rec_thread.start()

    def msg_handler(self, channel, data):
        '''
        LCM 反馈回调函数。

        参数：
        - channel: 当前收到消息的通道名
        - data: 二进制消息体

        处理逻辑：
        1. 解码反馈消息。
        2. 当 order_process_bar >= 95 时，认为动作已基本执行到位。
        3. 记录当前完成的 mode 和 gait_id，供 wait_finish 使用。
        '''
        self.rec_msg = robot_control_response_lcmt.decode(data)

        # order_process_bar 可以理解为当前动作执行进度。
        # 达到 95 以上时，近似视为动作已完成或已稳定进入该状态。
        if self.rec_msg.order_process_bar >= 95:
            self.mode_ok = self.rec_msg.mode
            self.gait_ok = self.rec_msg.gait_id
        else:
            # 若执行未完成，则清空完成标记，避免上层误判
            self.mode_ok = 0
            self.gait_ok = 0

    def rec_response(self):
        '''
        后台接收线程。

        持续轮询 LCM 网络并触发消息回调。
        handle_timeout(20) 表示最多阻塞 20 ms，避免线程长时间卡住。
        '''
        while self.running:
            self.lc_r.handle_timeout(20)
            time.sleep(0.002)

    def wait_finish(self, mode, gait_id, timeout_s=10.0):
        '''
        等待指定动作完成。

        参数：
        - mode: 期望等待完成的控制模式
        - gait_id: 期望等待完成的步态编号
        - timeout_s: 最大等待时间，单位秒

        返回：
        - True: 在超时前检测到目标动作完成
        - False: 超时或程序退出
        '''
        count = int(timeout_s / 0.005)
        while self.running and count > 0:
            if self.mode_ok == mode and self.gait_ok == gait_id:
                return True
            time.sleep(0.005)
            count -= 1
        return False

    def send_publish(self):
        '''
        后台发送线程。

        该线程不会只在“新命令到来时”发送一次，而是会持续维持心跳：
        - 当 life_count 没有更新时，仍会周期性重发最后一条命令
        - 这样可以避免运控侧因为超时而进入保护状态

        当前实现里：
        - 每 5 ms 循环一次
        - delay_cnt > 20 时重发一次命令
        - 因此心跳频率大约为 10 Hz
        '''
        while self.running:
            with self.send_lock:
                if self.delay_cnt > 20:
                    self.lc_s.publish("robot_control_cmd", self.cmd_msg.encode())
                    self.delay_cnt = 0
                self.delay_cnt += 1
            time.sleep(0.005)

    def send_cmd(self, msg):
        '''
        更新当前命令缓存。

        注意：这里并不是立刻只发送一次，而是把最新命令写入缓存，
        后台发送线程会尽快把该命令发出去，并继续维持心跳。
        '''
        with self.send_lock:
            # 置大一点，促使发送线程尽快进入“立即重发”逻辑
            self.delay_cnt = 50
            self.cmd_msg = msg

    def quit(self):
        '''
        关闭控制器并等待后台线程退出。
        '''
        self.running = 0
        self.rec_thread.join()
        self.send_thread.join()


def main():
    '''
    主控制流程。

    这里采用“开环时间 + 少量状态确认”的简单策略：
    - 对站立类动作，尽量等待反馈完成；
    - 对连续行走类动作，根据场景距离和期望速度估算前进时间。

    这种写法实现简单，但它不是严格闭环控制。
    如果后续需要更高成功率，可以继续扩展成“分段过板”或“基于位置反馈的闭环控制”。
    '''
    # 创建控制器并启动收发线程
    ctrl = RobotCtrl()
    ctrl.run()

    # 创建一条命令对象，后续会反复修改其字段并发送
    msg = robot_control_cmd_lcmt()

    # -----------------------------
    # 一、任务场景参数（单位：米）
    # -----------------------------
    plate_count = 4       # 石板数量
    plate_width = 0.30    # 每块石板沿前进方向的宽度
    plate_gap = 0.20      # 相邻石板之间的间隔

    # 总跨越长度 = 4 块石板长度 + 3 个间隔长度
    total_distance = plate_count * plate_width + (plate_count - 1) * plate_gap

    # -----------------------------
    # 二、行走控制参数
    # -----------------------------
    # 慢速前进速度，单位 m/s
    # 这里选择 0.12 m/s，属于较保守的低速，便于提高通过稳定性
    slow_speed = 0.12
    

    # 抬腿高度，单位 m
    # 根据控制参数说明，step_height 建议范围为 0 ~ 0.06 m
    # 这里取 0.06 m，尽量覆盖 5 cm 石板高度
    step_h = 0.06

    # 身体高度，单位 m
    # 抬高机身是为了增加通过石板时的机身离地余量
    body_height = 0.27

    # -----------------------------
    # 三、通过完成判定
    # -----------------------------
    # 由于越障过程中可能出现打滑、颠簸、步态自适应调节等情况，
    # 仅用“距离/速度”估算时间误差较大。
    # 这里改为人工确认：观察机器人通过石板后按回车停止前进。

    try:
        # ==================================================
        # 1) 恢复站立：让机器狗从趴卧/异常姿态进入稳定站立状态
        # ==================================================
        msg.mode = 12
        msg.gait_id = 0

        # duration = 0 表示持续执行，直到新命令到来
        msg.duration = 0 

        # life_count 递增后，运控侧才会把这条命令视为“新命令”
        msg.life_count += 1

        ctrl.send_cmd(msg)

        # 最长等待 12 秒，给恢复站立留出较充足时间
        ctrl.wait_finish(12, 0, timeout_s=12.0)

        # ==================================================
        # 2) 抬高机身：通过位置/姿态控制把身体高度抬高到 0.27 m
        # ==================================================
        msg.mode = 21

        # gait_id = 5 对应“位控姿态-绝对姿态”模式
        msg.gait_id = 5

        # 保持机身姿态水平，不额外俯仰/横滚/偏航
        msg.rpy_des = [0.0, 0.0, 0.0]

        # 这里只使用 pos_des[2] 调整机身高度
        msg.pos_des = [0.0, 0.0, body_height]

        # 给插值动作 600 ms 的执行时间，让抬升过程相对平滑
        msg.duration = 600
        msg.life_count += 1
        ctrl.send_cmd(msg)

        # 额外等待 1 秒，让机身抬高动作更稳定
        time.sleep(1.0)

        # ==================================================
        # 3) 慢走通过石板
        # ==================================================
        msg.mode = 11

        # gait_id = 27 对应慢速小跑 TROT_SLOW
        msg.gait_id = 27

        # 速度命令：[前进速度, 侧移速度, 转向速度]
        # 这里只保留正向前进，不做侧移和转向
        msg.vel_des = [slow_speed, 0.0, 0.0]

        # 前后摆动腿都使用相同抬腿高度
        msg.step_height = [step_h, step_h]

        # 连续行走命令使用 duration = 0，直到后续新命令打断
        msg.duration = 0
        msg.life_count += 1
        ctrl.send_cmd(msg)

        # 人工确认通过完成后再停止前进（避免固定时长误差）
        try:
            input("机器人正在慢走过石板。确认已通过后按回车停止前进... ")
        except EOFError:
            # 无交互终端时的兜底等待
            time.sleep(10.0)

        # ==================================================
        # 4) 停止前进并回到恢复站立
        # ==================================================
        msg.mode = 12
        msg.gait_id = 0

        # 清零速度，避免旧的速度向量继续残留在消息对象里
        msg.vel_des = [0.0, 0.0, 0.0]

        msg.duration = 0
        msg.life_count += 1
        ctrl.send_cmd(msg)

        # 再次等待恢复站立完成
        ctrl.wait_finish(12, 0, timeout_s=10.0)

    except KeyboardInterrupt:
        # 如果用户手动 Ctrl+C，也统一回到站立后再退出。
        pass
    finally:
        # ==================================================
        # 5) 结束时保持正常站立（不进入阻尼模式）
        # ==================================================
        msg.mode = 12
        msg.gait_id = 0
        msg.vel_des = [0.0, 0.0, 0.0]
        msg.duration = 0
        msg.life_count += 1
        ctrl.send_cmd(msg)
        ctrl.wait_finish(12, 0, timeout_s=8.0)

        # 关闭后台线程，释放资源
        ctrl.quit()

    sys.exit(0)


# Python 脚本入口
if __name__ == '__main__':
    main()
