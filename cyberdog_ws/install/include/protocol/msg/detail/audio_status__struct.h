// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AudioStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUDIO_STATUS_NORMAL'.
enum
{
  protocol__msg__AudioStatus__AUDIO_STATUS_NORMAL = 0
};

/// Constant 'AUDIO_STATUS_OFFMIC'.
enum
{
  protocol__msg__AudioStatus__AUDIO_STATUS_OFFMIC = 1
};

// Struct defined in msg/AudioStatus in the package protocol.
typedef struct protocol__msg__AudioStatus
{
  uint8_t state;
} protocol__msg__AudioStatus;

// Struct for a sequence of protocol__msg__AudioStatus.
typedef struct protocol__msg__AudioStatus__Sequence
{
  protocol__msg__AudioStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AudioStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_STATUS__STRUCT_H_
