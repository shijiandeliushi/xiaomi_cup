// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotionQueueCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmds'
#include "protocol/msg/detail/motion_custom_cmd__struct.h"

// Struct defined in srv/MotionQueueCustomCmd in the package protocol.
typedef struct protocol__srv__MotionQueueCustomCmd_Request
{
  protocol__msg__MotionCustomCmd__Sequence cmds;
} protocol__srv__MotionQueueCustomCmd_Request;

// Struct for a sequence of protocol__srv__MotionQueueCustomCmd_Request.
typedef struct protocol__srv__MotionQueueCustomCmd_Request__Sequence
{
  protocol__srv__MotionQueueCustomCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionQueueCustomCmd_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotionQueueCustomCmd in the package protocol.
typedef struct protocol__srv__MotionQueueCustomCmd_Response
{
  bool result;
  int32_t code;
} protocol__srv__MotionQueueCustomCmd_Response;

// Struct for a sequence of protocol__srv__MotionQueueCustomCmd_Response.
typedef struct protocol__srv__MotionQueueCustomCmd_Response__Sequence
{
  protocol__srv__MotionQueueCustomCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionQueueCustomCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__STRUCT_H_
