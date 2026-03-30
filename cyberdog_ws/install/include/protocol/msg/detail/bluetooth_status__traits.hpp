// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/BluetoothStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/bluetooth_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::BluetoothStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: advtiseable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "advtiseable: ";
    value_to_yaml(msg.advtiseable, out);
    out << "\n";
  }

  // member: connectable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connectable: ";
    value_to_yaml(msg.connectable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::BluetoothStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::BluetoothStatus>()
{
  return "protocol::msg::BluetoothStatus";
}

template<>
inline const char * name<protocol::msg::BluetoothStatus>()
{
  return "protocol/msg/BluetoothStatus";
}

template<>
struct has_fixed_size<protocol::msg::BluetoothStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::BluetoothStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::BluetoothStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__TRAITS_HPP_
