// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "protocol/msg/detail/bms_status__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace protocol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_serialize(
  const protocol::msg::BmsStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: batt_volt
  cdr << ros_message.batt_volt;
  // Member: batt_curr
  cdr << ros_message.batt_curr;
  // Member: batt_soc
  cdr << ros_message.batt_soc;
  // Member: batt_temp
  cdr << ros_message.batt_temp;
  // Member: power_adapter_temp
  cdr << ros_message.power_adapter_temp;
  // Member: wireless_charging_temp
  cdr << ros_message.wireless_charging_temp;
  // Member: batt_st
  cdr << ros_message.batt_st;
  // Member: bms_state_one
  cdr << ros_message.bms_state_one;
  // Member: bms_state_two
  cdr << ros_message.bms_state_two;
  // Member: batt_health
  cdr << ros_message.batt_health;
  // Member: batt_loop_number
  cdr << ros_message.batt_loop_number;
  // Member: power_normal
  cdr << (ros_message.power_normal ? true : false);
  // Member: power_wired_charging
  cdr << (ros_message.power_wired_charging ? true : false);
  // Member: power_finished_charging
  cdr << (ros_message.power_finished_charging ? true : false);
  // Member: power_motor_shutdown
  cdr << (ros_message.power_motor_shutdown ? true : false);
  // Member: power_soft_shutdown
  cdr << (ros_message.power_soft_shutdown ? true : false);
  // Member: power_wp_place
  cdr << (ros_message.power_wp_place ? true : false);
  // Member: power_wp_charging
  cdr << (ros_message.power_wp_charging ? true : false);
  // Member: power_expower_supply
  cdr << (ros_message.power_expower_supply ? true : false);
  // Member: charge_over_current
  cdr << (ros_message.charge_over_current ? true : false);
  // Member: discharge_over_current
  cdr << (ros_message.discharge_over_current ? true : false);
  // Member: cell_over_voltage
  cdr << (ros_message.cell_over_voltage ? true : false);
  // Member: cell_under_voltage
  cdr << (ros_message.cell_under_voltage ? true : false);
  // Member: cell_volt_abnormal
  cdr << (ros_message.cell_volt_abnormal ? true : false);
  // Member: mos_over_temp
  cdr << (ros_message.mos_over_temp ? true : false);
  // Member: discharge_short
  cdr << (ros_message.discharge_short ? true : false);
  // Member: fuse
  cdr << (ros_message.fuse ? true : false);
  // Member: discharge_over_tmp
  cdr << (ros_message.discharge_over_tmp ? true : false);
  // Member: discharge_under_tmp
  cdr << (ros_message.discharge_under_tmp ? true : false);
  // Member: charge_over_temp
  cdr << (ros_message.charge_over_temp ? true : false);
  // Member: charge_under_temp
  cdr << (ros_message.charge_under_temp ? true : false);
  // Member: charge_mos_state
  cdr << (ros_message.charge_mos_state ? true : false);
  // Member: discharge_mos_state
  cdr << (ros_message.discharge_mos_state ? true : false);
  // Member: chg_mos_fault
  cdr << (ros_message.chg_mos_fault ? true : false);
  // Member: dsg_mos_fault
  cdr << (ros_message.dsg_mos_fault ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  protocol::msg::BmsStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: batt_volt
  cdr >> ros_message.batt_volt;

  // Member: batt_curr
  cdr >> ros_message.batt_curr;

  // Member: batt_soc
  cdr >> ros_message.batt_soc;

  // Member: batt_temp
  cdr >> ros_message.batt_temp;

  // Member: power_adapter_temp
  cdr >> ros_message.power_adapter_temp;

  // Member: wireless_charging_temp
  cdr >> ros_message.wireless_charging_temp;

  // Member: batt_st
  cdr >> ros_message.batt_st;

  // Member: bms_state_one
  cdr >> ros_message.bms_state_one;

  // Member: bms_state_two
  cdr >> ros_message.bms_state_two;

  // Member: batt_health
  cdr >> ros_message.batt_health;

  // Member: batt_loop_number
  cdr >> ros_message.batt_loop_number;

  // Member: power_normal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_normal = tmp ? true : false;
  }

  // Member: power_wired_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_wired_charging = tmp ? true : false;
  }

  // Member: power_finished_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_finished_charging = tmp ? true : false;
  }

  // Member: power_motor_shutdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_motor_shutdown = tmp ? true : false;
  }

  // Member: power_soft_shutdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_soft_shutdown = tmp ? true : false;
  }

  // Member: power_wp_place
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_wp_place = tmp ? true : false;
  }

  // Member: power_wp_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_wp_charging = tmp ? true : false;
  }

  // Member: power_expower_supply
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_expower_supply = tmp ? true : false;
  }

  // Member: charge_over_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.charge_over_current = tmp ? true : false;
  }

  // Member: discharge_over_current
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_over_current = tmp ? true : false;
  }

  // Member: cell_over_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cell_over_voltage = tmp ? true : false;
  }

  // Member: cell_under_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cell_under_voltage = tmp ? true : false;
  }

  // Member: cell_volt_abnormal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cell_volt_abnormal = tmp ? true : false;
  }

  // Member: mos_over_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mos_over_temp = tmp ? true : false;
  }

  // Member: discharge_short
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_short = tmp ? true : false;
  }

  // Member: fuse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fuse = tmp ? true : false;
  }

  // Member: discharge_over_tmp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_over_tmp = tmp ? true : false;
  }

  // Member: discharge_under_tmp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_under_tmp = tmp ? true : false;
  }

  // Member: charge_over_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.charge_over_temp = tmp ? true : false;
  }

  // Member: charge_under_temp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.charge_under_temp = tmp ? true : false;
  }

  // Member: charge_mos_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.charge_mos_state = tmp ? true : false;
  }

  // Member: discharge_mos_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.discharge_mos_state = tmp ? true : false;
  }

  // Member: chg_mos_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.chg_mos_fault = tmp ? true : false;
  }

  // Member: dsg_mos_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsg_mos_fault = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
get_serialized_size(
  const protocol::msg::BmsStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
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
  // Member: power_adapter_temp
  {
    size_t item_size = sizeof(ros_message.power_adapter_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wireless_charging_temp
  {
    size_t item_size = sizeof(ros_message.wireless_charging_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: batt_st
  {
    size_t item_size = sizeof(ros_message.batt_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_state_one
  {
    size_t item_size = sizeof(ros_message.bms_state_one);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms_state_two
  {
    size_t item_size = sizeof(ros_message.bms_state_two);
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
  // Member: power_normal
  {
    size_t item_size = sizeof(ros_message.power_normal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_wired_charging
  {
    size_t item_size = sizeof(ros_message.power_wired_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_finished_charging
  {
    size_t item_size = sizeof(ros_message.power_finished_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_motor_shutdown
  {
    size_t item_size = sizeof(ros_message.power_motor_shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_soft_shutdown
  {
    size_t item_size = sizeof(ros_message.power_soft_shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_wp_place
  {
    size_t item_size = sizeof(ros_message.power_wp_place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_wp_charging
  {
    size_t item_size = sizeof(ros_message.power_wp_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_expower_supply
  {
    size_t item_size = sizeof(ros_message.power_expower_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_over_current
  {
    size_t item_size = sizeof(ros_message.charge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_over_current
  {
    size_t item_size = sizeof(ros_message.discharge_over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cell_over_voltage
  {
    size_t item_size = sizeof(ros_message.cell_over_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cell_under_voltage
  {
    size_t item_size = sizeof(ros_message.cell_under_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cell_volt_abnormal
  {
    size_t item_size = sizeof(ros_message.cell_volt_abnormal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mos_over_temp
  {
    size_t item_size = sizeof(ros_message.mos_over_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_short
  {
    size_t item_size = sizeof(ros_message.discharge_short);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuse
  {
    size_t item_size = sizeof(ros_message.fuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_over_tmp
  {
    size_t item_size = sizeof(ros_message.discharge_over_tmp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_under_tmp
  {
    size_t item_size = sizeof(ros_message.discharge_under_tmp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_over_temp
  {
    size_t item_size = sizeof(ros_message.charge_over_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_under_temp
  {
    size_t item_size = sizeof(ros_message.charge_under_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charge_mos_state
  {
    size_t item_size = sizeof(ros_message.charge_mos_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: discharge_mos_state
  {
    size_t item_size = sizeof(ros_message.discharge_mos_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chg_mos_fault
  {
    size_t item_size = sizeof(ros_message.chg_mos_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsg_mos_fault
  {
    size_t item_size = sizeof(ros_message.dsg_mos_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_protocol
max_serialized_size_BmsStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

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

  // Member: power_adapter_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wireless_charging_temp
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

  // Member: bms_state_one
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bms_state_two
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

  // Member: power_normal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_wired_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_finished_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_motor_shutdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_soft_shutdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_wp_place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_wp_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_expower_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charge_over_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_over_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cell_over_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cell_under_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cell_volt_abnormal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mos_over_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_short
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_over_tmp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_under_tmp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charge_over_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charge_under_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charge_mos_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: discharge_mos_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chg_mos_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsg_mos_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _BmsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const protocol::msg::BmsStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BmsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<protocol::msg::BmsStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BmsStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const protocol::msg::BmsStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BmsStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BmsStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _BmsStatus__callbacks = {
  "protocol::msg",
  "BmsStatus",
  _BmsStatus__cdr_serialize,
  _BmsStatus__cdr_deserialize,
  _BmsStatus__get_serialized_size,
  _BmsStatus__max_serialized_size
};

static rosidl_message_type_support_t _BmsStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BmsStatus__callbacks,
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
get_message_type_support_handle<protocol::msg::BmsStatus>()
{
  return &protocol::msg::typesupport_fastrtps_cpp::_BmsStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, protocol, msg, BmsStatus)() {
  return &protocol::msg::typesupport_fastrtps_cpp::_BmsStatus__handle;
}

#ifdef __cplusplus
}
#endif
