// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SelfCheckStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SelfCheckStatus in the package protocol.
typedef struct protocol__msg__SelfCheckStatus
{
  int32_t code;
  rosidl_runtime_c__String description;
} protocol__msg__SelfCheckStatus;

// Struct for a sequence of protocol__msg__SelfCheckStatus.
typedef struct protocol__msg__SelfCheckStatus__Sequence
{
  protocol__msg__SelfCheckStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SelfCheckStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__STRUCT_H_
