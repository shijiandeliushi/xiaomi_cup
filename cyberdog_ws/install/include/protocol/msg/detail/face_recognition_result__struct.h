// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/FaceRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_H_

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
  protocol__msg__FaceRecognitionResult__RESULT_SUCCESS = 0l
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__msg__FaceRecognitionResult__RESULT_TIMEOUT = 5907l
};

// Include directives for member types
// Member 'username'
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FaceRecognitionResult in the package protocol.
typedef struct protocol__msg__FaceRecognitionResult
{
  rosidl_runtime_c__String username;
  int32_t result;
  rosidl_runtime_c__String id;
  float age;
  float emotion;
} protocol__msg__FaceRecognitionResult;

// Struct for a sequence of protocol__msg__FaceRecognitionResult.
typedef struct protocol__msg__FaceRecognitionResult__Sequence
{
  protocol__msg__FaceRecognitionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__FaceRecognitionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__STRUCT_H_
