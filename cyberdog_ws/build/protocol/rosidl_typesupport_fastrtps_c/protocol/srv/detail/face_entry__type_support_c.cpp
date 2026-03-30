// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/face_entry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/face_entry__struct.h"
#include "protocol/srv/detail/face_entry__functions.h"
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

#include "rosidl_runtime_c/string.h"  // oriname, username
#include "rosidl_runtime_c/string_functions.h"  // oriname, username

// forward declare type support functions


using _FaceEntry_Request__ros_msg_type = protocol__srv__FaceEntry_Request;

static bool _FaceEntry_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FaceEntry_Request__ros_msg_type * ros_message = static_cast<const _FaceEntry_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: username
  {
    const rosidl_runtime_c__String * str = &ros_message->username;
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

  // Field name: oriname
  {
    const rosidl_runtime_c__String * str = &ros_message->oriname;
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

  // Field name: ishost
  {
    cdr << (ros_message->ishost ? true : false);
  }

  return true;
}

static bool _FaceEntry_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FaceEntry_Request__ros_msg_type * ros_message = static_cast<_FaceEntry_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: username
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->username.data) {
      rosidl_runtime_c__String__init(&ros_message->username);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->username,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'username'\n");
      return false;
    }
  }

  // Field name: oriname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->oriname.data) {
      rosidl_runtime_c__String__init(&ros_message->oriname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->oriname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'oriname'\n");
      return false;
    }
  }

  // Field name: ishost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ishost = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__FaceEntry_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceEntry_Request__ros_msg_type * ros_message = static_cast<const _FaceEntry_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name username
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->username.size + 1);
  // field.name oriname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->oriname.size + 1);
  // field.name ishost
  {
    size_t item_size = sizeof(ros_message->ishost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FaceEntry_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__FaceEntry_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__FaceEntry_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: username
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: oriname
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ishost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _FaceEntry_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__FaceEntry_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FaceEntry_Request = {
  "protocol::srv",
  "FaceEntry_Request",
  _FaceEntry_Request__cdr_serialize,
  _FaceEntry_Request__cdr_deserialize,
  _FaceEntry_Request__get_serialized_size,
  _FaceEntry_Request__max_serialized_size
};

static rosidl_message_type_support_t _FaceEntry_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceEntry_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, FaceEntry_Request)() {
  return &_FaceEntry_Request__type_support;
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
// #include "protocol/srv/detail/face_entry__struct.h"
// already included above
// #include "protocol/srv/detail/face_entry__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // allfaces
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // allfaces

// forward declare type support functions


using _FaceEntry_Response__ros_msg_type = protocol__srv__FaceEntry_Response;

static bool _FaceEntry_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FaceEntry_Response__ros_msg_type * ros_message = static_cast<const _FaceEntry_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: allfaces
  {
    const rosidl_runtime_c__String * str = &ros_message->allfaces;
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

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _FaceEntry_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FaceEntry_Response__ros_msg_type * ros_message = static_cast<_FaceEntry_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: allfaces
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->allfaces.data) {
      rosidl_runtime_c__String__init(&ros_message->allfaces);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->allfaces,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'allfaces'\n");
      return false;
    }
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__FaceEntry_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceEntry_Response__ros_msg_type * ros_message = static_cast<const _FaceEntry_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name allfaces
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->allfaces.size + 1);
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FaceEntry_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__FaceEntry_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__FaceEntry_Response(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: allfaces
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FaceEntry_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__FaceEntry_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FaceEntry_Response = {
  "protocol::srv",
  "FaceEntry_Response",
  _FaceEntry_Response__cdr_serialize,
  _FaceEntry_Response__cdr_deserialize,
  _FaceEntry_Response__get_serialized_size,
  _FaceEntry_Response__max_serialized_size
};

static rosidl_message_type_support_t _FaceEntry_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceEntry_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, FaceEntry_Response)() {
  return &_FaceEntry_Response__type_support;
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
#include "protocol/srv/face_entry.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FaceEntry__callbacks = {
  "protocol::srv",
  "FaceEntry",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, FaceEntry_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, FaceEntry_Response)(),
};

static rosidl_service_type_support_t FaceEntry__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FaceEntry__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, FaceEntry)() {
  return &FaceEntry__handle;
}

#if defined(__cplusplus)
}
#endif
