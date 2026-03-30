// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/OtaCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_CMD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__OTA_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
// Member 'type'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/OtaCmd in the package protocol.
typedef struct protocol__msg__OtaCmd
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
  rosidl_runtime_c__String type;
} protocol__msg__OtaCmd;

// Struct for a sequence of protocol__msg__OtaCmd.
typedef struct protocol__msg__OtaCmd__Sequence
{
  protocol__msg__OtaCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__OtaCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__OTA_CMD__STRUCT_H_
