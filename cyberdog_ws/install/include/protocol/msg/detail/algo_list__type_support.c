// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/AlgoList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/algo_list__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/algo_list__functions.h"
#include "protocol/msg/detail/algo_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AlgoList__rosidl_typesupport_introspection_c__AlgoList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__AlgoList__init(message_memory);
}

void AlgoList__rosidl_typesupport_introspection_c__AlgoList_fini_function(void * message_memory)
{
  protocol__msg__AlgoList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_member_array[1] = {
  {
    "algo_module",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AlgoList, algo_module),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_members = {
  "protocol__msg",  // message namespace
  "AlgoList",  // message name
  1,  // number of fields
  sizeof(protocol__msg__AlgoList),
  AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_member_array,  // message members
  AlgoList__rosidl_typesupport_introspection_c__AlgoList_init_function,  // function to initialize message memory (memory has to be allocated)
  AlgoList__rosidl_typesupport_introspection_c__AlgoList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_type_support_handle = {
  0,
  &AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, AlgoList)() {
  if (!AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_type_support_handle.typesupport_identifier) {
    AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AlgoList__rosidl_typesupport_introspection_c__AlgoList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
