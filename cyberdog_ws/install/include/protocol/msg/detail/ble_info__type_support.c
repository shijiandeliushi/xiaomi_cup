// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/ble_info__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/ble_info__functions.h"
#include "protocol/msg/detail/ble_info__struct.h"


// Include directives for member types
// Member `mac`
// Member `name`
// Member `addr_type`
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__BLEInfo__init(message_memory);
}

void BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_fini_function(void * message_memory)
{
  protocol__msg__BLEInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_member_array[6] = {
  {
    "mac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, mac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "addr_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, addr_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, device_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__BLEInfo, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_members = {
  "protocol__msg",  // message namespace
  "BLEInfo",  // message name
  6,  // number of fields
  sizeof(protocol__msg__BLEInfo),
  BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_member_array,  // message members
  BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_type_support_handle = {
  0,
  &BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, BLEInfo)() {
  if (!BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_type_support_handle.typesupport_identifier) {
    BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BLEInfo__rosidl_typesupport_introspection_c__BLEInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
