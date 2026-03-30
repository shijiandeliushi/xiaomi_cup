// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/GetUWBMacSessionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetUWBMacSessionID in the package protocol.
typedef struct protocol__srv__GetUWBMacSessionID_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__GetUWBMacSessionID_Request;

// Struct for a sequence of protocol__srv__GetUWBMacSessionID_Request.
typedef struct protocol__srv__GetUWBMacSessionID_Request__Sequence
{
  protocol__srv__GetUWBMacSessionID_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GetUWBMacSessionID_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetUWBMacSessionID in the package protocol.
typedef struct protocol__srv__GetUWBMacSessionID_Response
{
  uint32_t session_id;
  uint16_t master;
  uint16_t slave1;
  uint16_t slave2;
  uint16_t slave3;
  uint16_t slave4;
  int32_t code;
} protocol__srv__GetUWBMacSessionID_Response;

// Struct for a sequence of protocol__srv__GetUWBMacSessionID_Response.
typedef struct protocol__srv__GetUWBMacSessionID_Response__Sequence
{
  protocol__srv__GetUWBMacSessionID_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GetUWBMacSessionID_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__STRUCT_H_
