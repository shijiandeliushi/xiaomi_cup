// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/BLEConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'selected_device'
#include "protocol/msg/detail/ble_info__struct.h"

// Struct defined in srv/BLEConnect in the package protocol.
typedef struct protocol__srv__BLEConnect_Request
{
  protocol__msg__BLEInfo selected_device;
} protocol__srv__BLEConnect_Request;

// Struct for a sequence of protocol__srv__BLEConnect_Request.
typedef struct protocol__srv__BLEConnect_Request__Sequence
{
  protocol__srv__BLEConnect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BLEConnect_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BLEConnect in the package protocol.
typedef struct protocol__srv__BLEConnect_Response
{
  uint8_t result;
  int32_t code;
} protocol__srv__BLEConnect_Response;

// Struct for a sequence of protocol__srv__BLEConnect_Response.
typedef struct protocol__srv__BLEConnect_Response__Sequence
{
  protocol__srv__BLEConnect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BLEConnect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_H_
