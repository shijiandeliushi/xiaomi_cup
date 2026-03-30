// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module_name'
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'speech'
#include "protocol/msg/detail/audio_play__struct.h"

// Struct defined in msg/AudioPlayExtend in the package protocol.
typedef struct protocol__msg__AudioPlayExtend
{
  rosidl_runtime_c__String module_name;
  bool is_online;
  protocol__msg__AudioPlay speech;
  rosidl_runtime_c__String text;
} protocol__msg__AudioPlayExtend;

// Struct for a sequence of protocol__msg__AudioPlayExtend.
typedef struct protocol__msg__AudioPlayExtend__Sequence
{
  protocol__msg__AudioPlayExtend * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AudioPlayExtend__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_H_
