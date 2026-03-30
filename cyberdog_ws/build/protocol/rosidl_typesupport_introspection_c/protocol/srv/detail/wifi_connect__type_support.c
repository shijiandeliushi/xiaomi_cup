// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/wifi_connect__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/wifi_connect__functions.h"
#include "protocol/srv/detail/wifi_connect__struct.h"


// Include directives for member types
// Member `ssid`
// Member `pwd`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__WifiConnect_Request__init(message_memory);
}

void WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_fini_function(void * message_memory)
{
  protocol__srv__WifiConnect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_member_array[2] = {
  {
    "ssid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__WifiConnect_Request, ssid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__WifiConnect_Request, pwd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_members = {
  "protocol__srv",  // message namespace
  "WifiConnect_Request",  // message name
  2,  // number of fields
  sizeof(protocol__srv__WifiConnect_Request),
  WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_member_array,  // message members
  WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_type_support_handle = {
  0,
  &WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Request)() {
  if (!WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_type_support_handle.typesupport_identifier) {
    WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WifiConnect_Request__rosidl_typesupport_introspection_c__WifiConnect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/wifi_connect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__functions.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__WifiConnect_Response__init(message_memory);
}

void WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_fini_function(void * message_memory)
{
  protocol__srv__WifiConnect_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__WifiConnect_Response, result),  // bytes offset in struct
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
    offsetof(protocol__srv__WifiConnect_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_members = {
  "protocol__srv",  // message namespace
  "WifiConnect_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__WifiConnect_Response),
  WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_member_array,  // message members
  WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_type_support_handle = {
  0,
  &WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Response)() {
  if (!WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_type_support_handle.typesupport_identifier) {
    WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WifiConnect_Response__rosidl_typesupport_introspection_c__WifiConnect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_members = {
  "protocol__srv",  // service namespace
  "WifiConnect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_type_support_handle = {
  0,
  &protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect)() {
  if (!protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, WifiConnect_Response)()->data;
  }

  return &protocol__srv__detail__wifi_connect__rosidl_typesupport_introspection_c__WifiConnect_service_type_support_handle;
}
