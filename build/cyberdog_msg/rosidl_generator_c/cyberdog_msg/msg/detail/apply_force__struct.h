// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_H_
#define CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ApplyForce in the package cyberdog_msg.
typedef struct cyberdog_msg__msg__ApplyForce
{
  rosidl_runtime_c__String link_name;
  double time;
  double force[3];
  double rel_pos[3];
} cyberdog_msg__msg__ApplyForce;

// Struct for a sequence of cyberdog_msg__msg__ApplyForce.
typedef struct cyberdog_msg__msg__ApplyForce__Sequence
{
  cyberdog_msg__msg__ApplyForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cyberdog_msg__msg__ApplyForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__STRUCT_H_
