// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/BLEDFUProgress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/bledfu_progress__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/bledfu_progress__functions.h"
#include "protocol/msg/detail/bledfu_progress__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__BLEDFUProgress__init(message_memory);
}

void BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_fini_function(void * message_memory)
{
  protocol__msg__BLEDFUProgress__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_member_array[3] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEDFUProgress, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEDFUProgress, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEDFUProgress, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_members = {
  "protocol__msg",  // message namespace
  "BLEDFUProgress",  // message name
  3,  // number of fields
  sizeof(protocol__msg__BLEDFUProgress),
  BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_member_array,  // message members
  BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_type_support_handle = {
  0,
  &BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, BLEDFUProgress)() {
  if (!BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_type_support_handle.typesupport_identifier) {
    BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BLEDFUProgress__rosidl_typesupport_introspection_c__BLEDFUProgress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
