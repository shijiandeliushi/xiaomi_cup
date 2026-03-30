// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'infos'
#include "protocol/msg/detail/face__struct.h"

// Struct defined in msg/FaceInfo in the package protocol.
typedef struct protocol__msg__FaceInfo
{
  std_msgs__msg__Header header;
  uint32_t count;
  protocol__msg__Face__Sequence infos;
} protocol__msg__FaceInfo;

// Struct for a sequence of protocol__msg__FaceInfo.
typedef struct protocol__msg__FaceInfo__Sequence
{
  protocol__msg__FaceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__FaceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FACE_INFO__STRUCT_H_
