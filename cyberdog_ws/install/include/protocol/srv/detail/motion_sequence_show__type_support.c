// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/motion_sequence_show__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/motion_sequence_show__functions.h"
#include "protocol/srv/detail/motion_sequence_show__struct.h"


// Include directives for member types
// Member `gait_list`
#include "protocol/msg/motion_sequence_gait.h"
// Member `gait_list`
#include "protocol/msg/detail/motion_sequence_gait__rosidl_typesupport_introspection_c.h"
// Member `pace_list`
#include "protocol/msg/motion_sequence_pace.h"
// Member `pace_list`
#include "protocol/msg/detail/motion_sequence_pace__rosidl_typesupport_introspection_c.h"
// Member `gait_toml_list`
// Member `pace_toml_list`
// Member `gait_toml`
// Member `pace_toml`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionSequenceShow_Request__init(message_memory);
}

void MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_fini_function(void * message_memory)
{
  protocol__srv__MotionSequenceShow_Request__fini(message_memory);
}

size_t MotionSequenceShow_Request__rosidl_typesupport_introspection_c__size_function__MotionSequenceGait__gait_list(
  const void * untyped_member)
{
  const protocol__msg__MotionSequenceGait__Sequence * member =
    (const protocol__msg__MotionSequenceGait__Sequence *)(untyped_member);
  return member->size;
}

const void * MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_const_function__MotionSequenceGait__gait_list(
  const void * untyped_member, size_t index)
{
  const protocol__msg__MotionSequenceGait__Sequence * member =
    (const protocol__msg__MotionSequenceGait__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_function__MotionSequenceGait__gait_list(
  void * untyped_member, size_t index)
{
  protocol__msg__MotionSequenceGait__Sequence * member =
    (protocol__msg__MotionSequenceGait__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MotionSequenceShow_Request__rosidl_typesupport_introspection_c__resize_function__MotionSequenceGait__gait_list(
  void * untyped_member, size_t size)
{
  protocol__msg__MotionSequenceGait__Sequence * member =
    (protocol__msg__MotionSequenceGait__Sequence *)(untyped_member);
  protocol__msg__MotionSequenceGait__Sequence__fini(member);
  return protocol__msg__MotionSequenceGait__Sequence__init(member, size);
}

size_t MotionSequenceShow_Request__rosidl_typesupport_introspection_c__size_function__MotionSequencePace__pace_list(
  const void * untyped_member)
{
  const protocol__msg__MotionSequencePace__Sequence * member =
    (const protocol__msg__MotionSequencePace__Sequence *)(untyped_member);
  return member->size;
}

const void * MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_const_function__MotionSequencePace__pace_list(
  const void * untyped_member, size_t index)
{
  const protocol__msg__MotionSequencePace__Sequence * member =
    (const protocol__msg__MotionSequencePace__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_function__MotionSequencePace__pace_list(
  void * untyped_member, size_t index)
{
  protocol__msg__MotionSequencePace__Sequence * member =
    (protocol__msg__MotionSequencePace__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MotionSequenceShow_Request__rosidl_typesupport_introspection_c__resize_function__MotionSequencePace__pace_list(
  void * untyped_member, size_t size)
{
  protocol__msg__MotionSequencePace__Sequence * member =
    (protocol__msg__MotionSequencePace__Sequence *)(untyped_member);
  protocol__msg__MotionSequencePace__Sequence__fini(member);
  return protocol__msg__MotionSequencePace__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_member_array[9] = {
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, motion_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, cmd_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gait_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, gait_list),  // bytes offset in struct
    NULL,  // default value
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__size_function__MotionSequenceGait__gait_list,  // size() function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_const_function__MotionSequenceGait__gait_list,  // get_const(index) function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_function__MotionSequenceGait__gait_list,  // get(index) function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__resize_function__MotionSequenceGait__gait_list  // resize(index) function pointer
  },
  {
    "pace_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, pace_list),  // bytes offset in struct
    NULL,  // default value
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__size_function__MotionSequencePace__pace_list,  // size() function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_const_function__MotionSequencePace__pace_list,  // get_const(index) function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__get_function__MotionSequencePace__pace_list,  // get(index) function pointer
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__resize_function__MotionSequencePace__pace_list  // resize(index) function pointer
  },
  {
    "gait_toml_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, gait_toml_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pace_toml_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, pace_toml_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gait_toml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, gait_toml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pace_toml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Request, pace_toml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_members = {
  "protocol__srv",  // message namespace
  "MotionSequenceShow_Request",  // message name
  9,  // number of fields
  sizeof(protocol__srv__MotionSequenceShow_Request),
  MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_member_array,  // message members
  MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_type_support_handle = {
  0,
  &MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Request)() {
  MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MotionSequenceGait)();
  MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MotionSequencePace)();
  if (!MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_type_support_handle.typesupport_identifier) {
    MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionSequenceShow_Request__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/motion_sequence_show__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/motion_sequence_show__functions.h"
// already included above
// #include "protocol/srv/detail/motion_sequence_show__struct.h"


// Include directives for member types
// Member `describe`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionSequenceShow_Response__init(message_memory);
}

void MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_fini_function(void * message_memory)
{
  protocol__srv__MotionSequenceShow_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_member_array[4] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "describe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Response, describe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionSequenceShow_Response, motion_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_members = {
  "protocol__srv",  // message namespace
  "MotionSequenceShow_Response",  // message name
  4,  // number of fields
  sizeof(protocol__srv__MotionSequenceShow_Response),
  MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_member_array,  // message members
  MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_type_support_handle = {
  0,
  &MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Response)() {
  if (!MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_type_support_handle.typesupport_identifier) {
    MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionSequenceShow_Response__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/motion_sequence_show__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_members = {
  "protocol__srv",  // service namespace
  "MotionSequenceShow",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_type_support_handle = {
  0,
  &protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow)() {
  if (!protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionSequenceShow_Response)()->data;
  }

  return &protocol__srv__detail__motion_sequence_show__rosidl_typesupport_introspection_c__MotionSequenceShow_service_type_support_handle;
}
