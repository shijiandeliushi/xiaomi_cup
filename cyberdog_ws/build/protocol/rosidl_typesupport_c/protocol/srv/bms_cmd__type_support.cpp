// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
#include "protocol/srv/detail/bms_cmd__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BmsCmd_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BmsCmd_Request_type_support_ids_t;

static const _BmsCmd_Request_type_support_ids_t _BmsCmd_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BmsCmd_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BmsCmd_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BmsCmd_Request_type_support_symbol_names_t _BmsCmd_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BmsCmd_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Request)),
  }
};

typedef struct _BmsCmd_Request_type_support_data_t
{
  void * data[2];
} _BmsCmd_Request_type_support_data_t;

static _BmsCmd_Request_type_support_data_t _BmsCmd_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BmsCmd_Request_message_typesupport_map = {
  2,
  "protocol",
  &_BmsCmd_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BmsCmd_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BmsCmd_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BmsCmd_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BmsCmd_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, BmsCmd_Request)() {
  return &::protocol::srv::rosidl_typesupport_c::BmsCmd_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/bms_cmd__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BmsCmd_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BmsCmd_Response_type_support_ids_t;

static const _BmsCmd_Response_type_support_ids_t _BmsCmd_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BmsCmd_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BmsCmd_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BmsCmd_Response_type_support_symbol_names_t _BmsCmd_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BmsCmd_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd_Response)),
  }
};

typedef struct _BmsCmd_Response_type_support_data_t
{
  void * data[2];
} _BmsCmd_Response_type_support_data_t;

static _BmsCmd_Response_type_support_data_t _BmsCmd_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BmsCmd_Response_message_typesupport_map = {
  2,
  "protocol",
  &_BmsCmd_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BmsCmd_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BmsCmd_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BmsCmd_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BmsCmd_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, BmsCmd_Response)() {
  return &::protocol::srv::rosidl_typesupport_c::BmsCmd_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BmsCmd_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BmsCmd_type_support_ids_t;

static const _BmsCmd_type_support_ids_t _BmsCmd_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BmsCmd_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BmsCmd_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BmsCmd_type_support_symbol_names_t _BmsCmd_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BmsCmd)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, BmsCmd)),
  }
};

typedef struct _BmsCmd_type_support_data_t
{
  void * data[2];
} _BmsCmd_type_support_data_t;

static _BmsCmd_type_support_data_t _BmsCmd_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BmsCmd_service_typesupport_map = {
  2,
  "protocol",
  &_BmsCmd_service_typesupport_ids.typesupport_identifier[0],
  &_BmsCmd_service_typesupport_symbol_names.symbol_name[0],
  &_BmsCmd_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BmsCmd_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BmsCmd_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace protocol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_protocol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, BmsCmd)() {
  return &::protocol::srv::rosidl_typesupport_c::BmsCmd_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
