// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFINITION'.
enum
{
  protocol__srv__MotionCustomCmd_Request__DEFINITION = 0l
};

/// Constant 'EXECUTION'.
enum
{
  protocol__srv__MotionCustomCmd_Request__EXECUTION = 1l
};

/// Constant 'APP'.
enum
{
  protocol__srv__MotionCustomCmd_Request__APP = 0l
};

/// Constant 'AUDIO'.
enum
{
  protocol__srv__MotionCustomCmd_Request__AUDIO = 1l
};

/// Constant 'VIS'.
enum
{
  protocol__srv__MotionCustomCmd_Request__VIS = 2l
};

// Struct defined in srv/MotionCustomCmd in the package protocol.
typedef struct protocol__srv__MotionCustomCmd_Request
{
  int32_t cmd_type;
  int32_t cmd_source;
  int32_t motion_id;
} protocol__srv__MotionCustomCmd_Request;

// Struct for a sequence of protocol__srv__MotionCustomCmd_Request.
typedef struct protocol__srv__MotionCustomCmd_Request__Sequence
{
  protocol__srv__MotionCustomCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionCustomCmd_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotionCustomCmd in the package protocol.
typedef struct protocol__srv__MotionCustomCmd_Response
{
  int32_t motion_id;
  bool result;
  int32_t code;
} protocol__srv__MotionCustomCmd_Response;

// Struct for a sequence of protocol__srv__MotionCustomCmd_Response.
typedef struct protocol__srv__MotionCustomCmd_Response__Sequence
{
  protocol__srv__MotionCustomCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionCustomCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_H_
