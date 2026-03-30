// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/TaskProcessor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/task_processor__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/task_processor__functions.h"
#include "protocol/srv/detail/task_processor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__TaskProcessor_Request__init(message_memory);
}

void TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_fini_function(void * message_memory)
{
  protocol__srv__TaskProcessor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_member_array[1] = {
  {
    "processor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__TaskProcessor_Request, processor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_members = {
  "protocol__srv",  // message namespace
  "TaskProcessor_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__TaskProcessor_Request),
  TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_member_array,  // message members
  TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_type_support_handle = {
  0,
  &TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Request)() {
  if (!TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_type_support_handle.typesupport_identifier) {
    TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TaskProcessor_Request__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/task_processor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/task_processor__functions.h"
// already included above
// #include "protocol/srv/detail/task_processor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__TaskProcessor_Response__init(message_memory);
}

void TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_fini_function(void * message_memory)
{
  protocol__srv__TaskProcessor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_member_array[2] = {
  {
    "purview",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__TaskProcessor_Response, purview),  // bytes offset in struct
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
    offsetof(protocol__srv__TaskProcessor_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_members = {
  "protocol__srv",  // message namespace
  "TaskProcessor_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__TaskProcessor_Response),
  TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_member_array,  // message members
  TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_type_support_handle = {
  0,
  &TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Response)() {
  if (!TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_type_support_handle.typesupport_identifier) {
    TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TaskProcessor_Response__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/task_processor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_members = {
  "protocol__srv",  // service namespace
  "TaskProcessor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_type_support_handle = {
  0,
  &protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor)() {
  if (!protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, TaskProcessor_Response)()->data;
  }

  return &protocol__srv__detail__task_processor__rosidl_typesupport_introspection_c__TaskProcessor_service_type_support_handle;
}
