// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioTextPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__STRUCT_H_

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

// Struct defined in srv/AudioTextPlay in the package protocol.
typedef struct protocol__srv__AudioTextPlay_Request
{
  rosidl_runtime_c__String module_name;
  bool is_online;
  protocol__msg__AudioPlay speech;
  rosidl_runtime_c__String text;
} protocol__srv__AudioTextPlay_Request;

// Struct for a sequence of protocol__srv__AudioTextPlay_Request.
typedef struct protocol__srv__AudioTextPlay_Request__Sequence
{
  protocol__srv__AudioTextPlay_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioTextPlay_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioTextPlay in the package protocol.
typedef struct protocol__srv__AudioTextPlay_Response
{
  uint8_t status;
  int32_t code;
} protocol__srv__AudioTextPlay_Response;

// Struct for a sequence of protocol__srv__AudioTextPlay_Response.
typedef struct protocol__srv__AudioTextPlay_Response__Sequence
{
  protocol__srv__AudioTextPlay_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioTextPlay_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__STRUCT_H_
