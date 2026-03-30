// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/ble_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/ble_info__struct.h"
#include "protocol/msg/detail/ble_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // addr_type, firmware_version, mac, name
#include "rosidl_runtime_c/string_functions.h"  // addr_type, firmware_version, mac, name

// forward declare type support functions


using _BLEInfo__ros_msg_type = protocol__msg__BLEInfo;

static bool _BLEInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BLEInfo__ros_msg_type * ros_message = static_cast<const _BLEInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: mac
  {
    const rosidl_runtime_c__String * str = &ros_message->mac;
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

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: addr_type
  {
    const rosidl_runtime_c__String * str = &ros_message->addr_type;
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

  // Field name: device_type
  {
    cdr << ros_message->device_type;
  }

  // Field name: battery_level
  {
    cdr << ros_message->battery_level;
  }

  // Field name: firmware_version
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_version;
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

static bool _BLEInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BLEInfo__ros_msg_type * ros_message = static_cast<_BLEInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: mac
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mac.data) {
      rosidl_runtime_c__String__init(&ros_message->mac);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mac,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mac'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: addr_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->addr_type.data) {
      rosidl_runtime_c__String__init(&ros_message->addr_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->addr_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'addr_type'\n");
      return false;
    }
  }

  // Field name: device_type
  {
    cdr >> ros_message->device_type;
  }

  // Field name: battery_level
  {
    cdr >> ros_message->battery_level;
  }

  // Field name: firmware_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_version.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_version'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__BLEInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BLEInfo__ros_msg_type * ros_message = static_cast<const _BLEInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mac
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mac.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name addr_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->addr_type.size + 1);
  // field.name device_type
  {
    size_t item_size = sizeof(ros_message->device_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_level
  {
    size_t item_size = sizeof(ros_message->battery_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_version.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BLEInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__BLEInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__BLEInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mac
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: addr_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: device_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: firmware_version
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

static size_t _BLEInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__BLEInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BLEInfo = {
  "protocol::msg",
  "BLEInfo",
  _BLEInfo__cdr_serialize,
  _BLEInfo__cdr_deserialize,
  _BLEInfo__get_serialized_size,
  _BLEInfo__max_serialized_size
};

static rosidl_message_type_support_t _BLEInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BLEInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo)() {
  return &_BLEInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
