// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/ManagerState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'err_msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ManagerState in the package protocol.
typedef struct protocol__msg__ManagerState
{
  int8_t state;
  rosidl_runtime_c__String err_msg;
} protocol__msg__ManagerState;

// Struct for a sequence of protocol__msg__ManagerState.
typedef struct protocol__msg__ManagerState__Sequence
{
  protocol__msg__ManagerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__ManagerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MANAGER_STATE__STRUCT_H_
