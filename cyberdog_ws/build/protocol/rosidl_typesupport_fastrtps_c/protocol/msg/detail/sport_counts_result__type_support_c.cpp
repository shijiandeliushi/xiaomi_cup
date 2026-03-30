// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/sport_counts_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/sport_counts_result__struct.h"
#include "protocol/msg/detail/sport_counts_result__functions.h"
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


using _SportCountsResult__ros_msg_type = protocol__msg__SportCountsResult;

static bool _SportCountsResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SportCountsResult__ros_msg_type * ros_message = static_cast<const _SportCountsResult__ros_msg_type *>(untyped_ros_message);
  // Field name: algo_switch
  {
    cdr << ros_message->algo_switch;
  }

  // Field name: sport_type
  {
    cdr << ros_message->sport_type;
  }

  // Field name: counts
  {
    cdr << ros_message->counts;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _SportCountsResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SportCountsResult__ros_msg_type * ros_message = static_cast<_SportCountsResult__ros_msg_type *>(untyped_ros_message);
  // Field name: algo_switch
  {
    cdr >> ros_message->algo_switch;
  }

  // Field name: sport_type
  {
    cdr >> ros_message->sport_type;
  }

  // Field name: counts
  {
    cdr >> ros_message->counts;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__SportCountsResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SportCountsResult__ros_msg_type * ros_message = static_cast<const _SportCountsResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name algo_switch
  {
    size_t item_size = sizeof(ros_message->algo_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sport_type
  {
    size_t item_size = sizeof(ros_message->sport_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name counts
  {
    size_t item_size = sizeof(ros_message->counts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SportCountsResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__SportCountsResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__SportCountsResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: algo_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sport_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: counts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SportCountsResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__SportCountsResult(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SportCountsResult = {
  "protocol::msg",
  "SportCountsResult",
  _SportCountsResult__cdr_serialize,
  _SportCountsResult__cdr_deserialize,
  _SportCountsResult__get_serialized_size,
  _SportCountsResult__max_serialized_size
};

static rosidl_message_type_support_t _SportCountsResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SportCountsResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, SportCountsResult)() {
  return &_SportCountsResult__type_support;
}

#if defined(__cplusplus)
}
#endif
