// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/bms_status__struct.h"
#include "protocol/msg/detail/bms_status__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_protocol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _BmsStatus__ros_msg_type = protocol__msg__BmsStatus;

static bool _BmsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BmsStatus__ros_msg_type * ros_message = static_cast<const _BmsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

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

  // Field name: power_adapter_temp
  {
    cdr << ros_message->power_adapter_temp;
  }

  // Field name: wireless_charging_temp
  {
    cdr << ros_message->wireless_charging_temp;
  }

  // Field name: batt_st
  {
    cdr << ros_message->batt_st;
  }

  // Field name: bms_state_one
  {
    cdr << ros_message->bms_state_one;
  }

  // Field name: bms_state_two
  {
    cdr << ros_message->bms_state_two;
  }

  // Field name: batt_health
  {
    cdr << ros_message->batt_health;
  }

  // Field name: batt_loop_number
  {
    cdr << ros_message->batt_loop_number;
  }

  // Field name: power_normal
  {
    cdr << (ros_message->power_normal ? true : false);
  }

  // Field name: power_wired_charging
  {
    cdr << (ros_message->power_wired_charging ? true : false);
  }

  // Field name: power_finished_charging
  {
    cdr << (ros_message->power_finished_charging ? true : false);
  }

  // Field name: power_motor_shutdown
  {
    cdr << (ros_message->power_motor_shutdown ? true : false);
  }

  // Field name: power_soft_shutdown
  {
    cdr << (ros_message->power_soft_shutdown ? true : false);
  }

  // Field name: power_wp_place
  {
    cdr << (ros_message->power_wp_place ? true : false);
  }

  // Field name: power_wp_charging
  {
    cdr << (ros_message->power_wp_charging ? true : false);
  }

  // Field name: power_expower_supply
  {
    cdr << (ros_message->power_expower_supply ? true : false);
  }

  // Field name: charge_over_current
  {
    cdr << (ros_message->charge_over_current ? true : false);
  }

  // Field name: discharge_over_current
  {
    cdr << (ros_message->discharge_over_current ? true : false);
  }

  // Field name: cell_over_voltage
  {
    cdr << (ros_message->cell_over_voltage ? true : false);
  }

  // Field name: cell_under_voltage
  {
    cdr << (ros_message->cell_under_voltage ? true : false);
  }

  // Field name: cell_volt_abnormal
  {
    cdr << (ros_message->cell_volt_abnormal ? true : false);
  }

  // Field name: mos_over_temp
  {
    cdr << (ros_message->mos_over_temp ? true : false);
  }

  // Field name: discharge_short
  {
    cdr << (ros_message->discharge_short ? true : false);
  }

  // Field name: fuse
  {
    cdr << (ros_message->fuse ? true : false);
  }

  // Field name: discharge_over_tmp
  {
    cdr << (ros_message->discharge_over_tmp ? true : false);
  }

  // Field name: discharge_under_tmp
  {
    cdr << (ros_message->discharge_under_tmp ? true : false);
  }

  // Field name: charge_over_temp
  {
    cdr << (ros_message->charge_over_temp ? true : false);
  }

  // Field name: charge_under_temp
  {
    cdr << (ros_message->charge_under_temp ? true : false);
  }

  // Field name: charge_mos_state
  {
    cdr << (ros_message->charge_mos_state ? true : false);
  }

  // Field name: discharge_mos_state
  {
    cdr << (ros_message->discharge_mos_state ? true : false);
  }

  // Field name: chg_mos_fault
  {
    cdr << (ros_message->chg_mos_fault ? true : false);
  }

  // Field name: dsg_mos_fault
  {
    cdr << (ros_message->dsg_mos_fault ? true : false);
  }

  return true;
}

static bool _BmsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BmsStatus__ros_msg_type * ros_message = static_cast<_BmsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

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

  // Field name: power_adapter_temp
  {
    cdr >> ros_message->power_adapter_temp;
  }

  // Field name: wireless_charging_temp
  {
    cdr >> ros_message->wireless_charging_temp;
  }

  // Field name: batt_st
  {
    cdr >> ros_message->batt_st;
  }

  // Field name: bms_state_one
  {
    cdr >> ros_message->bms_state_one;
  }

  // Field name: bms_state_two
  {
    cdr >> ros_message->bms_state_two;
  }

  // Field name: batt_health
  {
    cdr >> ros_message->batt_health;
  }

  // Field name: batt_loop_number
  {
    cdr >> ros_message->batt_loop_number;
  }

  // Field name: power_normal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_normal = tmp ? true : false;
  }

  // Field name: power_wired_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_wired_charging = tmp ? true : false;
  }

  // Field name: power_finished_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_finished_charging = tmp ? true : false;
  }

  // Field name: power_motor_shutdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_motor_shutdown = tmp ? true : false;
  }

  // Field name: power_soft_shutdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_soft_shutdown = tmp ? true : false;
  }

  // Field name: power_wp_place
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_wp_place = tmp ? true : false;
  }

  // Field name: power_wp_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_wp_charging = tmp ? true : false;
  }

  // Field name: power_expower_supply
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_expower_supply = tmp ? true : false;
  }

  // Field name: charge_over_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charge_over_current = tmp ? true : false;
  }

  // Field name: discharge_over_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_over_current = tmp ? true : false;
  }

  // Field name: cell_over_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cell_over_voltage = tmp ? true : false;
  }

  // Field name: cell_under_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cell_under_voltage = tmp ? true : false;
  }

  // Field name: cell_volt_abnormal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cell_volt_abnormal = tmp ? true : false;
  }

  // Field name: mos_over_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mos_over_temp = tmp ? true : false;
  }

  // Field name: discharge_short
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_short = tmp ? true : false;
  }

  // Field name: fuse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fuse = tmp ? true : false;
  }

  // Field name: discharge_over_tmp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_over_tmp = tmp ? true : false;
  }

  // Field name: discharge_under_tmp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_under_tmp = tmp ? true : false;
  }

  // Field name: charge_over_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charge_over_temp = tmp ? true : false;
  }

  // Field name: charge_under_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charge_under_temp = tmp ? true : false;
  }

  // Field name: charge_mos_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charge_mos_state = tmp ? true : false;
  }

  // Field name: discharge_mos_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->discharge_mos_state = tmp ? true : false;
  }

  // Field name: chg_mos_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->chg_mos_fault = tmp ? true : false;
  }

  // Field name: dsg_mos_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsg_mos_fault = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__BmsStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsStatus__ros_msg_type * ros_message = static_cast<const _BmsStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
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
  // field.name power_adapter_temp
  {
    size_t item_size = sizeof(ros_message->power_adapter_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wireless_charging_temp
  {
    size_t item_size = sizeof(ros_message->wireless_charging_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batt_st
  {
    size_t item_size = sizeof(ros_message->batt_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_state_one
  {
    size_t item_size = sizeof(ros_message->bms_state_one);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_state_two
  {
    size_t item_size = sizeof(ros_message->bms_state_two);
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
  // field.name power_normal
  {
    size_t item_size = sizeof(ros_message->power_normal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_wired_charging
  {
    size_t item_size = sizeof(ros_message->power_wired_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_finished_charging
  {
    size_t item_size = sizeof(ros_message->power_finished_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_motor_shutdown
  {
    size_t item_size = sizeof(ros_message->power_motor_shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_soft_shutdown
  {
    size_t item_size = sizeof(ros_message->power_soft_shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_wp_place
  {
    size_t item_size = sizeof(ros_message->power_wp_place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_wp_charging
  {
    size_t item_size = sizeof(ros_message->power_wp_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_expower_supply
  {
    size_t item_size = sizeof(ros_message->power_expower_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_over_current
  {
    size_t item_size = sizeof(ros_message->charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_over_current
  {
    size_t item_size = sizeof(ros_message->discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_over_voltage
  {
    size_t item_size = sizeof(ros_message->cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_under_voltage
  {
    size_t item_size = sizeof(ros_message->cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_volt_abnormal
  {
    size_t item_size = sizeof(ros_message->cell_volt_abnormal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mos_over_temp
  {
    size_t item_size = sizeof(ros_message->mos_over_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_short
  {
    size_t item_size = sizeof(ros_message->discharge_short);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuse
  {
    size_t item_size = sizeof(ros_message->fuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_over_tmp
  {
    size_t item_size = sizeof(ros_message->discharge_over_tmp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_under_tmp
  {
    size_t item_size = sizeof(ros_message->discharge_under_tmp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_over_temp
  {
    size_t item_size = sizeof(ros_message->charge_over_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_under_temp
  {
    size_t item_size = sizeof(ros_message->charge_under_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_mos_state
  {
    size_t item_size = sizeof(ros_message->charge_mos_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharge_mos_state
  {
    size_t item_size = sizeof(ros_message->discharge_mos_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chg_mos_fault
  {
    size_t item_size = sizeof(ros_message->chg_mos_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsg_mos_fault
  {
    size_t item_size = sizeof(ros_message->dsg_mos_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BmsStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_protocol__msg__BmsStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__BmsStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
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
  // member: power_adapter_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wireless_charging_temp
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
  // member: bms_state_one
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bms_state_two
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
  // member: power_normal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_wired_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_finished_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_motor_shutdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_soft_shutdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_wp_place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_wp_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_expower_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_over_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_over_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cell_over_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cell_under_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cell_volt_abnormal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mos_over_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_short
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_over_tmp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_under_tmp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_over_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_under_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_mos_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: discharge_mos_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chg_mos_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsg_mos_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BmsStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_protocol__msg__BmsStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BmsStatus = {
  "protocol::msg",
  "BmsStatus",
  _BmsStatus__cdr_serialize,
  _BmsStatus__cdr_deserialize,
  _BmsStatus__get_serialized_size,
  _BmsStatus__max_serialized_size
};

static rosidl_message_type_support_t _BmsStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BmsStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, BmsStatus)() {
  return &_BmsStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
