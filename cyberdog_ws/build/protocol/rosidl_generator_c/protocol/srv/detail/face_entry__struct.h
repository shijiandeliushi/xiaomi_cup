// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_H_

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
  protocol__srv__FaceEntry_Request__ADD_FACE = 0l
};

/// Constant 'CANCLE_ADD_FACE'.
enum
{
  protocol__srv__FaceEntry_Request__CANCLE_ADD_FACE = 1l
};

/// Constant 'CONFIRM_LAST_FACE'.
enum
{
  protocol__srv__FaceEntry_Request__CONFIRM_LAST_FACE = 2l
};

/// Constant 'UPDATE_FACE_ID'.
enum
{
  protocol__srv__FaceEntry_Request__UPDATE_FACE_ID = 3l
};

/// Constant 'DELETE_FACE'.
enum
{
  protocol__srv__FaceEntry_Request__DELETE_FACE = 4l
};

/// Constant 'GET_ALL_FACES'.
enum
{
  protocol__srv__FaceEntry_Request__GET_ALL_FACES = 5l
};

// Include directives for member types
// Member 'username'
// Member 'oriname'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/FaceEntry in the package protocol.
typedef struct protocol__srv__FaceEntry_Request
{
  int32_t command;
  rosidl_runtime_c__String username;
  rosidl_runtime_c__String oriname;
  bool ishost;
} protocol__srv__FaceEntry_Request;

// Struct for a sequence of protocol__srv__FaceEntry_Request.
typedef struct protocol__srv__FaceEntry_Request__Sequence
{
  protocol__srv__FaceEntry_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceEntry_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_SUCCESS = 0l
};

/// Constant 'RESULT_INVALID_ARGS'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_INVALID_ARGS = 5910l
};

/// Constant 'RESULT_UNSUPPORTED'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_UNSUPPORTED = 5908l
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_TIMEOUT = 5907l
};

/// Constant 'RESULT_BUSY'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_BUSY = 5911l
};

/// Constant 'RESULT_INVALID_STATE'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_INVALID_STATE = 5903l
};

/// Constant 'RESULT_INNER_ERROR'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_INNER_ERROR = 5904l
};

/// Constant 'RESULT_UNDEFINED_ERROR'.
enum
{
  protocol__srv__FaceEntry_Response__RESULT_UNDEFINED_ERROR = 5901l
};

// Include directives for member types
// Member 'allfaces'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/FaceEntry in the package protocol.
typedef struct protocol__srv__FaceEntry_Response
{
  int32_t result;
  rosidl_runtime_c__String allfaces;
  int32_t code;
} protocol__srv__FaceEntry_Response;

// Struct for a sequence of protocol__srv__FaceEntry_Response.
typedef struct protocol__srv__FaceEntry_Response__Sequence
{
  protocol__srv__FaceEntry_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__FaceEntry_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__FACE_ENTRY__STRUCT_H_
