// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'client'
#include "rosidl_runtime_c/string.h"
// Member 'status'
#include "protocol/msg/detail/audio_status__struct.h"

// Struct defined in srv/AudioExecute in the package protocol.
typedef struct protocol__srv__AudioExecute_Request
{
  rosidl_runtime_c__String client;
  protocol__msg__AudioStatus status;
} protocol__srv__AudioExecute_Request;

// Struct for a sequence of protocol__srv__AudioExecute_Request.
typedef struct protocol__srv__AudioExecute_Request__Sequence
{
  protocol__srv__AudioExecute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioExecute_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioExecute in the package protocol.
typedef struct protocol__srv__AudioExecute_Response
{
  bool result;
  int32_t code;
} protocol__srv__AudioExecute_Response;

// Struct for a sequence of protocol__srv__AudioExecute_Response.
typedef struct protocol__srv__AudioExecute_Response__Sequence
{
  protocol__srv__AudioExecute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioExecute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_H_
