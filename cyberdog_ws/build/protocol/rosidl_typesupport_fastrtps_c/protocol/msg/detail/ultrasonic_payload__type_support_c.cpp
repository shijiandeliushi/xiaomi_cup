// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/UltrasonicPayload.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/ultrasonic_payload__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/ultrasonic_payload__struct.h"
#include "protocol/msg/detail/ultrasonic_payload__functions.h"
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

#include "sensor_msgs/msg/detail/range__functions.h"  // ultrasonic_info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_sensor_msgs__msg__Range(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_sensor_msgs__msg__Range(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Range)();


using _UltrasonicPayload__ros_msg_type = protocol__msg__UltrasonicPayload;

static bool _UltrasonicPayload__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UltrasonicPayload__ros_msg_type * ros_message = static_cast<const _UltrasonicPayload__ros_msg_type *>(untyped_ros_message);
  // Field name: ultrasonic_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Range
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ultrasonic_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _UltrasonicPayload__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UltrasonicPayload__ros_msg_type * ros_message = static_cast<_UltrasonicPayload__ros_msg_type *>(untyped_ros_message);
  // Field name: ultrasonic_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Range
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ultrasonic_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__UltrasonicPayload(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UltrasonicPayload__ros_msg_type * ros_message = static_cast<const _UltrasonicPayload__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ultrasonic_info

  current_alignment += get_serialized_size_sensor_msgs__msg__Range(
    &(ros_message->ultrasonic_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _UltrasonicPayload__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__UltrasonicPayload(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__UltrasonicPayload(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ultrasonic_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Range(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _UltrasonicPayload__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__UltrasonicPayload(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UltrasonicPayload = {
  "protocol::msg",
  "UltrasonicPayload",
  _UltrasonicPayload__cdr_serialize,
  _UltrasonicPayload__cdr_deserialize,
  _UltrasonicPayload__get_serialized_size,
  _UltrasonicPayload__max_serialized_size
};

static rosidl_message_type_support_t _UltrasonicPayload__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UltrasonicPayload,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, UltrasonicPayload)() {
  return &_UltrasonicPayload__type_support;
}

#if defined(__cplusplus)
}
#endif
