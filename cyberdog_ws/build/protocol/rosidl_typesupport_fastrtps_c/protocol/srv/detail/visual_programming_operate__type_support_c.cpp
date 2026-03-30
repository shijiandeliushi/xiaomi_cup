// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/visual_programming_operate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/visual_programming_operate__struct.h"
#include "protocol/srv/detail/visual_programming_operate__functions.h"
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

#include "protocol/msg/detail/visual_programming_operate__functions.h"  // form
#include "rosidl_runtime_c/string.h"  // json
#include "rosidl_runtime_c/string_functions.h"  // json

// forward declare type support functions
size_t get_serialized_size_protocol__msg__VisualProgrammingOperate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__VisualProgrammingOperate(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, VisualProgrammingOperate)();


using _VisualProgrammingOperate_Request__ros_msg_type = protocol__srv__VisualProgrammingOperate_Request;

static bool _VisualProgrammingOperate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisualProgrammingOperate_Request__ros_msg_type * ros_message = static_cast<const _VisualProgrammingOperate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: json
  {
    const rosidl_runtime_c__String * str = &ros_message->json;
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

  // Field name: form
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VisualProgrammingOperate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->form, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VisualProgrammingOperate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisualProgrammingOperate_Request__ros_msg_type * ros_message = static_cast<_VisualProgrammingOperate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: json
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->json.data) {
      rosidl_runtime_c__String__init(&ros_message->json);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->json,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'json'\n");
      return false;
    }
  }

  // Field name: form
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, VisualProgrammingOperate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->form))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__VisualProgrammingOperate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisualProgrammingOperate_Request__ros_msg_type * ros_message = static_cast<const _VisualProgrammingOperate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name json
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->json.size + 1);
  // field.name form

  current_alignment += get_serialized_size_protocol__msg__VisualProgrammingOperate(
    &(ros_message->form), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VisualProgrammingOperate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__VisualProgrammingOperate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__VisualProgrammingOperate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: json
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: form
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__VisualProgrammingOperate(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VisualProgrammingOperate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__VisualProgrammingOperate_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VisualProgrammingOperate_Request = {
  "protocol::srv",
  "VisualProgrammingOperate_Request",
  _VisualProgrammingOperate_Request__cdr_serialize,
  _VisualProgrammingOperate_Request__cdr_deserialize,
  _VisualProgrammingOperate_Request__get_serialized_size,
  _VisualProgrammingOperate_Request__max_serialized_size
};

static rosidl_message_type_support_t _VisualProgrammingOperate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisualProgrammingOperate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, VisualProgrammingOperate_Request)() {
  return &_VisualProgrammingOperate_Request__type_support;
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
// #include "protocol/srv/detail/visual_programming_operate__struct.h"
// already included above
// #include "protocol/srv/detail/visual_programming_operate__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // json
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // json

// forward declare type support functions


using _VisualProgrammingOperate_Response__ros_msg_type = protocol__srv__VisualProgrammingOperate_Response;

static bool _VisualProgrammingOperate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisualProgrammingOperate_Response__ros_msg_type * ros_message = static_cast<const _VisualProgrammingOperate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr << ros_message->code;
  }

  // Field name: json
  {
    const rosidl_runtime_c__String * str = &ros_message->json;
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

static bool _VisualProgrammingOperate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisualProgrammingOperate_Response__ros_msg_type * ros_message = static_cast<_VisualProgrammingOperate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: code
  {
    cdr >> ros_message->code;
  }

  // Field name: json
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->json.data) {
      rosidl_runtime_c__String__init(&ros_message->json);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->json,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'json'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__VisualProgrammingOperate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisualProgrammingOperate_Response__ros_msg_type * ros_message = static_cast<const _VisualProgrammingOperate_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name json
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->json.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _VisualProgrammingOperate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__VisualProgrammingOperate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__VisualProgrammingOperate_Response(
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
  // member: json
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

static size_t _VisualProgrammingOperate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__VisualProgrammingOperate_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VisualProgrammingOperate_Response = {
  "protocol::srv",
  "VisualProgrammingOperate_Response",
  _VisualProgrammingOperate_Response__cdr_serialize,
  _VisualProgrammingOperate_Response__cdr_deserialize,
  _VisualProgrammingOperate_Response__get_serialized_size,
  _VisualProgrammingOperate_Response__max_serialized_size
};

static rosidl_message_type_support_t _VisualProgrammingOperate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisualProgrammingOperate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, VisualProgrammingOperate_Response)() {
  return &_VisualProgrammingOperate_Response__type_support;
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
#include "protocol/srv/visual_programming_operate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t VisualProgrammingOperate__callbacks = {
  "protocol::srv",
  "VisualProgrammingOperate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, VisualProgrammingOperate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, VisualProgrammingOperate_Response)(),
};

static rosidl_service_type_support_t VisualProgrammingOperate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &VisualProgrammingOperate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, VisualProgrammingOperate)() {
  return &VisualProgrammingOperate__handle;
}

#if defined(__cplusplus)
}
#endif
