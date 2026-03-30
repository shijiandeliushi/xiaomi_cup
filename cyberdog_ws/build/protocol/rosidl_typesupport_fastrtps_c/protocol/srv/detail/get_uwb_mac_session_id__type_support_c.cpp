// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:srv/GetUWBMacSessionID.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/get_uwb_mac_session_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/srv/detail/get_uwb_mac_session_id__struct.h"
#include "protocol/srv/detail/get_uwb_mac_session_id__functions.h"
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


using _GetUWBMacSessionID_Request__ros_msg_type = protocol__srv__GetUWBMacSessionID_Request;

static bool _GetUWBMacSessionID_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetUWBMacSessionID_Request__ros_msg_type * ros_message = static_cast<const _GetUWBMacSessionID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetUWBMacSessionID_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetUWBMacSessionID_Request__ros_msg_type * ros_message = static_cast<_GetUWBMacSessionID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__GetUWBMacSessionID_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetUWBMacSessionID_Request__ros_msg_type * ros_message = static_cast<const _GetUWBMacSessionID_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetUWBMacSessionID_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__GetUWBMacSessionID_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__GetUWBMacSessionID_Request(
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

static size_t _GetUWBMacSessionID_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__GetUWBMacSessionID_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetUWBMacSessionID_Request = {
  "protocol::srv",
  "GetUWBMacSessionID_Request",
  _GetUWBMacSessionID_Request__cdr_serialize,
  _GetUWBMacSessionID_Request__cdr_deserialize,
  _GetUWBMacSessionID_Request__get_serialized_size,
  _GetUWBMacSessionID_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetUWBMacSessionID_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetUWBMacSessionID_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetUWBMacSessionID_Request)() {
  return &_GetUWBMacSessionID_Request__type_support;
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
// #include "protocol/srv/detail/get_uwb_mac_session_id__struct.h"
// already included above
// #include "protocol/srv/detail/get_uwb_mac_session_id__functions.h"
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


using _GetUWBMacSessionID_Response__ros_msg_type = protocol__srv__GetUWBMacSessionID_Response;

static bool _GetUWBMacSessionID_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetUWBMacSessionID_Response__ros_msg_type * ros_message = static_cast<const _GetUWBMacSessionID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: session_id
  {
    cdr << ros_message->session_id;
  }

  // Field name: master
  {
    cdr << ros_message->master;
  }

  // Field name: slave1
  {
    cdr << ros_message->slave1;
  }

  // Field name: slave2
  {
    cdr << ros_message->slave2;
  }

  // Field name: slave3
  {
    cdr << ros_message->slave3;
  }

  // Field name: slave4
  {
    cdr << ros_message->slave4;
  }

  // Field name: code
  {
    cdr << ros_message->code;
  }

  return true;
}

static bool _GetUWBMacSessionID_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetUWBMacSessionID_Response__ros_msg_type * ros_message = static_cast<_GetUWBMacSessionID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: session_id
  {
    cdr >> ros_message->session_id;
  }

  // Field name: master
  {
    cdr >> ros_message->master;
  }

  // Field name: slave1
  {
    cdr >> ros_message->slave1;
  }

  // Field name: slave2
  {
    cdr >> ros_message->slave2;
  }

  // Field name: slave3
  {
    cdr >> ros_message->slave3;
  }

  // Field name: slave4
  {
    cdr >> ros_message->slave4;
  }

  // Field name: code
  {
    cdr >> ros_message->code;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__srv__GetUWBMacSessionID_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetUWBMacSessionID_Response__ros_msg_type * ros_message = static_cast<const _GetUWBMacSessionID_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name session_id
  {
    size_t item_size = sizeof(ros_message->session_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name master
  {
    size_t item_size = sizeof(ros_message->master);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave1
  {
    size_t item_size = sizeof(ros_message->slave1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave2
  {
    size_t item_size = sizeof(ros_message->slave2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave3
  {
    size_t item_size = sizeof(ros_message->slave3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave4
  {
    size_t item_size = sizeof(ros_message->slave4);
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

static uint32_t _GetUWBMacSessionID_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__srv__GetUWBMacSessionID_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__srv__GetUWBMacSessionID_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: session_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: master
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: slave1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: slave2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: slave3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: slave4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetUWBMacSessionID_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__srv__GetUWBMacSessionID_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetUWBMacSessionID_Response = {
  "protocol::srv",
  "GetUWBMacSessionID_Response",
  _GetUWBMacSessionID_Response__cdr_serialize,
  _GetUWBMacSessionID_Response__cdr_deserialize,
  _GetUWBMacSessionID_Response__get_serialized_size,
  _GetUWBMacSessionID_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetUWBMacSessionID_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetUWBMacSessionID_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetUWBMacSessionID_Response)() {
  return &_GetUWBMacSessionID_Response__type_support;
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
#include "protocol/srv/get_uwb_mac_session_id.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetUWBMacSessionID__callbacks = {
  "protocol::srv",
  "GetUWBMacSessionID",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetUWBMacSessionID_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetUWBMacSessionID_Response)(),
};

static rosidl_service_type_support_t GetUWBMacSessionID__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetUWBMacSessionID__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, srv, GetUWBMacSessionID)() {
  return &GetUWBMacSessionID__handle;
}

#if defined(__cplusplus)
}
#endif
