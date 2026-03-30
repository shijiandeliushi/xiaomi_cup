// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/Map.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MAP__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAP_COMMAND_TYPE_UNKNOWN'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_UNKNOWN = 0
};

/// Constant 'MAP_COMMAND_TYPE_INSERT'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_INSERT = 1
};

/// Constant 'MAP_COMMAND_TYPE_DELETE'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_DELETE = 2
};

/// Constant 'MAP_COMMAND_TYPE_UPDATE'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_UPDATE = 3
};

/// Constant 'MAP_COMMAND_TYPE_QUERY'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_QUERY = 4
};

/// Constant 'MAP_COMMAND_TYPE_LOAD'.
enum
{
  protocol__srv__Map_Request__MAP_COMMAND_TYPE_LOAD = 5
};

/// Constant 'MAP_BUILD_TYPE_UNKNOWN'.
enum
{
  protocol__srv__Map_Request__MAP_BUILD_TYPE_UNKNOWN = 0
};

/// Constant 'MAP_BUILD_TYPE_LIDAR'.
enum
{
  protocol__srv__Map_Request__MAP_BUILD_TYPE_LIDAR = 1
};

/// Constant 'MAP_BUILD_TYPE_VISION'.
enum
{
  protocol__srv__Map_Request__MAP_BUILD_TYPE_VISION = 2
};

// Include directives for member types
// Member 'request'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Map in the package protocol.
typedef struct protocol__srv__Map_Request
{
  uint8_t command;
  uint8_t map_build_type;
  rosidl_runtime_c__String request;
} protocol__srv__Map_Request;

// Struct for a sequence of protocol__srv__Map_Request.
typedef struct protocol__srv__Map_Request__Sequence
{
  protocol__srv__Map_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Map_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Map in the package protocol.
typedef struct protocol__srv__Map_Response
{
  rosidl_runtime_c__String response;
  int32_t code;
} protocol__srv__Map_Response;

// Struct for a sequence of protocol__srv__Map_Response.
typedef struct protocol__srv__Map_Response__Sequence
{
  protocol__srv__Map_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Map_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MAP__STRUCT_H_
