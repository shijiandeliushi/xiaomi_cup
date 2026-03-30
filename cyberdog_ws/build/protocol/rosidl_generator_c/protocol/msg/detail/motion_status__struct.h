// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  protocol__msg__MotionStatus__NORMAL = 0
};

/// Constant 'TRANSITIONING'.
enum
{
  protocol__msg__MotionStatus__TRANSITIONING = 1
};

/// Constant 'ESTOP'.
enum
{
  protocol__msg__MotionStatus__ESTOP = 2
};

/// Constant 'EDAMP'.
enum
{
  protocol__msg__MotionStatus__EDAMP = 3
};

/// Constant 'LIFTED'.
enum
{
  protocol__msg__MotionStatus__LIFTED = 4
};

/// Constant 'BAN_TRANS'.
enum
{
  protocol__msg__MotionStatus__BAN_TRANS = 5
};

/// Constant 'OVER_HEAT'.
enum
{
  protocol__msg__MotionStatus__OVER_HEAT = 6
};

/// Constant 'LOW_BAT'.
enum
{
  protocol__msg__MotionStatus__LOW_BAT = 7
};

/// Constant 'ORI_ERR'.
enum
{
  protocol__msg__MotionStatus__ORI_ERR = 8
};

/// Constant 'FOOTPOS_ERR'.
enum
{
  protocol__msg__MotionStatus__FOOTPOS_ERR = 9
};

/// Constant 'STAND_STUCK'.
enum
{
  protocol__msg__MotionStatus__STAND_STUCK = 10
};

/// Constant 'MOTOR_OVER_HEAT'.
enum
{
  protocol__msg__MotionStatus__MOTOR_OVER_HEAT = 11
};

/// Constant 'MOTOR_OVER_CURR'.
enum
{
  protocol__msg__MotionStatus__MOTOR_OVER_CURR = 12
};

/// Constant 'MOTOR_ERR'.
enum
{
  protocol__msg__MotionStatus__MOTOR_ERR = 13
};

/// Constant 'CHARGING'.
enum
{
  protocol__msg__MotionStatus__CHARGING = 14
};

// Include directives for member types
// Member 'motor_error'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MotionStatus in the package protocol.
typedef struct protocol__msg__MotionStatus
{
  int32_t motion_id;
  int8_t contact;
  int8_t order_process_bar;
  int8_t switch_status;
  int8_t ori_error;
  int16_t footpos_error;
  rosidl_runtime_c__int32__Sequence motor_error;
} protocol__msg__MotionStatus;

// Struct for a sequence of protocol__msg__MotionStatus.
typedef struct protocol__msg__MotionStatus__Sequence
{
  protocol__msg__MotionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_STATUS__STRUCT_H_
