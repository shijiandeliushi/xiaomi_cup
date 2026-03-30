// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/GestureActionControl.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'START_ALGO'.
enum
{
  protocol__srv__GestureActionControl_Request__START_ALGO = 0
};

/// Constant 'STOP_ALGO'.
enum
{
  protocol__srv__GestureActionControl_Request__STOP_ALGO = 1
};

/// Constant 'DEFAUT_TIMEOUT'.
enum
{
  protocol__srv__GestureActionControl_Request__DEFAUT_TIMEOUT = 60l
};

// Struct defined in srv/GestureActionControl in the package protocol.
typedef struct protocol__srv__GestureActionControl_Request
{
  uint8_t command;
  int32_t timeout;
} protocol__srv__GestureActionControl_Request;

// Struct for a sequence of protocol__srv__GestureActionControl_Request.
typedef struct protocol__srv__GestureActionControl_Request__Sequence
{
  protocol__srv__GestureActionControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GestureActionControl_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__GestureActionControl_Response__RESULT_SUCCESS = 0l
};

/// Constant 'RESULT_BUSY'.
enum
{
  protocol__srv__GestureActionControl_Response__RESULT_BUSY = 1l
};

// Struct defined in srv/GestureActionControl in the package protocol.
typedef struct protocol__srv__GestureActionControl_Response
{
  int32_t code;
} protocol__srv__GestureActionControl_Response;

// Struct for a sequence of protocol__srv__GestureActionControl_Response.
typedef struct protocol__srv__GestureActionControl_Response__Sequence
{
  protocol__srv__GestureActionControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GestureActionControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__STRUCT_H_
