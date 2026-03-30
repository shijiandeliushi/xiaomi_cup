// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotionSequenceGait in the package protocol.
typedef struct protocol__msg__MotionSequenceGait
{
  bool right_forefoot;
  bool left_forefoot;
  bool right_hindfoot;
  bool left_hindfoot;
  int64_t duration;
} protocol__msg__MotionSequenceGait;

// Struct for a sequence of protocol__msg__MotionSequenceGait.
typedef struct protocol__msg__MotionSequenceGait__Sequence
{
  protocol__msg__MotionSequenceGait * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionSequenceGait__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__STRUCT_H_
