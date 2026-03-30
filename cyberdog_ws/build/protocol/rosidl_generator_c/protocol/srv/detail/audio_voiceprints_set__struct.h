// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioVoiceprintsSet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'voice_prints'
#include "protocol/msg/detail/voice_prints__struct.h"

// Struct defined in srv/AudioVoiceprintsSet in the package protocol.
typedef struct protocol__srv__AudioVoiceprintsSet_Request
{
  protocol__msg__VoicePrints voice_prints;
} protocol__srv__AudioVoiceprintsSet_Request;

// Struct for a sequence of protocol__srv__AudioVoiceprintsSet_Request.
typedef struct protocol__srv__AudioVoiceprintsSet_Request__Sequence
{
  protocol__srv__AudioVoiceprintsSet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintsSet_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioVoiceprintsSet in the package protocol.
typedef struct protocol__srv__AudioVoiceprintsSet_Response
{
  bool result;
  int32_t code;
} protocol__srv__AudioVoiceprintsSet_Response;

// Struct for a sequence of protocol__srv__AudioVoiceprintsSet_Response.
typedef struct protocol__srv__AudioVoiceprintsSet_Response__Sequence
{
  protocol__srv__AudioVoiceprintsSet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintsSet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_H_
