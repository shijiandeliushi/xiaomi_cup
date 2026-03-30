// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MachineState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MACHINE_STATE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MACHINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MACHINE_STATE_ACTIVE'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_ACTIVE = 0
};

/// Constant 'MACHINE_STATE_PROTECT'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_PROTECT = 1
};

/// Constant 'MACHINE_STATE_LOWPOWER'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_LOWPOWER = 2
};

/// Constant 'MACHINE_STATE_OTA'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_OTA = 3
};

/// Constant 'MACHINE_STATE_SHUTDOWN'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_SHUTDOWN = 4
};

/// Constant 'MACHINE_STATE_SELFCHECK'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_SELFCHECK = 5
};

/// Constant 'MACHINE_STATE_DEACTIVE'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_DEACTIVE = 6
};

/// Constant 'MACHINE_STATE_ERROR'.
enum
{
  protocol__srv__MachineState_Request__MACHINE_STATE_ERROR = 7
};

// Struct defined in srv/MachineState in the package protocol.
typedef struct protocol__srv__MachineState_Request
{
  uint8_t state;
  uint16_t ticks;
} protocol__srv__MachineState_Request;

// Struct for a sequence of protocol__srv__MachineState_Request.
typedef struct protocol__srv__MachineState_Request__Sequence
{
  protocol__srv__MachineState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MachineState_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MachineState in the package protocol.
typedef struct protocol__srv__MachineState_Response
{
  bool success;
  int32_t code;
} protocol__srv__MachineState_Response;

// Struct for a sequence of protocol__srv__MachineState_Response.
typedef struct protocol__srv__MachineState_Response__Sequence
{
  protocol__srv__MachineState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MachineState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MACHINE_STATE__STRUCT_H_
