// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FACE__STRUCT_H_

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
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Face in the package protocol.
typedef struct protocol__msg__Face
{
  sensor_msgs__msg__RegionOfInterest roi;
  rosidl_runtime_c__String id;
  float score;
  float match;
  float yaw;
  float pitch;
  float row;
  bool is_host;
  float age;
  float emotion;
} protocol__msg__Face;

// Struct for a sequence of protocol__msg__Face.
typedef struct protocol__msg__Face__Sequence
{
  protocol__msg__Face * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Face__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FACE__STRUCT_H_
