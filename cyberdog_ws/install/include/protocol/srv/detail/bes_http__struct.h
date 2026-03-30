// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/BesHttp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HTTP_METHOD_GET'.
enum
{
  protocol__srv__BesHttp_Request__HTTP_METHOD_GET = 0
};

/// Constant 'HTTP_METHOD_POST'.
enum
{
  protocol__srv__BesHttp_Request__HTTP_METHOD_POST = 1
};

// Include directives for member types
// Member 'url'
// Member 'params'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/BesHttp in the package protocol.
typedef struct protocol__srv__BesHttp_Request
{
  uint8_t method;
  rosidl_runtime_c__String url;
  rosidl_runtime_c__String params;
  uint16_t milsecs;
} protocol__srv__BesHttp_Request;

// Struct for a sequence of protocol__srv__BesHttp_Request.
typedef struct protocol__srv__BesHttp_Request__Sequence
{
  protocol__srv__BesHttp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BesHttp_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/BesHttp in the package protocol.
typedef struct protocol__srv__BesHttp_Response
{
  rosidl_runtime_c__String data;
  int32_t code;
} protocol__srv__BesHttp_Response;

// Struct for a sequence of protocol__srv__BesHttp_Response.
typedef struct protocol__srv__BesHttp_Response__Sequence
{
  protocol__srv__BesHttp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BesHttp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__BES_HTTP__STRUCT_H_
