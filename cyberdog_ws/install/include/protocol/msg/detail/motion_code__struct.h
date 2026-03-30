// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionCode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  protocol__msg__MotionCode__OK = 0l
};

/// Constant 'HW_LOW_BATTERY'.
enum
{
  protocol__msg__MotionCode__HW_LOW_BATTERY = 300l
};

/// Constant 'HW_MOTOR_OFFLINE'.
enum
{
  protocol__msg__MotionCode__HW_MOTOR_OFFLINE = 301l
};

/// Constant 'COM_LCM_TIMEOUT'.
enum
{
  protocol__msg__MotionCode__COM_LCM_TIMEOUT = 310l
};

/// Constant 'MOTION_SWITCH_ERROR'.
enum
{
  protocol__msg__MotionCode__MOTION_SWITCH_ERROR = 320l
};

/// Constant 'MOTION_TRANSITION_TIMEOUT'.
enum
{
  protocol__msg__MotionCode__MOTION_TRANSITION_TIMEOUT = 321l
};

/// Constant 'MOTION_EXECUTE_TIMEOUT'.
enum
{
  protocol__msg__MotionCode__MOTION_EXECUTE_TIMEOUT = 322l
};

/// Constant 'MOTION_EXECUTE_ERROR'.
enum
{
  protocol__msg__MotionCode__MOTION_EXECUTE_ERROR = 323l
};

/// Constant 'COMMAND_INVALID'.
enum
{
  protocol__msg__MotionCode__COMMAND_INVALID = 330l
};

/// Constant 'TASK_STATE_ERROR'.
enum
{
  protocol__msg__MotionCode__TASK_STATE_ERROR = 340l
};

/// Constant 'TASK_MODE_ERROR'.
enum
{
  protocol__msg__MotionCode__TASK_MODE_ERROR = 341l
};

// Struct defined in msg/MotionCode in the package protocol.
typedef struct protocol__msg__MotionCode
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MotionCode;

// Struct for a sequence of protocol__msg__MotionCode.
typedef struct protocol__msg__MotionCode__Sequence
{
  protocol__msg__MotionCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CODE__STRUCT_H_
