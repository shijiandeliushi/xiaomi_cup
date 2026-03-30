// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'voice_print'
#include "protocol/msg/detail/voice_print__struct.h"

// Struct defined in msg/AudioVoiceprintResult in the package protocol.
typedef struct protocol__msg__AudioVoiceprintResult
{
  int32_t code;
  protocol__msg__VoicePrint voice_print;
} protocol__msg__AudioVoiceprintResult;

// Struct for a sequence of protocol__msg__AudioVoiceprintResult.
typedef struct protocol__msg__AudioVoiceprintResult__Sequence
{
  protocol__msg__AudioVoiceprintResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AudioVoiceprintResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_H_
