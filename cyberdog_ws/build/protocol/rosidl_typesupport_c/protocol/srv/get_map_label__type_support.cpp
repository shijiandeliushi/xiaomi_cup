// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from protocol:srv/GetMapLabel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "protocol/msg/rosidl_typesupport_c__visibility_control.h"
#include "protocol/srv/detail/get_map_label__struct.h"
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

typedef struct _GetMapLabel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapLabel_Request_type_support_ids_t;

static const _GetMapLabel_Request_type_support_ids_t _GetMapLabel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapLabel_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapLabel_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapLabel_Request_type_support_symbol_names_t _GetMapLabel_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetMapLabel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetMapLabel_Request)),
  }
};

typedef struct _GetMapLabel_Request_type_support_data_t
{
  void * data[2];
} _GetMapLabel_Request_type_support_data_t;

static _GetMapLabel_Request_type_support_data_t _GetMapLabel_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapLabel_Request_message_typesupport_map = {
  2,
  "protocol",
  &_GetMapLabel_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetMapLabel_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetMapLabel_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMapLabel_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapLabel_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, GetMapLabel_Request)() {
  return &::protocol::srv::rosidl_typesupport_c::GetMapLabel_Request_message_type_support_handle;
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
// #include "protocol/srv/detail/get_map_label__struct.h"
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

typedef struct _GetMapLabel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapLabel_Response_type_support_ids_t;

static const _GetMapLabel_Response_type_support_ids_t _GetMapLabel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapLabel_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapLabel_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapLabel_Response_type_support_symbol_names_t _GetMapLabel_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetMapLabel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetMapLabel_Response)),
  }
};

typedef struct _GetMapLabel_Response_type_support_data_t
{
  void * data[2];
} _GetMapLabel_Response_type_support_data_t;

static _GetMapLabel_Response_type_support_data_t _GetMapLabel_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapLabel_Response_message_typesupport_map = {
  2,
  "protocol",
  &_GetMapLabel_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetMapLabel_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetMapLabel_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMapLabel_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapLabel_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, GetMapLabel_Response)() {
  return &::protocol::srv::rosidl_typesupport_c::GetMapLabel_Response_message_type_support_handle;
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

typedef struct _GetMapLabel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapLabel_type_support_ids_t;

static const _GetMapLabel_type_support_ids_t _GetMapLabel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapLabel_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapLabel_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapLabel_type_support_symbol_names_t _GetMapLabel_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetMapLabel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, srv, GetMapLabel)),
  }
};

typedef struct _GetMapLabel_type_support_data_t
{
  void * data[2];
} _GetMapLabel_type_support_data_t;

static _GetMapLabel_type_support_data_t _GetMapLabel_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapLabel_service_typesupport_map = {
  2,
  "protocol",
  &_GetMapLabel_service_typesupport_ids.typesupport_identifier[0],
  &_GetMapLabel_service_typesupport_symbol_names.symbol_name[0],
  &_GetMapLabel_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetMapLabel_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapLabel_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, protocol, srv, GetMapLabel)() {
  return &::protocol::srv::rosidl_typesupport_c::GetMapLabel_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
