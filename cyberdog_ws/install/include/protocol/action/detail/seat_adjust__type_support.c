// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:action/SeatAdjust.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/action/detail/seat_adjust__functions.h"
#include "protocol/action/detail/seat_adjust__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_Goal__init(message_memory);
}

void SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_member_array[1] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_Goal, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_Goal",  // message name
  1,  // number of fields
  sizeof(protocol__action__SeatAdjust_Goal),
  SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_member_array,  // message members
  SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_type_support_handle = {
  0,
  &SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Goal)() {
  if (!SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_Goal__rosidl_typesupport_introspection_c__SeatAdjust_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_Result__init(message_memory);
}

void SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_Result",  // message name
  1,  // number of fields
  sizeof(protocol__action__SeatAdjust_Result),
  SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_member_array,  // message members
  SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_type_support_handle = {
  0,
  &SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Result)() {
  if (!SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_Result__rosidl_typesupport_introspection_c__SeatAdjust_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_Feedback__init(message_memory);
}

void SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_member_array[1] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_Feedback, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_Feedback",  // message name
  1,  // number of fields
  sizeof(protocol__action__SeatAdjust_Feedback),
  SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_member_array,  // message members
  SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_type_support_handle = {
  0,
  &SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Feedback)() {
  if (!SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_Feedback__rosidl_typesupport_introspection_c__SeatAdjust_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "protocol/action/seat_adjust.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_SendGoal_Request__init(message_memory);
}

void SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(protocol__action__SeatAdjust_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(protocol__action__SeatAdjust_SendGoal_Request),
  SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_member_array,  // message members
  SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_type_support_handle = {
  0,
  &SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Request)() {
  SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Goal)();
  if (!SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_SendGoal_Request__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_SendGoal_Response__init(message_memory);
}

void SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(protocol__action__SeatAdjust_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__SeatAdjust_SendGoal_Response),
  SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_member_array,  // message members
  SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_type_support_handle = {
  0,
  &SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Response)() {
  SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_SendGoal_Response__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_members = {
  "protocol__action",  // service namespace
  "SeatAdjust_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_type_support_handle = {
  0,
  &protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal)() {
  if (!protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_SendGoal_Response)()->data;
  }

  return &protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


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

void SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_GetResult_Request__init(message_memory);
}

void SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(protocol__action__SeatAdjust_GetResult_Request),
  SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_member_array,  // message members
  SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_type_support_handle = {
  0,
  &SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Request)() {
  SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_GetResult_Request__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/seat_adjust.h"
// Member `result`
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_GetResult_Response__init(message_memory);
}

void SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(protocol__action__SeatAdjust_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__SeatAdjust_GetResult_Response),
  SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_member_array,  // message members
  SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_type_support_handle = {
  0,
  &SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Response)() {
  SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Result)();
  if (!SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_GetResult_Response__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_members = {
  "protocol__action",  // service namespace
  "SeatAdjust_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_type_support_handle = {
  0,
  &protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult)() {
  if (!protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_GetResult_Response)()->data;
  }

  return &protocol__action__detail__seat_adjust__rosidl_typesupport_introspection_c__SeatAdjust_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/seat_adjust__functions.h"
// already included above
// #include "protocol/action/detail/seat_adjust__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "protocol/action/seat_adjust.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/seat_adjust__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__SeatAdjust_FeedbackMessage__init(message_memory);
}

void SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_fini_function(void * message_memory)
{
  protocol__action__SeatAdjust_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__SeatAdjust_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(protocol__action__SeatAdjust_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_members = {
  "protocol__action",  // message namespace
  "SeatAdjust_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(protocol__action__SeatAdjust_FeedbackMessage),
  SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_member_array,  // message members
  SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_type_support_handle = {
  0,
  &SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_FeedbackMessage)() {
  SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, SeatAdjust_Feedback)();
  if (!SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SeatAdjust_FeedbackMessage__rosidl_typesupport_introspection_c__SeatAdjust_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
