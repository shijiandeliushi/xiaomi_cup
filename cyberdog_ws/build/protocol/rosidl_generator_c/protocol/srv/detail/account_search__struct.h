// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AccountSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_H_

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

// Struct defined in srv/AccountSearch in the package protocol.
typedef struct protocol__srv__AccountSearch_Request
{
  rosidl_runtime_c__String member;
} protocol__srv__AccountSearch_Request;

// Struct for a sequence of protocol__srv__AccountSearch_Request.
typedef struct protocol__srv__AccountSearch_Request__Sequence
{
  protocol__srv__AccountSearch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AccountSearch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AccountSearch in the package protocol.
typedef struct protocol__srv__AccountSearch_Response
{
  rosidl_runtime_c__String data;
  int32_t code;
} protocol__srv__AccountSearch_Response;

// Struct for a sequence of protocol__srv__AccountSearch_Response.
typedef struct protocol__srv__AccountSearch_Response__Sequence
{
  protocol__srv__AccountSearch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AccountSearch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__STRUCT_H_
