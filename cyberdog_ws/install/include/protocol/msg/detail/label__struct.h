// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Label.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__LABEL__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Label in the package protocol.
typedef struct protocol__msg__Label
{
  rosidl_runtime_c__String label_name;
  float physic_x;
  float physic_y;
} protocol__msg__Label;

// Struct for a sequence of protocol__msg__Label.
typedef struct protocol__msg__Label__Sequence
{
  protocol__msg__Label * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Label__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__LABEL__STRUCT_H_
