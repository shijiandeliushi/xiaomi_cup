// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioAuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uid'
// Member 'token_access'
// Member 'token_fresh'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AudioAuthToken in the package protocol.
typedef struct protocol__srv__AudioAuthToken_Request
{
  rosidl_runtime_c__String uid;
  rosidl_runtime_c__String token_access;
  rosidl_runtime_c__String token_fresh;
  uint64_t token_expirein;
} protocol__srv__AudioAuthToken_Request;

// Struct for a sequence of protocol__srv__AudioAuthToken_Request.
typedef struct protocol__srv__AudioAuthToken_Request__Sequence
{
  protocol__srv__AudioAuthToken_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioAuthToken_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioAuthToken in the package protocol.
typedef struct protocol__srv__AudioAuthToken_Response
{
  bool result;
  int32_t code;
} protocol__srv__AudioAuthToken_Response;

// Struct for a sequence of protocol__srv__AudioAuthToken_Response.
typedef struct protocol__srv__AudioAuthToken_Response__Sequence
{
  protocol__srv__AudioAuthToken_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioAuthToken_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_H_
