// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/auth_token__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/auth_token__functions.h"
#include "protocol/msg/detail/auth_token__struct.h"


// Include directives for member types
// Member `uid`
// Member `token_access`
// Member `token_fresh`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AuthToken__rosidl_typesupport_introspection_c__AuthToken_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__AuthToken__init(message_memory);
}

void AuthToken__rosidl_typesupport_introspection_c__AuthToken_fini_function(void * message_memory)
{
  protocol__msg__AuthToken__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_member_array[4] = {
  {
    "uid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AuthToken, uid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "token_access",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AuthToken, token_access),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "token_fresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AuthToken, token_fresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "token_expirein",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__AuthToken, token_expirein),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_members = {
  "protocol__msg",  // message namespace
  "AuthToken",  // message name
  4,  // number of fields
  sizeof(protocol__msg__AuthToken),
  AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_member_array,  // message members
  AuthToken__rosidl_typesupport_introspection_c__AuthToken_init_function,  // function to initialize message memory (memory has to be allocated)
  AuthToken__rosidl_typesupport_introspection_c__AuthToken_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_type_support_handle = {
  0,
  &AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, AuthToken)() {
  if (!AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_type_support_handle.typesupport_identifier) {
    AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AuthToken__rosidl_typesupport_introspection_c__AuthToken_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
