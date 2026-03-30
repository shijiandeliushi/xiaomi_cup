// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/track_result__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/track_result__functions.h"
#include "protocol/msg/detail/track_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackResult__rosidl_typesupport_introspection_c__TrackResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__TrackResult__init(message_memory);
}

void TrackResult__rosidl_typesupport_introspection_c__TrackResult_fini_function(void * message_memory)
{
  protocol__msg__TrackResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__TrackResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__TrackResult, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_members = {
  "protocol__msg",  // message namespace
  "TrackResult",  // message name
  2,  // number of fields
  sizeof(protocol__msg__TrackResult),
  TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_member_array,  // message members
  TrackResult__rosidl_typesupport_introspection_c__TrackResult_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackResult__rosidl_typesupport_introspection_c__TrackResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_type_support_handle = {
  0,
  &TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, TrackResult)() {
  TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_type_support_handle.typesupport_identifier) {
    TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackResult__rosidl_typesupport_introspection_c__TrackResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
