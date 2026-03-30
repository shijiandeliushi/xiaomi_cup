// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/audio_play_extend__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/audio_play_extend__struct.h"
#include "protocol/msg/detail/audio_play_extend__functions.h"
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

#include "protocol/msg/detail/audio_play__functions.h"  // speech
#include "rosidl_runtime_c/string.h"  // module_name, text
#include "rosidl_runtime_c/string_functions.h"  // module_name, text

// forward declare type support functions
size_t get_serialized_size_protocol__msg__AudioPlay(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__AudioPlay(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, AudioPlay)();


using _AudioPlayExtend__ros_msg_type = protocol__msg__AudioPlayExtend;

static bool _AudioPlayExtend__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioPlayExtend__ros_msg_type * ros_message = static_cast<const _AudioPlayExtend__ros_msg_type *>(untyped_ros_message);
  // Field name: module_name
  {
    const rosidl_runtime_c__String * str = &ros_message->module_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: is_online
  {
    cdr << (ros_message->is_online ? true : false);
  }

  // Field name: speech
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AudioPlay
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speech, cdr))
    {
      return false;
    }
  }

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _AudioPlayExtend__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioPlayExtend__ros_msg_type * ros_message = static_cast<_AudioPlayExtend__ros_msg_type *>(untyped_ros_message);
  // Field name: module_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->module_name.data) {
      rosidl_runtime_c__String__init(&ros_message->module_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->module_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'module_name'\n");
      return false;
    }
  }

  // Field name: is_online
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_online = tmp ? true : false;
  }

  // Field name: speech
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AudioPlay
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speech))
    {
      return false;
    }
  }

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__AudioPlayExtend(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioPlayExtend__ros_msg_type * ros_message = static_cast<const _AudioPlayExtend__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name module_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->module_name.size + 1);
  // field.name is_online
  {
    size_t item_size = sizeof(ros_message->is_online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speech

  current_alignment += get_serialized_size_protocol__msg__AudioPlay(
    &(ros_message->speech), current_alignment);
  // field.name text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AudioPlayExtend__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__AudioPlayExtend(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__AudioPlayExtend(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: module_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_online
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speech
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__AudioPlay(
        full_bounded, current_alignment);
    }
  }
  // member: text
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

static size_t _AudioPlayExtend__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__AudioPlayExtend(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioPlayExtend = {
  "protocol::msg",
  "AudioPlayExtend",
  _AudioPlayExtend__cdr_serialize,
  _AudioPlayExtend__cdr_deserialize,
  _AudioPlayExtend__get_serialized_size,
  _AudioPlayExtend__max_serialized_size
};

static rosidl_message_type_support_t _AudioPlayExtend__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioPlayExtend,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, AudioPlayExtend)() {
  return &_AudioPlayExtend__type_support;
}

#if defined(__cplusplus)
}
#endif
