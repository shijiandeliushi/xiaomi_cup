// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVO_START'.
enum
{
  protocol__msg__MotionServoCmd__SERVO_START = 0l
};

/// Constant 'SERVO_DATA'.
enum
{
  protocol__msg__MotionServoCmd__SERVO_DATA = 1l
};

/// Constant 'SERVO_END'.
enum
{
  protocol__msg__MotionServoCmd__SERVO_END = 2l
};

/// Constant 'APP'.
enum
{
  protocol__msg__MotionServoCmd__APP = 0l
};

/// Constant 'AUDIO'.
enum
{
  protocol__msg__MotionServoCmd__AUDIO = 1l
};

/// Constant 'VIS'.
enum
{
  protocol__msg__MotionServoCmd__VIS = 2l
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

// Struct defined in msg/MotionServoCmd in the package protocol.
typedef struct protocol__msg__MotionServoCmd
{
  int32_t motion_id;
  int32_t cmd_type;
  int32_t cmd_source;
  int32_t value;
  rosidl_runtime_c__float__Sequence vel_des;
  rosidl_runtime_c__float__Sequence rpy_des;
  rosidl_runtime_c__float__Sequence pos_des;
  rosidl_runtime_c__float__Sequence acc_des;
  rosidl_runtime_c__float__Sequence ctrl_point;
  rosidl_runtime_c__float__Sequence foot_pose;
  rosidl_runtime_c__float__Sequence step_height;
} protocol__msg__MotionServoCmd;

// Struct for a sequence of protocol__msg__MotionServoCmd.
typedef struct protocol__msg__MotionServoCmd__Sequence
{
  protocol__msg__MotionServoCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionServoCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__STRUCT_H_
