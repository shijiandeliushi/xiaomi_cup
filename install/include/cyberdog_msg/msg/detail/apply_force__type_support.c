// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cyberdog_msg/msg/detail/apply_force__rosidl_typesupport_introspection_c.h"
#include "cyberdog_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cyberdog_msg/msg/detail/apply_force__functions.h"
#include "cyberdog_msg/msg/detail/apply_force__struct.h"


// Include directives for member types
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cyberdog_msg__msg__ApplyForce__init(message_memory);
}

void ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_fini_function(void * message_memory)
{
  cyberdog_msg__msg__ApplyForce__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_member_array[4] = {
  {
    "link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__ApplyForce, link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__ApplyForce, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__ApplyForce, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rel_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__ApplyForce, rel_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_members = {
  "cyberdog_msg__msg",  // message namespace
  "ApplyForce",  // message name
  4,  // number of fields
  sizeof(cyberdog_msg__msg__ApplyForce),
  ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_member_array,  // message members
  ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_init_function,  // function to initialize message memory (memory has to be allocated)
  ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_type_support_handle = {
  0,
  &ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cyberdog_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cyberdog_msg, msg, ApplyForce)() {
  if (!ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_type_support_handle.typesupport_identifier) {
    ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ApplyForce__rosidl_typesupport_introspection_c__ApplyForce_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
