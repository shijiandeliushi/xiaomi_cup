// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/SensorOperation.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/sensor_operation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/srv/detail/sensor_operation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace protocol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::srv::SensorOperation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sensor_id
  cdr << ros_message.sensor_id;
  // Member: operation
  cdr << ros_message.operation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::SensorOperation_Request & ros_message)
{
  // Member: sensor_id
  cdr >> ros_message.sensor_id;

  // Member: operation
  cdr >> ros_message.operation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::SensorOperation_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sensor_id
  {
    size_t item_size = sizeof(ros_message.sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operation
  {
    size_t item_size = sizeof(ros_message.operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_SensorOperation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sensor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: operation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SensorOperation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::SensorOperation_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorOperation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::SensorOperation_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorOperation_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::SensorOperation_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorOperation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SensorOperation_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SensorOperation_Request__callbacks = {
  "protocol::srv",
  "SensorOperation_Request",
  _SensorOperation_Request__cdr_serialize,
  _SensorOperation_Request__cdr_deserialize,
  _SensorOperation_Request__get_serialized_size,
  _SensorOperation_Request__max_serialized_size
};

static rosidl_message_type_support_t _SensorOperation_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorOperation_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_protocol
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::SensorOperation_Request>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, SensorOperation_Request)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace protocol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::srv::SensorOperation_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: code
  cdr << ros_message.code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::SensorOperation_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: code
  cdr >> ros_message.code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::SensorOperation_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: code
  {
    size_t item_size = sizeof(ros_message.code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_SensorOperation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SensorOperation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::SensorOperation_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorOperation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::SensorOperation_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorOperation_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::SensorOperation_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorOperation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SensorOperation_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SensorOperation_Response__callbacks = {
  "protocol::srv",
  "SensorOperation_Response",
  _SensorOperation_Response__cdr_serialize,
  _SensorOperation_Response__cdr_deserialize,
  _SensorOperation_Response__get_serialized_size,
  _SensorOperation_Response__max_serialized_size
};

static rosidl_message_type_support_t _SensorOperation_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorOperation_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_protocol
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::SensorOperation_Response>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, SensorOperation_Response)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace protocol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SensorOperation__callbacks = {
  "protocol::srv",
  "SensorOperation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, SensorOperation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, SensorOperation_Response)(),
};

static rosidl_service_type_support_t _SensorOperation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorOperation__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace protocol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_protocol
const rosidl_service_type_support_t *
get_service_type_support_handle<protocol::srv::SensorOperation>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, SensorOperation)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_SensorOperation__handle;
}

#ifdef __cplusplus
}
#endif
