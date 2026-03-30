// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/BLEScan in the package protocol.
typedef struct protocol__srv__BLEScan_Request
{
  double scan_seconds;
} protocol__srv__BLEScan_Request;

// Struct for a sequence of protocol__srv__BLEScan_Request.
typedef struct protocol__srv__BLEScan_Request__Sequence
{
  protocol__srv__BLEScan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BLEScan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'device_info_list'
#include "protocol/msg/detail/ble_info__struct.h"

// Struct defined in srv/BLEScan in the package protocol.
typedef struct protocol__srv__BLEScan_Response
{
  protocol__msg__BLEInfo__Sequence device_info_list;
  int32_t code;
} protocol__srv__BLEScan_Response;

// Struct for a sequence of protocol__srv__BLEScan_Response.
typedef struct protocol__srv__BLEScan_Response__Sequence
{
  protocol__srv__BLEScan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BLEScan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_H_
