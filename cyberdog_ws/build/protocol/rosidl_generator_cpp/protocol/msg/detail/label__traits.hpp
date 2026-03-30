// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Label.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__LABEL__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__LABEL__TRAITS_HPP_

#include "protocol/msg/detail/label__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Label & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_name: ";
    value_to_yaml(msg.label_name, out);
    out << "\n";
  }

  // member: physic_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "physic_x: ";
    value_to_yaml(msg.physic_x, out);
    out << "\n";
  }

  // member: physic_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "physic_y: ";
    value_to_yaml(msg.physic_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Label & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Label>()
{
  return "protocol::msg::Label";
}

template<>
inline const char * name<protocol::msg::Label>()
{
  return "protocol/msg/Label";
}

template<>
struct has_fixed_size<protocol::msg::Label>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::Label>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::Label>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__LABEL__TRAITS_HPP_
