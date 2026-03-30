// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mac'
// Member 'name'
// Member 'addr_type'
// Member 'firmware_version'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BLEInfo in the package protocol.
typedef struct protocol__msg__BLEInfo
{
  rosidl_runtime_c__String mac;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String addr_type;
  uint8_t device_type;
  float battery_level;
  rosidl_runtime_c__String firmware_version;
} protocol__msg__BLEInfo;

// Struct for a sequence of protocol__msg__BLEInfo.
typedef struct protocol__msg__BLEInfo__Sequence
{
  protocol__msg__BLEInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__BLEInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BLE_INFO__STRUCT_H_
