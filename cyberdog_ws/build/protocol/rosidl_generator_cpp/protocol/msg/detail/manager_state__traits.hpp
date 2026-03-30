// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/ManagerState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MANAGER_STATE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MANAGER_STATE__TRAITS_HPP_

#include "protocol/msg/detail/manager_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::ManagerState & msg,
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

  // member: err_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_msg: ";
    value_to_yaml(msg.err_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::ManagerState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::ManagerState>()
{
  return "protocol::msg::ManagerState";
}

template<>
inline const char * name<protocol::msg::ManagerState>()
{
  return "protocol/msg/ManagerState";
}

template<>
struct has_fixed_size<protocol::msg::ManagerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::ManagerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::ManagerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MANAGER_STATE__TRAITS_HPP_
