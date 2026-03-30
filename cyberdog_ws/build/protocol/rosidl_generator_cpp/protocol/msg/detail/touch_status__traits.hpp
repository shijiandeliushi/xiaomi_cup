// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/TouchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TOUCH_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__TOUCH_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/touch_status__struct.hpp"
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
  const protocol::msg::TouchStatus & msg,
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

  // member: touch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch_state: ";
    value_to_yaml(msg.touch_state, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::TouchStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::TouchStatus>()
{
  return "protocol::msg::TouchStatus";
}

template<>
inline const char * name<protocol::msg::TouchStatus>()
{
  return "protocol/msg/TouchStatus";
}

template<>
struct has_fixed_size<protocol::msg::TouchStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<protocol::msg::TouchStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<protocol::msg::TouchStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__TOUCH_STATUS__TRAITS_HPP_
