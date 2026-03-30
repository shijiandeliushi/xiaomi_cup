// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/RearTofPayload.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/rear_tof_payload__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/rear_tof_payload__functions.h"
#include "protocol/msg/detail/rear_tof_payload__struct.h"


// Include directives for member types
// Member `left_rear`
// Member `right_rear`
#include "protocol/msg/single_tof_payload.h"
// Member `left_rear`
// Member `right_rear`
#include "protocol/msg/detail/single_tof_payload__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__RearTofPayload__init(message_memory);
}

void RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_fini_function(void * message_memory)
{
  protocol__msg__RearTofPayload__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_member_array[2] = {
  {
    "left_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__RearTofPayload, left_rear),  // bytes offset in struct
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
    offsetof(protocol__msg__RearTofPayload, right_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_members = {
  "protocol__msg",  // message namespace
  "RearTofPayload",  // message name
  2,  // number of fields
  sizeof(protocol__msg__RearTofPayload),
  RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_member_array,  // message members
  RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_init_function,  // function to initialize message memory (memory has to be allocated)
  RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_type_support_handle = {
  0,
  &RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, RearTofPayload)() {
  RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, SingleTofPayload)();
  if (!RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_type_support_handle.typesupport_identifier) {
    RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RearTofPayload__rosidl_typesupport_introspection_c__RearTofPayload_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
