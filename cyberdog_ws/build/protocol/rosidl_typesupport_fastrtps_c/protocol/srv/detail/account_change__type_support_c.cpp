// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/AccountChange.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/account_change__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/account_change__struct.h"
#include "protocol/srv/detail/account_change__functions.h"
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

#include "rosidl_runtime_c/string.h"  // new_name, pre_name
#include "rosidl_runtime_c/string_functions.h"  // new_name, pre_name

// forward declare type support functions


using _AccountChange_Request__ros_msg_type = protocol__srv__AccountChange_Request;

static bool _AccountChange_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AccountChange_Request__ros_msg_type * ros_message = static_cast<const _AccountChange_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pre_name
  {
    const rosidl_runtime_c__String * str = &ros_message->pre_name;
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

  // Field name: new_name
  {
    const rosidl_runtime_c__String * str = &ros_message->new_name;
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

static bool _AccountChange_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AccountChange_Request__ros_msg_type * ros_message = static_cast<_AccountChange_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pre_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pre_name.data) {
      rosidl_runtime_c__String__init(&ros_message->pre_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pre_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pre_name'\n");
      return false;
    }
  }

  // Field name: new_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->new_name.data) {
      rosidl_runtime_c__String__init(&ros_message->new_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->new_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'new_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AccountChange_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AccountChange_Request__ros_msg_type * ros_message = static_cast<const _AccountChange_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pre_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pre_name.size + 1);
  // field.name new_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->new_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AccountChange_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AccountChange_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AccountChange_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pre_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: new_name
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

static size_t _AccountChange_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AccountChange_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AccountChange_Request = {
  "protocol::srv",
  "AccountChange_Request",
  _AccountChange_Request__cdr_serialize,
  _AccountChange_Request__cdr_deserialize,
  _AccountChange_Request__get_serialized_size,
  _AccountChange_Request__max_serialized_size
};

static rosidl_message_type_support_t _AccountChange_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AccountChange_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AccountChange_Request)() {
  return &_AccountChange_Request__type_support;
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
// #include "protocol/srv/detail/account_change__struct.h"
// already included above
// #include "protocol/srv/detail/account_change__functions.h"
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


using _AccountChange_Response__ros_msg_type = protocol__srv__AccountChange_Response;

static bool _AccountChange_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AccountChange_Response__ros_msg_type * ros_message = static_cast<const _AccountChange_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _AccountChange_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AccountChange_Response__ros_msg_type * ros_message = static_cast<_AccountChange_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AccountChange_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AccountChange_Response__ros_msg_type * ros_message = static_cast<const _AccountChange_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _AccountChange_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AccountChange_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AccountChange_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _AccountChange_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AccountChange_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AccountChange_Response = {
  "protocol::srv",
  "AccountChange_Response",
  _AccountChange_Response__cdr_serialize,
  _AccountChange_Response__cdr_deserialize,
  _AccountChange_Response__get_serialized_size,
  _AccountChange_Response__max_serialized_size
};

static rosidl_message_type_support_t _AccountChange_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AccountChange_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AccountChange_Response)() {
  return &_AccountChange_Response__type_support;
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
#include "protocol/srv/account_change.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AccountChange__callbacks = {
  "protocol::srv",
  "AccountChange",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AccountChange_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AccountChange_Response)(),
};

static rosidl_service_type_support_t AccountChange__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AccountChange__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AccountChange)() {
  return &AccountChange__handle;
}

#if defined(__cplusplus)
}
#endif
