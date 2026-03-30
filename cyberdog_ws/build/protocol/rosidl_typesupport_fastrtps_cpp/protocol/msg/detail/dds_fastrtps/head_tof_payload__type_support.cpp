// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/HeadTofPayload.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/head_tof_payload__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/head_tof_payload__struct.hpp"

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
bool cdr_serialize(
  const protocol::msg::SingleTofPayload &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::SingleTofPayload &);
size_t get_serialized_size(
  const protocol::msg::SingleTofPayload &,
  size_t current_alignment);
size_t
max_serialized_size_SingleTofPayload(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace protocol

namespace protocol
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const protocol::msg::SingleTofPayload &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::SingleTofPayload &);
size_t get_serialized_size(
  const protocol::msg::SingleTofPayload &,
  size_t current_alignment);
size_t
max_serialized_size_SingleTofPayload(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace protocol


namespace protocol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::msg::HeadTofPayload & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_head
  protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left_head,
    cdr);
  // Member: right_head
  protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right_head,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::HeadTofPayload & ros_message)
{
  // Member: left_head
  protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left_head);

  // Member: right_head
  protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right_head);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::HeadTofPayload & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_head

  current_alignment +=
    protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left_head, current_alignment);
  // Member: right_head

  current_alignment +=
    protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right_head, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_HeadTofPayload(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: left_head
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_SingleTofPayload(
        full_bounded, current_alignment);
    }
  }

  // Member: right_head
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_SingleTofPayload(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _HeadTofPayload__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::HeadTofPayload *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadTofPayload__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::HeadTofPayload *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadTofPayload__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::HeadTofPayload *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadTofPayload__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HeadTofPayload(full_bounded, 0);
}

static message_type_support_callbacks_t _HeadTofPayload__callbacks = {
  "protocol::msg",
  "HeadTofPayload",
  _HeadTofPayload__cdr_serialize,
  _HeadTofPayload__cdr_deserialize,
  _HeadTofPayload__get_serialized_size,
  _HeadTofPayload__max_serialized_size
};

static rosidl_message_type_support_t _HeadTofPayload__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadTofPayload__callbacks,
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
get_message_type_support_handle<protocol::msg::HeadTofPayload>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_HeadTofPayload__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, HeadTofPayload)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_HeadTofPayload__handle;
}

#ifdef __cplusplus
}
#endif
