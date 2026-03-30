// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/OtaAudio.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_H_

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

// Struct defined in msg/OtaAudio in the package protocol.
typedef struct protocol__msg__OtaAudio
{
  uint32_t command;
  rosidl_runtime_c__String version;
} protocol__msg__OtaAudio;

// Struct for a sequence of protocol__msg__OtaAudio.
typedef struct protocol__msg__OtaAudio__Sequence
{
  protocol__msg__OtaAudio * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__OtaAudio__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__OTA_AUDIO__STRUCT_H_
