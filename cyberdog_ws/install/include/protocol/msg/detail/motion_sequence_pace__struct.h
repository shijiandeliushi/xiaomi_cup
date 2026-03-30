// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionSequencePace.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_H_

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
// Member 'weight'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'centroid'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

// Struct defined in msg/MotionSequencePace in the package protocol.
typedef struct protocol__msg__MotionSequencePace
{
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Pose centroid;
  geometry_msgs__msg__Twist weight;
  geometry_msgs__msg__Quaternion right_forefoot;
  geometry_msgs__msg__Quaternion left_forefoot;
  geometry_msgs__msg__Quaternion right_hindfoot;
  geometry_msgs__msg__Quaternion left_hindfoot;
  float friction_coefficient;
  float landing_gain;
  bool use_mpc_track;
  int64_t duration;
} protocol__msg__MotionSequencePace;

// Struct for a sequence of protocol__msg__MotionSequencePace.
typedef struct protocol__msg__MotionSequencePace__Sequence
{
  protocol__msg__MotionSequencePace * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionSequencePace__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__STRUCT_H_
