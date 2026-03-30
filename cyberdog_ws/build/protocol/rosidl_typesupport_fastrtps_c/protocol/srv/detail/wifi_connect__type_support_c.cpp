// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/wifi_connect__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/wifi_connect__struct.h"
#include "protocol/srv/detail/wifi_connect__functions.h"
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

#include "rosidl_runtime_c/string.h"  // pwd, ssid
#include "rosidl_runtime_c/string_functions.h"  // pwd, ssid

// forward declare type support functions


using _WifiConnect_Request__ros_msg_type = protocol__srv__WifiConnect_Request;

static bool _WifiConnect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WifiConnect_Request__ros_msg_type * ros_message = static_cast<const _WifiConnect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ssid
  {
    const rosidl_runtime_c__String * str = &ros_message->ssid;
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

  // Field name: pwd
  {
    const rosidl_runtime_c__String * str = &ros_message->pwd;
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

static bool _WifiConnect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WifiConnect_Request__ros_msg_type * ros_message = static_cast<_WifiConnect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ssid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ssid.data) {
      rosidl_runtime_c__String__init(&ros_message->ssid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ssid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ssid'\n");
      return false;
    }
  }

  // Field name: pwd
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pwd.data) {
      rosidl_runtime_c__String__init(&ros_message->pwd);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pwd,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pwd'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__WifiConnect_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WifiConnect_Request__ros_msg_type * ros_message = static_cast<const _WifiConnect_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ssid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ssid.size + 1);
  // field.name pwd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pwd.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WifiConnect_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__WifiConnect_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__WifiConnect_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ssid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pwd
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

static size_t _WifiConnect_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__WifiConnect_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WifiConnect_Request = {
  "protocol::srv",
  "WifiConnect_Request",
  _WifiConnect_Request__cdr_serialize,
  _WifiConnect_Request__cdr_deserialize,
  _WifiConnect_Request__get_serialized_size,
  _WifiConnect_Request__max_serialized_size
};

static rosidl_message_type_support_t _WifiConnect_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WifiConnect_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, WifiConnect_Request)() {
  return &_WifiConnect_Request__type_support;
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
// #include "protocol/srv/detail/wifi_connect__struct.h"
// already included above
// #include "protocol/srv/detail/wifi_connect__functions.h"
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


using _WifiConnect_Response__ros_msg_type = protocol__srv__WifiConnect_Response;

static bool _WifiConnect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WifiConnect_Response__ros_msg_type * ros_message = static_cast<const _WifiConnect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _WifiConnect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WifiConnect_Response__ros_msg_type * ros_message = static_cast<_WifiConnect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__WifiConnect_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WifiConnect_Response__ros_msg_type * ros_message = static_cast<const _WifiConnect_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
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

static uint32_t _WifiConnect_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__WifiConnect_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__WifiConnect_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
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

static size_t _WifiConnect_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__WifiConnect_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WifiConnect_Response = {
  "protocol::srv",
  "WifiConnect_Response",
  _WifiConnect_Response__cdr_serialize,
  _WifiConnect_Response__cdr_deserialize,
  _WifiConnect_Response__get_serialized_size,
  _WifiConnect_Response__max_serialized_size
};

static rosidl_message_type_support_t _WifiConnect_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WifiConnect_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, WifiConnect_Response)() {
  return &_WifiConnect_Response__type_support;
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
#include "protocol/srv/wifi_connect.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WifiConnect__callbacks = {
  "protocol::srv",
  "WifiConnect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, WifiConnect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, WifiConnect_Response)(),
};

static rosidl_service_type_support_t WifiConnect__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WifiConnect__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, WifiConnect)() {
  return &WifiConnect__handle;
}

#if defined(__cplusplus)
}
#endif
