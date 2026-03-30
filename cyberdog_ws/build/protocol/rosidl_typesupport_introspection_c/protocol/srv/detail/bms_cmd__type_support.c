// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/bms_cmd__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/bms_cmd__functions.h"
#include "protocol/srv/detail/bms_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__BmsCmd_Request__init(message_memory);
}

void BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_fini_function(void * message_memory)
{
  protocol__srv__BmsCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_member_array[2] = {
  {
    "electric_machine_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BmsCmd_Request, electric_machine_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wireless_charging_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BmsCmd_Request, wireless_charging_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_members = {
  "protocol__srv",  // message namespace
  "BmsCmd_Request",  // message name
  2,  // number of fields
  sizeof(protocol__srv__BmsCmd_Request),
  BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_member_array,  // message members
  BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_type_support_handle = {
  0,
  &BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Request)() {
  if (!BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_type_support_handle.typesupport_identifier) {
    BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BmsCmd_Request__rosidl_typesupport_introspection_c__BmsCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/bms_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/bms_cmd__functions.h"
// already included above
// #include "protocol/srv/detail/bms_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__BmsCmd_Response__init(message_memory);
}

void BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_fini_function(void * message_memory)
{
  protocol__srv__BmsCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BmsCmd_Response, success),  // bytes offset in struct
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
    offsetof(protocol__srv__BmsCmd_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_members = {
  "protocol__srv",  // message namespace
  "BmsCmd_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__BmsCmd_Response),
  BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_member_array,  // message members
  BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_type_support_handle = {
  0,
  &BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Response)() {
  if (!BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_type_support_handle.typesupport_identifier) {
    BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BmsCmd_Response__rosidl_typesupport_introspection_c__BmsCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/bms_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_members = {
  "protocol__srv",  // service namespace
  "BmsCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_type_support_handle = {
  0,
  &protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd)() {
  if (!protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Response)()->data;
  }

  return &protocol__srv__detail__bms_cmd__rosidl_typesupport_introspection_c__BmsCmd_service_type_support_handle;
}
