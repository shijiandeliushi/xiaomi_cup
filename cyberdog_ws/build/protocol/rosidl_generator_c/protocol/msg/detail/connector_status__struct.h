// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ssid'
// Member 'robot_ip'
// Member 'provider_ip'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ConnectorStatus in the package protocol.
typedef struct protocol__msg__ConnectorStatus
{
  bool is_connected;
  bool is_internet;
  rosidl_runtime_c__String ssid;
  rosidl_runtime_c__String robot_ip;
  rosidl_runtime_c__String provider_ip;
  uint8_t strength;
  int32_t code;
} protocol__msg__ConnectorStatus;

// Struct for a sequence of protocol__msg__ConnectorStatus.
typedef struct protocol__msg__ConnectorStatus__Sequence
{
  protocol__msg__ConnectorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__ConnectorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__STRUCT_H_
