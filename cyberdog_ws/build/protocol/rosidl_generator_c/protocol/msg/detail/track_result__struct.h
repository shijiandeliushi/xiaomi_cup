// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in msg/TrackResult in the package protocol.
typedef struct protocol__msg__TrackResult
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__RegionOfInterest roi;
} protocol__msg__TrackResult;

// Struct for a sequence of protocol__msg__TrackResult.
typedef struct protocol__msg__TrackResult__Sequence
{
  protocol__msg__TrackResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__TrackResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TRACK_RESULT__STRUCT_H_
