// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/ConnectPc.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECT_PC__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__CONNECT_PC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ConnectPc in the package protocol.
typedef struct protocol__srv__ConnectPc_Request
{
  uint8_t connect_which;
} protocol__srv__ConnectPc_Request;

// Struct for a sequence of protocol__srv__ConnectPc_Request.
typedef struct protocol__srv__ConnectPc_Request__Sequence
{
  protocol__srv__ConnectPc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ConnectPc_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConnectPc in the package protocol.
typedef struct protocol__srv__ConnectPc_Response
{
  bool success;
} protocol__srv__ConnectPc_Response;

// Struct for a sequence of protocol__srv__ConnectPc_Response.
typedef struct protocol__srv__ConnectPc_Response__Sequence
{
  protocol__srv__ConnectPc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ConnectPc_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__CONNECT_PC__STRUCT_H_
