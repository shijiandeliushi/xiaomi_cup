// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/FollowPoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/follow_points__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/follow_points__functions.h"
#include "protocol/msg/detail/follow_points__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `token`
#include "rosidl_runtime_c/string_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__FollowPoints__init(message_memory);
}

void FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_fini_function(void * message_memory)
{
  protocol__msg__FollowPoints__fini(message_memory);
}

size_t FollowPoints__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * FollowPoints__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FollowPoints__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FollowPoints__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FollowPoints, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FollowPoints, token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FollowPoints, poses),  // bytes offset in struct
    NULL,  // default value
    FollowPoints__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses,  // size() function pointer
    FollowPoints__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses,  // get_const(index) function pointer
    FollowPoints__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses,  // get(index) function pointer
    FollowPoints__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_members = {
  "protocol__msg",  // message namespace
  "FollowPoints",  // message name
  3,  // number of fields
  sizeof(protocol__msg__FollowPoints),
  FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_member_array,  // message members
  FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_type_support_handle = {
  0,
  &FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, FollowPoints)() {
  FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_type_support_handle.typesupport_identifier) {
    FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FollowPoints__rosidl_typesupport_introspection_c__FollowPoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
