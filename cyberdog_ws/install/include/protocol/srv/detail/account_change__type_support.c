// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/AccountChange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/account_change__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/account_change__functions.h"
#include "protocol/srv/detail/account_change__struct.h"


// Include directives for member types
// Member `pre_name`
// Member `new_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__AccountChange_Request__init(message_memory);
}

void AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_fini_function(void * message_memory)
{
  protocol__srv__AccountChange_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_member_array[2] = {
  {
    "pre_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__AccountChange_Request, pre_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__AccountChange_Request, new_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_members = {
  "protocol__srv",  // message namespace
  "AccountChange_Request",  // message name
  2,  // number of fields
  sizeof(protocol__srv__AccountChange_Request),
  AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_member_array,  // message members
  AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_type_support_handle = {
  0,
  &AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Request)() {
  if (!AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_type_support_handle.typesupport_identifier) {
    AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AccountChange_Request__rosidl_typesupport_introspection_c__AccountChange_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/account_change__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/account_change__functions.h"
// already included above
// #include "protocol/srv/detail/account_change__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__AccountChange_Response__init(message_memory);
}

void AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_fini_function(void * message_memory)
{
  protocol__srv__AccountChange_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_member_array[1] = {
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__AccountChange_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_members = {
  "protocol__srv",  // message namespace
  "AccountChange_Response",  // message name
  1,  // number of fields
  sizeof(protocol__srv__AccountChange_Response),
  AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_member_array,  // message members
  AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_type_support_handle = {
  0,
  &AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Response)() {
  if (!AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_type_support_handle.typesupport_identifier) {
    AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AccountChange_Response__rosidl_typesupport_introspection_c__AccountChange_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/account_change__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_members = {
  "protocol__srv",  // service namespace
  "AccountChange",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_type_support_handle = {
  0,
  &protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange)() {
  if (!protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountChange_Response)()->data;
  }

  return &protocol__srv__detail__account_change__rosidl_typesupport_introspection_c__AccountChange_service_type_support_handle;
}
