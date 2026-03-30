// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/WifiInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/wifi_info__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/wifi_info__functions.h"
#include "protocol/msg/detail/wifi_info__struct.h"


// Include directives for member types
// Member `ssid`
// Member `pwd`
// Member `ip`
// Member `mac`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__WifiInfo__init(message_memory);
}

void WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_fini_function(void * message_memory)
{
  protocol__msg__WifiInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_member_array[5] = {
  {
    "ssid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__WifiInfo, ssid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__WifiInfo, pwd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__WifiInfo, ip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__WifiInfo, mac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__WifiInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_members = {
  "protocol__msg",  // message namespace
  "WifiInfo",  // message name
  5,  // number of fields
  sizeof(protocol__msg__WifiInfo),
  WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_member_array,  // message members
  WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_type_support_handle = {
  0,
  &WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, WifiInfo)() {
  if (!WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_type_support_handle.typesupport_identifier) {
    WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WifiInfo__rosidl_typesupport_introspection_c__WifiInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
