// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/body__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/body__struct.h"
#include "protocol/msg/detail/body__functions.h"
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

#include "protocol/msg/detail/gesture__functions.h"  // gesture
#include "protocol/msg/detail/keypoint__functions.h"  // keypoints
#include "rosidl_runtime_c/primitives_sequence.h"  // feats
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // feats
#include "rosidl_runtime_c/string.h"  // reid
#include "rosidl_runtime_c/string_functions.h"  // reid
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // roi

// forward declare type support functions
size_t get_serialized_size_protocol__msg__Gesture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__Gesture(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Gesture)();
size_t get_serialized_size_protocol__msg__Keypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__Keypoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Keypoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();


using _Body__ros_msg_type = protocol__msg__Body;

static bool _Body__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Body__ros_msg_type * ros_message = static_cast<const _Body__ros_msg_type *>(untyped_ros_message);
  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roi, cdr))
    {
      return false;
    }
  }

  // Field name: reid
  {
    const rosidl_runtime_c__String * str = &ros_message->reid;
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

  // Field name: feats
  {
    size_t size = ros_message->feats.size;
    auto array_ptr = ros_message->feats.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: keypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Keypoint
      )()->data);
    size_t size = ros_message->keypoints.size;
    auto array_ptr = ros_message->keypoints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: gesture
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Gesture
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gesture, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Body__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Body__ros_msg_type * ros_message = static_cast<_Body__ros_msg_type *>(untyped_ros_message);
  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roi))
    {
      return false;
    }
  }

  // Field name: reid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reid.data) {
      rosidl_runtime_c__String__init(&ros_message->reid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reid'\n");
      return false;
    }
  }

  // Field name: feats
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->feats.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->feats);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->feats, size)) {
      fprintf(stderr, "failed to create array for field 'feats'");
      return false;
    }
    auto array_ptr = ros_message->feats.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: keypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Keypoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->keypoints.data) {
      protocol__msg__Keypoint__Sequence__fini(&ros_message->keypoints);
    }
    if (!protocol__msg__Keypoint__Sequence__init(&ros_message->keypoints, size)) {
      fprintf(stderr, "failed to create array for field 'keypoints'");
      return false;
    }
    auto array_ptr = ros_message->keypoints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: gesture
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, Gesture
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gesture))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__Body(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Body__ros_msg_type * ros_message = static_cast<const _Body__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roi

  current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->roi), current_alignment);
  // field.name reid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reid.size + 1);
  // field.name feats
  {
    size_t array_size = ros_message->feats.size;
    auto array_ptr = ros_message->feats.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keypoints
  {
    size_t array_size = ros_message->keypoints.size;
    auto array_ptr = ros_message->keypoints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__Keypoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name gesture

  current_alignment += get_serialized_size_protocol__msg__Gesture(
    &(ros_message->gesture), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Body__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__Body(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__Body(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: roi
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        full_bounded, current_alignment);
    }
  }
  // member: reid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: feats
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: keypoints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__Keypoint(
        full_bounded, current_alignment);
    }
  }
  // member: gesture
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__Gesture(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Body__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__Body(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Body = {
  "protocol::msg",
  "Body",
  _Body__cdr_serialize,
  _Body__cdr_deserialize,
  _Body__get_serialized_size,
  _Body__max_serialized_size
};

static rosidl_message_type_support_t _Body__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Body,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Body)() {
  return &_Body__type_support;
}

#if defined(__cplusplus)
}
#endif
