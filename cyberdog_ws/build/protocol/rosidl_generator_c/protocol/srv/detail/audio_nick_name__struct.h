// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioNickName.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nick_name'
// Member 'wake_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AudioNickName in the package protocol.
typedef struct protocol__srv__AudioNickName_Request
{
  rosidl_runtime_c__String nick_name;
  rosidl_runtime_c__String wake_name;
} protocol__srv__AudioNickName_Request;

// Struct for a sequence of protocol__srv__AudioNickName_Request.
typedef struct protocol__srv__AudioNickName_Request__Sequence
{
  protocol__srv__AudioNickName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioNickName_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioNickName in the package protocol.
typedef struct protocol__srv__AudioNickName_Response
{
  bool success;
  int32_t code;
} protocol__srv__AudioNickName_Response;

// Struct for a sequence of protocol__srv__AudioNickName_Response.
typedef struct protocol__srv__AudioNickName_Response__Sequence
{
  protocol__srv__AudioNickName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioNickName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_H_
