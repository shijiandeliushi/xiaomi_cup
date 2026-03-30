// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/map_label__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/map_label__functions.h"
#include "protocol/msg/detail/map_label__struct.h"


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `map`
#include "protocol/msg/occupancy_grid.h"
// Member `map`
#include "protocol/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"
// Member `labels`
#include "protocol/msg/label.h"
// Member `labels`
#include "protocol/msg/detail/label__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapLabel__rosidl_typesupport_introspection_c__MapLabel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__MapLabel__init(message_memory);
}

void MapLabel__rosidl_typesupport_introspection_c__MapLabel_fini_function(void * message_memory)
{
  protocol__msg__MapLabel__fini(message_memory);
}

size_t MapLabel__rosidl_typesupport_introspection_c__size_function__Label__labels(
  const void * untyped_member)
{
  const protocol__msg__Label__Sequence * member =
    (const protocol__msg__Label__Sequence *)(untyped_member);
  return member->size;
}

const void * MapLabel__rosidl_typesupport_introspection_c__get_const_function__Label__labels(
  const void * untyped_member, size_t index)
{
  const protocol__msg__Label__Sequence * member =
    (const protocol__msg__Label__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapLabel__rosidl_typesupport_introspection_c__get_function__Label__labels(
  void * untyped_member, size_t index)
{
  protocol__msg__Label__Sequence * member =
    (protocol__msg__Label__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapLabel__rosidl_typesupport_introspection_c__resize_function__Label__labels(
  void * untyped_member, size_t size)
{
  protocol__msg__Label__Sequence * member =
    (protocol__msg__Label__Sequence *)(untyped_member);
  protocol__msg__Label__Sequence__fini(member);
  return protocol__msg__Label__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_member_array[5] = {
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MapLabel, map_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MapLabel, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_outdoor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MapLabel, is_outdoor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MapLabel, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__MapLabel, labels),  // bytes offset in struct
    NULL,  // default value
    MapLabel__rosidl_typesupport_introspection_c__size_function__Label__labels,  // size() function pointer
    MapLabel__rosidl_typesupport_introspection_c__get_const_function__Label__labels,  // get_const(index) function pointer
    MapLabel__rosidl_typesupport_introspection_c__get_function__Label__labels,  // get(index) function pointer
    MapLabel__rosidl_typesupport_introspection_c__resize_function__Label__labels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_members = {
  "protocol__msg",  // message namespace
  "MapLabel",  // message name
  5,  // number of fields
  sizeof(protocol__msg__MapLabel),
  MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_member_array,  // message members
  MapLabel__rosidl_typesupport_introspection_c__MapLabel_init_function,  // function to initialize message memory (memory has to be allocated)
  MapLabel__rosidl_typesupport_introspection_c__MapLabel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_type_support_handle = {
  0,
  &MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MapLabel)() {
  MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, OccupancyGrid)();
  MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, Label)();
  if (!MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_type_support_handle.typesupport_identifier) {
    MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapLabel__rosidl_typesupport_introspection_c__MapLabel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
