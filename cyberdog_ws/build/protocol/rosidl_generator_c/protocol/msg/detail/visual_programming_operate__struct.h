// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_TASK'.
static const char * const protocol__msg__VisualProgrammingOperate__TYPE_TASK = "task";

/// Constant 'TYPE_MODULE'.
static const char * const protocol__msg__VisualProgrammingOperate__TYPE_MODULE = "module";

/// Constant 'TYPE_AI'.
static const char * const protocol__msg__VisualProgrammingOperate__TYPE_AI = "AI";

/// Constant 'TYPE_SLAM'.
static const char * const protocol__msg__VisualProgrammingOperate__TYPE_SLAM = "SLAM";

/// Constant 'MODE_FACTORY'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_FACTORY = "factory";

/// Constant 'MODE_USER'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_USER = "user";

/// Constant 'MODE_SINGLE'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_SINGLE = "single";

/// Constant 'MODE_CYCLE'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_CYCLE = "cycle";

/// Constant 'MODE_COMMON'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_COMMON = "common";

/// Constant 'MODE_SEQUENCE'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_SEQUENCE = "sequence";

/// Constant 'MODE_SINGLE_STEP'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_SINGLE_STEP = "single_step";

/// Constant 'MODE_ORIGINAL'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_ORIGINAL = "original";

/// Constant 'MODE_ALL'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_ALL = "all";

/// Constant 'MODE_PERSONNEL'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_PERSONNEL = "personnel";

/// Constant 'MODE_FACE'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_FACE = "face";

/// Constant 'MODE_VOICEPRINT'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_VOICEPRINT = "voiceprint";

/// Constant 'MODE_TAAINING_WORDS'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_TAAINING_WORDS = "training_words";

/// Constant 'MODE_MAP'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_MAP = "map";

/// Constant 'MODE_PRESET'.
static const char * const protocol__msg__VisualProgrammingOperate__MODE_PRESET = "preset";

/// Constant 'OPERATE_INQUIRY'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_INQUIRY = "inquiry";

/// Constant 'OPERATE_SAVE'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_SAVE = "save";

/// Constant 'OPERATE_DELETE'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_DELETE = "delete";

/// Constant 'OPERATE_DEBUG'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_DEBUG = "debug";

/// Constant 'OPERATE_RUN'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_RUN = "run";

/// Constant 'OPERATE_SUSPEND'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_SUSPEND = "suspend";

/// Constant 'OPERATE_RECOVER'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_RECOVER = "recover";

/// Constant 'OPERATE_SHUTDOWN'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_SHUTDOWN = "shutdown";

/// Constant 'OPERATE_START'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_START = "start";

/// Constant 'OPERATE_STOP'.
static const char * const protocol__msg__VisualProgrammingOperate__OPERATE_STOP = "stop";

/// Constant 'STATE_NULL'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_NULL = "null";

/// Constant 'STATE_ERROR'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_ERROR = "error";

/// Constant 'STATE_WAIT_RUN'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_WAIT_RUN = "wait_run";

/// Constant 'STATE_RUN_WAIT'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_RUN_WAIT = "run_wait";

/// Constant 'STATE_RUN'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_RUN = "run";

/// Constant 'STATE_SUSPEND'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_SUSPEND = "suspend";

/// Constant 'STATE_SHUTDOWN'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_SHUTDOWN = "shutdown";

/// Constant 'STATE_NORMAL'.
static const char * const protocol__msg__VisualProgrammingOperate__STATE_NORMAL = "normal";

/// Constant 'STEP_PARSE'.
static const char * const protocol__msg__VisualProgrammingOperate__STEP_PARSE = "parse";

/// Constant 'STEP_REGISTER'.
static const char * const protocol__msg__VisualProgrammingOperate__STEP_REGISTER = "register";

/// Constant 'STEP_BEGIN'.
static const char * const protocol__msg__VisualProgrammingOperate__STEP_BEGIN = "begin";

/// Constant 'STEP_END'.
static const char * const protocol__msg__VisualProgrammingOperate__STEP_END = "end";

/// Constant 'FSM_UNINITIALIZED'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_UNINITIALIZED = "Uninitialized";

/// Constant 'FSM_SET_UP'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_SET_UP = "SetUp";

/// Constant 'FSM_TEAR_DOWN'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_TEAR_DOWN = "TearDown";

/// Constant 'FSM_SELF_CHECK'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_SELF_CHECK = "SelfCheck";

/// Constant 'FSM_ACTIVE'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_ACTIVE = "Active";

/// Constant 'FSM_DE_ACTIVE'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_DE_ACTIVE = "DeActive";

/// Constant 'FSM_PROTECTED'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_PROTECTED = "Protected";

/// Constant 'FSM_LOW_POWER'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_LOW_POWER = "LowPower";

/// Constant 'FSM_OTA'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_OTA = "OTA";

/// Constant 'FSM_ERROR'.
static const char * const protocol__msg__VisualProgrammingOperate__FSM_ERROR = "Error";

// Include directives for member types
// Member 'type'
// Member 'id'
// Member 'target_id'
// Member 'describe'
// Member 'style'
// Member 'operate'
// Member 'mode'
// Member 'condition'
// Member 'body'
// Member 'fsm'
// Member 'dependent'
// Member 'be_depended'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VisualProgrammingOperate in the package protocol.
typedef struct protocol__msg__VisualProgrammingOperate
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String__Sequence target_id;
  rosidl_runtime_c__String describe;
  rosidl_runtime_c__String style;
  rosidl_runtime_c__String operate;
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__String condition;
  rosidl_runtime_c__String body;
  rosidl_runtime_c__String fsm;
  rosidl_runtime_c__String__Sequence dependent;
  rosidl_runtime_c__String__Sequence be_depended;
} protocol__msg__VisualProgrammingOperate;

// Struct for a sequence of protocol__msg__VisualProgrammingOperate.
typedef struct protocol__msg__VisualProgrammingOperate__Sequence
{
  protocol__msg__VisualProgrammingOperate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__VisualProgrammingOperate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_
