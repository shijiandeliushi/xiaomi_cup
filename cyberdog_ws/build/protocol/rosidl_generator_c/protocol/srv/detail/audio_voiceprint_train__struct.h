// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioVoiceprintTrain.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TID_START'.
enum
{
  protocol__srv__AudioVoiceprintTrain_Request__TID_START = 1
};

/// Constant 'TID_CANCEL'.
enum
{
  protocol__srv__AudioVoiceprintTrain_Request__TID_CANCEL = 2
};

// Include directives for member types
// Member 'voice_print'
#include "protocol/msg/detail/voice_print__struct.h"

// Struct defined in srv/AudioVoiceprintTrain in the package protocol.
typedef struct protocol__srv__AudioVoiceprintTrain_Request
{
  uint8_t train_id;
  protocol__msg__VoicePrint voice_print;
} protocol__srv__AudioVoiceprintTrain_Request;

// Struct for a sequence of protocol__srv__AudioVoiceprintTrain_Request.
typedef struct protocol__srv__AudioVoiceprintTrain_Request__Sequence
{
  protocol__srv__AudioVoiceprintTrain_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintTrain_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioVoiceprintTrain in the package protocol.
typedef struct protocol__srv__AudioVoiceprintTrain_Response
{
  int32_t code;
} protocol__srv__AudioVoiceprintTrain_Response;

// Struct for a sequence of protocol__srv__AudioVoiceprintTrain_Response.
typedef struct protocol__srv__AudioVoiceprintTrain_Response__Sequence
{
  protocol__srv__AudioVoiceprintTrain_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVoiceprintTrain_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_H_
