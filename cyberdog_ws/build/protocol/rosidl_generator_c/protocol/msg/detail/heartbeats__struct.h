// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Heartbeats.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__HEARTBEATS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__HEARTBEATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'params'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Heartbeats in the package protocol.
typedef struct protocol__msg__Heartbeats
{
  rosidl_runtime_c__String name;
  int8_t state;
  int64_t timestamp;
  rosidl_runtime_c__String params;
} protocol__msg__Heartbeats;

// Struct for a sequence of protocol__msg__Heartbeats.
typedef struct protocol__msg__Heartbeats__Sequence
{
  protocol__msg__Heartbeats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Heartbeats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__HEARTBEATS__STRUCT_H_
