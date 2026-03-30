// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLE_INFO__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BLE_INFO__TRAITS_HPP_

#include "protocol/msg/detail/ble_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::BLEInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac: ";
    value_to_yaml(msg.mac, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: addr_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "addr_type: ";
    value_to_yaml(msg.addr_type, out);
    out << "\n";
  }

  // member: device_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_type: ";
    value_to_yaml(msg.device_type, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::BLEInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::BLEInfo>()
{
  return "protocol::msg::BLEInfo";
}

template<>
inline const char * name<protocol::msg::BLEInfo>()
{
  return "protocol/msg/BLEInfo";
}

template<>
struct has_fixed_size<protocol::msg::BLEInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::BLEInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::BLEInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BLE_INFO__TRAITS_HPP_
