// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/StateSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/state_switch_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::StateSwitchStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
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

inline std::string to_yaml(const protocol::msg::StateSwitchStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::StateSwitchStatus>()
{
  return "protocol::msg::StateSwitchStatus";
}

template<>
inline const char * name<protocol::msg::StateSwitchStatus>()
{
  return "protocol/msg/StateSwitchStatus";
}

template<>
struct has_fixed_size<protocol::msg::StateSwitchStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::StateSwitchStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::StateSwitchStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__TRAITS_HPP_
