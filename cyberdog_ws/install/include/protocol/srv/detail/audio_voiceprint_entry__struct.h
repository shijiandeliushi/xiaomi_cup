// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioVoiceprintEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AVE_DELETE_VOICEPRINT'.
enum
{
  protocol__srv__AudioVoiceprintEntry_Request__AVE_DELETE_VOICEPRINT = 4
};

// Include directives for member types
// Member 'username'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AudioVoiceprintEntry in the package protocol.
typedef struct protocol__srv__AudioVoiceprintEntry_Request
{
  uint8_t command;
  rosidl_runtime_c__String username;
} protocol__srv__AudioVoiceprintEntry_Request;

// Struct for a sequence of protocol__srv__AudioVoiceprintEntry_Request.
typedef struct protocol__srv__AudioVoiceprintEntry_Request__Sequence
{
  protocol__srv__AudioVoiceprintEntry_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintEntry_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioVoiceprintEntry in the package protocol.
typedef struct protocol__srv__AudioVoiceprintEntry_Response
{
  bool success;
  int32_t code;
} protocol__srv__AudioVoiceprintEntry_Response;

// Struct for a sequence of protocol__srv__AudioVoiceprintEntry_Response.
typedef struct protocol__srv__AudioVoiceprintEntry_Response__Sequence
{
  protocol__srv__AudioVoiceprintEntry_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintEntry_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__STRUCT_H_
