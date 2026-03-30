// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/GestureActionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/gesture_action_result__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/gesture_action_result__functions.h"
#include "protocol/msg/detail/gesture_action_result__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__GestureActionResult__init(message_memory);
}

void GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_fini_function(void * message_memory)
{
  protocol__msg__GestureActionResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__GestureActionResult, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_members = {
  "protocol__msg",  // message namespace
  "GestureActionResult",  // message name
  1,  // number of fields
  sizeof(protocol__msg__GestureActionResult),
  GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_member_array,  // message members
  GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_type_support_handle = {
  0,
  &GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, GestureActionResult)() {
  if (!GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_type_support_handle.typesupport_identifier) {
    GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GestureActionResult__rosidl_typesupport_introspection_c__GestureActionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
