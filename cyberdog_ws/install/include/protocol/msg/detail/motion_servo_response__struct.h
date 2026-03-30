// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotionServoResponse in the package protocol.
typedef struct protocol__msg__MotionServoResponse
{
  int32_t motion_id;
  int32_t cmd_id;
  int8_t order_process_bar;
  int8_t status;
  bool result;
  int32_t code;
} protocol__msg__MotionServoResponse;

// Struct for a sequence of protocol__msg__MotionServoResponse.
typedef struct protocol__msg__MotionServoResponse__Sequence
{
  protocol__msg__MotionServoResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionServoResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__STRUCT_H_
