// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/led_execute__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/led_execute__functions.h"
#include "protocol/srv/detail/led_execute__struct.h"


// Include directives for member types
// Member `client`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__LedExecute_Request__init(message_memory);
}

void LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_fini_function(void * message_memory)
{
  protocol__srv__LedExecute_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_member_array[8] = {
  {
    "occupation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, occupation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, client),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, effect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, r_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, g_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Request, b_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_members = {
  "protocol__srv",  // message namespace
  "LedExecute_Request",  // message name
  8,  // number of fields
  sizeof(protocol__srv__LedExecute_Request),
  LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_member_array,  // message members
  LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_type_support_handle = {
  0,
  &LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Request)() {
  if (!LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_type_support_handle.typesupport_identifier) {
    LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedExecute_Request__rosidl_typesupport_introspection_c__LedExecute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/led_execute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/led_execute__functions.h"
// already included above
// #include "protocol/srv/detail/led_execute__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__LedExecute_Response__init(message_memory);
}

void LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_fini_function(void * message_memory)
{
  protocol__srv__LedExecute_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_member_array[1] = {
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__LedExecute_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_members = {
  "protocol__srv",  // message namespace
  "LedExecute_Response",  // message name
  1,  // number of fields
  sizeof(protocol__srv__LedExecute_Response),
  LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_member_array,  // message members
  LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_type_support_handle = {
  0,
  &LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Response)() {
  if (!LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_type_support_handle.typesupport_identifier) {
    LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LedExecute_Response__rosidl_typesupport_introspection_c__LedExecute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/led_execute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_members = {
  "protocol__srv",  // service namespace
  "LedExecute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_type_support_handle = {
  0,
  &protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute)() {
  if (!protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, LedExecute_Response)()->data;
  }

  return &protocol__srv__detail__led_execute__rosidl_typesupport_introspection_c__LedExecute_service_type_support_handle;
}
