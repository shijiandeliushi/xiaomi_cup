// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/UwbRaw.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_RAW__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_RAW__TRAITS_HPP_

#include "protocol/msg/detail/uwb_raw__struct.hpp"
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
  const protocol::msg::UwbRaw & msg,
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

  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: n_los
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_los: ";
    value_to_yaml(msg.n_los, out);
    out << "\n";
  }

  // member: rssi_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_1: ";
    value_to_yaml(msg.rssi_1, out);
    out << "\n";
  }

  // member: rssi_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_2: ";
    value_to_yaml(msg.rssi_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::UwbRaw & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::UwbRaw>()
{
  return "protocol::msg::UwbRaw";
}

template<>
inline const char * name<protocol::msg::UwbRaw>()
{
  return "protocol/msg/UwbRaw";
}

template<>
struct has_fixed_size<protocol::msg::UwbRaw>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<protocol::msg::UwbRaw>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<protocol::msg::UwbRaw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__UWB_RAW__TRAITS_HPP_
