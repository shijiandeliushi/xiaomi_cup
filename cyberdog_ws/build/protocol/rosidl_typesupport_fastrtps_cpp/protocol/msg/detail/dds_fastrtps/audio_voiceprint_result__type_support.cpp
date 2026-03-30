// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/audio_voiceprint_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/audio_voiceprint_result__struct.hpp"

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
  const protocol::msg::VoicePrint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::VoicePrint &);
size_t get_serialized_size(
  const protocol::msg::VoicePrint &,
  size_t current_alignment);
size_t
max_serialized_size_VoicePrint(
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
  const protocol::msg::AudioVoiceprintResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: code
  cdr << ros_message.code;
  // Member: voice_print
  protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.voice_print,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::AudioVoiceprintResult & ros_message)
{
  // Member: code
  cdr >> ros_message.code;

  // Member: voice_print
  protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.voice_print);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::AudioVoiceprintResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: code
  {
    size_t item_size = sizeof(ros_message.code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_print

  current_alignment +=
    protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.voice_print, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_AudioVoiceprintResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voice_print
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_VoicePrint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AudioVoiceprintResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::AudioVoiceprintResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AudioVoiceprintResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::AudioVoiceprintResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AudioVoiceprintResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::AudioVoiceprintResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AudioVoiceprintResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AudioVoiceprintResult(full_bounded, 0);
}

static message_type_support_callbacks_t _AudioVoiceprintResult__callbacks = {
  "protocol::msg",
  "AudioVoiceprintResult",
  _AudioVoiceprintResult__cdr_serialize,
  _AudioVoiceprintResult__cdr_deserialize,
  _AudioVoiceprintResult__get_serialized_size,
  _AudioVoiceprintResult__max_serialized_size
};

static rosidl_message_type_support_t _AudioVoiceprintResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AudioVoiceprintResult__callbacks,
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
get_message_type_support_handle<protocol::msg::AudioVoiceprintResult>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_AudioVoiceprintResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, AudioVoiceprintResult)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_AudioVoiceprintResult__handle;
}

#ifdef __cplusplus
}
#endif
