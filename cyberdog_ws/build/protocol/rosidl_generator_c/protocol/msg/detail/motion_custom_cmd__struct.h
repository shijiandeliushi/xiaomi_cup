// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vel_des'
// Member 'rpy_des'
// Member 'pos_des'
// Member 'acc_des'
// Member 'ctrl_point'
// Member 'foot_pose'
// Member 'step_height'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MotionCustomCmd in the package protocol.
typedef struct protocol__msg__MotionCustomCmd
{
  int8_t mode;
  int8_t gait_id;
  int8_t contact;
  int8_t life_count;
  rosidl_runtime_c__float__Sequence vel_des;
  rosidl_runtime_c__float__Sequence rpy_des;
  rosidl_runtime_c__float__Sequence pos_des;
  rosidl_runtime_c__float__Sequence acc_des;
  rosidl_runtime_c__float__Sequence ctrl_point;
  rosidl_runtime_c__float__Sequence foot_pose;
  rosidl_runtime_c__float__Sequence step_height;
  int32_t value;
  int32_t duration;
} protocol__msg__MotionCustomCmd;

// Struct for a sequence of protocol__msg__MotionCustomCmd.
typedef struct protocol__msg__MotionCustomCmd__Sequence
{
  protocol__msg__MotionCustomCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionCustomCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_
