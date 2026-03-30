// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AlgoTaskStatus in the package protocol.
typedef struct protocol__msg__AlgoTaskStatus
{
  uint8_t task_status;
  int32_t task_sub_status;
} protocol__msg__AlgoTaskStatus;

// Struct for a sequence of protocol__msg__AlgoTaskStatus.
typedef struct protocol__msg__AlgoTaskStatus__Sequence
{
  protocol__msg__AlgoTaskStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AlgoTaskStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__STRUCT_H_
