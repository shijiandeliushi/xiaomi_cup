// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/multiple_tof_payload__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/multiple_tof_payload__struct.h"
#include "protocol/msg/detail/multiple_tof_payload__functions.h"
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

#include "protocol/msg/detail/single_tof_payload__functions.h"  // left_head, left_rear, right_head, right_rear

// forward declare type support functions
size_t get_serialized_size_protocol__msg__SingleTofPayload(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__SingleTofPayload(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload)();


using _MultipleTofPayload__ros_msg_type = protocol__msg__MultipleTofPayload;

static bool _MultipleTofPayload__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultipleTofPayload__ros_msg_type * ros_message = static_cast<const _MultipleTofPayload__ros_msg_type *>(untyped_ros_message);
  // Field name: left_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_head, cdr))
    {
      return false;
    }
  }

  // Field name: left_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_rear, cdr))
    {
      return false;
    }
  }

  // Field name: right_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_head, cdr))
    {
      return false;
    }
  }

  // Field name: right_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_rear, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MultipleTofPayload__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultipleTofPayload__ros_msg_type * ros_message = static_cast<_MultipleTofPayload__ros_msg_type *>(untyped_ros_message);
  // Field name: left_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_head))
    {
      return false;
    }
  }

  // Field name: left_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_rear))
    {
      return false;
    }
  }

  // Field name: right_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_head))
    {
      return false;
    }
  }

  // Field name: right_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, SingleTofPayload
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_rear))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MultipleTofPayload(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultipleTofPayload__ros_msg_type * ros_message = static_cast<const _MultipleTofPayload__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_head

  current_alignment += get_serialized_size_protocol__msg__SingleTofPayload(
    &(ros_message->left_head), current_alignment);
  // field.name left_rear

  current_alignment += get_serialized_size_protocol__msg__SingleTofPayload(
    &(ros_message->left_rear), current_alignment);
  // field.name right_head

  current_alignment += get_serialized_size_protocol__msg__SingleTofPayload(
    &(ros_message->right_head), current_alignment);
  // field.name right_rear

  current_alignment += get_serialized_size_protocol__msg__SingleTofPayload(
    &(ros_message->right_rear), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultipleTofPayload__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MultipleTofPayload(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MultipleTofPayload(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_head
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__SingleTofPayload(
        full_bounded, current_alignment);
    }
  }
  // member: left_rear
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__SingleTofPayload(
        full_bounded, current_alignment);
    }
  }
  // member: right_head
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__SingleTofPayload(
        full_bounded, current_alignment);
    }
  }
  // member: right_rear
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__SingleTofPayload(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultipleTofPayload__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MultipleTofPayload(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultipleTofPayload = {
  "protocol::msg",
  "MultipleTofPayload",
  _MultipleTofPayload__cdr_serialize,
  _MultipleTofPayload__cdr_deserialize,
  _MultipleTofPayload__get_serialized_size,
  _MultipleTofPayload__max_serialized_size
};

static rosidl_message_type_support_t _MultipleTofPayload__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultipleTofPayload,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MultipleTofPayload)() {
  return &_MultipleTofPayload__type_support;
}

#if defined(__cplusplus)
}
#endif
