// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/motion_status__struct.h"
#include "protocol/msg/detail/motion_status__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // motor_error
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // motor_error

// forward declare type support functions


using _MotionStatus__ros_msg_type = protocol__msg__MotionStatus;

static bool _MotionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionStatus__ros_msg_type * ros_message = static_cast<const _MotionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  // Field name: contact
  {
    cdr << ros_message->contact;
  }

  // Field name: order_process_bar
  {
    cdr << ros_message->order_process_bar;
  }

  // Field name: switch_status
  {
    cdr << ros_message->switch_status;
  }

  // Field name: ori_error
  {
    cdr << ros_message->ori_error;
  }

  // Field name: footpos_error
  {
    cdr << ros_message->footpos_error;
  }

  // Field name: motor_error
  {
    size_t size = ros_message->motor_error.size;
    auto array_ptr = ros_message->motor_error.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionStatus__ros_msg_type * ros_message = static_cast<_MotionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  // Field name: contact
  {
    cdr >> ros_message->contact;
  }

  // Field name: order_process_bar
  {
    cdr >> ros_message->order_process_bar;
  }

  // Field name: switch_status
  {
    cdr >> ros_message->switch_status;
  }

  // Field name: ori_error
  {
    cdr >> ros_message->ori_error;
  }

  // Field name: footpos_error
  {
    cdr >> ros_message->footpos_error;
  }

  // Field name: motor_error
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motor_error.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->motor_error);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->motor_error, size)) {
      fprintf(stderr, "failed to create array for field 'motor_error'");
      return false;
    }
    auto array_ptr = ros_message->motor_error.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MotionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionStatus__ros_msg_type * ros_message = static_cast<const _MotionStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name contact
  {
    size_t item_size = sizeof(ros_message->contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name order_process_bar
  {
    size_t item_size = sizeof(ros_message->order_process_bar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name switch_status
  {
    size_t item_size = sizeof(ros_message->switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori_error
  {
    size_t item_size = sizeof(ros_message->ori_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name footpos_error
  {
    size_t item_size = sizeof(ros_message->footpos_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_error
  {
    size_t array_size = ros_message->motor_error.size;
    auto array_ptr = ros_message->motor_error.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MotionStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MotionStatus(
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
  // member: contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: order_process_bar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: switch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ori_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: footpos_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_error
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MotionStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionStatus = {
  "protocol::msg",
  "MotionStatus",
  _MotionStatus__cdr_serialize,
  _MotionStatus__cdr_deserialize,
  _MotionStatus__get_serialized_size,
  _MotionStatus__max_serialized_size
};

static rosidl_message_type_support_t _MotionStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionStatus)() {
  return &_MotionStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
