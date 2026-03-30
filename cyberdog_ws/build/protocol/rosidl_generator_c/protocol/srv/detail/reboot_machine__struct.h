// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/RebootMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RebootMachine in the package protocol.
typedef struct protocol__srv__RebootMachine_Request
{
  int32_t rebootmachine;
} protocol__srv__RebootMachine_Request;

// Struct for a sequence of protocol__srv__RebootMachine_Request.
typedef struct protocol__srv__RebootMachine_Request__Sequence
{
  protocol__srv__RebootMachine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__RebootMachine_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RebootMachine in the package protocol.
typedef struct protocol__srv__RebootMachine_Response
{
  int32_t rebootresult;
} protocol__srv__RebootMachine_Response;

// Struct for a sequence of protocol__srv__RebootMachine_Response.
typedef struct protocol__srv__RebootMachine_Response__Sequence
{
  protocol__srv__RebootMachine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__RebootMachine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__STRUCT_H_
