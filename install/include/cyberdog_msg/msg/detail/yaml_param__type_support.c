// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cyberdog_msg/msg/detail/yaml_param__rosidl_typesupport_introspection_c.h"
#include "cyberdog_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cyberdog_msg/msg/detail/yaml_param__functions.h"
#include "cyberdog_msg/msg/detail/yaml_param__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void YamlParam__rosidl_typesupport_introspection_c__YamlParam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cyberdog_msg__msg__YamlParam__init(message_memory);
}

void YamlParam__rosidl_typesupport_introspection_c__YamlParam_fini_function(void * message_memory)
{
  cyberdog_msg__msg__YamlParam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kind",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, kind),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s64_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, s64_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, double_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vecxd_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, vecxd_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_user",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg__msg__YamlParam, is_user),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_members = {
  "cyberdog_msg__msg",  // message namespace
  "YamlParam",  // message name
  6,  // number of fields
  sizeof(cyberdog_msg__msg__YamlParam),
  YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_member_array,  // message members
  YamlParam__rosidl_typesupport_introspection_c__YamlParam_init_function,  // function to initialize message memory (memory has to be allocated)
  YamlParam__rosidl_typesupport_introspection_c__YamlParam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_type_support_handle = {
  0,
  &YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cyberdog_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cyberdog_msg, msg, YamlParam)() {
  if (!YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_type_support_handle.typesupport_identifier) {
    YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &YamlParam__rosidl_typesupport_introspection_c__YamlParam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
