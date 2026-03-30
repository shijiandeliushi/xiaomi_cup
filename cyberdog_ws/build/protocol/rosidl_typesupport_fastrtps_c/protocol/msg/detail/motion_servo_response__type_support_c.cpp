// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_servo_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/motion_servo_response__struct.h"
#include "protocol/msg/detail/motion_servo_response__functions.h"
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


using _MotionServoResponse__ros_msg_type = protocol__msg__MotionServoResponse;

static bool _MotionServoResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionServoResponse__ros_msg_type * ros_message = static_cast<const _MotionServoResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  // Field name: cmd_id
  {
    cdr << ros_message->cmd_id;
  }

  // Field name: order_process_bar
  {
    cdr << ros_message->order_process_bar;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _MotionServoResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionServoResponse__ros_msg_type * ros_message = static_cast<_MotionServoResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  // Field name: cmd_id
  {
    cdr >> ros_message->cmd_id;
  }

  // Field name: order_process_bar
  {
    cdr >> ros_message->order_process_bar;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MotionServoResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionServoResponse__ros_msg_type * ros_message = static_cast<const _MotionServoResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_id
  {
    size_t item_size = sizeof(ros_message->motion_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_id
  {
    size_t item_size = sizeof(ros_message->cmd_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name order_process_bar
  {
    size_t item_size = sizeof(ros_message->order_process_bar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

static uint32_t _MotionServoResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MotionServoResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MotionServoResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motion_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: order_process_bar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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

static size_t _MotionServoResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MotionServoResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionServoResponse = {
  "protocol::msg",
  "MotionServoResponse",
  _MotionServoResponse__cdr_serialize,
  _MotionServoResponse__cdr_deserialize,
  _MotionServoResponse__get_serialized_size,
  _MotionServoResponse__max_serialized_size
};

static rosidl_message_type_support_t _MotionServoResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionServoResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionServoResponse)() {
  return &_MotionServoResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
