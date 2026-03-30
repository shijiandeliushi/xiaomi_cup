// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/VoicePrint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINT__STRUCT_H_

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
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VoicePrint in the package protocol.
typedef struct protocol__msg__VoicePrint
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String id;
} protocol__msg__VoicePrint;

// Struct for a sequence of protocol__msg__VoicePrint.
typedef struct protocol__msg__VoicePrint__Sequence
{
  protocol__msg__VoicePrint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__VoicePrint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINT__STRUCT_H_
