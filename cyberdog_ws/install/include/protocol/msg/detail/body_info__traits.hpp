// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/BodyInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY_INFO__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BODY_INFO__TRAITS_HPP_

#include "protocol/msg/detail/body_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'infos'
#include "protocol/msg/detail/body__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::BodyInfo & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.infos.size() == 0) {
      out << "infos: []\n";
    } else {
      out << "infos:\n";
      for (auto item : msg.infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::BodyInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::BodyInfo>()
{
  return "protocol::msg::BodyInfo";
}

template<>
inline const char * name<protocol::msg::BodyInfo>()
{
  return "protocol/msg/BodyInfo";
}

template<>
struct has_fixed_size<protocol::msg::BodyInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::BodyInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::BodyInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BODY_INFO__TRAITS_HPP_
