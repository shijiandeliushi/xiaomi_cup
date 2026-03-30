// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/auth_token__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/auth_token__struct.hpp"

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
  const protocol::msg::AuthToken & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uid
  cdr << ros_message.uid;
  // Member: token_access
  cdr << ros_message.token_access;
  // Member: token_fresh
  cdr << ros_message.token_fresh;
  // Member: token_expirein
  cdr << ros_message.token_expirein;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::AuthToken & ros_message)
{
  // Member: uid
  cdr >> ros_message.uid;

  // Member: token_access
  cdr >> ros_message.token_access;

  // Member: token_fresh
  cdr >> ros_message.token_fresh;

  // Member: token_expirein
  cdr >> ros_message.token_expirein;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::AuthToken & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uid.size() + 1);
  // Member: token_access
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.token_access.size() + 1);
  // Member: token_fresh
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.token_fresh.size() + 1);
  // Member: token_expirein
  {
    size_t item_size = sizeof(ros_message.token_expirein);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_AuthToken(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: uid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: token_access
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: token_fresh
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: token_expirein
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AuthToken__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::AuthToken *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AuthToken__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::AuthToken *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AuthToken__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::AuthToken *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AuthToken__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AuthToken(full_bounded, 0);
}

static message_type_support_callbacks_t _AuthToken__callbacks = {
  "protocol::msg",
  "AuthToken",
  _AuthToken__cdr_serialize,
  _AuthToken__cdr_deserialize,
  _AuthToken__get_serialized_size,
  _AuthToken__max_serialized_size
};

static rosidl_message_type_support_t _AuthToken__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AuthToken__callbacks,
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
get_message_type_support_handle<protocol::msg::AuthToken>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_AuthToken__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, AuthToken)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_AuthToken__handle;
}

#ifdef __cplusplus
}
#endif
