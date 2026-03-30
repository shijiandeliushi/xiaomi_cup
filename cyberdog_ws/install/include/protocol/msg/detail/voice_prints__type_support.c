// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/voice_prints__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/voice_prints__functions.h"
#include "protocol/msg/detail/voice_prints__struct.h"


// Include directives for member types
// Member `prints`
#include "protocol/msg/voice_print.h"
// Member `prints`
#include "protocol/msg/detail/voice_print__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__VoicePrints__init(message_memory);
}

void VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_fini_function(void * message_memory)
{
  protocol__msg__VoicePrints__fini(message_memory);
}

size_t VoicePrints__rosidl_typesupport_introspection_c__size_function__VoicePrint__prints(
  const void * untyped_member)
{
  const protocol__msg__VoicePrint__Sequence * member =
    (const protocol__msg__VoicePrint__Sequence *)(untyped_member);
  return member->size;
}

const void * VoicePrints__rosidl_typesupport_introspection_c__get_const_function__VoicePrint__prints(
  const void * untyped_member, size_t index)
{
  const protocol__msg__VoicePrint__Sequence * member =
    (const protocol__msg__VoicePrint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VoicePrints__rosidl_typesupport_introspection_c__get_function__VoicePrint__prints(
  void * untyped_member, size_t index)
{
  protocol__msg__VoicePrint__Sequence * member =
    (protocol__msg__VoicePrint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VoicePrints__rosidl_typesupport_introspection_c__resize_function__VoicePrint__prints(
  void * untyped_member, size_t size)
{
  protocol__msg__VoicePrint__Sequence * member =
    (protocol__msg__VoicePrint__Sequence *)(untyped_member);
  protocol__msg__VoicePrint__Sequence__fini(member);
  return protocol__msg__VoicePrint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_member_array[1] = {
  {
    "prints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__VoicePrints, prints),  // bytes offset in struct
    NULL,  // default value
    VoicePrints__rosidl_typesupport_introspection_c__size_function__VoicePrint__prints,  // size() function pointer
    VoicePrints__rosidl_typesupport_introspection_c__get_const_function__VoicePrint__prints,  // get_const(index) function pointer
    VoicePrints__rosidl_typesupport_introspection_c__get_function__VoicePrint__prints,  // get(index) function pointer
    VoicePrints__rosidl_typesupport_introspection_c__resize_function__VoicePrint__prints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_members = {
  "protocol__msg",  // message namespace
  "VoicePrints",  // message name
  1,  // number of fields
  sizeof(protocol__msg__VoicePrints),
  VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_member_array,  // message members
  VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_init_function,  // function to initialize message memory (memory has to be allocated)
  VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_type_support_handle = {
  0,
  &VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, VoicePrints)() {
  VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, VoicePrint)();
  if (!VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_type_support_handle.typesupport_identifier) {
    VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VoicePrints__rosidl_typesupport_introspection_c__VoicePrints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
