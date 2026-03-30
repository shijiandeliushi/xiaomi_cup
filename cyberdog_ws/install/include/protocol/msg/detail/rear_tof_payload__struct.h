// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RearTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_rear'
// Member 'right_rear'
#include "protocol/msg/detail/single_tof_payload__struct.h"

// Struct defined in msg/RearTofPayload in the package protocol.
typedef struct protocol__msg__RearTofPayload
{
  protocol__msg__SingleTofPayload left_rear;
  protocol__msg__SingleTofPayload right_rear;
} protocol__msg__RearTofPayload;

// Struct for a sequence of protocol__msg__RearTofPayload.
typedef struct protocol__msg__RearTofPayload__Sequence
{
  protocol__msg__RearTofPayload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RearTofPayload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__STRUCT_H_
