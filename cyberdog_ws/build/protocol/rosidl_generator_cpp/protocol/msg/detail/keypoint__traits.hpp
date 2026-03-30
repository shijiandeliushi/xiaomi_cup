// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__KEYPOINT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__KEYPOINT__TRAITS_HPP_

#include "protocol/msg/detail/keypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Keypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Keypoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Keypoint>()
{
  return "protocol::msg::Keypoint";
}

template<>
inline const char * name<protocol::msg::Keypoint>()
{
  return "protocol/msg/Keypoint";
}

template<>
struct has_fixed_size<protocol::msg::Keypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::Keypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::Keypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__KEYPOINT__TRAITS_HPP_
