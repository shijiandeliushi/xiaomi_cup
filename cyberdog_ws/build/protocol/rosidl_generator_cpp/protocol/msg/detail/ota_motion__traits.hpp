// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/OtaMotion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_MOTION__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_MOTION__TRAITS_HPP_

#include "protocol/msg/detail/ota_motion__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::OtaMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    value_to_yaml(msg.version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::OtaMotion & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::OtaMotion>()
{
  return "protocol::msg::OtaMotion";
}

template<>
inline const char * name<protocol::msg::OtaMotion>()
{
  return "protocol/msg/OtaMotion";
}

template<>
struct has_fixed_size<protocol::msg::OtaMotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::OtaMotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::OtaMotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__OTA_MOTION__TRAITS_HPP_
