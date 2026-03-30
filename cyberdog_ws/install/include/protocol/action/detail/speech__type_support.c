// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:action/Speech.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/action/detail/speech__functions.h"
#include "protocol/action/detail/speech__struct.h"


// Include directives for member types
// Member `module_name`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `speech`
#include "protocol/msg/audio_play.h"
// Member `speech`
#include "protocol/msg/detail/audio_play__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_Goal__init(message_memory);
}

void Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_fini_function(void * message_memory)
{
  protocol__action__Speech_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_member_array[4] = {
  {
    "module_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Goal, module_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_online",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Goal, is_online),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speech",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Goal, speech),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Goal, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_members = {
  "protocol__action",  // message namespace
  "Speech_Goal",  // message name
  4,  // number of fields
  sizeof(protocol__action__Speech_Goal),
  Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_member_array,  // message members
  Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_type_support_handle = {
  0,
  &Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Goal)() {
  Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, AudioPlay)();
  if (!Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_type_support_handle.typesupport_identifier) {
    Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_Goal__rosidl_typesupport_introspection_c__Speech_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_Result__init(message_memory);
}

void Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_fini_function(void * message_memory)
{
  protocol__action__Speech_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Result, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_members = {
  "protocol__action",  // message namespace
  "Speech_Result",  // message name
  1,  // number of fields
  sizeof(protocol__action__Speech_Result),
  Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_member_array,  // message members
  Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_type_support_handle = {
  0,
  &Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Result)() {
  if (!Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_type_support_handle.typesupport_identifier) {
    Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_Result__rosidl_typesupport_introspection_c__Speech_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_Feedback__init(message_memory);
}

void Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_fini_function(void * message_memory)
{
  protocol__action__Speech_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_member_array[1] = {
  {
    "talking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_Feedback, talking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_members = {
  "protocol__action",  // message namespace
  "Speech_Feedback",  // message name
  1,  // number of fields
  sizeof(protocol__action__Speech_Feedback),
  Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_member_array,  // message members
  Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_type_support_handle = {
  0,
  &Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Feedback)() {
  if (!Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_type_support_handle.typesupport_identifier) {
    Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_Feedback__rosidl_typesupport_introspection_c__Speech_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "protocol/action/speech.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_SendGoal_Request__init(message_memory);
}

void Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_fini_function(void * message_memory)
{
  protocol__action__Speech_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(protocol__action__Speech_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_members = {
  "protocol__action",  // message namespace
  "Speech_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(protocol__action__Speech_SendGoal_Request),
  Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_member_array,  // message members
  Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_type_support_handle = {
  0,
  &Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Request)() {
  Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Goal)();
  if (!Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_SendGoal_Request__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_SendGoal_Response__init(message_memory);
}

void Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_fini_function(void * message_memory)
{
  protocol__action__Speech_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(protocol__action__Speech_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_members = {
  "protocol__action",  // message namespace
  "Speech_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__Speech_SendGoal_Response),
  Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_member_array,  // message members
  Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_type_support_handle = {
  0,
  &Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Response)() {
  Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_SendGoal_Response__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_members = {
  "protocol__action",  // service namespace
  "Speech_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_type_support_handle = {
  0,
  &protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal)() {
  if (!protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_SendGoal_Response)()->data;
  }

  return &protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


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

void Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_GetResult_Request__init(message_memory);
}

void Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_fini_function(void * message_memory)
{
  protocol__action__Speech_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_members = {
  "protocol__action",  // message namespace
  "Speech_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(protocol__action__Speech_GetResult_Request),
  Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_member_array,  // message members
  Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_type_support_handle = {
  0,
  &Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Request)() {
  Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_GetResult_Request__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/speech.h"
// Member `result`
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_GetResult_Response__init(message_memory);
}

void Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_fini_function(void * message_memory)
{
  protocol__action__Speech_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(protocol__action__Speech_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_members = {
  "protocol__action",  // message namespace
  "Speech_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(protocol__action__Speech_GetResult_Response),
  Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_member_array,  // message members
  Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_type_support_handle = {
  0,
  &Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Response)() {
  Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Result)();
  if (!Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_GetResult_Response__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_members = {
  "protocol__action",  // service namespace
  "Speech_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_type_support_handle = {
  0,
  &protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult)() {
  if (!protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_type_support_handle.typesupport_identifier) {
    protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_GetResult_Response)()->data;
  }

  return &protocol__action__detail__speech__rosidl_typesupport_introspection_c__Speech_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/action/detail/speech__functions.h"
// already included above
// #include "protocol/action/detail/speech__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "protocol/action/speech.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/speech__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__action__Speech_FeedbackMessage__init(message_memory);
}

void Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_fini_function(void * message_memory)
{
  protocol__action__Speech_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__action__Speech_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(protocol__action__Speech_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_members = {
  "protocol__action",  // message namespace
  "Speech_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(protocol__action__Speech_FeedbackMessage),
  Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_member_array,  // message members
  Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_type_support_handle = {
  0,
  &Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_FeedbackMessage)() {
  Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, action, Speech_Feedback)();
  if (!Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Speech_FeedbackMessage__rosidl_typesupport_introspection_c__Speech_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
