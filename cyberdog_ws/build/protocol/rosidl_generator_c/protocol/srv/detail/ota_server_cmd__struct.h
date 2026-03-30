// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/OtaServerCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "protocol/msg/detail/ota_cmd__struct.h"

// Struct defined in srv/OtaServerCmd in the package protocol.
typedef struct protocol__srv__OtaServerCmd_Request
{
  protocol__msg__OtaCmd request;
} protocol__srv__OtaServerCmd_Request;

// Struct for a sequence of protocol__srv__OtaServerCmd_Request.
typedef struct protocol__srv__OtaServerCmd_Request__Sequence
{
  protocol__srv__OtaServerCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__OtaServerCmd_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "protocol/msg/detail/ota_cmd__struct.h"

// Struct defined in srv/OtaServerCmd in the package protocol.
typedef struct protocol__srv__OtaServerCmd_Response
{
  protocol__msg__OtaCmd response;
  int32_t code;
} protocol__srv__OtaServerCmd_Response;

// Struct for a sequence of protocol__srv__OtaServerCmd_Response.
typedef struct protocol__srv__OtaServerCmd_Response__Sequence
{
  protocol__srv__OtaServerCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__OtaServerCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__STRUCT_H_
