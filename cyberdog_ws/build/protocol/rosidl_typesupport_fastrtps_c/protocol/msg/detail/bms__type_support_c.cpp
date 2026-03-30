// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/bms__struct.h"
#include "protocol/msg/detail/bms__functions.h"
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


using _Bms__ros_msg_type = protocol__msg__Bms;

static bool _Bms__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Bms__ros_msg_type * ros_message = static_cast<const _Bms__ros_msg_type *>(untyped_ros_message);
  // Field name: batt_volt
  {
    cdr << ros_message->batt_volt;
  }

  // Field name: batt_curr
  {
    cdr << ros_message->batt_curr;
  }

  // Field name: batt_soc
  {
    cdr << ros_message->batt_soc;
  }

  // Field name: batt_temp
  {
    cdr << ros_message->batt_temp;
  }

  // Field name: batt_st
  {
    cdr << ros_message->batt_st;
  }

  // Field name: key_val
  {
    cdr << ros_message->key_val;
  }

  // Field name: disable_charge
  {
    cdr << ros_message->disable_charge;
  }

  // Field name: power_supply
  {
    cdr << ros_message->power_supply;
  }

  // Field name: buzze
  {
    cdr << ros_message->buzze;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: batt_health
  {
    cdr << ros_message->batt_health;
  }

  // Field name: batt_loop_number
  {
    cdr << ros_message->batt_loop_number;
  }

  // Field name: powerboard_status
  {
    cdr << ros_message->powerboard_status;
  }

  return true;
}

static bool _Bms__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Bms__ros_msg_type * ros_message = static_cast<_Bms__ros_msg_type *>(untyped_ros_message);
  // Field name: batt_volt
  {
    cdr >> ros_message->batt_volt;
  }

  // Field name: batt_curr
  {
    cdr >> ros_message->batt_curr;
  }

  // Field name: batt_soc
  {
    cdr >> ros_message->batt_soc;
  }

  // Field name: batt_temp
  {
    cdr >> ros_message->batt_temp;
  }

  // Field name: batt_st
  {
    cdr >> ros_message->batt_st;
  }

  // Field name: key_val
  {
    cdr >> ros_message->key_val;
  }

  // Field name: disable_charge
  {
    cdr >> ros_message->disable_charge;
  }

  // Field name: power_supply
  {
    cdr >> ros_message->power_supply;
  }

  // Field name: buzze
  {
    cdr >> ros_message->buzze;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: batt_health
  {
    cdr >> ros_message->batt_health;
  }

  // Field name: batt_loop_number
  {
    cdr >> ros_message->batt_loop_number;
  }

  // Field name: powerboard_status
  {
    cdr >> ros_message->powerboard_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__Bms(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bms__ros_msg_type * ros_message = static_cast<const _Bms__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name batt_volt
  {
    size_t item_size = sizeof(ros_message->batt_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_curr
  {
    size_t item_size = sizeof(ros_message->batt_curr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_soc
  {
    size_t item_size = sizeof(ros_message->batt_soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_temp
  {
    size_t item_size = sizeof(ros_message->batt_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_st
  {
    size_t item_size = sizeof(ros_message->batt_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_val
  {
    size_t item_size = sizeof(ros_message->key_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disable_charge
  {
    size_t item_size = sizeof(ros_message->disable_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply
  {
    size_t item_size = sizeof(ros_message->power_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buzze
  {
    size_t item_size = sizeof(ros_message->buzze);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_health
  {
    size_t item_size = sizeof(ros_message->batt_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_loop_number
  {
    size_t item_size = sizeof(ros_message->batt_loop_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name powerboard_status
  {
    size_t item_size = sizeof(ros_message->powerboard_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bms__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__Bms(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__Bms(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: batt_volt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: batt_curr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: batt_soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: batt_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: batt_st
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disable_charge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: buzze
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: batt_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: batt_loop_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: powerboard_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Bms__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__Bms(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Bms = {
  "protocol::msg",
  "Bms",
  _Bms__cdr_serialize,
  _Bms__cdr_deserialize,
  _Bms__get_serialized_size,
  _Bms__max_serialized_size
};

static rosidl_message_type_support_t _Bms__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Bms,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, Bms)() {
  return &_Bms__type_support;
}

#if defined(__cplusplus)
}
#endif
