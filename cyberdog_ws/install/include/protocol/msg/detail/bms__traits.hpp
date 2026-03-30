// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BMS__TRAITS_HPP_

#include "protocol/msg/detail/bms__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Bms & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: batt_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batt_st: ";
    value_to_yaml(msg.batt_st, out);
    out << "\n";
  }

  // member: key_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_val: ";
    value_to_yaml(msg.key_val, out);
    out << "\n";
  }

  // member: disable_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_charge: ";
    value_to_yaml(msg.disable_charge, out);
    out << "\n";
  }

  // member: power_supply
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply: ";
    value_to_yaml(msg.power_supply, out);
    out << "\n";
  }

  // member: buzze
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buzze: ";
    value_to_yaml(msg.buzze, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
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

  // member: powerboard_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "powerboard_status: ";
    value_to_yaml(msg.powerboard_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Bms & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Bms>()
{
  return "protocol::msg::Bms";
}

template<>
inline const char * name<protocol::msg::Bms>()
{
  return "protocol/msg/Bms";
}

template<>
struct has_fixed_size<protocol::msg::Bms>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::Bms>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::Bms>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BMS__TRAITS_HPP_
