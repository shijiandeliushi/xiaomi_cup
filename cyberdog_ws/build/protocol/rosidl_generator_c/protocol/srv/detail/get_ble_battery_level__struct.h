// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/GetBLEBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetBLEBatteryLevel in the package protocol.
typedef struct protocol__srv__GetBLEBatteryLevel_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__GetBLEBatteryLevel_Request;

// Struct for a sequence of protocol__srv__GetBLEBatteryLevel_Request.
typedef struct protocol__srv__GetBLEBatteryLevel_Request__Sequence
{
  protocol__srv__GetBLEBatteryLevel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GetBLEBatteryLevel_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetBLEBatteryLevel in the package protocol.
typedef struct protocol__srv__GetBLEBatteryLevel_Response
{
  bool connected;
  float persentage;
  int32_t code;
} protocol__srv__GetBLEBatteryLevel_Response;

// Struct for a sequence of protocol__srv__GetBLEBatteryLevel_Response.
typedef struct protocol__srv__GetBLEBatteryLevel_Response__Sequence
{
  protocol__srv__GetBLEBatteryLevel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__GetBLEBatteryLevel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_H_
