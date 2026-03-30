// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/face_entry__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/face_entry__functions.h"
#include "protocol/srv/detail/face_entry__struct.h"


// Include directives for member types
// Member `username`
// Member `oriname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__FaceEntry_Request__init(message_memory);
}

void FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_fini_function(void * message_memory)
{
  protocol__srv__FaceEntry_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_member_array[4] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "username",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Request, username),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "oriname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Request, oriname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ishost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Request, ishost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_members = {
  "protocol__srv",  // message namespace
  "FaceEntry_Request",  // message name
  4,  // number of fields
  sizeof(protocol__srv__FaceEntry_Request),
  FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_member_array,  // message members
  FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_type_support_handle = {
  0,
  &FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Request)() {
  if (!FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_type_support_handle.typesupport_identifier) {
    FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceEntry_Request__rosidl_typesupport_introspection_c__FaceEntry_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/face_entry__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/face_entry__functions.h"
// already included above
// #include "protocol/srv/detail/face_entry__struct.h"


// Include directives for member types
// Member `allfaces`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__FaceEntry_Response__init(message_memory);
}

void FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_fini_function(void * message_memory)
{
  protocol__srv__FaceEntry_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_member_array[3] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceEntry_Response, allfaces),  // bytes offset in struct
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
    offsetof(protocol__srv__FaceEntry_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_members = {
  "protocol__srv",  // message namespace
  "FaceEntry_Response",  // message name
  3,  // number of fields
  sizeof(protocol__srv__FaceEntry_Response),
  FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_member_array,  // message members
  FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_type_support_handle = {
  0,
  &FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Response)() {
  if (!FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_type_support_handle.typesupport_identifier) {
    FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceEntry_Response__rosidl_typesupport_introspection_c__FaceEntry_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/face_entry__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_members = {
  "protocol__srv",  // service namespace
  "FaceEntry",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_type_support_handle = {
  0,
  &protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry)() {
  if (!protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceEntry_Response)()->data;
  }

  return &protocol__srv__detail__face_entry__rosidl_typesupport_introspection_c__FaceEntry_service_type_support_handle;
}
