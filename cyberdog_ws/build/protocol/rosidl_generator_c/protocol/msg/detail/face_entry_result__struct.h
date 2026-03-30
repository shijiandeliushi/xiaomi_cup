// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/FaceEntryResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_H_

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
  protocol__msg__FaceEntryResult__RESULT_SUCCESS = 0l
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__msg__FaceEntryResult__RESULT_TIMEOUT = 5907l
};

/// Constant 'RESULT_FACE_ALREADY_EXIST'.
enum
{
  protocol__msg__FaceEntryResult__RESULT_FACE_ALREADY_EXIST = 5921l
};

// Include directives for member types
// Member 'username'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FaceEntryResult in the package protocol.
typedef struct protocol__msg__FaceEntryResult
{
  int32_t result;
  rosidl_runtime_c__String username;
} protocol__msg__FaceEntryResult;

// Struct for a sequence of protocol__msg__FaceEntryResult.
typedef struct protocol__msg__FaceEntryResult__Sequence
{
  protocol__msg__FaceEntryResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__FaceEntryResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__STRUCT_H_
