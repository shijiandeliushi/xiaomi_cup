// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_ARRAY__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_ARRAY__TRAITS_HPP_

#include "protocol/msg/detail/uwb_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'data'
#include "protocol/msg/detail/uwb_raw__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::UwbArray & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::UwbArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::UwbArray>()
{
  return "protocol::msg::UwbArray";
}

template<>
inline const char * name<protocol::msg::UwbArray>()
{
  return "protocol/msg/UwbArray";
}

template<>
struct has_fixed_size<protocol::msg::UwbArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::UwbArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::UwbArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__UWB_ARRAY__TRAITS_HPP_
