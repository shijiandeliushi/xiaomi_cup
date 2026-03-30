// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/AccountSearch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/account_search__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/account_search__functions.h"
#include "protocol/srv/detail/account_search__struct.h"


// Include directives for member types
// Member `member`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__AccountSearch_Request__init(message_memory);
}

void AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_fini_function(void * message_memory)
{
  protocol__srv__AccountSearch_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_member_array[1] = {
  {
    "member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__AccountSearch_Request, member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_members = {
  "protocol__srv",  // message namespace
  "AccountSearch_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__AccountSearch_Request),
  AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_member_array,  // message members
  AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_type_support_handle = {
  0,
  &AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Request)() {
  if (!AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_type_support_handle.typesupport_identifier) {
    AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AccountSearch_Request__rosidl_typesupport_introspection_c__AccountSearch_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/account_search__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/account_search__functions.h"
// already included above
// #include "protocol/srv/detail/account_search__struct.h"


// Include directives for member types
// Member `data`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__AccountSearch_Response__init(message_memory);
}

void AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_fini_function(void * message_memory)
{
  protocol__srv__AccountSearch_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__AccountSearch_Response, data),  // bytes offset in struct
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
    offsetof(protocol__srv__AccountSearch_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_members = {
  "protocol__srv",  // message namespace
  "AccountSearch_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__AccountSearch_Response),
  AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_member_array,  // message members
  AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_type_support_handle = {
  0,
  &AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Response)() {
  if (!AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_type_support_handle.typesupport_identifier) {
    AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AccountSearch_Response__rosidl_typesupport_introspection_c__AccountSearch_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/account_search__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_members = {
  "protocol__srv",  // service namespace
  "AccountSearch",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_type_support_handle = {
  0,
  &protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch)() {
  if (!protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, AccountSearch_Response)()->data;
  }

  return &protocol__srv__detail__account_search__rosidl_typesupport_introspection_c__AccountSearch_service_type_support_handle;
}
