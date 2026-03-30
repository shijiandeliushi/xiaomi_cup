// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/UwbRaw.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_H_

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

// Struct defined in msg/UwbRaw in the package protocol.
typedef struct protocol__msg__UwbRaw
{
  std_msgs__msg__Header header;
  float dist;
  float angle;
  float n_los;
  float rssi_1;
  float rssi_2;
} protocol__msg__UwbRaw;

// Struct for a sequence of protocol__msg__UwbRaw.
typedef struct protocol__msg__UwbRaw__Sequence
{
  protocol__msg__UwbRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__UwbRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__UWB_RAW__STRUCT_H_
