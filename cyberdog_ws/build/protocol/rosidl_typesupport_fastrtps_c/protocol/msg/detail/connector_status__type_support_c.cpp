// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/connector_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/connector_status__struct.h"
#include "protocol/msg/detail/connector_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // provider_ip, robot_ip, ssid
#include "rosidl_runtime_c/string_functions.h"  // provider_ip, robot_ip, ssid

// forward declare type support functions


using _ConnectorStatus__ros_msg_type = protocol__msg__ConnectorStatus;

static bool _ConnectorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectorStatus__ros_msg_type * ros_message = static_cast<const _ConnectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    cdr << (ros_message->is_connected ? true : false);
  }

  // Field name: is_internet
  {
    cdr << (ros_message->is_internet ? true : false);
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

  // Field name: robot_ip
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_ip;
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

static bool _ConnectorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectorStatus__ros_msg_type * ros_message = static_cast<_ConnectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_connected = tmp ? true : false;
  }

  // Field name: is_internet
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_internet = tmp ? true : false;
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

  // Field name: robot_ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_ip.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_ip'\n");
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
size_t get_serialized_size_protocol__msg__ConnectorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectorStatus__ros_msg_type * ros_message = static_cast<const _ConnectorStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name is_internet
  {
    size_t item_size = sizeof(ros_message->is_internet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ssid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ssid.size + 1);
  // field.name robot_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_ip.size + 1);
  // field.name provider_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->provider_ip.size + 1);
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

static uint32_t _ConnectorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__ConnectorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__ConnectorStatus(
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
  // member: is_internet
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
  // member: robot_ip
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

static size_t _ConnectorStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__ConnectorStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectorStatus = {
  "protocol::msg",
  "ConnectorStatus",
  _ConnectorStatus__cdr_serialize,
  _ConnectorStatus__cdr_deserialize,
  _ConnectorStatus__get_serialized_size,
  _ConnectorStatus__max_serialized_size
};

static rosidl_message_type_support_t _ConnectorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, ConnectorStatus)() {
  return &_ConnectorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
