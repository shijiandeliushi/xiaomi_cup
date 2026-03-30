// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/body__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/body__functions.h"
#include "protocol/msg/detail/body__struct.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"
// Member `reid`
#include "rosidl_runtime_c/string_functions.h"
// Member `feats`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `keypoints`
#include "protocol/msg/keypoint.h"
// Member `keypoints`
#include "protocol/msg/detail/keypoint__rosidl_typesupport_introspection_c.h"
// Member `gesture`
#include "protocol/msg/gesture.h"
// Member `gesture`
#include "protocol/msg/detail/gesture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Body__rosidl_typesupport_introspection_c__Body_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__Body__init(message_memory);
}

void Body__rosidl_typesupport_introspection_c__Body_fini_function(void * message_memory)
{
  protocol__msg__Body__fini(message_memory);
}

size_t Body__rosidl_typesupport_introspection_c__size_function__Keypoint__keypoints(
  const void * untyped_member)
{
  const protocol__msg__Keypoint__Sequence * member =
    (const protocol__msg__Keypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * Body__rosidl_typesupport_introspection_c__get_const_function__Keypoint__keypoints(
  const void * untyped_member, size_t index)
{
  const protocol__msg__Keypoint__Sequence * member =
    (const protocol__msg__Keypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Body__rosidl_typesupport_introspection_c__get_function__Keypoint__keypoints(
  void * untyped_member, size_t index)
{
  protocol__msg__Keypoint__Sequence * member =
    (protocol__msg__Keypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Body__rosidl_typesupport_introspection_c__resize_function__Keypoint__keypoints(
  void * untyped_member, size_t size)
{
  protocol__msg__Keypoint__Sequence * member =
    (protocol__msg__Keypoint__Sequence *)(untyped_member);
  protocol__msg__Keypoint__Sequence__fini(member);
  return protocol__msg__Keypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Body__rosidl_typesupport_introspection_c__Body_message_member_array[5] = {
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__Body, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__Body, reid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__Body, feats),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__Body, keypoints),  // bytes offset in struct
    NULL,  // default value
    Body__rosidl_typesupport_introspection_c__size_function__Keypoint__keypoints,  // size() function pointer
    Body__rosidl_typesupport_introspection_c__get_const_function__Keypoint__keypoints,  // get_const(index) function pointer
    Body__rosidl_typesupport_introspection_c__get_function__Keypoint__keypoints,  // get(index) function pointer
    Body__rosidl_typesupport_introspection_c__resize_function__Keypoint__keypoints  // resize(index) function pointer
  },
  {
    "gesture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__Body, gesture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Body__rosidl_typesupport_introspection_c__Body_message_members = {
  "protocol__msg",  // message namespace
  "Body",  // message name
  5,  // number of fields
  sizeof(protocol__msg__Body),
  Body__rosidl_typesupport_introspection_c__Body_message_member_array,  // message members
  Body__rosidl_typesupport_introspection_c__Body_init_function,  // function to initialize message memory (memory has to be allocated)
  Body__rosidl_typesupport_introspection_c__Body_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle = {
  0,
  &Body__rosidl_typesupport_introspection_c__Body_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, Body)() {
  Body__rosidl_typesupport_introspection_c__Body_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  Body__rosidl_typesupport_introspection_c__Body_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, Keypoint)();
  Body__rosidl_typesupport_introspection_c__Body_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, Gesture)();
  if (!Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle.typesupport_identifier) {
    Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Body__rosidl_typesupport_introspection_c__Body_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
