// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP'.
enum
{
  protocol__srv__BmsCmd_Request__BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_UP = 1
};

/// Constant 'BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN'.
enum
{
  protocol__srv__BmsCmd_Request__BATTERY_COMMAND_ELECTRIC_MACHINE_POWER_DOWN = 2
};

/// Constant 'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON'.
enum
{
  protocol__srv__BmsCmd_Request__BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_ON = 3
};

/// Constant 'BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF'.
enum
{
  protocol__srv__BmsCmd_Request__BATTERY_COMMAND_WIRELESS_CHARGING_TRUN_OFF = 4
};

// Struct defined in srv/BmsCmd in the package protocol.
typedef struct protocol__srv__BmsCmd_Request
{
  uint8_t electric_machine_command;
  uint8_t wireless_charging_command;
} protocol__srv__BmsCmd_Request;

// Struct for a sequence of protocol__srv__BmsCmd_Request.
typedef struct protocol__srv__BmsCmd_Request__Sequence
{
  protocol__srv__BmsCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BmsCmd_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BmsCmd in the package protocol.
typedef struct protocol__srv__BmsCmd_Response
{
  bool success;
  int32_t code;
} protocol__srv__BmsCmd_Response;

// Struct for a sequence of protocol__srv__BmsCmd_Response.
typedef struct protocol__srv__BmsCmd_Response__Sequence
{
  protocol__srv__BmsCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BmsCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__BMS_CMD__STRUCT_H_
