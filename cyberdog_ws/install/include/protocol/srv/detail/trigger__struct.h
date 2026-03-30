// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRIGGER__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Trigger in the package protocol.
typedef struct protocol__srv__Trigger_Request
{
  rosidl_runtime_c__String data;
} protocol__srv__Trigger_Request;

// Struct for a sequence of protocol__srv__Trigger_Request.
typedef struct protocol__srv__Trigger_Request__Sequence
{
  protocol__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Trigger_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Trigger in the package protocol.
typedef struct protocol__srv__Trigger_Response
{
  bool success;
  rosidl_runtime_c__String message;
  int32_t code;
} protocol__srv__Trigger_Response;

// Struct for a sequence of protocol__srv__Trigger_Response.
typedef struct protocol__srv__Trigger_Response__Sequence
{
  protocol__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Trigger_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__TRIGGER__STRUCT_H_
