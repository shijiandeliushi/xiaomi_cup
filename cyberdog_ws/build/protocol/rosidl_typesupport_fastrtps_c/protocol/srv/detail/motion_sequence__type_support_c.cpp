// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/MotionSequence.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/motion_sequence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/motion_sequence__struct.h"
#include "protocol/srv/detail/motion_sequence__functions.h"
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

#include "protocol/msg/detail/motion_sequence_param__functions.h"  // params
#include "rosidl_runtime_c/string.h"  // toml_data
#include "rosidl_runtime_c/string_functions.h"  // toml_data

// forward declare type support functions
size_t get_serialized_size_protocol__msg__MotionSequenceParam(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__MotionSequenceParam(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionSequenceParam)();


using _MotionSequence_Request__ros_msg_type = protocol__srv__MotionSequence_Request;

static bool _MotionSequence_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionSequence_Request__ros_msg_type * ros_message = static_cast<const _MotionSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: toml_data
  {
    const rosidl_runtime_c__String * str = &ros_message->toml_data;
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

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MotionSequenceParam
      )()->data);
    size_t size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
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

static bool _MotionSequence_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionSequence_Request__ros_msg_type * ros_message = static_cast<_MotionSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: toml_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->toml_data.data) {
      rosidl_runtime_c__String__init(&ros_message->toml_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->toml_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'toml_data'\n");
      return false;
    }
  }

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, MotionSequenceParam
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->params.data) {
      protocol__msg__MotionSequenceParam__Sequence__fini(&ros_message->params);
    }
    if (!protocol__msg__MotionSequenceParam__Sequence__init(&ros_message->params, size)) {
      fprintf(stderr, "failed to create array for field 'params'");
      return false;
    }
    auto array_ptr = ros_message->params.data;
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
size_t get_serialized_size_protocol__srv__MotionSequence_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionSequence_Request__ros_msg_type * ros_message = static_cast<const _MotionSequence_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name toml_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->toml_data.size + 1);
  // field.name params
  {
    size_t array_size = ros_message->params.size;
    auto array_ptr = ros_message->params.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__MotionSequenceParam(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionSequence_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionSequence_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionSequence_Request(
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
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: toml_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: params
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__MotionSequenceParam(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionSequence_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionSequence_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionSequence_Request = {
  "protocol::srv",
  "MotionSequence_Request",
  _MotionSequence_Request__cdr_serialize,
  _MotionSequence_Request__cdr_deserialize,
  _MotionSequence_Request__get_serialized_size,
  _MotionSequence_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotionSequence_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionSequence_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionSequence_Request)() {
  return &_MotionSequence_Request__type_support;
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
// #include "protocol/srv/detail/motion_sequence__struct.h"
// already included above
// #include "protocol/srv/detail/motion_sequence__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // describe
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // describe

// forward declare type support functions


using _MotionSequence_Response__ros_msg_type = protocol__srv__MotionSequence_Response;

static bool _MotionSequence_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionSequence_Response__ros_msg_type * ros_message = static_cast<const _MotionSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  // Field name: describe
  {
    const rosidl_runtime_c__String * str = &ros_message->describe;
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

  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  return true;
}

static bool _MotionSequence_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionSequence_Response__ros_msg_type * ros_message = static_cast<_MotionSequence_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: describe
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->describe.data) {
      rosidl_runtime_c__String__init(&ros_message->describe);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->describe,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'describe'\n");
      return false;
    }
  }

  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__MotionSequence_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionSequence_Response__ros_msg_type * ros_message = static_cast<const _MotionSequence_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name describe
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->describe.size + 1);
  // field.name motion_id
  {
    size_t item_size = sizeof(ros_message->motion_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionSequence_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__MotionSequence_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__MotionSequence_Response(
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
  // member: describe
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motion_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionSequence_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__MotionSequence_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionSequence_Response = {
  "protocol::srv",
  "MotionSequence_Response",
  _MotionSequence_Response__cdr_serialize,
  _MotionSequence_Response__cdr_deserialize,
  _MotionSequence_Response__get_serialized_size,
  _MotionSequence_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotionSequence_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionSequence_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionSequence_Response)() {
  return &_MotionSequence_Response__type_support;
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
#include "protocol/srv/motion_sequence.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotionSequence__callbacks = {
  "protocol::srv",
  "MotionSequence",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionSequence_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionSequence_Response)(),
};

static rosidl_service_type_support_t MotionSequence__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotionSequence__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, MotionSequence)() {
  return &MotionSequence__handle;
}

#if defined(__cplusplus)
}
#endif
