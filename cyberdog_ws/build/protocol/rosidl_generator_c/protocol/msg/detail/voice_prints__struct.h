// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prints'
#include "protocol/msg/detail/voice_print__struct.h"

// Struct defined in msg/VoicePrints in the package protocol.
typedef struct protocol__msg__VoicePrints
{
  protocol__msg__VoicePrint__Sequence prints;
} protocol__msg__VoicePrints;

// Struct for a sequence of protocol__msg__VoicePrints.
typedef struct protocol__msg__VoicePrints__Sequence
{
  protocol__msg__VoicePrints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__VoicePrints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINTS__STRUCT_H_
