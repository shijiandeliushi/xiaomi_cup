// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/UltrasonicPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ultrasonic_info'
#include "sensor_msgs/msg/detail/range__struct.h"

// Struct defined in msg/UltrasonicPayload in the package protocol.
typedef struct protocol__msg__UltrasonicPayload
{
  sensor_msgs__msg__Range ultrasonic_info;
} protocol__msg__UltrasonicPayload;

// Struct for a sequence of protocol__msg__UltrasonicPayload.
typedef struct protocol__msg__UltrasonicPayload__Sequence
{
  protocol__msg__UltrasonicPayload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__UltrasonicPayload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__STRUCT_H_
