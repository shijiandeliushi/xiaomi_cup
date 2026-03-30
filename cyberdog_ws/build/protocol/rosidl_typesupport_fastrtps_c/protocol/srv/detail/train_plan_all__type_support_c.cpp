// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/train_plan_all__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/train_plan_all__struct.h"
#include "protocol/srv/detail/train_plan_all__functions.h"
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


// forward declare type support functions


using _TrainPlanAll_Request__ros_msg_type = protocol__srv__TrainPlanAll_Request;

static bool _TrainPlanAll_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrainPlanAll_Request__ros_msg_type * ros_message = static_cast<const _TrainPlanAll_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _TrainPlanAll_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrainPlanAll_Request__ros_msg_type * ros_message = static_cast<_TrainPlanAll_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__TrainPlanAll_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrainPlanAll_Request__ros_msg_type * ros_message = static_cast<const _TrainPlanAll_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrainPlanAll_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__TrainPlanAll_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__TrainPlanAll_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TrainPlanAll_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__TrainPlanAll_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrainPlanAll_Request = {
  "protocol::srv",
  "TrainPlanAll_Request",
  _TrainPlanAll_Request__cdr_serialize,
  _TrainPlanAll_Request__cdr_deserialize,
  _TrainPlanAll_Request__get_serialized_size,
  _TrainPlanAll_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrainPlanAll_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrainPlanAll_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, TrainPlanAll_Request)() {
  return &_TrainPlanAll_Request__type_support;
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
// #include "protocol/srv/detail/train_plan_all__struct.h"
// already included above
// #include "protocol/srv/detail/train_plan_all__functions.h"
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

#include "protocol/msg/detail/train_plan__functions.h"  // training_set

// forward declare type support functions
size_t get_serialized_size_protocol__msg__TrainPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__TrainPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, TrainPlan)();


using _TrainPlanAll_Response__ros_msg_type = protocol__srv__TrainPlanAll_Response;

static bool _TrainPlanAll_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrainPlanAll_Response__ros_msg_type * ros_message = static_cast<const _TrainPlanAll_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: training_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, TrainPlan
      )()->data);
    size_t size = ros_message->training_set.size;
    auto array_ptr = ros_message->training_set.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _TrainPlanAll_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrainPlanAll_Response__ros_msg_type * ros_message = static_cast<_TrainPlanAll_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: training_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, TrainPlan
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->training_set.data) {
      protocol__msg__TrainPlan__Sequence__fini(&ros_message->training_set);
    }
    if (!protocol__msg__TrainPlan__Sequence__init(&ros_message->training_set, size)) {
      fprintf(stderr, "failed to create array for field 'training_set'");
      return false;
    }
    auto array_ptr = ros_message->training_set.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__TrainPlanAll_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrainPlanAll_Response__ros_msg_type * ros_message = static_cast<const _TrainPlanAll_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name training_set
  {
    size_t array_size = ros_message->training_set.size;
    auto array_ptr = ros_message->training_set.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__TrainPlan(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrainPlanAll_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__TrainPlanAll_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__TrainPlanAll_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: training_set
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__TrainPlan(
        full_bounded, current_alignment);
    }
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrainPlanAll_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__TrainPlanAll_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrainPlanAll_Response = {
  "protocol::srv",
  "TrainPlanAll_Response",
  _TrainPlanAll_Response__cdr_serialize,
  _TrainPlanAll_Response__cdr_deserialize,
  _TrainPlanAll_Response__get_serialized_size,
  _TrainPlanAll_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrainPlanAll_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrainPlanAll_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, TrainPlanAll_Response)() {
  return &_TrainPlanAll_Response__type_support;
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
#include "protocol/srv/train_plan_all.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TrainPlanAll__callbacks = {
  "protocol::srv",
  "TrainPlanAll",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, TrainPlanAll_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, TrainPlanAll_Response)(),
};

static rosidl_service_type_support_t TrainPlanAll__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TrainPlanAll__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, TrainPlanAll)() {
  return &TrainPlanAll__handle;
}

#if defined(__cplusplus)
}
#endif
