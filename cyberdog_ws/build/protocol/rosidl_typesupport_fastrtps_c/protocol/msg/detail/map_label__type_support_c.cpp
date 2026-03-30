// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/map_label__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/map_label__struct.h"
#include "protocol/msg/detail/map_label__functions.h"
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

#include "protocol/msg/detail/label__functions.h"  // labels
#include "protocol/msg/detail/occupancy_grid__functions.h"  // map
#include "rosidl_runtime_c/string.h"  // map_name
#include "rosidl_runtime_c/string_functions.h"  // map_name

// forward declare type support functions
size_t get_serialized_size_protocol__msg__Label(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__Label(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Label)();
size_t get_serialized_size_protocol__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__OccupancyGrid(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, OccupancyGrid)();


using _MapLabel__ros_msg_type = protocol__msg__MapLabel;

static bool _MapLabel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapLabel__ros_msg_type * ros_message = static_cast<const _MapLabel__ros_msg_type *>(untyped_ros_message);
  // Field name: map_name
  {
    const rosidl_runtime_c__String * str = &ros_message->map_name;
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

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  // Field name: is_outdoor
  {
    cdr << (ros_message->is_outdoor ? true : false);
  }

  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map, cdr))
    {
      return false;
    }
  }

  // Field name: labels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Label
      )()->data);
    size_t size = ros_message->labels.size;
    auto array_ptr = ros_message->labels.data;
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

static bool _MapLabel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapLabel__ros_msg_type * ros_message = static_cast<_MapLabel__ros_msg_type *>(untyped_ros_message);
  // Field name: map_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map_name.data) {
      rosidl_runtime_c__String__init(&ros_message->map_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map_name'\n");
      return false;
    }
  }

  // Field name: map_id
  {
    cdr >> ros_message->map_id;
  }

  // Field name: is_outdoor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_outdoor = tmp ? true : false;
  }

  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map))
    {
      return false;
    }
  }

  // Field name: labels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Label
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->labels.data) {
      protocol__msg__Label__Sequence__fini(&ros_message->labels);
    }
    if (!protocol__msg__Label__Sequence__init(&ros_message->labels, size)) {
      fprintf(stderr, "failed to create array for field 'labels'");
      return false;
    }
    auto array_ptr = ros_message->labels.data;
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
size_t get_serialized_size_protocol__msg__MapLabel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapLabel__ros_msg_type * ros_message = static_cast<const _MapLabel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map_name.size + 1);
  // field.name map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_outdoor
  {
    size_t item_size = sizeof(ros_message->is_outdoor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map

  current_alignment += get_serialized_size_protocol__msg__OccupancyGrid(
    &(ros_message->map), current_alignment);
  // field.name labels
  {
    size_t array_size = ros_message->labels.size;
    auto array_ptr = ros_message->labels.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__Label(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapLabel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MapLabel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MapLabel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: map_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: map_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_outdoor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__OccupancyGrid(
        full_bounded, current_alignment);
    }
  }
  // member: labels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__Label(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MapLabel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MapLabel(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MapLabel = {
  "protocol::msg",
  "MapLabel",
  _MapLabel__cdr_serialize,
  _MapLabel__cdr_deserialize,
  _MapLabel__get_serialized_size,
  _MapLabel__max_serialized_size
};

static rosidl_message_type_support_t _MapLabel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapLabel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MapLabel)() {
  return &_MapLabel__type_support;
}

#if defined(__cplusplus)
}
#endif
