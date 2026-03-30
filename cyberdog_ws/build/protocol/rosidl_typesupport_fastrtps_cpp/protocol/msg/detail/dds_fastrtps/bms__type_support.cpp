// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/bms__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::msg::Bms & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: batt_volt
  cdr << ros_message.batt_volt;
  // Member: batt_curr
  cdr << ros_message.batt_curr;
  // Member: batt_soc
  cdr << ros_message.batt_soc;
  // Member: batt_temp
  cdr << ros_message.batt_temp;
  // Member: batt_st
  cdr << ros_message.batt_st;
  // Member: key_val
  cdr << ros_message.key_val;
  // Member: disable_charge
  cdr << ros_message.disable_charge;
  // Member: power_supply
  cdr << ros_message.power_supply;
  // Member: buzze
  cdr << ros_message.buzze;
  // Member: status
  cdr << ros_message.status;
  // Member: batt_health
  cdr << ros_message.batt_health;
  // Member: batt_loop_number
  cdr << ros_message.batt_loop_number;
  // Member: powerboard_status
  cdr << ros_message.powerboard_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::Bms & ros_message)
{
  // Member: batt_volt
  cdr >> ros_message.batt_volt;

  // Member: batt_curr
  cdr >> ros_message.batt_curr;

  // Member: batt_soc
  cdr >> ros_message.batt_soc;

  // Member: batt_temp
  cdr >> ros_message.batt_temp;

  // Member: batt_st
  cdr >> ros_message.batt_st;

  // Member: key_val
  cdr >> ros_message.key_val;

  // Member: disable_charge
  cdr >> ros_message.disable_charge;

  // Member: power_supply
  cdr >> ros_message.power_supply;

  // Member: buzze
  cdr >> ros_message.buzze;

  // Member: status
  cdr >> ros_message.status;

  // Member: batt_health
  cdr >> ros_message.batt_health;

  // Member: batt_loop_number
  cdr >> ros_message.batt_loop_number;

  // Member: powerboard_status
  cdr >> ros_message.powerboard_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::Bms & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: batt_volt
  {
    size_t item_size = sizeof(ros_message.batt_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_curr
  {
    size_t item_size = sizeof(ros_message.batt_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_soc
  {
    size_t item_size = sizeof(ros_message.batt_soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_temp
  {
    size_t item_size = sizeof(ros_message.batt_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_st
  {
    size_t item_size = sizeof(ros_message.batt_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_val
  {
    size_t item_size = sizeof(ros_message.key_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disable_charge
  {
    size_t item_size = sizeof(ros_message.disable_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_supply
  {
    size_t item_size = sizeof(ros_message.power_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: buzze
  {
    size_t item_size = sizeof(ros_message.buzze);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_health
  {
    size_t item_size = sizeof(ros_message.batt_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_loop_number
  {
    size_t item_size = sizeof(ros_message.batt_loop_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: powerboard_status
  {
    size_t item_size = sizeof(ros_message.powerboard_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_Bms(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: batt_volt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: batt_curr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: batt_soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: batt_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: batt_st
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disable_charge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: buzze
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: batt_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: batt_loop_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: powerboard_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Bms__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::Bms *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bms__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::Bms *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bms__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::Bms *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bms__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Bms(full_bounded, 0);
}

static message_type_support_callbacks_t _Bms__callbacks = {
  "protocol::msg",
  "Bms",
  _Bms__cdr_serialize,
  _Bms__cdr_deserialize,
  _Bms__get_serialized_size,
  _Bms__max_serialized_size
};

static rosidl_message_type_support_t _Bms__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bms__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace protocol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_protocol
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::msg::Bms>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_Bms__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, Bms)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_Bms__handle;
}

#ifdef __cplusplus
}
#endif
