// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/OtaMotion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'version'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/OtaMotion in the package protocol.
typedef struct protocol__msg__OtaMotion
{
  uint32_t command;
  rosidl_runtime_c__String version;
} protocol__msg__OtaMotion;

// Struct for a sequence of protocol__msg__OtaMotion.
typedef struct protocol__msg__OtaMotion__Sequence
{
  protocol__msg__OtaMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__OtaMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__OTA_MOTION__STRUCT_H_
