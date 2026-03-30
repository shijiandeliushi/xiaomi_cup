// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/BLEConnect.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/ble_connect__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/ble_connect__struct.h"
#include "protocol/srv/detail/ble_connect__functions.h"
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

#include "protocol/msg/detail/ble_info__functions.h"  // selected_device

// forward declare type support functions
size_t get_serialized_size_protocol__msg__BLEInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__BLEInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo)();


using _BLEConnect_Request__ros_msg_type = protocol__srv__BLEConnect_Request;

static bool _BLEConnect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BLEConnect_Request__ros_msg_type * ros_message = static_cast<const _BLEConnect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selected_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->selected_device, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BLEConnect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BLEConnect_Request__ros_msg_type * ros_message = static_cast<_BLEConnect_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: selected_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->selected_device))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__BLEConnect_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BLEConnect_Request__ros_msg_type * ros_message = static_cast<const _BLEConnect_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name selected_device

  current_alignment += get_serialized_size_protocol__msg__BLEInfo(
    &(ros_message->selected_device), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BLEConnect_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BLEConnect_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BLEConnect_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: selected_device
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__BLEInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BLEConnect_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BLEConnect_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BLEConnect_Request = {
  "protocol::srv",
  "BLEConnect_Request",
  _BLEConnect_Request__cdr_serialize,
  _BLEConnect_Request__cdr_deserialize,
  _BLEConnect_Request__get_serialized_size,
  _BLEConnect_Request__max_serialized_size
};

static rosidl_message_type_support_t _BLEConnect_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BLEConnect_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEConnect_Request)() {
  return &_BLEConnect_Request__type_support;
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
// #include "protocol/srv/detail/ble_connect__struct.h"
// already included above
// #include "protocol/srv/detail/ble_connect__functions.h"
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


using _BLEConnect_Response__ros_msg_type = protocol__srv__BLEConnect_Response;

static bool _BLEConnect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BLEConnect_Response__ros_msg_type * ros_message = static_cast<const _BLEConnect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _BLEConnect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BLEConnect_Response__ros_msg_type * ros_message = static_cast<_BLEConnect_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__BLEConnect_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BLEConnect_Response__ros_msg_type * ros_message = static_cast<const _BLEConnect_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
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

static uint32_t _BLEConnect_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BLEConnect_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BLEConnect_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
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

static size_t _BLEConnect_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BLEConnect_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BLEConnect_Response = {
  "protocol::srv",
  "BLEConnect_Response",
  _BLEConnect_Response__cdr_serialize,
  _BLEConnect_Response__cdr_deserialize,
  _BLEConnect_Response__get_serialized_size,
  _BLEConnect_Response__max_serialized_size
};

static rosidl_message_type_support_t _BLEConnect_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BLEConnect_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEConnect_Response)() {
  return &_BLEConnect_Response__type_support;
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
#include "protocol/srv/ble_connect.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BLEConnect__callbacks = {
  "protocol::srv",
  "BLEConnect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEConnect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEConnect_Response)(),
};

static rosidl_service_type_support_t BLEConnect__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BLEConnect__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEConnect)() {
  return &BLEConnect__handle;
}

#if defined(__cplusplus)
}
#endif
