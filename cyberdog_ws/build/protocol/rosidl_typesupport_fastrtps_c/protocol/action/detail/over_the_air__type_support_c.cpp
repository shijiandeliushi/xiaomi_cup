// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice
#include "protocol/action/detail/over_the_air__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/action/detail/over_the_air__struct.h"
#include "protocol/action/detail/over_the_air__functions.h"
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

#include "rosidl_runtime_c/string.h"  // data, depth, goal_msg, id, operate, type, user
#include "rosidl_runtime_c/string_functions.h"  // data, depth, goal_msg, id, operate, type, user

// forward declare type support functions


using _OverTheAir_Goal__ros_msg_type = protocol__action__OverTheAir_Goal;

static bool _OverTheAir_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_Goal__ros_msg_type * ros_message = static_cast<const _OverTheAir_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->goal_msg;
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

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: user
  {
    const rosidl_runtime_c__String * str = &ros_message->user;
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

  // Field name: operate
  {
    const rosidl_runtime_c__String * str = &ros_message->operate;
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

  // Field name: data
  {
    const rosidl_runtime_c__String * str = &ros_message->data;
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

  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: depth
  {
    const rosidl_runtime_c__String * str = &ros_message->depth;
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

static bool _OverTheAir_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_Goal__ros_msg_type * ros_message = static_cast<_OverTheAir_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->goal_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->goal_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->goal_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'goal_msg'\n");
      return false;
    }
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: user
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->user.data) {
      rosidl_runtime_c__String__init(&ros_message->user);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->user,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'user'\n");
      return false;
    }
  }

  // Field name: operate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operate.data) {
      rosidl_runtime_c__String__init(&ros_message->operate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operate'\n");
      return false;
    }
  }

  // Field name: data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data.data) {
      rosidl_runtime_c__String__init(&ros_message->data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data'\n");
      return false;
    }
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: depth
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->depth.data) {
      rosidl_runtime_c__String__init(&ros_message->depth);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->depth,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'depth'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_Goal__ros_msg_type * ros_message = static_cast<const _OverTheAir_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->goal_msg.size + 1);
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name user
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->user.size + 1);
  // field.name operate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operate.size + 1);
  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data.size + 1);
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name depth
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->depth.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: user
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: operate
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: depth
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

static size_t _OverTheAir_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_Goal = {
  "protocol::action",
  "OverTheAir_Goal",
  _OverTheAir_Goal__cdr_serialize,
  _OverTheAir_Goal__cdr_deserialize,
  _OverTheAir_Goal__get_serialized_size,
  _OverTheAir_Goal__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Goal)() {
  return &_OverTheAir_Goal__type_support;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // disk_avail, disk_filesystem, disk_meta_change_time, disk_meta_name, disk_meta_size, disk_meta_user_rights, disk_mounted, disk_name, disk_scale, disk_size, disk_used, id, not_unlocked, operate, reboot, result, result_msg, sn, state, type, version_motors, version_mr813, version_mr813_spie1, version_mr813_spie2, version_nx, version_nx_head_tof, version_nx_head_uwb, version_nx_imu, version_nx_mini_led, version_nx_power, version_nx_rear_tof, version_nx_rear_uwb, version_r329
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // disk_avail, disk_filesystem, disk_meta_change_time, disk_meta_name, disk_meta_size, disk_meta_user_rights, disk_mounted, disk_name, disk_scale, disk_size, disk_used, id, not_unlocked, operate, reboot, result, result_msg, sn, state, type, version_motors, version_mr813, version_mr813_spie1, version_mr813_spie2, version_nx, version_nx_head_tof, version_nx_head_uwb, version_nx_imu, version_nx_mini_led, version_nx_power, version_nx_rear_tof, version_nx_rear_uwb, version_r329

// forward declare type support functions


using _OverTheAir_Result__ros_msg_type = protocol__action__OverTheAir_Result;

static bool _OverTheAir_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_Result__ros_msg_type * ros_message = static_cast<const _OverTheAir_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: result_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->result_msg;
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

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: operate
  {
    const rosidl_runtime_c__String * str = &ros_message->operate;
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

  // Field name: sn
  {
    const rosidl_runtime_c__String * str = &ros_message->sn;
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

  // Field name: not_unlocked
  {
    const rosidl_runtime_c__String * str = &ros_message->not_unlocked;
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

  // Field name: version_nx
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx;
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

  // Field name: version_nx_mini_led
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_mini_led;
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

  // Field name: version_nx_head_tof
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_head_tof;
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

  // Field name: version_nx_rear_tof
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_rear_tof;
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

  // Field name: version_nx_head_uwb
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_head_uwb;
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

  // Field name: version_nx_rear_uwb
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_rear_uwb;
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

  // Field name: version_nx_imu
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_imu;
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

  // Field name: version_nx_power
  {
    const rosidl_runtime_c__String * str = &ros_message->version_nx_power;
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

  // Field name: version_r329
  {
    const rosidl_runtime_c__String * str = &ros_message->version_r329;
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

  // Field name: version_mr813
  {
    const rosidl_runtime_c__String * str = &ros_message->version_mr813;
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

  // Field name: version_mr813_spie1
  {
    const rosidl_runtime_c__String * str = &ros_message->version_mr813_spie1;
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

  // Field name: version_mr813_spie2
  {
    const rosidl_runtime_c__String * str = &ros_message->version_mr813_spie2;
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

  // Field name: version_motors
  {
    size_t size = ros_message->version_motors.size;
    auto array_ptr = ros_message->version_motors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: disk_name
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_name;
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

  // Field name: disk_filesystem
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_filesystem;
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

  // Field name: disk_size
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_size;
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

  // Field name: disk_used
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_used;
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

  // Field name: disk_avail
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_avail;
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

  // Field name: disk_scale
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_scale;
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

  // Field name: disk_mounted
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_mounted;
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

  // Field name: disk_meta_name
  {
    size_t size = ros_message->disk_meta_name.size;
    auto array_ptr = ros_message->disk_meta_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: disk_meta_size
  {
    size_t size = ros_message->disk_meta_size.size;
    auto array_ptr = ros_message->disk_meta_size.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: disk_meta_change_time
  {
    size_t size = ros_message->disk_meta_change_time.size;
    auto array_ptr = ros_message->disk_meta_change_time.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: disk_meta_user_rights
  {
    size_t size = ros_message->disk_meta_user_rights.size;
    auto array_ptr = ros_message->disk_meta_user_rights.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: reboot
  {
    const rosidl_runtime_c__String * str = &ros_message->reboot;
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

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
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

  // Field name: code
  {
    cdr << ros_message->code;
  }

  // Field name: result
  {
    const rosidl_runtime_c__String * str = &ros_message->result;
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

static bool _OverTheAir_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_Result__ros_msg_type * ros_message = static_cast<_OverTheAir_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: result_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->result_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result_msg'\n");
      return false;
    }
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: operate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operate.data) {
      rosidl_runtime_c__String__init(&ros_message->operate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operate'\n");
      return false;
    }
  }

  // Field name: sn
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sn.data) {
      rosidl_runtime_c__String__init(&ros_message->sn);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sn,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sn'\n");
      return false;
    }
  }

  // Field name: not_unlocked
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->not_unlocked.data) {
      rosidl_runtime_c__String__init(&ros_message->not_unlocked);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->not_unlocked,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'not_unlocked'\n");
      return false;
    }
  }

  // Field name: version_nx
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx'\n");
      return false;
    }
  }

  // Field name: version_nx_mini_led
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_mini_led.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_mini_led);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_mini_led,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_mini_led'\n");
      return false;
    }
  }

  // Field name: version_nx_head_tof
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_head_tof.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_head_tof);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_head_tof,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_head_tof'\n");
      return false;
    }
  }

  // Field name: version_nx_rear_tof
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_rear_tof.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_rear_tof);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_rear_tof,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_rear_tof'\n");
      return false;
    }
  }

  // Field name: version_nx_head_uwb
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_head_uwb.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_head_uwb);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_head_uwb,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_head_uwb'\n");
      return false;
    }
  }

  // Field name: version_nx_rear_uwb
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_rear_uwb.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_rear_uwb);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_rear_uwb,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_rear_uwb'\n");
      return false;
    }
  }

  // Field name: version_nx_imu
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_imu.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_imu);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_imu,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_imu'\n");
      return false;
    }
  }

  // Field name: version_nx_power
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_nx_power.data) {
      rosidl_runtime_c__String__init(&ros_message->version_nx_power);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_nx_power,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_nx_power'\n");
      return false;
    }
  }

  // Field name: version_r329
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_r329.data) {
      rosidl_runtime_c__String__init(&ros_message->version_r329);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_r329,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_r329'\n");
      return false;
    }
  }

  // Field name: version_mr813
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_mr813.data) {
      rosidl_runtime_c__String__init(&ros_message->version_mr813);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_mr813,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_mr813'\n");
      return false;
    }
  }

  // Field name: version_mr813_spie1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_mr813_spie1.data) {
      rosidl_runtime_c__String__init(&ros_message->version_mr813_spie1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_mr813_spie1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_mr813_spie1'\n");
      return false;
    }
  }

  // Field name: version_mr813_spie2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->version_mr813_spie2.data) {
      rosidl_runtime_c__String__init(&ros_message->version_mr813_spie2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->version_mr813_spie2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'version_mr813_spie2'\n");
      return false;
    }
  }

  // Field name: version_motors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->version_motors.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->version_motors);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->version_motors, size)) {
      fprintf(stderr, "failed to create array for field 'version_motors'");
      return false;
    }
    auto array_ptr = ros_message->version_motors.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'version_motors'\n");
        return false;
      }
    }
  }

  // Field name: disk_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_name.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_name'\n");
      return false;
    }
  }

  // Field name: disk_filesystem
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_filesystem.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_filesystem);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_filesystem,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_filesystem'\n");
      return false;
    }
  }

  // Field name: disk_size
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_size.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_size);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_size,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_size'\n");
      return false;
    }
  }

  // Field name: disk_used
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_used.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_used);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_used,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_used'\n");
      return false;
    }
  }

  // Field name: disk_avail
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_avail.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_avail);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_avail,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_avail'\n");
      return false;
    }
  }

  // Field name: disk_scale
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_scale.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_scale);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_scale,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_scale'\n");
      return false;
    }
  }

  // Field name: disk_mounted
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_mounted.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_mounted);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_mounted,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_mounted'\n");
      return false;
    }
  }

  // Field name: disk_meta_name
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disk_meta_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->disk_meta_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->disk_meta_name, size)) {
      fprintf(stderr, "failed to create array for field 'disk_meta_name'");
      return false;
    }
    auto array_ptr = ros_message->disk_meta_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'disk_meta_name'\n");
        return false;
      }
    }
  }

  // Field name: disk_meta_size
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disk_meta_size.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->disk_meta_size);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->disk_meta_size, size)) {
      fprintf(stderr, "failed to create array for field 'disk_meta_size'");
      return false;
    }
    auto array_ptr = ros_message->disk_meta_size.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'disk_meta_size'\n");
        return false;
      }
    }
  }

  // Field name: disk_meta_change_time
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disk_meta_change_time.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->disk_meta_change_time);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->disk_meta_change_time, size)) {
      fprintf(stderr, "failed to create array for field 'disk_meta_change_time'");
      return false;
    }
    auto array_ptr = ros_message->disk_meta_change_time.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'disk_meta_change_time'\n");
        return false;
      }
    }
  }

  // Field name: disk_meta_user_rights
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disk_meta_user_rights.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->disk_meta_user_rights);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->disk_meta_user_rights, size)) {
      fprintf(stderr, "failed to create array for field 'disk_meta_user_rights'");
      return false;
    }
    auto array_ptr = ros_message->disk_meta_user_rights.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'disk_meta_user_rights'\n");
        return false;
      }
    }
  }

  // Field name: reboot
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reboot.data) {
      rosidl_runtime_c__String__init(&ros_message->reboot);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reboot,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reboot'\n");
      return false;
    }
  }

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  // Field name: result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result.data) {
      rosidl_runtime_c__String__init(&ros_message->result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_Result__ros_msg_type * ros_message = static_cast<const _OverTheAir_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result_msg.size + 1);
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name operate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operate.size + 1);
  // field.name sn
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sn.size + 1);
  // field.name not_unlocked
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->not_unlocked.size + 1);
  // field.name version_nx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx.size + 1);
  // field.name version_nx_mini_led
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_mini_led.size + 1);
  // field.name version_nx_head_tof
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_head_tof.size + 1);
  // field.name version_nx_rear_tof
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_rear_tof.size + 1);
  // field.name version_nx_head_uwb
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_head_uwb.size + 1);
  // field.name version_nx_rear_uwb
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_rear_uwb.size + 1);
  // field.name version_nx_imu
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_imu.size + 1);
  // field.name version_nx_power
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_nx_power.size + 1);
  // field.name version_r329
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_r329.size + 1);
  // field.name version_mr813
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_mr813.size + 1);
  // field.name version_mr813_spie1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_mr813_spie1.size + 1);
  // field.name version_mr813_spie2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->version_mr813_spie2.size + 1);
  // field.name version_motors
  {
    size_t array_size = ros_message->version_motors.size;
    auto array_ptr = ros_message->version_motors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name disk_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_name.size + 1);
  // field.name disk_filesystem
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_filesystem.size + 1);
  // field.name disk_size
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_size.size + 1);
  // field.name disk_used
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_used.size + 1);
  // field.name disk_avail
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_avail.size + 1);
  // field.name disk_scale
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_scale.size + 1);
  // field.name disk_mounted
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_mounted.size + 1);
  // field.name disk_meta_name
  {
    size_t array_size = ros_message->disk_meta_name.size;
    auto array_ptr = ros_message->disk_meta_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name disk_meta_size
  {
    size_t array_size = ros_message->disk_meta_size.size;
    auto array_ptr = ros_message->disk_meta_size.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name disk_meta_change_time
  {
    size_t array_size = ros_message->disk_meta_change_time.size;
    auto array_ptr = ros_message->disk_meta_change_time.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name disk_meta_user_rights
  {
    size_t array_size = ros_message->disk_meta_user_rights.size;
    auto array_ptr = ros_message->disk_meta_user_rights.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name reboot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reboot.size + 1);
  // field.name state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: operate
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sn
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: not_unlocked
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_mini_led
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_head_tof
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_rear_tof
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_head_uwb
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_rear_uwb
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_imu
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_nx_power
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_r329
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_mr813
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_mr813_spie1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_mr813_spie2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: version_motors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_filesystem
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_size
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_used
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_avail
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_scale
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_mounted
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_meta_name
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_meta_size
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_meta_change_time
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: disk_meta_user_rights
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: reboot
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: result
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

static size_t _OverTheAir_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_Result = {
  "protocol::action",
  "OverTheAir_Result",
  _OverTheAir_Result__cdr_serialize,
  _OverTheAir_Result__cdr_deserialize,
  _OverTheAir_Result__get_serialized_size,
  _OverTheAir_Result__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Result)() {
  return &_OverTheAir_Result__type_support;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // describe, feedback_msg, file, id, now_version, operate, ota_version, progress, schedule, size, speed, stage, target, target_stage, time_remaining, type
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // describe, feedback_msg, file, id, now_version, operate, ota_version, progress, schedule, size, speed, stage, target, target_stage, time_remaining, type

// forward declare type support functions


using _OverTheAir_Feedback__ros_msg_type = protocol__action__OverTheAir_Feedback;

static bool _OverTheAir_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_Feedback__ros_msg_type * ros_message = static_cast<const _OverTheAir_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: feedback_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->feedback_msg;
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

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: operate
  {
    const rosidl_runtime_c__String * str = &ros_message->operate;
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

  // Field name: now_version
  {
    const rosidl_runtime_c__String * str = &ros_message->now_version;
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

  // Field name: ota_version
  {
    const rosidl_runtime_c__String * str = &ros_message->ota_version;
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

  // Field name: stage
  {
    const rosidl_runtime_c__String * str = &ros_message->stage;
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

  // Field name: target
  {
    const rosidl_runtime_c__String * str = &ros_message->target;
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

  // Field name: target_stage
  {
    const rosidl_runtime_c__String * str = &ros_message->target_stage;
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

  // Field name: file
  {
    const rosidl_runtime_c__String * str = &ros_message->file;
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

  // Field name: size
  {
    const rosidl_runtime_c__String * str = &ros_message->size;
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

  // Field name: schedule
  {
    const rosidl_runtime_c__String * str = &ros_message->schedule;
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

  // Field name: time_remaining
  {
    const rosidl_runtime_c__String * str = &ros_message->time_remaining;
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

  // Field name: progress
  {
    const rosidl_runtime_c__String * str = &ros_message->progress;
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

  // Field name: speed
  {
    const rosidl_runtime_c__String * str = &ros_message->speed;
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

  return true;
}

static bool _OverTheAir_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_Feedback__ros_msg_type * ros_message = static_cast<_OverTheAir_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: feedback_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->feedback_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->feedback_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->feedback_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'feedback_msg'\n");
      return false;
    }
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: operate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operate.data) {
      rosidl_runtime_c__String__init(&ros_message->operate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operate'\n");
      return false;
    }
  }

  // Field name: now_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->now_version.data) {
      rosidl_runtime_c__String__init(&ros_message->now_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->now_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'now_version'\n");
      return false;
    }
  }

  // Field name: ota_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ota_version.data) {
      rosidl_runtime_c__String__init(&ros_message->ota_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ota_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ota_version'\n");
      return false;
    }
  }

  // Field name: stage
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stage.data) {
      rosidl_runtime_c__String__init(&ros_message->stage);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stage,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stage'\n");
      return false;
    }
  }

  // Field name: target
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target.data) {
      rosidl_runtime_c__String__init(&ros_message->target);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target'\n");
      return false;
    }
  }

  // Field name: target_stage
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_stage.data) {
      rosidl_runtime_c__String__init(&ros_message->target_stage);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_stage,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_stage'\n");
      return false;
    }
  }

  // Field name: file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file.data) {
      rosidl_runtime_c__String__init(&ros_message->file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file'\n");
      return false;
    }
  }

  // Field name: size
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->size.data) {
      rosidl_runtime_c__String__init(&ros_message->size);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->size,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'size'\n");
      return false;
    }
  }

  // Field name: schedule
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->schedule.data) {
      rosidl_runtime_c__String__init(&ros_message->schedule);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->schedule,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'schedule'\n");
      return false;
    }
  }

  // Field name: time_remaining
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time_remaining.data) {
      rosidl_runtime_c__String__init(&ros_message->time_remaining);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time_remaining,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time_remaining'\n");
      return false;
    }
  }

  // Field name: progress
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->progress.data) {
      rosidl_runtime_c__String__init(&ros_message->progress);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->progress,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'progress'\n");
      return false;
    }
  }

  // Field name: speed
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->speed.data) {
      rosidl_runtime_c__String__init(&ros_message->speed);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->speed,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'speed'\n");
      return false;
    }
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_Feedback__ros_msg_type * ros_message = static_cast<const _OverTheAir_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name feedback_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->feedback_msg.size + 1);
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name operate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operate.size + 1);
  // field.name now_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->now_version.size + 1);
  // field.name ota_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ota_version.size + 1);
  // field.name stage
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stage.size + 1);
  // field.name target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target.size + 1);
  // field.name target_stage
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_stage.size + 1);
  // field.name file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file.size + 1);
  // field.name size
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->size.size + 1);
  // field.name schedule
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->schedule.size + 1);
  // field.name time_remaining
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time_remaining.size + 1);
  // field.name progress
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->progress.size + 1);
  // field.name speed
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->speed.size + 1);
  // field.name describe
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->describe.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: feedback_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: operate
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: now_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: ota_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stage
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: target
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: target_stage
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: file
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: size
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: schedule
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: time_remaining
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: progress
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
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

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_Feedback = {
  "protocol::action",
  "OverTheAir_Feedback",
  _OverTheAir_Feedback__cdr_serialize,
  _OverTheAir_Feedback__cdr_deserialize,
  _OverTheAir_Feedback__get_serialized_size,
  _OverTheAir_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Feedback)() {
  return &_OverTheAir_Feedback__type_support;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "protocol/action/detail/over_the_air__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_protocol__action__OverTheAir_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__action__OverTheAir_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _OverTheAir_SendGoal_Request__ros_msg_type = protocol__action__OverTheAir_SendGoal_Request;

static bool _OverTheAir_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _OverTheAir_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OverTheAir_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_SendGoal_Request__ros_msg_type * ros_message = static_cast<_OverTheAir_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _OverTheAir_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_protocol__action__OverTheAir_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__action__OverTheAir_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_SendGoal_Request = {
  "protocol::action",
  "OverTheAir_SendGoal_Request",
  _OverTheAir_SendGoal_Request__cdr_serialize,
  _OverTheAir_SendGoal_Request__cdr_deserialize,
  _OverTheAir_SendGoal_Request__get_serialized_size,
  _OverTheAir_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_SendGoal_Request)() {
  return &_OverTheAir_SendGoal_Request__type_support;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _OverTheAir_SendGoal_Response__ros_msg_type = protocol__action__OverTheAir_SendGoal_Response;

static bool _OverTheAir_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _OverTheAir_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OverTheAir_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_SendGoal_Response__ros_msg_type * ros_message = static_cast<_OverTheAir_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _OverTheAir_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_SendGoal_Response = {
  "protocol::action",
  "OverTheAir_SendGoal_Response",
  _OverTheAir_SendGoal_Response__cdr_serialize,
  _OverTheAir_SendGoal_Response__cdr_deserialize,
  _OverTheAir_SendGoal_Response__get_serialized_size,
  _OverTheAir_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_SendGoal_Response)() {
  return &_OverTheAir_SendGoal_Response__type_support;
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
#include "protocol/action/over_the_air.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OverTheAir_SendGoal__callbacks = {
  "protocol::action",
  "OverTheAir_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_SendGoal_Response)(),
};

static rosidl_service_type_support_t OverTheAir_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OverTheAir_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_SendGoal)() {
  return &OverTheAir_SendGoal__handle;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _OverTheAir_GetResult_Request__ros_msg_type = protocol__action__OverTheAir_GetResult_Request;

static bool _OverTheAir_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_GetResult_Request__ros_msg_type * ros_message = static_cast<const _OverTheAir_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OverTheAir_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_GetResult_Request__ros_msg_type * ros_message = static_cast<_OverTheAir_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_GetResult_Request__ros_msg_type * ros_message = static_cast<const _OverTheAir_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_GetResult_Request = {
  "protocol::action",
  "OverTheAir_GetResult_Request",
  _OverTheAir_GetResult_Request__cdr_serialize,
  _OverTheAir_GetResult_Request__cdr_deserialize,
  _OverTheAir_GetResult_Request__get_serialized_size,
  _OverTheAir_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_GetResult_Request)() {
  return &_OverTheAir_GetResult_Request__type_support;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "protocol/action/detail/over_the_air__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_protocol__action__OverTheAir_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__action__OverTheAir_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Result)();


using _OverTheAir_GetResult_Response__ros_msg_type = protocol__action__OverTheAir_GetResult_Response;

static bool _OverTheAir_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_GetResult_Response__ros_msg_type * ros_message = static_cast<const _OverTheAir_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OverTheAir_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_GetResult_Response__ros_msg_type * ros_message = static_cast<_OverTheAir_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_GetResult_Response__ros_msg_type * ros_message = static_cast<const _OverTheAir_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_protocol__action__OverTheAir_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__action__OverTheAir_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_GetResult_Response = {
  "protocol::action",
  "OverTheAir_GetResult_Response",
  _OverTheAir_GetResult_Response__cdr_serialize,
  _OverTheAir_GetResult_Response__cdr_deserialize,
  _OverTheAir_GetResult_Response__get_serialized_size,
  _OverTheAir_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_GetResult_Response)() {
  return &_OverTheAir_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "protocol/action/over_the_air.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OverTheAir_GetResult__callbacks = {
  "protocol::action",
  "OverTheAir_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_GetResult_Response)(),
};

static rosidl_service_type_support_t OverTheAir_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OverTheAir_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_GetResult)() {
  return &OverTheAir_GetResult__handle;
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
// #include "protocol/action/detail/over_the_air__struct.h"
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"
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
// #include "protocol/action/detail/over_the_air__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_protocol__action__OverTheAir_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__action__OverTheAir_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _OverTheAir_FeedbackMessage__ros_msg_type = protocol__action__OverTheAir_FeedbackMessage;

static bool _OverTheAir_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OverTheAir_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _OverTheAir_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OverTheAir_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OverTheAir_FeedbackMessage__ros_msg_type * ros_message = static_cast<_OverTheAir_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__action__OverTheAir_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OverTheAir_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _OverTheAir_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_protocol__action__OverTheAir_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OverTheAir_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__action__OverTheAir_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__action__OverTheAir_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__action__OverTheAir_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OverTheAir_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__action__OverTheAir_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OverTheAir_FeedbackMessage = {
  "protocol::action",
  "OverTheAir_FeedbackMessage",
  _OverTheAir_FeedbackMessage__cdr_serialize,
  _OverTheAir_FeedbackMessage__cdr_deserialize,
  _OverTheAir_FeedbackMessage__get_serialized_size,
  _OverTheAir_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _OverTheAir_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OverTheAir_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, action, OverTheAir_FeedbackMessage)() {
  return &_OverTheAir_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
