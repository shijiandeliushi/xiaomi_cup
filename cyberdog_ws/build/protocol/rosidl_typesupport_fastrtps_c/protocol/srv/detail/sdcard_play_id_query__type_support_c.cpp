// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/SdcardPlayIdQuery.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/sdcard_play_id_query__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/sdcard_play_id_query__struct.h"
#include "protocol/srv/detail/sdcard_play_id_query__functions.h"
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


// forward declare type support functions


using _SdcardPlayIdQuery_Request__ros_msg_type = protocol__srv__SdcardPlayIdQuery_Request;

static bool _SdcardPlayIdQuery_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SdcardPlayIdQuery_Request__ros_msg_type * ros_message = static_cast<const _SdcardPlayIdQuery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: play_id
  {
    cdr << ros_message->play_id;
  }

  return true;
}

static bool _SdcardPlayIdQuery_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SdcardPlayIdQuery_Request__ros_msg_type * ros_message = static_cast<_SdcardPlayIdQuery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: play_id
  {
    cdr >> ros_message->play_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__SdcardPlayIdQuery_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SdcardPlayIdQuery_Request__ros_msg_type * ros_message = static_cast<const _SdcardPlayIdQuery_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name play_id
  {
    size_t item_size = sizeof(ros_message->play_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SdcardPlayIdQuery_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__SdcardPlayIdQuery_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__SdcardPlayIdQuery_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: play_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SdcardPlayIdQuery_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__SdcardPlayIdQuery_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SdcardPlayIdQuery_Request = {
  "protocol::srv",
  "SdcardPlayIdQuery_Request",
  _SdcardPlayIdQuery_Request__cdr_serialize,
  _SdcardPlayIdQuery_Request__cdr_deserialize,
  _SdcardPlayIdQuery_Request__get_serialized_size,
  _SdcardPlayIdQuery_Request__max_serialized_size
};

static rosidl_message_type_support_t _SdcardPlayIdQuery_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SdcardPlayIdQuery_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SdcardPlayIdQuery_Request)() {
  return &_SdcardPlayIdQuery_Request__type_support;
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
// #include "protocol/srv/detail/sdcard_play_id_query__struct.h"
// already included above
// #include "protocol/srv/detail/sdcard_play_id_query__functions.h"
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


using _SdcardPlayIdQuery_Response__ros_msg_type = protocol__srv__SdcardPlayIdQuery_Response;

static bool _SdcardPlayIdQuery_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SdcardPlayIdQuery_Response__ros_msg_type * ros_message = static_cast<const _SdcardPlayIdQuery_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exist
  {
    cdr << (ros_message->exist ? true : false);
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _SdcardPlayIdQuery_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SdcardPlayIdQuery_Response__ros_msg_type * ros_message = static_cast<_SdcardPlayIdQuery_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exist
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->exist = tmp ? true : false;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__SdcardPlayIdQuery_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SdcardPlayIdQuery_Response__ros_msg_type * ros_message = static_cast<const _SdcardPlayIdQuery_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name exist
  {
    size_t item_size = sizeof(ros_message->exist);
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

static uint32_t _SdcardPlayIdQuery_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__SdcardPlayIdQuery_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__SdcardPlayIdQuery_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: exist
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

static size_t _SdcardPlayIdQuery_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__SdcardPlayIdQuery_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SdcardPlayIdQuery_Response = {
  "protocol::srv",
  "SdcardPlayIdQuery_Response",
  _SdcardPlayIdQuery_Response__cdr_serialize,
  _SdcardPlayIdQuery_Response__cdr_deserialize,
  _SdcardPlayIdQuery_Response__get_serialized_size,
  _SdcardPlayIdQuery_Response__max_serialized_size
};

static rosidl_message_type_support_t _SdcardPlayIdQuery_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SdcardPlayIdQuery_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SdcardPlayIdQuery_Response)() {
  return &_SdcardPlayIdQuery_Response__type_support;
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
#include "protocol/srv/sdcard_play_id_query.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SdcardPlayIdQuery__callbacks = {
  "protocol::srv",
  "SdcardPlayIdQuery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SdcardPlayIdQuery_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SdcardPlayIdQuery_Response)(),
};

static rosidl_service_type_support_t SdcardPlayIdQuery__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SdcardPlayIdQuery__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SdcardPlayIdQuery)() {
  return &SdcardPlayIdQuery__handle;
}

#if defined(__cplusplus)
}
#endif
