// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/GpsPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GpsPayload in the package protocol.
typedef struct protocol__msg__GpsPayload
{
  uint32_t sec;
  uint32_t nanosec;
  uint32_t itow;
  uint8_t fix_type;
  uint8_t num_sv;
  double lon;
  double lat;
} protocol__msg__GpsPayload;

// Struct for a sequence of protocol__msg__GpsPayload.
typedef struct protocol__msg__GpsPayload__Sequence
{
  protocol__msg__GpsPayload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__GpsPayload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__STRUCT_H_
