// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/ble_scan__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/ble_scan__functions.h"
#include "protocol/srv/detail/ble_scan__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__BLEScan_Request__init(message_memory);
}

void BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_fini_function(void * message_memory)
{
  protocol__srv__BLEScan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_member_array[1] = {
  {
    "scan_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BLEScan_Request, scan_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_members = {
  "protocol__srv",  // message namespace
  "BLEScan_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__BLEScan_Request),
  BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_member_array,  // message members
  BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_type_support_handle = {
  0,
  &BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Request)() {
  if (!BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_type_support_handle.typesupport_identifier) {
    BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BLEScan_Request__rosidl_typesupport_introspection_c__BLEScan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/ble_scan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/ble_scan__functions.h"
// already included above
// #include "protocol/srv/detail/ble_scan__struct.h"


// Include directives for member types
// Member `device_info_list`
#include "protocol/msg/ble_info.h"
// Member `device_info_list`
#include "protocol/msg/detail/ble_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__BLEScan_Response__init(message_memory);
}

void BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_fini_function(void * message_memory)
{
  protocol__srv__BLEScan_Response__fini(message_memory);
}

size_t BLEScan_Response__rosidl_typesupport_introspection_c__size_function__BLEInfo__device_info_list(
  const void * untyped_member)
{
  const protocol__msg__BLEInfo__Sequence * member =
    (const protocol__msg__BLEInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * BLEScan_Response__rosidl_typesupport_introspection_c__get_const_function__BLEInfo__device_info_list(
  const void * untyped_member, size_t index)
{
  const protocol__msg__BLEInfo__Sequence * member =
    (const protocol__msg__BLEInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BLEScan_Response__rosidl_typesupport_introspection_c__get_function__BLEInfo__device_info_list(
  void * untyped_member, size_t index)
{
  protocol__msg__BLEInfo__Sequence * member =
    (protocol__msg__BLEInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BLEScan_Response__rosidl_typesupport_introspection_c__resize_function__BLEInfo__device_info_list(
  void * untyped_member, size_t size)
{
  protocol__msg__BLEInfo__Sequence * member =
    (protocol__msg__BLEInfo__Sequence *)(untyped_member);
  protocol__msg__BLEInfo__Sequence__fini(member);
  return protocol__msg__BLEInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_member_array[2] = {
  {
    "device_info_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BLEScan_Response, device_info_list),  // bytes offset in struct
    NULL,  // default value
    BLEScan_Response__rosidl_typesupport_introspection_c__size_function__BLEInfo__device_info_list,  // size() function pointer
    BLEScan_Response__rosidl_typesupport_introspection_c__get_const_function__BLEInfo__device_info_list,  // get_const(index) function pointer
    BLEScan_Response__rosidl_typesupport_introspection_c__get_function__BLEInfo__device_info_list,  // get(index) function pointer
    BLEScan_Response__rosidl_typesupport_introspection_c__resize_function__BLEInfo__device_info_list  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__BLEScan_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_members = {
  "protocol__srv",  // message namespace
  "BLEScan_Response",  // message name
  2,  // number of fields
  sizeof(protocol__srv__BLEScan_Response),
  BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_member_array,  // message members
  BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_type_support_handle = {
  0,
  &BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Response)() {
  BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, BLEInfo)();
  if (!BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_type_support_handle.typesupport_identifier) {
    BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BLEScan_Response__rosidl_typesupport_introspection_c__BLEScan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/ble_scan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_members = {
  "protocol__srv",  // service namespace
  "BLEScan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_type_support_handle = {
  0,
  &protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan)() {
  if (!protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BLEScan_Response)()->data;
  }

  return &protocol__srv__detail__ble_scan__rosidl_typesupport_introspection_c__BLEScan_service_type_support_handle;
}
