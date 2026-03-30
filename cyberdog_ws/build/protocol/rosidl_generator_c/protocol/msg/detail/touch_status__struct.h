// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/TouchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_H_

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

// Struct defined in msg/TouchStatus in the package protocol.
typedef struct protocol__msg__TouchStatus
{
  std_msgs__msg__Header header;
  int32_t touch_state;
  uint64_t timestamp;
} protocol__msg__TouchStatus;

// Struct for a sequence of protocol__msg__TouchStatus.
typedef struct protocol__msg__TouchStatus__Sequence
{
  protocol__msg__TouchStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__TouchStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TOUCH_STATUS__STRUCT_H_
