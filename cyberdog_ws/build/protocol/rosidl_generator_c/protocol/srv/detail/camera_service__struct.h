// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/CameraService.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SET_PARAMETERS'.
enum
{
  protocol__srv__CameraService_Request__SET_PARAMETERS = 0
};

/// Constant 'TAKE_PICTURE'.
enum
{
  protocol__srv__CameraService_Request__TAKE_PICTURE = 1
};

/// Constant 'START_RECORDING'.
enum
{
  protocol__srv__CameraService_Request__START_RECORDING = 2
};

/// Constant 'STOP_RECORDING'.
enum
{
  protocol__srv__CameraService_Request__STOP_RECORDING = 3
};

/// Constant 'GET_STATE'.
enum
{
  protocol__srv__CameraService_Request__GET_STATE = 4
};

/// Constant 'DELETE_FILE'.
enum
{
  protocol__srv__CameraService_Request__DELETE_FILE = 5
};

/// Constant 'GET_ALL_FILES'.
enum
{
  protocol__srv__CameraService_Request__GET_ALL_FILES = 6
};

/// Constant 'START_LIVE_STREAM'.
enum
{
  protocol__srv__CameraService_Request__START_LIVE_STREAM = 7
};

/// Constant 'STOP_LIVE_STREAM'.
enum
{
  protocol__srv__CameraService_Request__STOP_LIVE_STREAM = 8
};

/// Constant 'START_IMAGE_PUBLISH'.
enum
{
  protocol__srv__CameraService_Request__START_IMAGE_PUBLISH = 9
};

/// Constant 'STOP_IMAGE_PUBLISH'.
enum
{
  protocol__srv__CameraService_Request__STOP_IMAGE_PUBLISH = 10
};

// Include directives for member types
// Member 'args'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/CameraService in the package protocol.
typedef struct protocol__srv__CameraService_Request
{
  uint8_t command;
  rosidl_runtime_c__String args;
  uint16_t width;
  uint16_t height;
  uint16_t fps;
} protocol__srv__CameraService_Request;

// Struct for a sequence of protocol__srv__CameraService_Request.
typedef struct protocol__srv__CameraService_Request__Sequence
{
  protocol__srv__CameraService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__CameraService_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__CameraService_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_INVALID_ARGS'.
enum
{
  protocol__srv__CameraService_Response__RESULT_INVALID_ARGS = 1
};

/// Constant 'RESULT_UNSUPPORTED'.
enum
{
  protocol__srv__CameraService_Response__RESULT_UNSUPPORTED = 2
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__srv__CameraService_Response__RESULT_TIMEOUT = 3
};

/// Constant 'RESULT_BUSY'.
enum
{
  protocol__srv__CameraService_Response__RESULT_BUSY = 4
};

/// Constant 'RESULT_INVALID_STATE'.
enum
{
  protocol__srv__CameraService_Response__RESULT_INVALID_STATE = 5
};

/// Constant 'RESULT_INNER_ERROR'.
enum
{
  protocol__srv__CameraService_Response__RESULT_INNER_ERROR = 6
};

/// Constant 'RESULT_UNDEFINED_ERROR'.
enum
{
  protocol__srv__CameraService_Response__RESULT_UNDEFINED_ERROR = 255
};

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/CameraService in the package protocol.
typedef struct protocol__srv__CameraService_Response
{
  uint8_t result;
  rosidl_runtime_c__String msg;
  int32_t code;
} protocol__srv__CameraService_Response;

// Struct for a sequence of protocol__srv__CameraService_Response.
typedef struct protocol__srv__CameraService_Response__Sequence
{
  protocol__srv__CameraService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__CameraService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__STRUCT_H_
