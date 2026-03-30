// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/audio_play_extend__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/audio_play_extend__struct.hpp"

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
  const protocol::msg::AudioPlay &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::AudioPlay &);
size_t get_serialized_size(
  const protocol::msg::AudioPlay &,
  size_t current_alignment);
size_t
max_serialized_size_AudioPlay(
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
  const protocol::msg::AudioPlayExtend & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: module_name
  cdr << ros_message.module_name;
  // Member: is_online
  cdr << (ros_message.is_online ? true : false);
  // Member: speech
  protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speech,
    cdr);
  // Member: text
  cdr << ros_message.text;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::AudioPlayExtend & ros_message)
{
  // Member: module_name
  cdr >> ros_message.module_name;

  // Member: is_online
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_online = tmp ? true : false;
  }

  // Member: speech
  protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speech);

  // Member: text
  cdr >> ros_message.text;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::AudioPlayExtend & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: module_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.module_name.size() + 1);
  // Member: is_online
  {
    size_t item_size = sizeof(ros_message.is_online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speech

  current_alignment +=
    protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speech, current_alignment);
  // Member: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_AudioPlayExtend(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: module_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: is_online
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speech
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_AudioPlay(
        full_bounded, current_alignment);
    }
  }

  // Member: text
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

static bool _AudioPlayExtend__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::AudioPlayExtend *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AudioPlayExtend__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::AudioPlayExtend *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AudioPlayExtend__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::AudioPlayExtend *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AudioPlayExtend__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AudioPlayExtend(full_bounded, 0);
}

static message_type_support_callbacks_t _AudioPlayExtend__callbacks = {
  "protocol::msg",
  "AudioPlayExtend",
  _AudioPlayExtend__cdr_serialize,
  _AudioPlayExtend__cdr_deserialize,
  _AudioPlayExtend__get_serialized_size,
  _AudioPlayExtend__max_serialized_size
};

static rosidl_message_type_support_t _AudioPlayExtend__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AudioPlayExtend__callbacks,
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
get_message_type_support_handle<protocol::msg::AudioPlayExtend>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_AudioPlayExtend__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, AudioPlayExtend)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_AudioPlayExtend__handle;
}

#ifdef __cplusplus
}
#endif
