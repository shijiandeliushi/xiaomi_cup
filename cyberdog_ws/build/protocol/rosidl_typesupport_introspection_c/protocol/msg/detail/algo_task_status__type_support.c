// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/algo_task_status__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/algo_task_status__functions.h"
#include "protocol/msg/detail/algo_task_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__AlgoTaskStatus__init(message_memory);
}

void AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_fini_function(void * message_memory)
{
  protocol__msg__AlgoTaskStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_member_array[2] = {
  {
    "task_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AlgoTaskStatus, task_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_sub_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AlgoTaskStatus, task_sub_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_members = {
  "protocol__msg",  // message namespace
  "AlgoTaskStatus",  // message name
  2,  // number of fields
  sizeof(protocol__msg__AlgoTaskStatus),
  AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_member_array,  // message members
  AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_type_support_handle = {
  0,
  &AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, AlgoTaskStatus)() {
  if (!AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_type_support_handle.typesupport_identifier) {
    AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AlgoTaskStatus__rosidl_typesupport_introspection_c__AlgoTaskStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
