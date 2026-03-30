// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionSequenceParam.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'centroid_height'
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/MotionSequenceParam in the package protocol.
typedef struct protocol__msg__MotionSequenceParam
{
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Point centroid_height;
  geometry_msgs__msg__Point right_forefoot;
  geometry_msgs__msg__Point left_forefoot;
  geometry_msgs__msg__Point right_hindfoot;
  geometry_msgs__msg__Point left_hindfoot;
  float forefoot_height;
  float hindfoot_height;
  float friction_coefficient;
  int64_t duration_ms;
} protocol__msg__MotionSequenceParam;

// Struct for a sequence of protocol__msg__MotionSequenceParam.
typedef struct protocol__msg__MotionSequenceParam__Sequence
{
  protocol__msg__MotionSequenceParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionSequenceParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__STRUCT_H_
