// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/OtaUpdate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OtaUpdate in the package protocol.
typedef struct protocol__msg__OtaUpdate
{
  int32_t progress;
  int32_t code;
} protocol__msg__OtaUpdate;

// Struct for a sequence of protocol__msg__OtaUpdate.
typedef struct protocol__msg__OtaUpdate__Sequence
{
  protocol__msg__OtaUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__OtaUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__OTA_UPDATE__STRUCT_H_
