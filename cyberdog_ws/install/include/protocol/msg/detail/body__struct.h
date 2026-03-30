// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BODY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'reid'
#include "rosidl_runtime_c/string.h"
// Member 'feats'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'keypoints'
#include "protocol/msg/detail/keypoint__struct.h"
// Member 'gesture'
#include "protocol/msg/detail/gesture__struct.h"

// Struct defined in msg/Body in the package protocol.
typedef struct protocol__msg__Body
{
  sensor_msgs__msg__RegionOfInterest roi;
  rosidl_runtime_c__String reid;
  rosidl_runtime_c__float__Sequence feats;
  protocol__msg__Keypoint__Sequence keypoints;
  protocol__msg__Gesture gesture;
} protocol__msg__Body;

// Struct for a sequence of protocol__msg__Body.
typedef struct protocol__msg__Body__Sequence
{
  protocol__msg__Body * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Body__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BODY__STRUCT_H_
