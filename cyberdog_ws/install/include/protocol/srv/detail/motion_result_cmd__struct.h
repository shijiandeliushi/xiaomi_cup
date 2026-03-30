// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FSM'.
enum
{
  protocol__srv__MotionResultCmd_Request__FSM = -2l
};

/// Constant 'DEBUG'.
enum
{
  protocol__srv__MotionResultCmd_Request__DEBUG = -1l
};

/// Constant 'APP'.
enum
{
  protocol__srv__MotionResultCmd_Request__APP = 0l
};

/// Constant 'AUDIO'.
enum
{
  protocol__srv__MotionResultCmd_Request__AUDIO = 1l
};

/// Constant 'VIS'.
enum
{
  protocol__srv__MotionResultCmd_Request__VIS = 2l
};

/// Constant 'BLUTELE'.
enum
{
  protocol__srv__MotionResultCmd_Request__BLUTELE = 3l
};

/// Constant 'ALGO'.
enum
{
  protocol__srv__MotionResultCmd_Request__ALGO = 4l
};

// Include directives for member types
// Member 'vel_des'
// Member 'rpy_des'
// Member 'pos_des'
// Member 'acc_des'
// Member 'ctrl_point'
// Member 'foot_pose'
// Member 'step_height'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'gait_toml'
// Member 'toml_data'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MotionResultCmd in the package protocol.
typedef struct protocol__srv__MotionResultCmd_Request
{
  int32_t motion_id;
  int32_t cmd_source;
  rosidl_runtime_c__float__Sequence vel_des;
  rosidl_runtime_c__float__Sequence rpy_des;
  rosidl_runtime_c__float__Sequence pos_des;
  rosidl_runtime_c__float__Sequence acc_des;
  rosidl_runtime_c__float__Sequence ctrl_point;
  rosidl_runtime_c__float__Sequence foot_pose;
  rosidl_runtime_c__float__Sequence step_height;
  int32_t duration;
  int32_t value;
  int32_t contact;
  rosidl_runtime_c__String gait_toml;
  rosidl_runtime_c__String toml_data;
} protocol__srv__MotionResultCmd_Request;

// Struct for a sequence of protocol__srv__MotionResultCmd_Request.
typedef struct protocol__srv__MotionResultCmd_Request__Sequence
{
  protocol__srv__MotionResultCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionResultCmd_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotionResultCmd in the package protocol.
typedef struct protocol__srv__MotionResultCmd_Response
{
  int32_t motion_id;
  bool result;
  int32_t code;
} protocol__srv__MotionResultCmd_Response;

// Struct for a sequence of protocol__srv__MotionResultCmd_Response.
typedef struct protocol__srv__MotionResultCmd_Response__Sequence
{
  protocol__srv__MotionResultCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionResultCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_H_
