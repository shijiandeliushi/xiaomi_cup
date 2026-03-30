// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/NodeError.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NODE_ERROR__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__NODE_ERROR__TRAITS_HPP_

#include "protocol/msg/detail/node_error__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::NodeError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
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

inline std::string to_yaml(const protocol::msg::NodeError & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::NodeError>()
{
  return "protocol::msg::NodeError";
}

template<>
inline const char * name<protocol::msg::NodeError>()
{
  return "protocol/msg/NodeError";
}

template<>
struct has_fixed_size<protocol::msg::NodeError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::NodeError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::NodeError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__NODE_ERROR__TRAITS_HPP_
