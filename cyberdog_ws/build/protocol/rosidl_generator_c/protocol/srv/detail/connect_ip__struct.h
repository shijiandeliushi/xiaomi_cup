// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/ConnectIp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECT_IP__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__CONNECT_IP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip_address'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ConnectIp in the package protocol.
typedef struct protocol__srv__ConnectIp_Request
{
  rosidl_runtime_c__String ip_address;
} protocol__srv__ConnectIp_Request;

// Struct for a sequence of protocol__srv__ConnectIp_Request.
typedef struct protocol__srv__ConnectIp_Request__Sequence
{
  protocol__srv__ConnectIp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ConnectIp_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConnectIp in the package protocol.
typedef struct protocol__srv__ConnectIp_Response
{
  bool success;
} protocol__srv__ConnectIp_Response;

// Struct for a sequence of protocol__srv__ConnectIp_Response.
typedef struct protocol__srv__ConnectIp_Response__Sequence
{
  protocol__srv__ConnectIp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ConnectIp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__CONNECT_IP__STRUCT_H_
