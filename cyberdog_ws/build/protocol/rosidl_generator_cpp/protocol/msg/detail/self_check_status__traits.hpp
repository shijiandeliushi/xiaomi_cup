// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/SelfCheckStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/self_check_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::SelfCheckStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::SelfCheckStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::SelfCheckStatus>()
{
  return "protocol::msg::SelfCheckStatus";
}

template<>
inline const char * name<protocol::msg::SelfCheckStatus>()
{
  return "protocol/msg/SelfCheckStatus";
}

template<>
struct has_fixed_size<protocol::msg::SelfCheckStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::SelfCheckStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::SelfCheckStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__TRAITS_HPP_
