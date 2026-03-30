// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/algo_manager__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/srv/detail/algo_manager__struct.hpp"

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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const protocol::msg::AlgoList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::AlgoList &);
size_t get_serialized_size(
  const protocol::msg::AlgoList &,
  size_t current_alignment);
size_t
max_serialized_size_AlgoList(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace protocol

namespace protocol
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const protocol::msg::AlgoList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  protocol::msg::AlgoList &);
size_t get_serialized_size(
  const protocol::msg::AlgoList &,
  size_t current_alignment);
size_t
max_serialized_size_AlgoList(
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
  const protocol::srv::AlgoManager_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: algo_enable
  {
    size_t size = ros_message.algo_enable.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.algo_enable[i],
        cdr);
    }
  }
  // Member: algo_disable
  {
    size_t size = ros_message.algo_disable.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      protocol::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.algo_disable[i],
        cdr);
    }
  }
  // Member: open_age
  cdr << (ros_message.open_age ? true : false);
  // Member: open_emotion
  cdr << (ros_message.open_emotion ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::AlgoManager_Request & ros_message)
{
  // Member: algo_enable
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.algo_enable.resize(size);
    for (size_t i = 0; i < size; i++) {
      protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.algo_enable[i]);
    }
  }

  // Member: algo_disable
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.algo_disable.resize(size);
    for (size_t i = 0; i < size; i++) {
      protocol::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.algo_disable[i]);
    }
  }

  // Member: open_age
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.open_age = tmp ? true : false;
  }

  // Member: open_emotion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.open_emotion = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::AlgoManager_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: algo_enable
  {
    size_t array_size = ros_message.algo_enable.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.algo_enable[index], current_alignment);
    }
  }
  // Member: algo_disable
  {
    size_t array_size = ros_message.algo_disable.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.algo_disable[index], current_alignment);
    }
  }
  // Member: open_age
  {
    size_t item_size = sizeof(ros_message.open_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: open_emotion
  {
    size_t item_size = sizeof(ros_message.open_emotion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_AlgoManager_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: algo_enable
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_AlgoList(
        full_bounded, current_alignment);
    }
  }

  // Member: algo_disable
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        protocol::msg::typesupport_fastrtps_cpp::max_serialized_size_AlgoList(
        full_bounded, current_alignment);
    }
  }

  // Member: open_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: open_emotion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AlgoManager_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::AlgoManager_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AlgoManager_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::AlgoManager_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AlgoManager_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::AlgoManager_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AlgoManager_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AlgoManager_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AlgoManager_Request__callbacks = {
  "protocol::srv",
  "AlgoManager_Request",
  _AlgoManager_Request__cdr_serialize,
  _AlgoManager_Request__cdr_deserialize,
  _AlgoManager_Request__get_serialized_size,
  _AlgoManager_Request__max_serialized_size
};

static rosidl_message_type_support_t _AlgoManager_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlgoManager_Request__callbacks,
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
get_message_type_support_handle<protocol::srv::AlgoManager_Request>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, AlgoManager_Request)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager_Request__handle;
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
  const protocol::srv::AlgoManager_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result_enable
  cdr << ros_message.result_enable;
  // Member: result_disable
  cdr << ros_message.result_disable;
  // Member: code
  cdr << ros_message.code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::srv::AlgoManager_Response & ros_message)
{
  // Member: result_enable
  cdr >> ros_message.result_enable;

  // Member: result_disable
  cdr >> ros_message.result_disable;

  // Member: code
  cdr >> ros_message.code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::srv::AlgoManager_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result_enable
  {
    size_t item_size = sizeof(ros_message.result_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result_disable
  {
    size_t item_size = sizeof(ros_message.result_disable);
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
max_serialized_size_AlgoManager_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result_disable
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

static bool _AlgoManager_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::srv::AlgoManager_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AlgoManager_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::srv::AlgoManager_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AlgoManager_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::srv::AlgoManager_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AlgoManager_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AlgoManager_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AlgoManager_Response__callbacks = {
  "protocol::srv",
  "AlgoManager_Response",
  _AlgoManager_Response__cdr_serialize,
  _AlgoManager_Response__cdr_deserialize,
  _AlgoManager_Response__get_serialized_size,
  _AlgoManager_Response__max_serialized_size
};

static rosidl_message_type_support_t _AlgoManager_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlgoManager_Response__callbacks,
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
get_message_type_support_handle<protocol::srv::AlgoManager_Response>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, AlgoManager_Response)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager_Response__handle;
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

static service_type_support_callbacks_t _AlgoManager__callbacks = {
  "protocol::srv",
  "AlgoManager",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, AlgoManager_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, AlgoManager_Response)(),
};

static rosidl_service_type_support_t _AlgoManager__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlgoManager__callbacks,
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
get_service_type_support_handle<protocol::srv::AlgoManager>()
{
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, srv, AlgoManager)() {
  return &protocol::srv::typesupport_fastrtps_cpp::_AlgoManager__handle;
}

#ifdef __cplusplus
}
#endif
