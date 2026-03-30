
# response 
int32 SUCCEED =0                        # 当前请求参数合理，优先级最高，请求灯效执行成功
int32 TIMEOUT =1107                     # 当前请求led硬件响应超时
int32 TARGET_ERROR =1121                # 当前请求的target参数为空或者不在可选列表中
int32 PRIORITY_ERROR =1122              # 当前请求的client为空或者不在预设的优先级列表中
int32 MODE_ERROR = 1123                 # 当前请求的mode参数为空或者不在可选列表中
int32 EFFECT_ERROR =1124                # 当前请求的effect参数为空或者不在可选列表中
int32 LOW_PRIORITY = 1125               # 当前请求优先级较低，无法立即执行请求灯效

int32 code #执行结果