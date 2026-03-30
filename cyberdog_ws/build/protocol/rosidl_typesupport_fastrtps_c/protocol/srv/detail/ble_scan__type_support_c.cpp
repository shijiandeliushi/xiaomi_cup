// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/ble_scan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/ble_scan__struct.h"
#include "protocol/srv/detail/ble_scan__functions.h"
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


using _BLEScan_Request__ros_msg_type = protocol__srv__BLEScan_Request;

static bool _BLEScan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BLEScan_Request__ros_msg_type * ros_message = static_cast<const _BLEScan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scan_seconds
  {
    cdr << ros_message->scan_seconds;
  }

  return true;
}

static bool _BLEScan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BLEScan_Request__ros_msg_type * ros_message = static_cast<_BLEScan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scan_seconds
  {
    cdr >> ros_message->scan_seconds;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__BLEScan_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BLEScan_Request__ros_msg_type * ros_message = static_cast<const _BLEScan_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name scan_seconds
  {
    size_t item_size = sizeof(ros_message->scan_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BLEScan_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BLEScan_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BLEScan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: scan_seconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BLEScan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BLEScan_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BLEScan_Request = {
  "protocol::srv",
  "BLEScan_Request",
  _BLEScan_Request__cdr_serialize,
  _BLEScan_Request__cdr_deserialize,
  _BLEScan_Request__get_serialized_size,
  _BLEScan_Request__max_serialized_size
};

static rosidl_message_type_support_t _BLEScan_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BLEScan_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEScan_Request)() {
  return &_BLEScan_Request__type_support;
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
// #include "protocol/srv/detail/ble_scan__struct.h"
// already included above
// #include "protocol/srv/detail/ble_scan__functions.h"
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

#include "protocol/msg/detail/ble_info__functions.h"  // device_info_list

// forward declare type support functions
size_t get_serialized_size_protocol__msg__BLEInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_protocol__msg__BLEInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo)();


using _BLEScan_Response__ros_msg_type = protocol__srv__BLEScan_Response;

static bool _BLEScan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BLEScan_Response__ros_msg_type * ros_message = static_cast<const _BLEScan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device_info_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo
      )()->data);
    size_t size = ros_message->device_info_list.size;
    auto array_ptr = ros_message->device_info_list.data;
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

static bool _BLEScan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BLEScan_Response__ros_msg_type * ros_message = static_cast<_BLEScan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: device_info_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, protocol, msg, BLEInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->device_info_list.data) {
      protocol__msg__BLEInfo__Sequence__fini(&ros_message->device_info_list);
    }
    if (!protocol__msg__BLEInfo__Sequence__init(&ros_message->device_info_list, size)) {
      fprintf(stderr, "failed to create array for field 'device_info_list'");
      return false;
    }
    auto array_ptr = ros_message->device_info_list.data;
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
size_t get_serialized_size_protocol__srv__BLEScan_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BLEScan_Response__ros_msg_type * ros_message = static_cast<const _BLEScan_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_info_list
  {
    size_t array_size = ros_message->device_info_list.size;
    auto array_ptr = ros_message->device_info_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_protocol__msg__BLEInfo(
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

static uint32_t _BLEScan_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__BLEScan_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__BLEScan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device_info_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_protocol__msg__BLEInfo(
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

static size_t _BLEScan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__BLEScan_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BLEScan_Response = {
  "protocol::srv",
  "BLEScan_Response",
  _BLEScan_Response__cdr_serialize,
  _BLEScan_Response__cdr_deserialize,
  _BLEScan_Response__get_serialized_size,
  _BLEScan_Response__max_serialized_size
};

static rosidl_message_type_support_t _BLEScan_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BLEScan_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEScan_Response)() {
  return &_BLEScan_Response__type_support;
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
#include "protocol/srv/ble_scan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BLEScan__callbacks = {
  "protocol::srv",
  "BLEScan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEScan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEScan_Response)(),
};

static rosidl_service_type_support_t BLEScan__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BLEScan__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, BLEScan)() {
  return &BLEScan__handle;
}

#if defined(__cplusplus)
}
#endif
