// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_H_

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
// Member 'data'
#include "protocol/msg/detail/uwb_raw__struct.h"

// Struct defined in msg/UwbArray in the package protocol.
typedef struct protocol__msg__UwbArray
{
  std_msgs__msg__Header header;
  protocol__msg__UwbRaw__Sequence data;
} protocol__msg__UwbArray;

// Struct for a sequence of protocol__msg__UwbArray.
typedef struct protocol__msg__UwbArray__Sequence
{
  protocol__msg__UwbArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__UwbArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__UWB_ARRAY__STRUCT_H_
