// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:srv/GetBLEBatteryLevel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/srv/detail/get_ble_battery_level__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/srv/detail/get_ble_battery_level__functions.h"
#include "protocol/srv/detail/get_ble_battery_level__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__GetBLEBatteryLevel_Request__init(message_memory);
}

void GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_fini_function(void * message_memory)
{
  protocol__srv__GetBLEBatteryLevel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__GetBLEBatteryLevel_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_members = {
  "protocol__srv",  // message namespace
  "GetBLEBatteryLevel_Request",  // message name
  1,  // number of fields
  sizeof(protocol__srv__GetBLEBatteryLevel_Request),
  GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_member_array,  // message members
  GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_type_support_handle = {
  0,
  &GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Request)() {
  if (!GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_type_support_handle.typesupport_identifier) {
    GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBLEBatteryLevel_Request__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "protocol/srv/detail/get_ble_battery_level__rosidl_typesupport_introspection_c.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "protocol/srv/detail/get_ble_battery_level__functions.h"
// already included above
// #include "protocol/srv/detail/get_ble_battery_level__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__srv__GetBLEBatteryLevel_Response__init(message_memory);
}

void GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_fini_function(void * message_memory)
{
  protocol__srv__GetBLEBatteryLevel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_member_array[3] = {
  {
    "connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__GetBLEBatteryLevel_Response, connected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "persentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__srv__GetBLEBatteryLevel_Response, persentage),  // bytes offset in struct
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
    offsetof(protocol__srv__GetBLEBatteryLevel_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_members = {
  "protocol__srv",  // message namespace
  "GetBLEBatteryLevel_Response",  // message name
  3,  // number of fields
  sizeof(protocol__srv__GetBLEBatteryLevel_Response),
  GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_member_array,  // message members
  GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_type_support_handle = {
  0,
  &GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Response)() {
  if (!GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_type_support_handle.typesupport_identifier) {
    GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBLEBatteryLevel_Response__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/get_ble_battery_level__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_members = {
  "protocol__srv",  // service namespace
  "GetBLEBatteryLevel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Request_message_type_support_handle,
  NULL  // response message
  // protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_Response_message_type_support_handle
};

static rosidl_service_type_support_t protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_type_support_handle = {
  0,
  &protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel)() {
  if (!protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_type_support_handle.typesupport_identifier) {
    protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetBLEBatteryLevel_Response)()->data;
  }

  return &protocol__srv__detail__get_ble_battery_level__rosidl_typesupport_introspection_c__GetBLEBatteryLevel_service_type_support_handle;
}
