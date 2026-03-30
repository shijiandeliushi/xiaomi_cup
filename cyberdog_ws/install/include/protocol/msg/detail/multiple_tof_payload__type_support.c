// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/multiple_tof_payload__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/multiple_tof_payload__functions.h"
#include "protocol/msg/detail/multiple_tof_payload__struct.h"


// Include directives for member types
// Member `left_head`
// Member `left_rear`
// Member `right_head`
// Member `right_rear`
#include "protocol/msg/single_tof_payload.h"
// Member `left_head`
// Member `left_rear`
// Member `right_head`
// Member `right_rear`
#include "protocol/msg/detail/single_tof_payload__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__MultipleTofPayload__init(message_memory);
}

void MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_fini_function(void * message_memory)
{
  protocol__msg__MultipleTofPayload__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array[4] = {
  {
    "left_head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MultipleTofPayload, left_head),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MultipleTofPayload, left_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MultipleTofPayload, right_head),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MultipleTofPayload, right_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_members = {
  "protocol__msg",  // message namespace
  "MultipleTofPayload",  // message name
  4,  // number of fields
  sizeof(protocol__msg__MultipleTofPayload),
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array,  // message members
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_init_function,  // function to initialize message memory (memory has to be allocated)
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_type_support_handle = {
  0,
  &MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MultipleTofPayload)() {
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  if (!MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_type_support_handle.typesupport_identifier) {
    MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultipleTofPayload__rosidl_typesupport_introspection_c__MultipleTofPayload_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
