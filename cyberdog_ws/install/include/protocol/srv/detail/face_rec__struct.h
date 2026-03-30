// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/FaceRec.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_RECOGNITION_ALL'.
enum
{
  protocol__srv__FaceRec_Request__COMMAND_RECOGNITION_ALL = 0l
};

/// Constant 'COMMAND_RECOGNITION_SINGLE'.
enum
{
  protocol__srv__FaceRec_Request__COMMAND_RECOGNITION_SINGLE = 1l
};

/// Constant 'COMMAND_RECOGNITION_CANCEL'.
enum
{
  protocol__srv__FaceRec_Request__COMMAND_RECOGNITION_CANCEL = 2l
};

/// Constant 'MAX_TIMEOUT'.
enum
{
  protocol__srv__FaceRec_Request__MAX_TIMEOUT = 300l
};

/// Constant 'MIN_TIMEOUT'.
enum
{
  protocol__srv__FaceRec_Request__MIN_TIMEOUT = 30l
};

/// Constant 'DEFAULT_TIMEOUT'.
enum
{
  protocol__srv__FaceRec_Request__DEFAULT_TIMEOUT = 60l
};

/// Constant 'ALGORITHM_LOAD_DURATION'.
enum
{
  protocol__srv__FaceRec_Request__ALGORITHM_LOAD_DURATION = 100l
};

// Include directives for member types
// Member 'username'
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/FaceRec in the package protocol.
typedef struct protocol__srv__FaceRec_Request
{
  int32_t command;
  rosidl_runtime_c__String username;
  rosidl_runtime_c__String id;
  int32_t timeout;
} protocol__srv__FaceRec_Request;

// Struct for a sequence of protocol__srv__FaceRec_Request.
typedef struct protocol__srv__FaceRec_Request__Sequence
{
  protocol__srv__FaceRec_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceRec_Request__Sequence;


// Constants defined in the message

/// Constant 'ENABLE_SUCCESS'.
enum
{
  protocol__srv__FaceRec_Response__ENABLE_SUCCESS = 0l
};

/// Constant 'ENABLE_FAIL'.
enum
{
  protocol__srv__FaceRec_Response__ENABLE_FAIL = 5901l
};

// Struct defined in srv/FaceRec in the package protocol.
typedef struct protocol__srv__FaceRec_Response
{
  int32_t result;
  int32_t code;
} protocol__srv__FaceRec_Response;

// Struct for a sequence of protocol__srv__FaceRec_Response.
typedef struct protocol__srv__FaceRec_Response__Sequence
{
  protocol__srv__FaceRec_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceRec_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__FACE_REC__STRUCT_H_
