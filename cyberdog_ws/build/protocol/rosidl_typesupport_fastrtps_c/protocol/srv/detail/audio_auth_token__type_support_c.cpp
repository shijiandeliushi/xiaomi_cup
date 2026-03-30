// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/AudioAuthToken.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/audio_auth_token__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/audio_auth_token__struct.h"
#include "protocol/srv/detail/audio_auth_token__functions.h"
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

#include "rosidl_runtime_c/string.h"  // token_access, token_fresh, uid
#include "rosidl_runtime_c/string_functions.h"  // token_access, token_fresh, uid

// forward declare type support functions


using _AudioAuthToken_Request__ros_msg_type = protocol__srv__AudioAuthToken_Request;

static bool _AudioAuthToken_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioAuthToken_Request__ros_msg_type * ros_message = static_cast<const _AudioAuthToken_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: uid
  {
    const rosidl_runtime_c__String * str = &ros_message->uid;
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

  // Field name: token_access
  {
    const rosidl_runtime_c__String * str = &ros_message->token_access;
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

  // Field name: token_fresh
  {
    const rosidl_runtime_c__String * str = &ros_message->token_fresh;
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

  // Field name: token_expirein
  {
    cdr << ros_message->token_expirein;
  }

  return true;
}

static bool _AudioAuthToken_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioAuthToken_Request__ros_msg_type * ros_message = static_cast<_AudioAuthToken_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: uid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->uid.data) {
      rosidl_runtime_c__String__init(&ros_message->uid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->uid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'uid'\n");
      return false;
    }
  }

  // Field name: token_access
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->token_access.data) {
      rosidl_runtime_c__String__init(&ros_message->token_access);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->token_access,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'token_access'\n");
      return false;
    }
  }

  // Field name: token_fresh
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->token_fresh.data) {
      rosidl_runtime_c__String__init(&ros_message->token_fresh);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->token_fresh,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'token_fresh'\n");
      return false;
    }
  }

  // Field name: token_expirein
  {
    cdr >> ros_message->token_expirein;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AudioAuthToken_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioAuthToken_Request__ros_msg_type * ros_message = static_cast<const _AudioAuthToken_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name uid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uid.size + 1);
  // field.name token_access
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->token_access.size + 1);
  // field.name token_fresh
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->token_fresh.size + 1);
  // field.name token_expirein
  {
    size_t item_size = sizeof(ros_message->token_expirein);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AudioAuthToken_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioAuthToken_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioAuthToken_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: uid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: token_access
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: token_fresh
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: token_expirein
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AudioAuthToken_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioAuthToken_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioAuthToken_Request = {
  "protocol::srv",
  "AudioAuthToken_Request",
  _AudioAuthToken_Request__cdr_serialize,
  _AudioAuthToken_Request__cdr_deserialize,
  _AudioAuthToken_Request__get_serialized_size,
  _AudioAuthToken_Request__max_serialized_size
};

static rosidl_message_type_support_t _AudioAuthToken_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioAuthToken_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioAuthToken_Request)() {
  return &_AudioAuthToken_Request__type_support;
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
// #include "protocol/srv/detail/audio_auth_token__struct.h"
// already included above
// #include "protocol/srv/detail/audio_auth_token__functions.h"
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


using _AudioAuthToken_Response__ros_msg_type = protocol__srv__AudioAuthToken_Response;

static bool _AudioAuthToken_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioAuthToken_Response__ros_msg_type * ros_message = static_cast<const _AudioAuthToken_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _AudioAuthToken_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioAuthToken_Response__ros_msg_type * ros_message = static_cast<_AudioAuthToken_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_protocol__srv__AudioAuthToken_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioAuthToken_Response__ros_msg_type * ros_message = static_cast<const _AudioAuthToken_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _AudioAuthToken_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AudioAuthToken_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AudioAuthToken_Response(
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

static size_t _AudioAuthToken_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AudioAuthToken_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AudioAuthToken_Response = {
  "protocol::srv",
  "AudioAuthToken_Response",
  _AudioAuthToken_Response__cdr_serialize,
  _AudioAuthToken_Response__cdr_deserialize,
  _AudioAuthToken_Response__get_serialized_size,
  _AudioAuthToken_Response__max_serialized_size
};

static rosidl_message_type_support_t _AudioAuthToken_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioAuthToken_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioAuthToken_Response)() {
  return &_AudioAuthToken_Response__type_support;
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
#include "protocol/srv/audio_auth_token.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AudioAuthToken__callbacks = {
  "protocol::srv",
  "AudioAuthToken",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioAuthToken_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioAuthToken_Response)(),
};

static rosidl_service_type_support_t AudioAuthToken__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AudioAuthToken__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AudioAuthToken)() {
  return &AudioAuthToken__handle;
}

#if defined(__cplusplus)
}
#endif
