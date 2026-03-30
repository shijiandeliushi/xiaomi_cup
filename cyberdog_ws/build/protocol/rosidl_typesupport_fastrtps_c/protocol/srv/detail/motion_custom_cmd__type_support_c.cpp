// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/MotionCustomCmd.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/motion_custom_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/motion_custom_cmd__struct.h"
#include "protocol/srv/detail/motion_custom_cmd__functions.h"
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


using _MotionCustomCmd_Request__ros_msg_type = protocol__srv__MotionCustomCmd_Request;

static bool _MotionCustomCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionCustomCmd_Request__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    cdr << ros_message->cmd_type;
  }

  // Field name: cmd_source
  {
    cdr << ros_message->cmd_source;
  }

  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  return true;
}

static bool _MotionCustomCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionCustomCmd_Request__ros_msg_type * ros_message = static_cast<_MotionCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    cdr >> ros_message->cmd_type;
  }

  // Field name: cmd_source
  {
    cdr >> ros_message->cmd_source;
  }

  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__MotionCustomCmd_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionCustomCmd_Request__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_type
  {
    size_t item_size = sizeof(ros_message->cmd_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_source
  {
    size_t item_size = sizeof(ros_message->cmd_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_id
  {
    size_t item_size = sizeof(ros_message->motion_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionCustomCmd_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionCustomCmd_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionCustomCmd_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmd_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motion_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionCustomCmd_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionCustomCmd_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionCustomCmd_Request = {
  "protocol::srv",
  "MotionCustomCmd_Request",
  _MotionCustomCmd_Request__cdr_serialize,
  _MotionCustomCmd_Request__cdr_deserialize,
  _MotionCustomCmd_Request__get_serialized_size,
  _MotionCustomCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotionCustomCmd_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionCustomCmd_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionCustomCmd_Request)() {
  return &_MotionCustomCmd_Request__type_support;
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
// #include "protocol/srv/detail/motion_custom_cmd__struct.h"
// already included above
// #include "protocol/srv/detail/motion_custom_cmd__functions.h"
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


using _MotionCustomCmd_Response__ros_msg_type = protocol__srv__MotionCustomCmd_Response;

static bool _MotionCustomCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionCustomCmd_Response__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

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

static bool _MotionCustomCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionCustomCmd_Response__ros_msg_type * ros_message = static_cast<_MotionCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

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
size_t get_serialized_size_protocol__srv__MotionCustomCmd_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionCustomCmd_Response__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_id
  {
    size_t item_size = sizeof(ros_message->motion_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

static uint32_t _MotionCustomCmd_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionCustomCmd_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionCustomCmd_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motion_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
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

static size_t _MotionCustomCmd_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionCustomCmd_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionCustomCmd_Response = {
  "protocol::srv",
  "MotionCustomCmd_Response",
  _MotionCustomCmd_Response__cdr_serialize,
  _MotionCustomCmd_Response__cdr_deserialize,
  _MotionCustomCmd_Response__get_serialized_size,
  _MotionCustomCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotionCustomCmd_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionCustomCmd_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionCustomCmd_Response)() {
  return &_MotionCustomCmd_Response__type_support;
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
#include "protocol/srv/motion_custom_cmd.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotionCustomCmd__callbacks = {
  "protocol::srv",
  "MotionCustomCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionCustomCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionCustomCmd_Response)(),
};

static rosidl_service_type_support_t MotionCustomCmd__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotionCustomCmd__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionCustomCmd)() {
  return &MotionCustomCmd__handle;
}

#if defined(__cplusplus)
}
#endif
