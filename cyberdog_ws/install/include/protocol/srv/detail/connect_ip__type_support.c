// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/ConnectIp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/connect_ip__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/connect_ip__functions.h"
#include "protocol/srv/detail/connect_ip__struct.h"


// Include directives for member types
// Member `ip_address`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__ConnectIp_Request__init(message_memory);
}

void ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_fini_function(void * message_memory)
{
  protocol__srv__ConnectIp_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_member_array[1] = {
  {
    "ip_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__ConnectIp_Request, ip_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_members = {
  "protocol__srv",  // message namespace
  "ConnectIp_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__ConnectIp_Request),
  ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_member_array,  // message members
  ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_type_support_handle = {
  0,
  &ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Request)() {
  if (!ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_type_support_handle.typesupport_identifier) {
    ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConnectIp_Request__rosidl_typesupport_introspection_c__ConnectIp_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/connect_ip__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/connect_ip__functions.h"
// already included above
// #include "protocol/srv/detail/connect_ip__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__ConnectIp_Response__init(message_memory);
}

void ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_fini_function(void * message_memory)
{
  protocol__srv__ConnectIp_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__ConnectIp_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_members = {
  "protocol__srv",  // message namespace
  "ConnectIp_Response",  // message name
  1,  // number of fields
  sizeof(protocol__srv__ConnectIp_Response),
  ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_member_array,  // message members
  ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_type_support_handle = {
  0,
  &ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Response)() {
  if (!ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_type_support_handle.typesupport_identifier) {
    ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConnectIp_Response__rosidl_typesupport_introspection_c__ConnectIp_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/connect_ip__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_members = {
  "protocol__srv",  // service namespace
  "ConnectIp",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_type_support_handle = {
  0,
  &protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp)() {
  if (!protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, ConnectIp_Response)()->data;
  }

  return &protocol__srv__detail__connect_ip__rosidl_typesupport_introspection_c__ConnectIp_service_type_support_handle;
}
