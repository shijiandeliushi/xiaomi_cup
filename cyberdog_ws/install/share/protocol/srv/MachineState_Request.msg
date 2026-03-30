# state具体取值
uint8 MACHINE_STATE_ACTIVE = 0     # 工作模式
uint8 MACHINE_STATE_PROTECT = 1    # 低电量模式
uint8 MACHINE_STATE_LOWPOWER = 2   # 低功耗模式
uint8 MACHINE_STATE_OTA = 3        # OTA模式
uint8 MACHINE_STATE_SHUTDOWN = 4   # 关机模式
uint8 MACHINE_STATE_SELFCHECK = 5  # 自检模式
uint8 MACHINE_STATE_DEACTIVE = 6   # 待机模式
uint8 MACHINE_STATE_ERROR = 7      # 错误模式

uint8 state
uint16 ticks    # 单位秒
