// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/motion_servo_response__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/motion_servo_response__functions.h"
#include "protocol/msg/detail/motion_servo_response__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__MotionServoResponse__init(message_memory);
}

void MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_fini_function(void * message_memory)
{
  protocol__msg__MotionServoResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_member_array[6] = {
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, motion_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, cmd_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "order_process_bar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, order_process_bar),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MotionServoResponse, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_members = {
  "protocol__msg",  // message namespace
  "MotionServoResponse",  // message name
  6,  // number of fields
  sizeof(protocol__msg__MotionServoResponse),
  MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_member_array,  // message members
  MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_type_support_handle = {
  0,
  &MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MotionServoResponse)() {
  if (!MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_type_support_handle.typesupport_identifier) {
    MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionServoResponse__rosidl_typesupport_introspection_c__MotionServoResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
