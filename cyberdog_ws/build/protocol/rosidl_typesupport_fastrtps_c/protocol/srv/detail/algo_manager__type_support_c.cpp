// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/algo_manager__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/algo_manager__struct.h"
#include "protocol/srv/detail/algo_manager__functions.h"
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

#include "protocol/msg/detail/algo_list__functions.h"  // algo_disable, algo_enable

// forward declare type support functions
size_t get_serialized_size_protocol__msg__AlgoList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__AlgoList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, AlgoList)();


using _AlgoManager_Request__ros_msg_type = protocol__srv__AlgoManager_Request;

static bool _AlgoManager_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AlgoManager_Request__ros_msg_type * ros_message = static_cast<const _AlgoManager_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: algo_enable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AlgoList
      )()->data);
    size_t size = ros_message->algo_enable.size;
    auto array_ptr = ros_message->algo_enable.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: algo_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AlgoList
      )()->data);
    size_t size = ros_message->algo_disable.size;
    auto array_ptr = ros_message->algo_disable.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: open_age
  {
    cdr << (ros_message->open_age ? true : false);
  }

  // Field name: open_emotion
  {
    cdr << (ros_message->open_emotion ? true : false);
  }

  return true;
}

static bool _AlgoManager_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AlgoManager_Request__ros_msg_type * ros_message = static_cast<_AlgoManager_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: algo_enable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AlgoList
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->algo_enable.data) {
      protocol__msg__AlgoList__Sequence__fini(&ros_message->algo_enable);
    }
    if (!protocol__msg__AlgoList__Sequence__init(&ros_message->algo_enable, size)) {
      fprintf(stderr, "failed to create array for field 'algo_enable'");
      return false;
    }
    auto array_ptr = ros_message->algo_enable.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: algo_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, AlgoList
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->algo_disable.data) {
      protocol__msg__AlgoList__Sequence__fini(&ros_message->algo_disable);
    }
    if (!protocol__msg__AlgoList__Sequence__init(&ros_message->algo_disable, size)) {
      fprintf(stderr, "failed to create array for field 'algo_disable'");
      return false;
    }
    auto array_ptr = ros_message->algo_disable.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: open_age
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->open_age = tmp ? true : false;
  }

  // Field name: open_emotion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->open_emotion = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AlgoManager_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AlgoManager_Request__ros_msg_type * ros_message = static_cast<const _AlgoManager_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name algo_enable
  {
    size_t array_size = ros_message->algo_enable.size;
    auto array_ptr = ros_message->algo_enable.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__AlgoList(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name algo_disable
  {
    size_t array_size = ros_message->algo_disable.size;
    auto array_ptr = ros_message->algo_disable.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__AlgoList(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name open_age
  {
    size_t item_size = sizeof(ros_message->open_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name open_emotion
  {
    size_t item_size = sizeof(ros_message->open_emotion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AlgoManager_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AlgoManager_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AlgoManager_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: algo_enable
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__AlgoList(
        full_bounded, current_alignment);
    }
  }
  // member: algo_disable
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__AlgoList(
        full_bounded, current_alignment);
    }
  }
  // member: open_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: open_emotion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AlgoManager_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AlgoManager_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AlgoManager_Request = {
  "protocol::srv",
  "AlgoManager_Request",
  _AlgoManager_Request__cdr_serialize,
  _AlgoManager_Request__cdr_deserialize,
  _AlgoManager_Request__get_serialized_size,
  _AlgoManager_Request__max_serialized_size
};

static rosidl_message_type_support_t _AlgoManager_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AlgoManager_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AlgoManager_Request)() {
  return &_AlgoManager_Request__type_support;
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
// #include "protocol/srv/detail/algo_manager__struct.h"
// already included above
// #include "protocol/srv/detail/algo_manager__functions.h"
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


// forward declare type support functions


using _AlgoManager_Response__ros_msg_type = protocol__srv__AlgoManager_Response;

static bool _AlgoManager_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AlgoManager_Response__ros_msg_type * ros_message = static_cast<const _AlgoManager_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_enable
  {
    cdr << ros_message->result_enable;
  }

  // Field name: result_disable
  {
    cdr << ros_message->result_disable;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _AlgoManager_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AlgoManager_Response__ros_msg_type * ros_message = static_cast<_AlgoManager_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_enable
  {
    cdr >> ros_message->result_enable;
  }

  // Field name: result_disable
  {
    cdr >> ros_message->result_disable;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__AlgoManager_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AlgoManager_Response__ros_msg_type * ros_message = static_cast<const _AlgoManager_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result_enable
  {
    size_t item_size = sizeof(ros_message->result_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result_disable
  {
    size_t item_size = sizeof(ros_message->result_disable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name code
  {
    size_t item_size = sizeof(ros_message->code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AlgoManager_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__AlgoManager_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__AlgoManager_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result_disable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AlgoManager_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__AlgoManager_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AlgoManager_Response = {
  "protocol::srv",
  "AlgoManager_Response",
  _AlgoManager_Response__cdr_serialize,
  _AlgoManager_Response__cdr_deserialize,
  _AlgoManager_Response__get_serialized_size,
  _AlgoManager_Response__max_serialized_size
};

static rosidl_message_type_support_t _AlgoManager_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AlgoManager_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AlgoManager_Response)() {
  return &_AlgoManager_Response__type_support;
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
#include "protocol/srv/algo_manager.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AlgoManager__callbacks = {
  "protocol::srv",
  "AlgoManager",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AlgoManager_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AlgoManager_Response)(),
};

static rosidl_service_type_support_t AlgoManager__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AlgoManager__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, AlgoManager)() {
  return &AlgoManager__handle;
}

#if defined(__cplusplus)
}
#endif
