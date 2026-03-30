// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uid'
// Member 'token_access'
// Member 'token_fresh'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/AuthToken in the package protocol.
typedef struct protocol__msg__AuthToken
{
  rosidl_runtime_c__String uid;
  rosidl_runtime_c__String token_access;
  rosidl_runtime_c__String token_fresh;
  uint64_t token_expirein;
} protocol__msg__AuthToken;

// Struct for a sequence of protocol__msg__AuthToken.
typedef struct protocol__msg__AuthToken__Sequence
{
  protocol__msg__AuthToken * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AuthToken__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__AUTH_TOKEN__STRUCT_H_
