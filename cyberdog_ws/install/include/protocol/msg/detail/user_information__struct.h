// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/UserInformation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'username'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/UserInformation in the package protocol.
typedef struct protocol__msg__UserInformation
{
  int32_t id;
  rosidl_runtime_c__String username;
  int32_t voicestatus;
  int32_t facestatus;
} protocol__msg__UserInformation;

// Struct for a sequence of protocol__msg__UserInformation.
typedef struct protocol__msg__UserInformation__Sequence
{
  protocol__msg__UserInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__UserInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__USER_INFORMATION__STRUCT_H_
