// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/voice_prints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/voice_prints__struct.h"
#include "protocol/msg/detail/voice_prints__functions.h"
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

#include "protocol/msg/detail/voice_print__functions.h"  // prints

// forward declare type support functions
size_t get_serialized_size_protocol__msg__VoicePrint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__VoicePrint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint)();


using _VoicePrints__ros_msg_type = protocol__msg__VoicePrints;

static bool _VoicePrints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VoicePrints__ros_msg_type * ros_message = static_cast<const _VoicePrints__ros_msg_type *>(untyped_ros_message);
  // Field name: prints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint
      )()->data);
    size_t size = ros_message->prints.size;
    auto array_ptr = ros_message->prints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _VoicePrints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VoicePrints__ros_msg_type * ros_message = static_cast<_VoicePrints__ros_msg_type *>(untyped_ros_message);
  // Field name: prints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prints.data) {
      protocol__msg__VoicePrint__Sequence__fini(&ros_message->prints);
    }
    if (!protocol__msg__VoicePrint__Sequence__init(&ros_message->prints, size)) {
      fprintf(stderr, "failed to create array for field 'prints'");
      return false;
    }
    auto array_ptr = ros_message->prints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__VoicePrints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VoicePrints__ros_msg_type * ros_message = static_cast<const _VoicePrints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name prints
  {
    size_t array_size = ros_message->prints.size;
    auto array_ptr = ros_message->prints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__VoicePrint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VoicePrints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__VoicePrints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__VoicePrints(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: prints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__VoicePrint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VoicePrints__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__VoicePrints(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VoicePrints = {
  "protocol::msg",
  "VoicePrints",
  _VoicePrints__cdr_serialize,
  _VoicePrints__cdr_deserialize,
  _VoicePrints__get_serialized_size,
  _VoicePrints__max_serialized_size
};

static rosidl_message_type_support_t _VoicePrints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VoicePrints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrints)() {
  return &_VoicePrints__type_support;
}

#if defined(__cplusplus)
}
#endif
