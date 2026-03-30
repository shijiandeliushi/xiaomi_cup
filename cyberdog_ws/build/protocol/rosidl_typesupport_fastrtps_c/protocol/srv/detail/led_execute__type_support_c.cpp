// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/led_execute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/led_execute__struct.h"
#include "protocol/srv/detail/led_execute__functions.h"
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

#include "rosidl_runtime_c/string.h"  // client
#include "rosidl_runtime_c/string_functions.h"  // client

// forward declare type support functions


using _LedExecute_Request__ros_msg_type = protocol__srv__LedExecute_Request;

static bool _LedExecute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LedExecute_Request__ros_msg_type * ros_message = static_cast<const _LedExecute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: occupation
  {
    cdr << (ros_message->occupation ? true : false);
  }

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

  // Field name: target
  {
    cdr << ros_message->target;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: effect
  {
    cdr << ros_message->effect;
  }

  // Field name: r_value
  {
    cdr << ros_message->r_value;
  }

  // Field name: g_value
  {
    cdr << ros_message->g_value;
  }

  // Field name: b_value
  {
    cdr << ros_message->b_value;
  }

  return true;
}

static bool _LedExecute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LedExecute_Request__ros_msg_type * ros_message = static_cast<_LedExecute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->occupation = tmp ? true : false;
  }

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

  // Field name: target
  {
    cdr >> ros_message->target;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: effect
  {
    cdr >> ros_message->effect;
  }

  // Field name: r_value
  {
    cdr >> ros_message->r_value;
  }

  // Field name: g_value
  {
    cdr >> ros_message->g_value;
  }

  // Field name: b_value
  {
    cdr >> ros_message->b_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__LedExecute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedExecute_Request__ros_msg_type * ros_message = static_cast<const _LedExecute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name occupation
  {
    size_t item_size = sizeof(ros_message->occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name client
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->client.size + 1);
  // field.name target
  {
    size_t item_size = sizeof(ros_message->target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name effect
  {
    size_t item_size = sizeof(ros_message->effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r_value
  {
    size_t item_size = sizeof(ros_message->r_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g_value
  {
    size_t item_size = sizeof(ros_message->g_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_value
  {
    size_t item_size = sizeof(ros_message->b_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LedExecute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__LedExecute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__LedExecute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: occupation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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
  // member: target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: effect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: g_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LedExecute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__LedExecute_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LedExecute_Request = {
  "protocol::srv",
  "LedExecute_Request",
  _LedExecute_Request__cdr_serialize,
  _LedExecute_Request__cdr_deserialize,
  _LedExecute_Request__get_serialized_size,
  _LedExecute_Request__max_serialized_size
};

static rosidl_message_type_support_t _LedExecute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedExecute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, LedExecute_Request)() {
  return &_LedExecute_Request__type_support;
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
// #include "protocol/srv/detail/led_execute__struct.h"
// already included above
// #include "protocol/srv/detail/led_execute__functions.h"
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


using _LedExecute_Response__ros_msg_type = protocol__srv__LedExecute_Response;

static bool _LedExecute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LedExecute_Response__ros_msg_type * ros_message = static_cast<const _LedExecute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _LedExecute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LedExecute_Response__ros_msg_type * ros_message = static_cast<_LedExecute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__LedExecute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedExecute_Response__ros_msg_type * ros_message = static_cast<const _LedExecute_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _LedExecute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__LedExecute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__LedExecute_Response(
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

static size_t _LedExecute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__LedExecute_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LedExecute_Response = {
  "protocol::srv",
  "LedExecute_Response",
  _LedExecute_Response__cdr_serialize,
  _LedExecute_Response__cdr_deserialize,
  _LedExecute_Response__get_serialized_size,
  _LedExecute_Response__max_serialized_size
};

static rosidl_message_type_support_t _LedExecute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedExecute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, LedExecute_Response)() {
  return &_LedExecute_Response__type_support;
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
#include "protocol/srv/led_execute.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LedExecute__callbacks = {
  "protocol::srv",
  "LedExecute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, LedExecute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, LedExecute_Response)(),
};

static rosidl_service_type_support_t LedExecute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LedExecute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, LedExecute)() {
  return &LedExecute__handle;
}

#if defined(__cplusplus)
}
#endif
