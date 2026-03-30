// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/Label.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/label__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/label__struct.h"
#include "protocol/msg/detail/label__functions.h"
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

#include "rosidl_runtime_c/string.h"  // label_name
#include "rosidl_runtime_c/string_functions.h"  // label_name

// forward declare type support functions


using _Label__ros_msg_type = protocol__msg__Label;

static bool _Label__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Label__ros_msg_type * ros_message = static_cast<const _Label__ros_msg_type *>(untyped_ros_message);
  // Field name: label_name
  {
    const rosidl_runtime_c__String * str = &ros_message->label_name;
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

  // Field name: physic_x
  {
    cdr << ros_message->physic_x;
  }

  // Field name: physic_y
  {
    cdr << ros_message->physic_y;
  }

  return true;
}

static bool _Label__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Label__ros_msg_type * ros_message = static_cast<_Label__ros_msg_type *>(untyped_ros_message);
  // Field name: label_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label_name.data) {
      rosidl_runtime_c__String__init(&ros_message->label_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->label_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label_name'\n");
      return false;
    }
  }

  // Field name: physic_x
  {
    cdr >> ros_message->physic_x;
  }

  // Field name: physic_y
  {
    cdr >> ros_message->physic_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__Label(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Label__ros_msg_type * ros_message = static_cast<const _Label__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name label_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label_name.size + 1);
  // field.name physic_x
  {
    size_t item_size = sizeof(ros_message->physic_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name physic_y
  {
    size_t item_size = sizeof(ros_message->physic_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Label__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__Label(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__Label(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: label_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: physic_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: physic_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Label__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__Label(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Label = {
  "protocol::msg",
  "Label",
  _Label__cdr_serialize,
  _Label__cdr_deserialize,
  _Label__get_serialized_size,
  _Label__max_serialized_size
};

static rosidl_message_type_support_t _Label__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Label,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Label)() {
  return &_Label__type_support;
}

#if defined(__cplusplus)
}
#endif
