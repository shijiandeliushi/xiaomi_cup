// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/AudioVoiceprintsSet.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/audio_voiceprints_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/audio_voiceprints_set__struct.h"
#include "protocol/srv/detail/audio_voiceprints_set__functions.h"
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

#include "protocol/msg/detail/voice_prints__functions.h"  // voice_prints

// forward declare type support functions
size_t get_serialized_size_protocol__msg__VoicePrints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__VoicePrints(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrints)();


using _AudioVoiceprintsSet_Request__ros_msg_type = protocol__srv__AudioVoiceprintsSet_Request;

static bool _AudioVoiceprintsSet_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioVoiceprintsSet_Request__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintsSet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: voice_prints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->voice_prints, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AudioVoiceprintsSet_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioVoiceprintsSet_Request__ros_msg_type * ros_message = static_cast<_AudioVoiceprintsSet_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: voice_prints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VoicePrints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->voice_prints))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AudioVoiceprintsSet_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioVoiceprintsSet_Request__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintsSet_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name voice_prints

  current_alignment += get_serialized_size_protocol__msg__VoicePrints(
    &(ros_message->voice_prints), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AudioVoiceprintsSet_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioVoiceprintsSet_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioVoiceprintsSet_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: voice_prints
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__VoicePrints(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioVoiceprintsSet_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioVoiceprintsSet_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioVoiceprintsSet_Request = {
  "protocol::srv",
  "AudioVoiceprintsSet_Request",
  _AudioVoiceprintsSet_Request__cdr_serialize,
  _AudioVoiceprintsSet_Request__cdr_deserialize,
  _AudioVoiceprintsSet_Request__get_serialized_size,
  _AudioVoiceprintsSet_Request__max_serialized_size
};

static rosidl_message_type_support_t _AudioVoiceprintsSet_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioVoiceprintsSet_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioVoiceprintsSet_Request)() {
  return &_AudioVoiceprintsSet_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "protocol/srv/detail/audio_voiceprints_set__struct.h"
// already included above
// #include "protocol/srv/detail/audio_voiceprints_set__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _AudioVoiceprintsSet_Response__ros_msg_type = protocol__srv__AudioVoiceprintsSet_Response;

static bool _AudioVoiceprintsSet_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioVoiceprintsSet_Response__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintsSet_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _AudioVoiceprintsSet_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioVoiceprintsSet_Response__ros_msg_type * ros_message = static_cast<_AudioVoiceprintsSet_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_protocol__srv__AudioVoiceprintsSet_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioVoiceprintsSet_Response__ros_msg_type * ros_message = static_cast<const _AudioVoiceprintsSet_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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

static uint32_t _AudioVoiceprintsSet_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioVoiceprintsSet_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioVoiceprintsSet_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

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

static size_t _AudioVoiceprintsSet_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioVoiceprintsSet_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioVoiceprintsSet_Response = {
  "protocol::srv",
  "AudioVoiceprintsSet_Response",
  _AudioVoiceprintsSet_Response__cdr_serialize,
  _AudioVoiceprintsSet_Response__cdr_deserialize,
  _AudioVoiceprintsSet_Response__get_serialized_size,
  _AudioVoiceprintsSet_Response__max_serialized_size
};

static rosidl_message_type_support_t _AudioVoiceprintsSet_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioVoiceprintsSet_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioVoiceprintsSet_Response)() {
  return &_AudioVoiceprintsSet_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/audio_voiceprints_set.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AudioVoiceprintsSet__callbacks = {
  "protocol::srv",
  "AudioVoiceprintsSet",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioVoiceprintsSet_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioVoiceprintsSet_Response)(),
};

static rosidl_service_type_support_t AudioVoiceprintsSet__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AudioVoiceprintsSet__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioVoiceprintsSet)() {
  return &AudioVoiceprintsSet__handle;
}

#if defined(__cplusplus)
}
#endif
