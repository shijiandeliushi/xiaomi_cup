// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotorTemp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTOR_TEMP__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTOR_TEMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MotorTemp in the package protocol.
typedef struct protocol__srv__MotorTemp_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__MotorTemp_Request;

// Struct for a sequence of protocol__srv__MotorTemp_Request.
typedef struct protocol__srv__MotorTemp_Request__Sequence
{
  protocol__srv__MotorTemp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotorTemp_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'motor_temp'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/MotorTemp in the package protocol.
typedef struct protocol__srv__MotorTemp_Response
{
  bool result;
  rosidl_runtime_c__float__Sequence motor_temp;
  int32_t code;
} protocol__srv__MotorTemp_Response;

// Struct for a sequence of protocol__srv__MotorTemp_Response.
typedef struct protocol__srv__MotorTemp_Response__Sequence
{
  protocol__srv__MotorTemp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotorTemp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTOR_TEMP__STRUCT_H_
