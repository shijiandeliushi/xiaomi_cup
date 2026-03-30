// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/ConnectorStatus.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/connector_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/connector_status__struct.h"
#include "protocol/srv/detail/connector_status__functions.h"
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


// forward declare type support functions


using _ConnectorStatus_Request__ros_msg_type = protocol__srv__ConnectorStatus_Request;

static bool _ConnectorStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectorStatus_Request__ros_msg_type * ros_message = static_cast<const _ConnectorStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ConnectorStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectorStatus_Request__ros_msg_type * ros_message = static_cast<_ConnectorStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__ConnectorStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectorStatus_Request__ros_msg_type * ros_message = static_cast<const _ConnectorStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectorStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__ConnectorStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__ConnectorStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectorStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__ConnectorStatus_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectorStatus_Request = {
  "protocol::srv",
  "ConnectorStatus_Request",
  _ConnectorStatus_Request__cdr_serialize,
  _ConnectorStatus_Request__cdr_deserialize,
  _ConnectorStatus_Request__get_serialized_size,
  _ConnectorStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConnectorStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectorStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, ConnectorStatus_Request)() {
  return &_ConnectorStatus_Request__type_support;
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
// #include "protocol/srv/detail/connector_status__struct.h"
// already included above
// #include "protocol/srv/detail/connector_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // ssid
#include "rosidl_runtime_c/string_functions.h"  // ssid

// forward declare type support functions


using _ConnectorStatus_Response__ros_msg_type = protocol__srv__ConnectorStatus_Response;

static bool _ConnectorStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectorStatus_Response__ros_msg_type * ros_message = static_cast<const _ConnectorStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    cdr << (ros_message->is_connected ? true : false);
  }

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

  // Field name: strength
  {
    cdr << ros_message->strength;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _ConnectorStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectorStatus_Response__ros_msg_type * ros_message = static_cast<_ConnectorStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_connected = tmp ? true : false;
  }

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

  // Field name: strength
  {
    cdr >> ros_message->strength;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__ConnectorStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectorStatus_Response__ros_msg_type * ros_message = static_cast<const _ConnectorStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_connected
  {
    size_t item_size = sizeof(ros_message->is_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ssid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ssid.size + 1);
  // field.name strength
  {
    size_t item_size = sizeof(ros_message->strength);
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

static uint32_t _ConnectorStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__ConnectorStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__ConnectorStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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
  // member: strength
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

static size_t _ConnectorStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__ConnectorStatus_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectorStatus_Response = {
  "protocol::srv",
  "ConnectorStatus_Response",
  _ConnectorStatus_Response__cdr_serialize,
  _ConnectorStatus_Response__cdr_deserialize,
  _ConnectorStatus_Response__get_serialized_size,
  _ConnectorStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConnectorStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectorStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, ConnectorStatus_Response)() {
  return &_ConnectorStatus_Response__type_support;
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
#include "protocol/srv/connector_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConnectorStatus__callbacks = {
  "protocol::srv",
  "ConnectorStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, ConnectorStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, ConnectorStatus_Response)(),
};

static rosidl_service_type_support_t ConnectorStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConnectorStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, ConnectorStatus)() {
  return &ConnectorStatus__handle;
}

#if defined(__cplusplus)
}
#endif
