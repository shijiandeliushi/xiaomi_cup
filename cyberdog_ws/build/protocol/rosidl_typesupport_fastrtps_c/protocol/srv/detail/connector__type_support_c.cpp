// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/Connector.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/connector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/connector__struct.h"
#include "protocol/srv/detail/connector__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // provider_ip, wifi_name, wifi_password
#include "rosidl_runtime_c/string_functions.h"  // provider_ip, wifi_name, wifi_password

// forward declare type support functions


using _Connector_Request__ros_msg_type = protocol__srv__Connector_Request;

static bool _Connector_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Connector_Request__ros_msg_type * ros_message = static_cast<const _Connector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wifi_name
  {
    const rosidl_runtime_c__String * str = &ros_message->wifi_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: wifi_password
  {
    const rosidl_runtime_c__String * str = &ros_message->wifi_password;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: provider_ip
  {
    const rosidl_runtime_c__String * str = &ros_message->provider_ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Connector_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Connector_Request__ros_msg_type * ros_message = static_cast<_Connector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wifi_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wifi_name.data) {
      rosidl_runtime_c__String__init(&ros_message->wifi_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wifi_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wifi_name'\n");
      return false;
    }
  }

  // Field name: wifi_password
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wifi_password.data) {
      rosidl_runtime_c__String__init(&ros_message->wifi_password);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wifi_password,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wifi_password'\n");
      return false;
    }
  }

  // Field name: provider_ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->provider_ip.data) {
      rosidl_runtime_c__String__init(&ros_message->provider_ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->provider_ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'provider_ip'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__Connector_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connector_Request__ros_msg_type * ros_message = static_cast<const _Connector_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wifi_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wifi_name.size + 1);
  // field.name wifi_password
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wifi_password.size + 1);
  // field.name provider_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->provider_ip.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Connector_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__Connector_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__Connector_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wifi_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wifi_password
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: provider_ip
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Connector_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__Connector_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Connector_Request = {
  "protocol::srv",
  "Connector_Request",
  _Connector_Request__cdr_serialize,
  _Connector_Request__cdr_deserialize,
  _Connector_Request__get_serialized_size,
  _Connector_Request__max_serialized_size
};

static rosidl_message_type_support_t _Connector_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connector_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, Connector_Request)() {
  return &_Connector_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/connector__struct.h"
// already included above
// #include "protocol/srv/detail/connector__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Connector_Response__ros_msg_type = protocol__srv__Connector_Response;

static bool _Connector_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Connector_Response__ros_msg_type * ros_message = static_cast<const _Connector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _Connector_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Connector_Response__ros_msg_type * ros_message = static_cast<_Connector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connected = tmp ? true : false;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__Connector_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connector_Response__ros_msg_type * ros_message = static_cast<const _Connector_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Connector_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__Connector_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__Connector_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Connector_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__Connector_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Connector_Response = {
  "protocol::srv",
  "Connector_Response",
  _Connector_Response__cdr_serialize,
  _Connector_Response__cdr_deserialize,
  _Connector_Response__get_serialized_size,
  _Connector_Response__max_serialized_size
};

static rosidl_message_type_support_t _Connector_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connector_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, Connector_Response)() {
  return &_Connector_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/connector.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Connector__callbacks = {
  "protocol::srv",
  "Connector",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, Connector_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, Connector_Response)(),
};

static rosidl_service_type_support_t Connector__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Connector__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, Connector)() {
  return &Connector__handle;
}

#if defined(__cplusplus)
}
#endif
