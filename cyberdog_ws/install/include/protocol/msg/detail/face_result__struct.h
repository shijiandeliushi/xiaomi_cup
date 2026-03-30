// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__msg__FaceResult__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_INVALID_ARGS'.
enum
{
  protocol__msg__FaceResult__RESULT_INVALID_ARGS = 1
};

/// Constant 'RESULT_UNSUPPORTED'.
enum
{
  protocol__msg__FaceResult__RESULT_UNSUPPORTED = 2
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__msg__FaceResult__RESULT_TIMEOUT = 3
};

/// Constant 'RESULT_BUSY'.
enum
{
  protocol__msg__FaceResult__RESULT_BUSY = 4
};

/// Constant 'RESULT_INVALID_STATE'.
enum
{
  protocol__msg__FaceResult__RESULT_INVALID_STATE = 5
};

/// Constant 'RESULT_INNER_ERROR'.
enum
{
  protocol__msg__FaceResult__RESULT_INNER_ERROR = 6
};

/// Constant 'RESULT_NO_FACE_FOUND'.
enum
{
  protocol__msg__FaceResult__RESULT_NO_FACE_FOUND = 7
};

/// Constant 'RESULT_MULTI_FACE_FOUND'.
enum
{
  protocol__msg__FaceResult__RESULT_MULTI_FACE_FOUND = 8
};

/// Constant 'RESULT_KEEP_STABLE'.
enum
{
  protocol__msg__FaceResult__RESULT_KEEP_STABLE = 9
};

/// Constant 'RESULT_DEGREE_NOT_SATISFIED'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_NOT_SATISFIED = 10
};

/// Constant 'RESULT_DISTANCE_NOT_SATISFIED'.
enum
{
  protocol__msg__FaceResult__RESULT_DISTANCE_NOT_SATISFIED = 11
};

/// Constant 'RESULT_DEGREE_HEAD_LEFT'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_HEAD_LEFT = 12
};

/// Constant 'RESULT_DEGREE_HEAD_RIGHT'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_HEAD_RIGHT = 13
};

/// Constant 'RESULT_DEGREE_HEAD_DOWN'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_HEAD_DOWN = 14
};

/// Constant 'RESULT_DEGREE_HEAD_UP'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_HEAD_UP = 15
};

/// Constant 'RESULT_DEGREE_HEAD_TILT'.
enum
{
  protocol__msg__FaceResult__RESULT_DEGREE_HEAD_TILT = 16
};

/// Constant 'RESULT_FACE_ALREADY_EXIST'.
enum
{
  protocol__msg__FaceResult__RESULT_FACE_ALREADY_EXIST = 17
};

/// Constant 'RESULT_UNDEFINED_ERROR'.
enum
{
  protocol__msg__FaceResult__RESULT_UNDEFINED_ERROR = 255
};

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__struct.h"

// Struct defined in msg/FaceResult in the package protocol.
typedef struct protocol__msg__FaceResult
{
  uint8_t result;
  rosidl_runtime_c__String msg;
  protocol__msg__CompressedImage__Sequence face_images;
} protocol__msg__FaceResult;

// Struct for a sequence of protocol__msg__FaceResult.
typedef struct protocol__msg__FaceResult__Sequence
{
  protocol__msg__FaceResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__FaceResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FACE_RESULT__STRUCT_H_
