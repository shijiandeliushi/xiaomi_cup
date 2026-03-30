// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/FaceManager.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/face_manager__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/face_manager__functions.h"
#include "protocol/srv/detail/face_manager__struct.h"


// Include directives for member types
// Member `args`
// Member `username`
// Member `oriname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__FaceManager_Request__init(message_memory);
}

void FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_fini_function(void * message_memory)
{
  protocol__srv__FaceManager_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_member_array[5] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "args",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Request, args),  // bytes offset in struct
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
    offsetof(protocol__srv__FaceManager_Request, username),  // bytes offset in struct
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
    offsetof(protocol__srv__FaceManager_Request, oriname),  // bytes offset in struct
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
    offsetof(protocol__srv__FaceManager_Request, ishost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_members = {
  "protocol__srv",  // message namespace
  "FaceManager_Request",  // message name
  5,  // number of fields
  sizeof(protocol__srv__FaceManager_Request),
  FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_member_array,  // message members
  FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_type_support_handle = {
  0,
  &FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Request)() {
  if (!FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_type_support_handle.typesupport_identifier) {
    FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceManager_Request__rosidl_typesupport_introspection_c__FaceManager_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/face_manager__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/face_manager__functions.h"
// already included above
// #include "protocol/srv/detail/face_manager__struct.h"


// Include directives for member types
// Member `msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `face_images`
#include "protocol/msg/compressed_image.h"
// Member `face_images`
#include "protocol/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__FaceManager_Response__init(message_memory);
}

void FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_fini_function(void * message_memory)
{
  protocol__srv__FaceManager_Response__fini(message_memory);
}

size_t FaceManager_Response__rosidl_typesupport_introspection_c__size_function__CompressedImage__face_images(
  const void * untyped_member)
{
  const protocol__msg__CompressedImage__Sequence * member =
    (const protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return member->size;
}

const void * FaceManager_Response__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__face_images(
  const void * untyped_member, size_t index)
{
  const protocol__msg__CompressedImage__Sequence * member =
    (const protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FaceManager_Response__rosidl_typesupport_introspection_c__get_function__CompressedImage__face_images(
  void * untyped_member, size_t index)
{
  protocol__msg__CompressedImage__Sequence * member =
    (protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FaceManager_Response__rosidl_typesupport_introspection_c__resize_function__CompressedImage__face_images(
  void * untyped_member, size_t size)
{
  protocol__msg__CompressedImage__Sequence * member =
    (protocol__msg__CompressedImage__Sequence *)(untyped_member);
  protocol__msg__CompressedImage__Sequence__fini(member);
  return protocol__msg__CompressedImage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_member_array[4] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Response, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Response, face_images),  // bytes offset in struct
    NULL,  // default value
    FaceManager_Response__rosidl_typesupport_introspection_c__size_function__CompressedImage__face_images,  // size() function pointer
    FaceManager_Response__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__face_images,  // get_const(index) function pointer
    FaceManager_Response__rosidl_typesupport_introspection_c__get_function__CompressedImage__face_images,  // get(index) function pointer
    FaceManager_Response__rosidl_typesupport_introspection_c__resize_function__CompressedImage__face_images  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__FaceManager_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_members = {
  "protocol__srv",  // message namespace
  "FaceManager_Response",  // message name
  4,  // number of fields
  sizeof(protocol__srv__FaceManager_Response),
  FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_member_array,  // message members
  FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_type_support_handle = {
  0,
  &FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Response)() {
  FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, CompressedImage)();
  if (!FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_type_support_handle.typesupport_identifier) {
    FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceManager_Response__rosidl_typesupport_introspection_c__FaceManager_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/face_manager__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_members = {
  "protocol__srv",  // service namespace
  "FaceManager",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_type_support_handle = {
  0,
  &protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager)() {
  if (!protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, FaceManager_Response)()->data;
  }

  return &protocol__srv__detail__face_manager__rosidl_typesupport_introspection_c__FaceManager_service_type_support_handle;
}
