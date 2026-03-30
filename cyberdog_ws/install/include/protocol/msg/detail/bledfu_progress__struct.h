// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/BLEDFUProgress.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BLEDFUProgress in the package protocol.
typedef struct protocol__msg__BLEDFUProgress
{
  uint8_t status;
  double progress;
  rosidl_runtime_c__String message;
} protocol__msg__BLEDFUProgress;

// Struct for a sequence of protocol__msg__BLEDFUProgress.
typedef struct protocol__msg__BLEDFUProgress__Sequence
{
  protocol__msg__BLEDFUProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__BLEDFUProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__STRUCT_H_
