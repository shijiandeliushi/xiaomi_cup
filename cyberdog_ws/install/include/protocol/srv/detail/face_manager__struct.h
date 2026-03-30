// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/FaceManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD_FACE'.
enum
{
  protocol__srv__FaceManager_Request__ADD_FACE = 0
};

/// Constant 'CANCLE_ADD_FACE'.
enum
{
  protocol__srv__FaceManager_Request__CANCLE_ADD_FACE = 1
};

/// Constant 'CONFIRM_LAST_FACE'.
enum
{
  protocol__srv__FaceManager_Request__CONFIRM_LAST_FACE = 2
};

/// Constant 'UPDATE_FACE_ID'.
enum
{
  protocol__srv__FaceManager_Request__UPDATE_FACE_ID = 3
};

/// Constant 'DELETE_FACE'.
enum
{
  protocol__srv__FaceManager_Request__DELETE_FACE = 4
};

/// Constant 'GET_ALL_FACES'.
enum
{
  protocol__srv__FaceManager_Request__GET_ALL_FACES = 5
};

/// Constant 'SET_CURRENT_ACCOUNT'.
enum
{
  protocol__srv__FaceManager_Request__SET_CURRENT_ACCOUNT = 6
};

// Include directives for member types
// Member 'args'
// Member 'username'
// Member 'oriname'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/FaceManager in the package protocol.
typedef struct protocol__srv__FaceManager_Request
{
  uint8_t command;
  rosidl_runtime_c__String args;
  rosidl_runtime_c__String username;
  rosidl_runtime_c__String oriname;
  bool ishost;
} protocol__srv__FaceManager_Request;

// Struct for a sequence of protocol__srv__FaceManager_Request.
typedef struct protocol__srv__FaceManager_Request__Sequence
{
  protocol__srv__FaceManager_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceManager_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_INVALID_ARGS'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_INVALID_ARGS = 1
};

/// Constant 'RESULT_UNSUPPORTED'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_UNSUPPORTED = 2
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_TIMEOUT = 3
};

/// Constant 'RESULT_BUSY'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_BUSY = 4
};

/// Constant 'RESULT_INVALID_STATE'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_INVALID_STATE = 5
};

/// Constant 'RESULT_INNER_ERROR'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_INNER_ERROR = 6
};

/// Constant 'RESULT_UNDEFINED_ERROR'.
enum
{
  protocol__srv__FaceManager_Response__RESULT_UNDEFINED_ERROR = 255
};

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__struct.h"

// Struct defined in srv/FaceManager in the package protocol.
typedef struct protocol__srv__FaceManager_Response
{
  uint8_t result;
  rosidl_runtime_c__String msg;
  protocol__msg__CompressedImage__Sequence face_images;
  int32_t code;
} protocol__srv__FaceManager_Response;

// Struct for a sequence of protocol__srv__FaceManager_Response.
typedef struct protocol__srv__FaceManager_Response__Sequence
{
  protocol__srv__FaceManager_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceManager_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__FACE_MANAGER__STRUCT_H_
