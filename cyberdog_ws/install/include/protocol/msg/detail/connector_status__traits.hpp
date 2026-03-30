// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/connector_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::ConnectorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_connected: ";
    value_to_yaml(msg.is_connected, out);
    out << "\n";
  }

  // member: is_internet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_internet: ";
    value_to_yaml(msg.is_internet, out);
    out << "\n";
  }

  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: robot_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_ip: ";
    value_to_yaml(msg.robot_ip, out);
    out << "\n";
  }

  // member: provider_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "provider_ip: ";
    value_to_yaml(msg.provider_ip, out);
    out << "\n";
  }

  // member: strength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strength: ";
    value_to_yaml(msg.strength, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::ConnectorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::ConnectorStatus>()
{
  return "protocol::msg::ConnectorStatus";
}

template<>
inline const char * name<protocol::msg::ConnectorStatus>()
{
  return "protocol/msg/ConnectorStatus";
}

template<>
struct has_fixed_size<protocol::msg::ConnectorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::ConnectorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::ConnectorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_
