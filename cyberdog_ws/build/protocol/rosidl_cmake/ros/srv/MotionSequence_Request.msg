# request
int32 motion_id                 # 运动id,固定值:MotionID::SEQUENCE_CUSTOM
int32 duration                  # 持续时长
string toml_data                # toml 文件内容(格式如下框内约束)
                                # ┌─────────────────────────┐
                                # │# toml file describe.    │
                                # │[[section]]              │
                                # │contact  = [0, 0, 0, 0]  │
                                # │duration = 3             │
                                # │                         │
                                # │[[section]]              │
                                # │contact  = [0, 0, 0, 0]  │
                                # │duration = 3             │
                                # │                         │
                                # │[[section]]              │
                                # │...                      │
                                # └─────────────────────────┘
MotionSequenceParam[] params    # 运动序列参数集
