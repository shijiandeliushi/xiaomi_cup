// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/WifiStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip'
// Member 'ssid'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/WifiStatus in the package protocol.
typedef struct protocol__msg__WifiStatus
{
  bool is_connected;
  rosidl_runtime_c__String ip;
  rosidl_runtime_c__String ssid;
  uint8_t strength;
} protocol__msg__WifiStatus;

// Struct for a sequence of protocol__msg__WifiStatus.
typedef struct protocol__msg__WifiStatus__Sequence
{
  protocol__msg__WifiStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__WifiStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__WIFI_STATUS__STRUCT_H_
