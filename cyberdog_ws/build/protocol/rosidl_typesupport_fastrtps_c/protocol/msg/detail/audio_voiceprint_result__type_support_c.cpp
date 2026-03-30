// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/audio_voiceprint_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/audio_voiceprint_result__struct.h"
#include "protocol/msg/detail/audio_voiceprint_result__functions.h"
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

#include "protocol/msg/detail/voice_print__functions.h"  // voice_print

// forward declare type support functions
size_t get_serialized_size_protocol__msg__VoicePrint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__VoicePrint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint)();


using _AudioVoiceprintResult__ros_msg_type = protocol__msg__AudioVoiceprintResult;

static bool _AudioVoiceprintResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioVoiceprintResult__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintResult__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr << ros_message->code;
  }

  // Field name: voice_print
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->voice_print, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AudioVoiceprintResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioVoiceprintResult__ros_msg_type * ros_message = static_cast<_AudioVoiceprintResult__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr >> ros_message->code;
  }

  // Field name: voice_print
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->voice_print))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__AudioVoiceprintResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioVoiceprintResult__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_print

  current_alignment += get_serialized_size_protocol__msg__VoicePrint(
    &(ros_message->voice_print), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AudioVoiceprintResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__AudioVoiceprintResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__AudioVoiceprintResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voice_print
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__VoicePrint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioVoiceprintResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__AudioVoiceprintResult(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioVoiceprintResult = {
  "protocol::msg",
  "AudioVoiceprintResult",
  _AudioVoiceprintResult__cdr_serialize,
  _AudioVoiceprintResult__cdr_deserialize,
  _AudioVoiceprintResult__get_serialized_size,
  _AudioVoiceprintResult__max_serialized_size
};

static rosidl_message_type_support_t _AudioVoiceprintResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioVoiceprintResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, AudioVoiceprintResult)() {
  return &_AudioVoiceprintResult__type_support;
}

#if defined(__cplusplus)
}
#endif
