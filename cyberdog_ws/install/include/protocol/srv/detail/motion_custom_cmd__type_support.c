// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/motion_custom_cmd__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/motion_custom_cmd__functions.h"
#include "protocol/srv/detail/motion_custom_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionCustomCmd_Request__init(message_memory);
}

void MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_fini_function(void * message_memory)
{
  protocol__srv__MotionCustomCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_member_array[3] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionCustomCmd_Request, cmd_type),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionCustomCmd_Request, cmd_source),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionCustomCmd_Request, motion_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_members = {
  "protocol__srv",  // message namespace
  "MotionCustomCmd_Request",  // message name
  3,  // number of fields
  sizeof(protocol__srv__MotionCustomCmd_Request),
  MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_member_array,  // message members
  MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_type_support_handle = {
  0,
  &MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Request)() {
  if (!MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_type_support_handle.typesupport_identifier) {
    MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionCustomCmd_Request__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/motion_custom_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/motion_custom_cmd__functions.h"
// already included above
// #include "protocol/srv/detail/motion_custom_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__MotionCustomCmd_Response__init(message_memory);
}

void MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_fini_function(void * message_memory)
{
  protocol__srv__MotionCustomCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_member_array[3] = {
  {
    "motion_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__MotionCustomCmd_Response, motion_id),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionCustomCmd_Response, result),  // bytes offset in struct
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
    offsetof(protocol__srv__MotionCustomCmd_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_members = {
  "protocol__srv",  // message namespace
  "MotionCustomCmd_Response",  // message name
  3,  // number of fields
  sizeof(protocol__srv__MotionCustomCmd_Response),
  MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_member_array,  // message members
  MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_type_support_handle = {
  0,
  &MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Response)() {
  if (!MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_type_support_handle.typesupport_identifier) {
    MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionCustomCmd_Response__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/motion_custom_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_members = {
  "protocol__srv",  // service namespace
  "MotionCustomCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_type_support_handle = {
  0,
  &protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd)() {
  if (!protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, MotionCustomCmd_Response)()->data;
  }

  return &protocol__srv__detail__motion_custom_cmd__rosidl_typesupport_introspection_c__MotionCustomCmd_service_type_support_handle;
}
