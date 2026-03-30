// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/action/detail/navigation__functions.h"
#include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `label_id`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracking_roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `tracking_roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_Goal__init(message_memory);
}

void Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_fini_function(void * message_memory)
{
  protocol__action__Navigation_Goal__fini(message_memory);
}

size_t Navigation_Goal__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * Navigation_Goal__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Navigation_Goal__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Navigation_Goal__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_member_array[9] = {
  {
    "nav_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, nav_type),  // bytes offset in struct
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
    offsetof(protocol__action__Navigation_Goal, poses),  // bytes offset in struct
    NULL,  // default value
    Navigation_Goal__rosidl_typesupport_introspection_c__size_function__PoseStamped__poses,  // size() function pointer
    Navigation_Goal__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__poses,  // get_const(index) function pointer
    Navigation_Goal__rosidl_typesupport_introspection_c__get_function__PoseStamped__poses,  // get(index) function pointer
    Navigation_Goal__rosidl_typesupport_introspection_c__resize_function__PoseStamped__poses  // resize(index) function pointer
  },
  {
    "label_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, label_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, map_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, tracking_roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, relative_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keep_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, keep_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outdoor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, outdoor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_tracking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Goal, object_tracking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_members = {
  "protocol__action",  // message namespace
  "Navigation_Goal",  // message name
  9,  // number of fields
  sizeof(protocol__action__Navigation_Goal),
  Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_member_array,  // message members
  Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_type_support_handle = {
  0,
  &Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Goal)() {
  Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_type_support_handle.typesupport_identifier) {
    Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_Goal__rosidl_typesupport_introspection_c__Navigation_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_Result__init(message_memory);
}

void Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_fini_function(void * message_memory)
{
  protocol__action__Navigation_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_members = {
  "protocol__action",  // message namespace
  "Navigation_Result",  // message name
  1,  // number of fields
  sizeof(protocol__action__Navigation_Result),
  Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_member_array,  // message members
  Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_type_support_handle = {
  0,
  &Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Result)() {
  if (!Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_type_support_handle.typesupport_identifier) {
    Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_Result__rosidl_typesupport_introspection_c__Navigation_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `feedback_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_Feedback__init(message_memory);
}

void Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_fini_function(void * message_memory)
{
  protocol__action__Navigation_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_member_array[2] = {
  {
    "feedback_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Feedback, feedback_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_Feedback, feedback_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_members = {
  "protocol__action",  // message namespace
  "Navigation_Feedback",  // message name
  2,  // number of fields
  sizeof(protocol__action__Navigation_Feedback),
  Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_member_array,  // message members
  Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_type_support_handle = {
  0,
  &Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Feedback)() {
  if (!Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_type_support_handle.typesupport_identifier) {
    Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_Feedback__rosidl_typesupport_introspection_c__Navigation_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "protocol/action/navigation.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_SendGoal_Request__init(message_memory);
}

void Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_fini_function(void * message_memory)
{
  protocol__action__Navigation_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_members = {
  "protocol__action",  // message namespace
  "Navigation_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(protocol__action__Navigation_SendGoal_Request),
  Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_member_array,  // message members
  Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_type_support_handle = {
  0,
  &Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Request)() {
  Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Goal)();
  if (!Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_SendGoal_Request__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_SendGoal_Response__init(message_memory);
}

void Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_fini_function(void * message_memory)
{
  protocol__action__Navigation_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_members = {
  "protocol__action",  // message namespace
  "Navigation_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__Navigation_SendGoal_Response),
  Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_member_array,  // message members
  Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_type_support_handle = {
  0,
  &Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Response)() {
  Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_SendGoal_Response__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_members = {
  "protocol__action",  // service namespace
  "Navigation_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_type_support_handle = {
  0,
  &protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal)() {
  if (!protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_SendGoal_Response)()->data;
  }

  return &protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_GetResult_Request__init(message_memory);
}

void Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_fini_function(void * message_memory)
{
  protocol__action__Navigation_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_members = {
  "protocol__action",  // message namespace
  "Navigation_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(protocol__action__Navigation_GetResult_Request),
  Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_member_array,  // message members
  Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_type_support_handle = {
  0,
  &Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Request)() {
  Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_GetResult_Request__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/navigation.h"
// Member `result`
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_GetResult_Response__init(message_memory);
}

void Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_fini_function(void * message_memory)
{
  protocol__action__Navigation_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_members = {
  "protocol__action",  // message namespace
  "Navigation_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__Navigation_GetResult_Response),
  Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_member_array,  // message members
  Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_type_support_handle = {
  0,
  &Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Response)() {
  Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Result)();
  if (!Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_GetResult_Response__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_members = {
  "protocol__action",  // service namespace
  "Navigation_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_type_support_handle = {
  0,
  &protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult)() {
  if (!protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_GetResult_Response)()->data;
  }

  return &protocol__action__detail__navigation__rosidl_typesupport_introspection_c__Navigation_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/navigation__functions.h"
// already included above
// #include "protocol/action/detail/navigation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "protocol/action/navigation.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Navigation_FeedbackMessage__init(message_memory);
}

void Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_fini_function(void * message_memory)
{
  protocol__action__Navigation_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Navigation_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_members = {
  "protocol__action",  // message namespace
  "Navigation_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(protocol__action__Navigation_FeedbackMessage),
  Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_member_array,  // message members
  Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_type_support_handle = {
  0,
  &Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_FeedbackMessage)() {
  Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Navigation_Feedback)();
  if (!Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Navigation_FeedbackMessage__rosidl_typesupport_introspection_c__Navigation_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
