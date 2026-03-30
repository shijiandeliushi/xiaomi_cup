// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trigger'
// Member 'type'
// Member 'value'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TrainPlan in the package protocol.
typedef struct protocol__msg__TrainPlan
{
  rosidl_runtime_c__String trigger;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String value;
} protocol__msg__TrainPlan;

// Struct for a sequence of protocol__msg__TrainPlan.
typedef struct protocol__msg__TrainPlan__Sequence
{
  protocol__msg__TrainPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__TrainPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TRAIN_PLAN__STRUCT_H_
