// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/AudioExecute.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/audio_execute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/audio_execute__struct.h"
#include "protocol/srv/detail/audio_execute__functions.h"
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

#include "protocol/msg/detail/audio_status__functions.h"  // status
#include "rosidl_runtime_c/string.h"  // client
#include "rosidl_runtime_c/string_functions.h"  // client

// forward declare type support functions
size_t get_serialized_size_protocol__msg__AudioStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__AudioStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, AudioStatus)();


using _AudioExecute_Request__ros_msg_type = protocol__srv__AudioExecute_Request;

static bool _AudioExecute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioExecute_Request__ros_msg_type * ros_message = static_cast<const _AudioExecute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: client
  {
    const rosidl_runtime_c__String * str = &ros_message->client;
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

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AudioStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AudioExecute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioExecute_Request__ros_msg_type * ros_message = static_cast<_AudioExecute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: client
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->client.data) {
      rosidl_runtime_c__String__init(&ros_message->client);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->client,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'client'\n");
      return false;
    }
  }

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AudioStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AudioExecute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioExecute_Request__ros_msg_type * ros_message = static_cast<const _AudioExecute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name client
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->client.size + 1);
  // field.name status

  current_alignment += get_serialized_size_protocol__msg__AudioStatus(
    &(ros_message->status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AudioExecute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioExecute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioExecute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: client
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__AudioStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioExecute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioExecute_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioExecute_Request = {
  "protocol::srv",
  "AudioExecute_Request",
  _AudioExecute_Request__cdr_serialize,
  _AudioExecute_Request__cdr_deserialize,
  _AudioExecute_Request__get_serialized_size,
  _AudioExecute_Request__max_serialized_size
};

static rosidl_message_type_support_t _AudioExecute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioExecute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioExecute_Request)() {
  return &_AudioExecute_Request__type_support;
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
// #include "protocol/srv/detail/audio_execute__struct.h"
// already included above
// #include "protocol/srv/detail/audio_execute__functions.h"
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


using _AudioExecute_Response__ros_msg_type = protocol__srv__AudioExecute_Response;

static bool _AudioExecute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioExecute_Response__ros_msg_type * ros_message = static_cast<const _AudioExecute_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _AudioExecute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioExecute_Response__ros_msg_type * ros_message = static_cast<_AudioExecute_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_protocol__srv__AudioExecute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioExecute_Response__ros_msg_type * ros_message = static_cast<const _AudioExecute_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _AudioExecute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioExecute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioExecute_Response(
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

static size_t _AudioExecute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioExecute_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioExecute_Response = {
  "protocol::srv",
  "AudioExecute_Response",
  _AudioExecute_Response__cdr_serialize,
  _AudioExecute_Response__cdr_deserialize,
  _AudioExecute_Response__get_serialized_size,
  _AudioExecute_Response__max_serialized_size
};

static rosidl_message_type_support_t _AudioExecute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioExecute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioExecute_Response)() {
  return &_AudioExecute_Response__type_support;
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
#include "protocol/srv/audio_execute.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AudioExecute__callbacks = {
  "protocol::srv",
  "AudioExecute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioExecute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioExecute_Response)(),
};

static rosidl_service_type_support_t AudioExecute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AudioExecute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioExecute)() {
  return &AudioExecute__handle;
}

#if defined(__cplusplus)
}
#endif
