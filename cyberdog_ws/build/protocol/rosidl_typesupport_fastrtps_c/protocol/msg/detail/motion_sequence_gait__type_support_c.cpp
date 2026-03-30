// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_sequence_gait__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/motion_sequence_gait__struct.h"
#include "protocol/msg/detail/motion_sequence_gait__functions.h"
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


using _MotionSequenceGait__ros_msg_type = protocol__msg__MotionSequenceGait;

static bool _MotionSequenceGait__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionSequenceGait__ros_msg_type * ros_message = static_cast<const _MotionSequenceGait__ros_msg_type *>(untyped_ros_message);
  // Field name: right_forefoot
  {
    cdr << (ros_message->right_forefoot ? true : false);
  }

  // Field name: left_forefoot
  {
    cdr << (ros_message->left_forefoot ? true : false);
  }

  // Field name: right_hindfoot
  {
    cdr << (ros_message->right_hindfoot ? true : false);
  }

  // Field name: left_hindfoot
  {
    cdr << (ros_message->left_hindfoot ? true : false);
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _MotionSequenceGait__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionSequenceGait__ros_msg_type * ros_message = static_cast<_MotionSequenceGait__ros_msg_type *>(untyped_ros_message);
  // Field name: right_forefoot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_forefoot = tmp ? true : false;
  }

  // Field name: left_forefoot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_forefoot = tmp ? true : false;
  }

  // Field name: right_hindfoot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_hindfoot = tmp ? true : false;
  }

  // Field name: left_hindfoot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_hindfoot = tmp ? true : false;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MotionSequenceGait(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionSequenceGait__ros_msg_type * ros_message = static_cast<const _MotionSequenceGait__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name right_forefoot
  {
    size_t item_size = sizeof(ros_message->right_forefoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_forefoot
  {
    size_t item_size = sizeof(ros_message->left_forefoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hindfoot
  {
    size_t item_size = sizeof(ros_message->right_hindfoot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hindfoot
  {
    size_t item_size = sizeof(ros_message->left_hindfoot);
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

static uint32_t _MotionSequenceGait__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MotionSequenceGait(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MotionSequenceGait(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: right_forefoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_forefoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_hindfoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_hindfoot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionSequenceGait__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MotionSequenceGait(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionSequenceGait = {
  "protocol::msg",
  "MotionSequenceGait",
  _MotionSequenceGait__cdr_serialize,
  _MotionSequenceGait__cdr_deserialize,
  _MotionSequenceGait__get_serialized_size,
  _MotionSequenceGait__max_serialized_size
};

static rosidl_message_type_support_t _MotionSequenceGait__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionSequenceGait,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionSequenceGait)() {
  return &_MotionSequenceGait__type_support;
}

#if defined(__cplusplus)
}
#endif
