// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/motion_result_cmd__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/motion_result_cmd__functions.h"
#include "protocol/srv/detail/motion_result_cmd__struct.h"


// Include directives for member types
// Member `vel_des`
// Member `rpy_des`
// Member `pos_des`
// Member `acc_des`
// Member `ctrl_point`
// Member `foot_pose`
// Member `step_height`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gait_toml`
// Member `toml_data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionResultCmd_Request__init(message_memory);
}

void MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_fini_function(void * message_memory)
{
  protocol__srv__MotionResultCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_member_array[14] = {
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, motion_id),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionResultCmd_Request, cmd_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, vel_des),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpy_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, rpy_des),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, pos_des),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, acc_des),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, ctrl_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, foot_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, step_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, contact),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionResultCmd_Request, gait_toml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toml_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Request, toml_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_members = {
  "protocol__srv",  // message namespace
  "MotionResultCmd_Request",  // message name
  14,  // number of fields
  sizeof(protocol__srv__MotionResultCmd_Request),
  MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_member_array,  // message members
  MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_type_support_handle = {
  0,
  &MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Request)() {
  if (!MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_type_support_handle.typesupport_identifier) {
    MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionResultCmd_Request__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/motion_result_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/motion_result_cmd__functions.h"
// already included above
// #include "protocol/srv/detail/motion_result_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionResultCmd_Response__init(message_memory);
}

void MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_fini_function(void * message_memory)
{
  protocol__srv__MotionResultCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_member_array[3] = {
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Response, motion_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionResultCmd_Response, result),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionResultCmd_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_members = {
  "protocol__srv",  // message namespace
  "MotionResultCmd_Response",  // message name
  3,  // number of fields
  sizeof(protocol__srv__MotionResultCmd_Response),
  MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_member_array,  // message members
  MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_type_support_handle = {
  0,
  &MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Response)() {
  if (!MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_type_support_handle.typesupport_identifier) {
    MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionResultCmd_Response__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/motion_result_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_members = {
  "protocol__srv",  // service namespace
  "MotionResultCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_type_support_handle = {
  0,
  &protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd)() {
  if (!protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionResultCmd_Response)()->data;
  }

  return &protocol__srv__detail__motion_result_cmd__rosidl_typesupport_introspection_c__MotionResultCmd_service_type_support_handle;
}
