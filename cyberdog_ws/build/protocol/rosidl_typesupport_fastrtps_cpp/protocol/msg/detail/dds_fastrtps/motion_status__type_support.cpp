// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/motion_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace protocol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::msg::MotionStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion_id
  cdr << ros_message.motion_id;
  // Member: contact
  cdr << ros_message.contact;
  // Member: order_process_bar
  cdr << ros_message.order_process_bar;
  // Member: switch_status
  cdr << ros_message.switch_status;
  // Member: ori_error
  cdr << ros_message.ori_error;
  // Member: footpos_error
  cdr << ros_message.footpos_error;
  // Member: motor_error
  {
    cdr << ros_message.motor_error;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::MotionStatus & ros_message)
{
  // Member: motion_id
  cdr >> ros_message.motion_id;

  // Member: contact
  cdr >> ros_message.contact;

  // Member: order_process_bar
  cdr >> ros_message.order_process_bar;

  // Member: switch_status
  cdr >> ros_message.switch_status;

  // Member: ori_error
  cdr >> ros_message.ori_error;

  // Member: footpos_error
  cdr >> ros_message.footpos_error;

  // Member: motor_error
  {
    cdr >> ros_message.motor_error;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::MotionStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion_id
  {
    size_t item_size = sizeof(ros_message.motion_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contact
  {
    size_t item_size = sizeof(ros_message.contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: order_process_bar
  {
    size_t item_size = sizeof(ros_message.order_process_bar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: switch_status
  {
    size_t item_size = sizeof(ros_message.switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ori_error
  {
    size_t item_size = sizeof(ros_message.ori_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footpos_error
  {
    size_t item_size = sizeof(ros_message.footpos_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_error
  {
    size_t array_size = ros_message.motor_error.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.motor_error[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_MotionStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motion_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: order_process_bar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: switch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ori_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: footpos_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: motor_error
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

static bool _MotionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::MotionStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::MotionStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::MotionStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotionStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _MotionStatus__callbacks = {
  "protocol::msg",
  "MotionStatus",
  _MotionStatus__cdr_serialize,
  _MotionStatus__cdr_deserialize,
  _MotionStatus__get_serialized_size,
  _MotionStatus__max_serialized_size
};

static rosidl_message_type_support_t _MotionStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotionStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace protocol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_protocol
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::msg::MotionStatus>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_MotionStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, MotionStatus)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_MotionStatus__handle;
}

#ifdef __cplusplus
}
#endif
