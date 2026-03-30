// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MotionCustomCmd.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_custom_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/motion_custom_cmd__struct.h"
#include "protocol/msg/detail/motion_custom_cmd__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // acc_des, ctrl_point, foot_pose, pos_des, rpy_des, step_height, vel_des
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc_des, ctrl_point, foot_pose, pos_des, rpy_des, step_height, vel_des

// forward declare type support functions


using _MotionCustomCmd__ros_msg_type = protocol__msg__MotionCustomCmd;

static bool _MotionCustomCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionCustomCmd__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gait_id
  {
    cdr << ros_message->gait_id;
  }

  // Field name: contact
  {
    cdr << ros_message->contact;
  }

  // Field name: life_count
  {
    cdr << ros_message->life_count;
  }

  // Field name: vel_des
  {
    size_t size = ros_message->vel_des.size;
    auto array_ptr = ros_message->vel_des.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rpy_des
  {
    size_t size = ros_message->rpy_des.size;
    auto array_ptr = ros_message->rpy_des.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pos_des
  {
    size_t size = ros_message->pos_des.size;
    auto array_ptr = ros_message->pos_des.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_des
  {
    size_t size = ros_message->acc_des.size;
    auto array_ptr = ros_message->acc_des.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ctrl_point
  {
    size_t size = ros_message->ctrl_point.size;
    auto array_ptr = ros_message->ctrl_point.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: foot_pose
  {
    size_t size = ros_message->foot_pose.size;
    auto array_ptr = ros_message->foot_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: step_height
  {
    size_t size = ros_message->step_height.size;
    auto array_ptr = ros_message->step_height.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _MotionCustomCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionCustomCmd__ros_msg_type * ros_message = static_cast<_MotionCustomCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: gait_id
  {
    cdr >> ros_message->gait_id;
  }

  // Field name: contact
  {
    cdr >> ros_message->contact;
  }

  // Field name: life_count
  {
    cdr >> ros_message->life_count;
  }

  // Field name: vel_des
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_des.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vel_des);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vel_des, size)) {
      fprintf(stderr, "failed to create array for field 'vel_des'");
      return false;
    }
    auto array_ptr = ros_message->vel_des.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rpy_des
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rpy_des.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->rpy_des);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->rpy_des, size)) {
      fprintf(stderr, "failed to create array for field 'rpy_des'");
      return false;
    }
    auto array_ptr = ros_message->rpy_des.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pos_des
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pos_des.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pos_des);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pos_des, size)) {
      fprintf(stderr, "failed to create array for field 'pos_des'");
      return false;
    }
    auto array_ptr = ros_message->pos_des.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_des
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc_des.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_des);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_des, size)) {
      fprintf(stderr, "failed to create array for field 'acc_des'");
      return false;
    }
    auto array_ptr = ros_message->acc_des.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ctrl_point
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ctrl_point.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ctrl_point);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ctrl_point, size)) {
      fprintf(stderr, "failed to create array for field 'ctrl_point'");
      return false;
    }
    auto array_ptr = ros_message->ctrl_point.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: foot_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->foot_pose.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->foot_pose);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->foot_pose, size)) {
      fprintf(stderr, "failed to create array for field 'foot_pose'");
      return false;
    }
    auto array_ptr = ros_message->foot_pose.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: step_height
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->step_height.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->step_height);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->step_height, size)) {
      fprintf(stderr, "failed to create array for field 'step_height'");
      return false;
    }
    auto array_ptr = ros_message->step_height.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MotionCustomCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionCustomCmd__ros_msg_type * ros_message = static_cast<const _MotionCustomCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_id
  {
    size_t item_size = sizeof(ros_message->gait_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact
  {
    size_t item_size = sizeof(ros_message->contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name life_count
  {
    size_t item_size = sizeof(ros_message->life_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_des
  {
    size_t array_size = ros_message->vel_des.size;
    auto array_ptr = ros_message->vel_des.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpy_des
  {
    size_t array_size = ros_message->rpy_des.size;
    auto array_ptr = ros_message->rpy_des.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_des
  {
    size_t array_size = ros_message->pos_des.size;
    auto array_ptr = ros_message->pos_des.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_des
  {
    size_t array_size = ros_message->acc_des.size;
    auto array_ptr = ros_message->acc_des.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctrl_point
  {
    size_t array_size = ros_message->ctrl_point.size;
    auto array_ptr = ros_message->ctrl_point.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_pose
  {
    size_t array_size = ros_message->foot_pose.size;
    auto array_ptr = ros_message->foot_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_height
  {
    size_t array_size = ros_message->step_height.size;
    auto array_ptr = ros_message->step_height.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionCustomCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MotionCustomCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MotionCustomCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gait_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: life_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vel_des
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rpy_des
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_des
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_des
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ctrl_point
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: foot_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: step_height
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value
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

  return current_alignment - initial_alignment;
}

static size_t _MotionCustomCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MotionCustomCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionCustomCmd = {
  "protocol::msg",
  "MotionCustomCmd",
  _MotionCustomCmd__cdr_serialize,
  _MotionCustomCmd__cdr_deserialize,
  _MotionCustomCmd__get_serialized_size,
  _MotionCustomCmd__max_serialized_size
};

static rosidl_message_type_support_t _MotionCustomCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionCustomCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionCustomCmd)() {
  return &_MotionCustomCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
