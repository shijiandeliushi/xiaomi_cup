// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/MotionQueueCustomCmd.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/motion_queue_custom_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/motion_queue_custom_cmd__struct.h"
#include "protocol/srv/detail/motion_queue_custom_cmd__functions.h"
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

#include "protocol/msg/detail/motion_custom_cmd__functions.h"  // cmds

// forward declare type support functions
size_t get_serialized_size_protocol__msg__MotionCustomCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__MotionCustomCmd(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionCustomCmd)();


using _MotionQueueCustomCmd_Request__ros_msg_type = protocol__srv__MotionQueueCustomCmd_Request;

static bool _MotionQueueCustomCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionQueueCustomCmd_Request__ros_msg_type * ros_message = static_cast<const _MotionQueueCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MotionCustomCmd
      )()->data);
    size_t size = ros_message->cmds.size;
    auto array_ptr = ros_message->cmds.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MotionQueueCustomCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionQueueCustomCmd_Request__ros_msg_type * ros_message = static_cast<_MotionQueueCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MotionCustomCmd
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cmds.data) {
      protocol__msg__MotionCustomCmd__Sequence__fini(&ros_message->cmds);
    }
    if (!protocol__msg__MotionCustomCmd__Sequence__init(&ros_message->cmds, size)) {
      fprintf(stderr, "failed to create array for field 'cmds'");
      return false;
    }
    auto array_ptr = ros_message->cmds.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__MotionQueueCustomCmd_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionQueueCustomCmd_Request__ros_msg_type * ros_message = static_cast<const _MotionQueueCustomCmd_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmds
  {
    size_t array_size = ros_message->cmds.size;
    auto array_ptr = ros_message->cmds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__MotionCustomCmd(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionQueueCustomCmd_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionQueueCustomCmd_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionQueueCustomCmd_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmds
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__MotionCustomCmd(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionQueueCustomCmd_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionQueueCustomCmd_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionQueueCustomCmd_Request = {
  "protocol::srv",
  "MotionQueueCustomCmd_Request",
  _MotionQueueCustomCmd_Request__cdr_serialize,
  _MotionQueueCustomCmd_Request__cdr_deserialize,
  _MotionQueueCustomCmd_Request__get_serialized_size,
  _MotionQueueCustomCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotionQueueCustomCmd_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionQueueCustomCmd_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionQueueCustomCmd_Request)() {
  return &_MotionQueueCustomCmd_Request__type_support;
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
// #include "protocol/srv/detail/motion_queue_custom_cmd__struct.h"
// already included above
// #include "protocol/srv/detail/motion_queue_custom_cmd__functions.h"
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


using _MotionQueueCustomCmd_Response__ros_msg_type = protocol__srv__MotionQueueCustomCmd_Response;

static bool _MotionQueueCustomCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionQueueCustomCmd_Response__ros_msg_type * ros_message = static_cast<const _MotionQueueCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _MotionQueueCustomCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionQueueCustomCmd_Response__ros_msg_type * ros_message = static_cast<_MotionQueueCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_protocol__srv__MotionQueueCustomCmd_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionQueueCustomCmd_Response__ros_msg_type * ros_message = static_cast<const _MotionQueueCustomCmd_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _MotionQueueCustomCmd_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionQueueCustomCmd_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionQueueCustomCmd_Response(
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

static size_t _MotionQueueCustomCmd_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionQueueCustomCmd_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionQueueCustomCmd_Response = {
  "protocol::srv",
  "MotionQueueCustomCmd_Response",
  _MotionQueueCustomCmd_Response__cdr_serialize,
  _MotionQueueCustomCmd_Response__cdr_deserialize,
  _MotionQueueCustomCmd_Response__get_serialized_size,
  _MotionQueueCustomCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotionQueueCustomCmd_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionQueueCustomCmd_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionQueueCustomCmd_Response)() {
  return &_MotionQueueCustomCmd_Response__type_support;
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
#include "protocol/srv/motion_queue_custom_cmd.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotionQueueCustomCmd__callbacks = {
  "protocol::srv",
  "MotionQueueCustomCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionQueueCustomCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionQueueCustomCmd_Response)(),
};

static rosidl_service_type_support_t MotionQueueCustomCmd__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotionQueueCustomCmd__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionQueueCustomCmd)() {
  return &MotionQueueCustomCmd__handle;
}

#if defined(__cplusplus)
}
#endif
