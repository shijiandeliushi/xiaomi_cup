// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/bms_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::BmsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: batt_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_volt: ";
    value_to_yaml(msg.batt_volt, out);
    out << "\n";
  }

  // member: batt_curr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_curr: ";
    value_to_yaml(msg.batt_curr, out);
    out << "\n";
  }

  // member: batt_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_soc: ";
    value_to_yaml(msg.batt_soc, out);
    out << "\n";
  }

  // member: batt_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_temp: ";
    value_to_yaml(msg.batt_temp, out);
    out << "\n";
  }

  // member: power_adapter_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_adapter_temp: ";
    value_to_yaml(msg.power_adapter_temp, out);
    out << "\n";
  }

  // member: wireless_charging_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wireless_charging_temp: ";
    value_to_yaml(msg.wireless_charging_temp, out);
    out << "\n";
  }

  // member: batt_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_st: ";
    value_to_yaml(msg.batt_st, out);
    out << "\n";
  }

  // member: bms_state_one
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_state_one: ";
    value_to_yaml(msg.bms_state_one, out);
    out << "\n";
  }

  // member: bms_state_two
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_state_two: ";
    value_to_yaml(msg.bms_state_two, out);
    out << "\n";
  }

  // member: batt_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_health: ";
    value_to_yaml(msg.batt_health, out);
    out << "\n";
  }

  // member: batt_loop_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_loop_number: ";
    value_to_yaml(msg.batt_loop_number, out);
    out << "\n";
  }

  // member: power_normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_normal: ";
    value_to_yaml(msg.power_normal, out);
    out << "\n";
  }

  // member: power_wired_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_wired_charging: ";
    value_to_yaml(msg.power_wired_charging, out);
    out << "\n";
  }

  // member: power_finished_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_finished_charging: ";
    value_to_yaml(msg.power_finished_charging, out);
    out << "\n";
  }

  // member: power_motor_shutdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_motor_shutdown: ";
    value_to_yaml(msg.power_motor_shutdown, out);
    out << "\n";
  }

  // member: power_soft_shutdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_soft_shutdown: ";
    value_to_yaml(msg.power_soft_shutdown, out);
    out << "\n";
  }

  // member: power_wp_place
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_wp_place: ";
    value_to_yaml(msg.power_wp_place, out);
    out << "\n";
  }

  // member: power_wp_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_wp_charging: ";
    value_to_yaml(msg.power_wp_charging, out);
    out << "\n";
  }

  // member: power_expower_supply
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_expower_supply: ";
    value_to_yaml(msg.power_expower_supply, out);
    out << "\n";
  }

  // member: charge_over_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_over_current: ";
    value_to_yaml(msg.charge_over_current, out);
    out << "\n";
  }

  // member: discharge_over_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_over_current: ";
    value_to_yaml(msg.discharge_over_current, out);
    out << "\n";
  }

  // member: cell_over_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_over_voltage: ";
    value_to_yaml(msg.cell_over_voltage, out);
    out << "\n";
  }

  // member: cell_under_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_under_voltage: ";
    value_to_yaml(msg.cell_under_voltage, out);
    out << "\n";
  }

  // member: cell_volt_abnormal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_volt_abnormal: ";
    value_to_yaml(msg.cell_volt_abnormal, out);
    out << "\n";
  }

  // member: mos_over_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mos_over_temp: ";
    value_to_yaml(msg.mos_over_temp, out);
    out << "\n";
  }

  // member: discharge_short
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_short: ";
    value_to_yaml(msg.discharge_short, out);
    out << "\n";
  }

  // member: fuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse: ";
    value_to_yaml(msg.fuse, out);
    out << "\n";
  }

  // member: discharge_over_tmp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_over_tmp: ";
    value_to_yaml(msg.discharge_over_tmp, out);
    out << "\n";
  }

  // member: discharge_under_tmp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_under_tmp: ";
    value_to_yaml(msg.discharge_under_tmp, out);
    out << "\n";
  }

  // member: charge_over_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_over_temp: ";
    value_to_yaml(msg.charge_over_temp, out);
    out << "\n";
  }

  // member: charge_under_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_under_temp: ";
    value_to_yaml(msg.charge_under_temp, out);
    out << "\n";
  }

  // member: charge_mos_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_mos_state: ";
    value_to_yaml(msg.charge_mos_state, out);
    out << "\n";
  }

  // member: discharge_mos_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_mos_state: ";
    value_to_yaml(msg.discharge_mos_state, out);
    out << "\n";
  }

  // member: chg_mos_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chg_mos_fault: ";
    value_to_yaml(msg.chg_mos_fault, out);
    out << "\n";
  }

  // member: dsg_mos_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsg_mos_fault: ";
    value_to_yaml(msg.dsg_mos_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::BmsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::BmsStatus>()
{
  return "protocol::msg::BmsStatus";
}

template<>
inline const char * name<protocol::msg::BmsStatus>()
{
  return "protocol/msg/BmsStatus";
}

template<>
struct has_fixed_size<protocol::msg::BmsStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<protocol::msg::BmsStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<protocol::msg::BmsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BMS_STATUS__TRAITS_HPP_
