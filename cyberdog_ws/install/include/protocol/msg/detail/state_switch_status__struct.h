// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/StateSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/StateSwitchStatus in the package protocol.
typedef struct protocol__msg__StateSwitchStatus
{
  int32_t state;
  int32_t code;
} protocol__msg__StateSwitchStatus;

// Struct for a sequence of protocol__msg__StateSwitchStatus.
typedef struct protocol__msg__StateSwitchStatus__Sequence
{
  protocol__msg__StateSwitchStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__StateSwitchStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__STRUCT_H_
