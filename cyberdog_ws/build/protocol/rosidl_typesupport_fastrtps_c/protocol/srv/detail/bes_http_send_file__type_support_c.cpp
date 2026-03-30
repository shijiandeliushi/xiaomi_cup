// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/BesHttpSendFile.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/bes_http_send_file__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/bes_http_send_file__struct.h"
#include "protocol/srv/detail/bes_http_send_file__functions.h"
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

#include "rosidl_runtime_c/string.h"  // content_type, file_name, info, url
#include "rosidl_runtime_c/string_functions.h"  // content_type, file_name, info, url

// forward declare type support functions


using _BesHttpSendFile_Request__ros_msg_type = protocol__srv__BesHttpSendFile_Request;

static bool _BesHttpSendFile_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BesHttpSendFile_Request__ros_msg_type * ros_message = static_cast<const _BesHttpSendFile_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: method
  {
    cdr << ros_message->method;
  }

  // Field name: url
  {
    const rosidl_runtime_c__String * str = &ros_message->url;
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

  // Field name: file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->file_name;
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

  // Field name: content_type
  {
    const rosidl_runtime_c__String * str = &ros_message->content_type;
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

  // Field name: info
  {
    const rosidl_runtime_c__String * str = &ros_message->info;
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

  // Field name: milsecs
  {
    cdr << ros_message->milsecs;
  }

  return true;
}

static bool _BesHttpSendFile_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BesHttpSendFile_Request__ros_msg_type * ros_message = static_cast<_BesHttpSendFile_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: method
  {
    cdr >> ros_message->method;
  }

  // Field name: url
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->url.data) {
      rosidl_runtime_c__String__init(&ros_message->url);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->url,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'url'\n");
      return false;
    }
  }

  // Field name: file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_name'\n");
      return false;
    }
  }

  // Field name: content_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->content_type.data) {
      rosidl_runtime_c__String__init(&ros_message->content_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->content_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'content_type'\n");
      return false;
    }
  }

  // Field name: info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->info.data) {
      rosidl_runtime_c__String__init(&ros_message->info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'info'\n");
      return false;
    }
  }

  // Field name: milsecs
  {
    cdr >> ros_message->milsecs;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__BesHttpSendFile_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BesHttpSendFile_Request__ros_msg_type * ros_message = static_cast<const _BesHttpSendFile_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name method
  {
    size_t item_size = sizeof(ros_message->method);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->url.size + 1);
  // field.name file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_name.size + 1);
  // field.name content_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->content_type.size + 1);
  // field.name info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->info.size + 1);
  // field.name milsecs
  {
    size_t item_size = sizeof(ros_message->milsecs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BesHttpSendFile_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BesHttpSendFile_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BesHttpSendFile_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: method
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: url
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: file_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: content_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: milsecs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BesHttpSendFile_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BesHttpSendFile_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BesHttpSendFile_Request = {
  "protocol::srv",
  "BesHttpSendFile_Request",
  _BesHttpSendFile_Request__cdr_serialize,
  _BesHttpSendFile_Request__cdr_deserialize,
  _BesHttpSendFile_Request__get_serialized_size,
  _BesHttpSendFile_Request__max_serialized_size
};

static rosidl_message_type_support_t _BesHttpSendFile_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BesHttpSendFile_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BesHttpSendFile_Request)() {
  return &_BesHttpSendFile_Request__type_support;
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
// #include "protocol/srv/detail/bes_http_send_file__struct.h"
// already included above
// #include "protocol/srv/detail/bes_http_send_file__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // data
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // data

// forward declare type support functions


using _BesHttpSendFile_Response__ros_msg_type = protocol__srv__BesHttpSendFile_Response;

static bool _BesHttpSendFile_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BesHttpSendFile_Response__ros_msg_type * ros_message = static_cast<const _BesHttpSendFile_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const rosidl_runtime_c__String * str = &ros_message->data;
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

static bool _BesHttpSendFile_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BesHttpSendFile_Response__ros_msg_type * ros_message = static_cast<_BesHttpSendFile_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data.data) {
      rosidl_runtime_c__String__init(&ros_message->data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data'\n");
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
size_t get_serialized_size_protocol__srv__BesHttpSendFile_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BesHttpSendFile_Response__ros_msg_type * ros_message = static_cast<const _BesHttpSendFile_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data.size + 1);
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BesHttpSendFile_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BesHttpSendFile_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BesHttpSendFile_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
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

static size_t _BesHttpSendFile_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BesHttpSendFile_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BesHttpSendFile_Response = {
  "protocol::srv",
  "BesHttpSendFile_Response",
  _BesHttpSendFile_Response__cdr_serialize,
  _BesHttpSendFile_Response__cdr_deserialize,
  _BesHttpSendFile_Response__get_serialized_size,
  _BesHttpSendFile_Response__max_serialized_size
};

static rosidl_message_type_support_t _BesHttpSendFile_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BesHttpSendFile_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BesHttpSendFile_Response)() {
  return &_BesHttpSendFile_Response__type_support;
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
#include "protocol/srv/bes_http_send_file.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BesHttpSendFile__callbacks = {
  "protocol::srv",
  "BesHttpSendFile",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BesHttpSendFile_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BesHttpSendFile_Response)(),
};

static rosidl_service_type_support_t BesHttpSendFile__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BesHttpSendFile__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BesHttpSendFile)() {
  return &BesHttpSendFile__handle;
}

#if defined(__cplusplus)
}
#endif
