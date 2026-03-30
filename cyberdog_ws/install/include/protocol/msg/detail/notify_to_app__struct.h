// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/NotifyToApp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ssid'
// Member 'ip'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/NotifyToApp in the package protocol.
typedef struct protocol__msg__NotifyToApp
{
  rosidl_runtime_c__String ssid;
  rosidl_runtime_c__String ip;
  int32_t code;
} protocol__msg__NotifyToApp;

// Struct for a sequence of protocol__msg__NotifyToApp.
typedef struct protocol__msg__NotifyToApp__Sequence
{
  protocol__msg__NotifyToApp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__NotifyToApp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__STRUCT_H_
