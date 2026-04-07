// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice
#include "cyberdog_msg/msg/detail/apply_force__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cyberdog_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cyberdog_msg/msg/detail/apply_force__struct.h"
#include "cyberdog_msg/msg/detail/apply_force__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link_name
#include "rosidl_runtime_c/string_functions.h"  // link_name

// forward declare type support functions


using _ApplyForce__ros_msg_type = cyberdog_msg__msg__ApplyForce;

static bool _ApplyForce__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApplyForce__ros_msg_type * ros_message = static_cast<const _ApplyForce__ros_msg_type *>(untyped_ros_message);
  // Field name: link_name
  {
    const rosidl_runtime_c__String * str = &ros_message->link_name;
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

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: force
  {
    size_t size = 3;
    auto array_ptr = ros_message->force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->rel_pos;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ApplyForce__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApplyForce__ros_msg_type * ros_message = static_cast<_ApplyForce__ros_msg_type *>(untyped_ros_message);
  // Field name: link_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link_name.data) {
      rosidl_runtime_c__String__init(&ros_message->link_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link_name'\n");
      return false;
    }
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: force
  {
    size_t size = 3;
    auto array_ptr = ros_message->force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->rel_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cyberdog_msg
size_t get_serialized_size_cyberdog_msg__msg__ApplyForce(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApplyForce__ros_msg_type * ros_message = static_cast<const _ApplyForce__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link_name.size + 1);
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rel_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ApplyForce__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cyberdog_msg__msg__ApplyForce(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cyberdog_msg
size_t max_serialized_size_cyberdog_msg__msg__ApplyForce(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: force
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rel_pos
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ApplyForce__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cyberdog_msg__msg__ApplyForce(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApplyForce = {
  "cyberdog_msg::msg",
  "ApplyForce",
  _ApplyForce__cdr_serialize,
  _ApplyForce__cdr_deserialize,
  _ApplyForce__get_serialized_size,
  _ApplyForce__max_serialized_size
};

static rosidl_message_type_support_t _ApplyForce__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApplyForce,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cyberdog_msg, msg, ApplyForce)() {
  return &_ApplyForce__type_support;
}

#if defined(__cplusplus)
}
#endif
