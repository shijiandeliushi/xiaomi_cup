// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/TrainPlan.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/train_plan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/srv/detail/train_plan__struct.hpp"

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
  const protocol::srv::TrainPlan_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::TrainPlan_Request & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::TrainPlan_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);
  // Member: value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.value.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_TrainPlan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
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

static bool _TrainPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::TrainPlan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrainPlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::TrainPlan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrainPlan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::TrainPlan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrainPlan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrainPlan_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TrainPlan_Request__callbacks = {
  "protocol::srv",
  "TrainPlan_Request",
  _TrainPlan_Request__cdr_serialize,
  _TrainPlan_Request__cdr_deserialize,
  _TrainPlan_Request__get_serialized_size,
  _TrainPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrainPlan_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrainPlan_Request__callbacks,
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
get_message_type_support_handle<protocol::srv::TrainPlan_Request>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, TrainPlan_Request)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan_Request__handle;
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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const protocol::msg::TrainPlan &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::TrainPlan &);
size_t get_serialized_size(
  const protocol::msg::TrainPlan &,
  size_t current_alignment);
size_t
max_serialized_size_TrainPlan(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::srv::TrainPlan_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: training
  protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.training,
    cdr);
  // Member: code
  cdr << ros_message.code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::TrainPlan_Response & ros_message)
{
  // Member: training
  protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.training);

  // Member: code
  cdr >> ros_message.code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::TrainPlan_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: training

  current_alignment +=
    protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.training, current_alignment);
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
max_serialized_size_TrainPlan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: training
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_TrainPlan(
        full_bounded, current_alignment);
    }
  }

  // Member: code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TrainPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::TrainPlan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrainPlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::TrainPlan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrainPlan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::TrainPlan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrainPlan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrainPlan_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TrainPlan_Response__callbacks = {
  "protocol::srv",
  "TrainPlan_Response",
  _TrainPlan_Response__cdr_serialize,
  _TrainPlan_Response__cdr_deserialize,
  _TrainPlan_Response__get_serialized_size,
  _TrainPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrainPlan_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrainPlan_Response__callbacks,
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
get_message_type_support_handle<protocol::srv::TrainPlan_Response>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, TrainPlan_Response)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan_Response__handle;
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

static service_type_support_callbacks_t _TrainPlan__callbacks = {
  "protocol::srv",
  "TrainPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, TrainPlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, TrainPlan_Response)(),
};

static rosidl_service_type_support_t _TrainPlan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrainPlan__callbacks,
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
get_service_type_support_handle<protocol::srv::TrainPlan>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, TrainPlan)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_TrainPlan__handle;
}

#ifdef __cplusplus
}
#endif
