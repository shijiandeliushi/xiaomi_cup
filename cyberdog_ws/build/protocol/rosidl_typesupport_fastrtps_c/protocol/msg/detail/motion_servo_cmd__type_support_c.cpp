// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_servo_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/motion_servo_cmd__struct.h"
#include "protocol/msg/detail/motion_servo_cmd__functions.h"
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


using _MotionServoCmd__ros_msg_type = protocol__msg__MotionServoCmd;

static bool _MotionServoCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionServoCmd__ros_msg_type * ros_message = static_cast<const _MotionServoCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr << ros_message->motion_id;
  }

  // Field name: cmd_type
  {
    cdr << ros_message->cmd_type;
  }

  // Field name: cmd_source
  {
    cdr << ros_message->cmd_source;
  }

  // Field name: value
  {
    cdr << ros_message->value;
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

  return true;
}

static bool _MotionServoCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionServoCmd__ros_msg_type * ros_message = static_cast<_MotionServoCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_id
  {
    cdr >> ros_message->motion_id;
  }

  // Field name: cmd_type
  {
    cdr >> ros_message->cmd_type;
  }

  // Field name: cmd_source
  {
    cdr >> ros_message->cmd_source;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__MotionServoCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionServoCmd__ros_msg_type * ros_message = static_cast<const _MotionServoCmd__ros_msg_type *>(untyped_ros_message);
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
  // field.name cmd_type
  {
    size_t item_size = sizeof(ros_message->cmd_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_source
  {
    size_t item_size = sizeof(ros_message->cmd_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
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

  return current_alignment - initial_alignment;
}

static uint32_t _MotionServoCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__MotionServoCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__MotionServoCmd(
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
  // member: cmd_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_source
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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

  return current_alignment - initial_alignment;
}

static size_t _MotionServoCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__MotionServoCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionServoCmd = {
  "protocol::msg",
  "MotionServoCmd",
  _MotionServoCmd__cdr_serialize,
  _MotionServoCmd__cdr_deserialize,
  _MotionServoCmd__get_serialized_size,
  _MotionServoCmd__max_serialized_size
};

static rosidl_message_type_support_t _MotionServoCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionServoCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, MotionServoCmd)() {
  return &_MotionServoCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
