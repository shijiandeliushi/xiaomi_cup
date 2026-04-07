// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice
#include "cyberdog_msg/msg/detail/apply_force__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cyberdog_msg/msg/detail/apply_force__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cyberdog_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cyberdog_msg
cdr_serialize(
  const cyberdog_msg::msg::ApplyForce & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: link_name
  cdr << ros_message.link_name;
  // Member: time
  cdr << ros_message.time;
  // Member: force
  {
    cdr << ros_message.force;
  }
  // Member: rel_pos
  {
    cdr << ros_message.rel_pos;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cyberdog_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cyberdog_msg::msg::ApplyForce & ros_message)
{
  // Member: link_name
  cdr >> ros_message.link_name;

  // Member: time
  cdr >> ros_message.time;

  // Member: force
  {
    cdr >> ros_message.force;
  }

  // Member: rel_pos
  {
    cdr >> ros_message.rel_pos;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cyberdog_msg
get_serialized_size(
  const cyberdog_msg::msg::ApplyForce & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.link_name.size() + 1);
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.force[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rel_pos
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.rel_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cyberdog_msg
max_serialized_size_ApplyForce(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: force
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rel_pos
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ApplyForce__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cyberdog_msg::msg::ApplyForce *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ApplyForce__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cyberdog_msg::msg::ApplyForce *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ApplyForce__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cyberdog_msg::msg::ApplyForce *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ApplyForce__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ApplyForce(full_bounded, 0);
}

static message_type_support_callbacks_t _ApplyForce__callbacks = {
  "cyberdog_msg::msg",
  "ApplyForce",
  _ApplyForce__cdr_serialize,
  _ApplyForce__cdr_deserialize,
  _ApplyForce__get_serialized_size,
  _ApplyForce__max_serialized_size
};

static rosidl_message_type_support_t _ApplyForce__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ApplyForce__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cyberdog_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cyberdog_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<cyberdog_msg::msg::ApplyForce>()
{
  return &cyberdog_msg::msg::typesupport_fastrtps_cpp::_ApplyForce__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cyberdog_msg, msg, ApplyForce)() {
  return &cyberdog_msg::msg::typesupport_fastrtps_cpp::_ApplyForce__handle;
}

#ifdef __cplusplus
}
#endif
