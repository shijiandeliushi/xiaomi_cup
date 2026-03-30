// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AccountAdd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_ADD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_ADD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'member'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AccountAdd in the package protocol.
typedef struct protocol__srv__AccountAdd_Request
{
  rosidl_runtime_c__String member;
} protocol__srv__AccountAdd_Request;

// Struct for a sequence of protocol__srv__AccountAdd_Request.
typedef struct protocol__srv__AccountAdd_Request__Sequence
{
  protocol__srv__AccountAdd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AccountAdd_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AccountAdd in the package protocol.
typedef struct protocol__srv__AccountAdd_Response
{
  int32_t code;
} protocol__srv__AccountAdd_Response;

// Struct for a sequence of protocol__srv__AccountAdd_Response.
typedef struct protocol__srv__AccountAdd_Response__Sequence
{
  protocol__srv__AccountAdd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AccountAdd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_ADD__STRUCT_H_
