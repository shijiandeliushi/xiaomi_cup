// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/SetMapLabel.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/set_map_label__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/set_map_label__struct.h"
#include "protocol/srv/detail/set_map_label__functions.h"
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

#include "protocol/msg/detail/map_label__functions.h"  // label

// forward declare type support functions
size_t get_serialized_size_protocol__msg__MapLabel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__MapLabel(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MapLabel)();


using _SetMapLabel_Request__ros_msg_type = protocol__srv__SetMapLabel_Request;

static bool _SetMapLabel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMapLabel_Request__ros_msg_type * ros_message = static_cast<const _SetMapLabel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: label
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MapLabel
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->label, cdr))
    {
      return false;
    }
  }

  // Field name: only_delete
  {
    cdr << (ros_message->only_delete ? true : false);
  }

  return true;
}

static bool _SetMapLabel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMapLabel_Request__ros_msg_type * ros_message = static_cast<_SetMapLabel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: label
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MapLabel
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->label))
    {
      return false;
    }
  }

  // Field name: only_delete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->only_delete = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__SetMapLabel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMapLabel_Request__ros_msg_type * ros_message = static_cast<const _SetMapLabel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name label

  current_alignment += get_serialized_size_protocol__msg__MapLabel(
    &(ros_message->label), current_alignment);
  // field.name only_delete
  {
    size_t item_size = sizeof(ros_message->only_delete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMapLabel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__SetMapLabel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__SetMapLabel_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: label
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__MapLabel(
        full_bounded, current_alignment);
    }
  }
  // member: only_delete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMapLabel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__SetMapLabel_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMapLabel_Request = {
  "protocol::srv",
  "SetMapLabel_Request",
  _SetMapLabel_Request__cdr_serialize,
  _SetMapLabel_Request__cdr_deserialize,
  _SetMapLabel_Request__get_serialized_size,
  _SetMapLabel_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMapLabel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMapLabel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SetMapLabel_Request)() {
  return &_SetMapLabel_Request__type_support;
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
// #include "protocol/srv/detail/set_map_label__struct.h"
// already included above
// #include "protocol/srv/detail/set_map_label__functions.h"
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


using _SetMapLabel_Response__ros_msg_type = protocol__srv__SetMapLabel_Response;

static bool _SetMapLabel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMapLabel_Response__ros_msg_type * ros_message = static_cast<const _SetMapLabel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << ros_message->success;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _SetMapLabel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMapLabel_Response__ros_msg_type * ros_message = static_cast<_SetMapLabel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr >> ros_message->success;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__SetMapLabel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMapLabel_Response__ros_msg_type * ros_message = static_cast<const _SetMapLabel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
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

static uint32_t _SetMapLabel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__SetMapLabel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__SetMapLabel_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
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

static size_t _SetMapLabel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__SetMapLabel_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMapLabel_Response = {
  "protocol::srv",
  "SetMapLabel_Response",
  _SetMapLabel_Response__cdr_serialize,
  _SetMapLabel_Response__cdr_deserialize,
  _SetMapLabel_Response__get_serialized_size,
  _SetMapLabel_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMapLabel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMapLabel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SetMapLabel_Response)() {
  return &_SetMapLabel_Response__type_support;
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
#include "protocol/srv/set_map_label.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMapLabel__callbacks = {
  "protocol::srv",
  "SetMapLabel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SetMapLabel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SetMapLabel_Response)(),
};

static rosidl_service_type_support_t SetMapLabel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMapLabel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, SetMapLabel)() {
  return &SetMapLabel__handle;
}

#if defined(__cplusplus)
}
#endif
