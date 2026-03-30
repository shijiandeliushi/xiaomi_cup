// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/WifiInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_INFO__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__WIFI_INFO__TRAITS_HPP_

#include "protocol/msg/detail/wifi_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::WifiInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: pwd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwd: ";
    value_to_yaml(msg.pwd, out);
    out << "\n";
  }

  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac: ";
    value_to_yaml(msg.mac, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::WifiInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::WifiInfo>()
{
  return "protocol::msg::WifiInfo";
}

template<>
inline const char * name<protocol::msg::WifiInfo>()
{
  return "protocol/msg/WifiInfo";
}

template<>
struct has_fixed_size<protocol::msg::WifiInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::WifiInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::WifiInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__WIFI_INFO__TRAITS_HPP_
