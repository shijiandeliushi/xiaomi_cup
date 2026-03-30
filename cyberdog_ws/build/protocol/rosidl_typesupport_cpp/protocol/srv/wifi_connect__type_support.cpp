// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "protocol/srv/detail/wifi_connect__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _WifiConnect_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WifiConnect_Request_type_support_ids_t;

static const _WifiConnect_Request_type_support_ids_t _WifiConnect_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _WifiConnect_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WifiConnect_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WifiConnect_Request_type_support_symbol_names_t _WifiConnect_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, WifiConnect_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, WifiConnect_Request)),
  }
};

typedef struct _WifiConnect_Request_type_support_data_t
{
  void * data[2];
} _WifiConnect_Request_type_support_data_t;

static _WifiConnect_Request_type_support_data_t _WifiConnect_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WifiConnect_Request_message_typesupport_map = {
  2,
  "protocol",
  &_WifiConnect_Request_message_typesupport_ids.typesupport_identifier[0],
  &_WifiConnect_Request_message_typesupport_symbol_names.symbol_name[0],
  &_WifiConnect_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WifiConnect_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WifiConnect_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::WifiConnect_Request>()
{
  return &::protocol::srv::rosidl_typesupport_cpp::WifiConnect_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, protocol, srv, WifiConnect_Request)() {
  return get_message_type_support_handle<protocol::srv::WifiConnect_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _WifiConnect_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WifiConnect_Response_type_support_ids_t;

static const _WifiConnect_Response_type_support_ids_t _WifiConnect_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _WifiConnect_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WifiConnect_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WifiConnect_Response_type_support_symbol_names_t _WifiConnect_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, WifiConnect_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, WifiConnect_Response)),
  }
};

typedef struct _WifiConnect_Response_type_support_data_t
{
  void * data[2];
} _WifiConnect_Response_type_support_data_t;

static _WifiConnect_Response_type_support_data_t _WifiConnect_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WifiConnect_Response_message_typesupport_map = {
  2,
  "protocol",
  &_WifiConnect_Response_message_typesupport_ids.typesupport_identifier[0],
  &_WifiConnect_Response_message_typesupport_symbol_names.symbol_name[0],
  &_WifiConnect_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WifiConnect_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WifiConnect_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::WifiConnect_Response>()
{
  return &::protocol::srv::rosidl_typesupport_cpp::WifiConnect_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, protocol, srv, WifiConnect_Response)() {
  return get_message_type_support_handle<protocol::srv::WifiConnect_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _WifiConnect_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WifiConnect_type_support_ids_t;

static const _WifiConnect_type_support_ids_t _WifiConnect_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _WifiConnect_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WifiConnect_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WifiConnect_type_support_symbol_names_t _WifiConnect_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, WifiConnect)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, WifiConnect)),
  }
};

typedef struct _WifiConnect_type_support_data_t
{
  void * data[2];
} _WifiConnect_type_support_data_t;

static _WifiConnect_type_support_data_t _WifiConnect_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WifiConnect_service_typesupport_map = {
  2,
  "protocol",
  &_WifiConnect_service_typesupport_ids.typesupport_identifier[0],
  &_WifiConnect_service_typesupport_symbol_names.symbol_name[0],
  &_WifiConnect_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t WifiConnect_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WifiConnect_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<protocol::srv::WifiConnect>()
{
  return &::protocol::srv::rosidl_typesupport_cpp::WifiConnect_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
