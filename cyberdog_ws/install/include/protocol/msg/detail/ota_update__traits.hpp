// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/OtaUpdate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_UPDATE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_UPDATE__TRAITS_HPP_

#include "protocol/msg/detail/ota_update__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::OtaUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    value_to_yaml(msg.progress, out);
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

inline std::string to_yaml(const protocol::msg::OtaUpdate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::OtaUpdate>()
{
  return "protocol::msg::OtaUpdate";
}

template<>
inline const char * name<protocol::msg::OtaUpdate>()
{
  return "protocol/msg/OtaUpdate";
}

template<>
struct has_fixed_size<protocol::msg::OtaUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::OtaUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::OtaUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__OTA_UPDATE__TRAITS_HPP_
