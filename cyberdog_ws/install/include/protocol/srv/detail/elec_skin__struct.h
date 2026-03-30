// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/ElecSkin.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ELEC_SKIN__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__ELEC_SKIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ElecSkin in the package protocol.
typedef struct protocol__srv__ElecSkin_Request
{
  int32_t mode;
  int32_t wave_cycle_time;
} protocol__srv__ElecSkin_Request;

// Struct for a sequence of protocol__srv__ElecSkin_Request.
typedef struct protocol__srv__ElecSkin_Request__Sequence
{
  protocol__srv__ElecSkin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ElecSkin_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ElecSkin in the package protocol.
typedef struct protocol__srv__ElecSkin_Response
{
  bool success;
} protocol__srv__ElecSkin_Response;

// Struct for a sequence of protocol__srv__ElecSkin_Response.
typedef struct protocol__srv__ElecSkin_Response__Sequence
{
  protocol__srv__ElecSkin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__ElecSkin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__ELEC_SKIN__STRUCT_H_
