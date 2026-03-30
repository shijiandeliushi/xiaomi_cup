// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/OtaReady.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_READY__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_READY__TRAITS_HPP_

#include "protocol/msg/detail/ota_ready__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::OtaReady & msg,
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

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::OtaReady & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::OtaReady>()
{
  return "protocol::msg::OtaReady";
}

template<>
inline const char * name<protocol::msg::OtaReady>()
{
  return "protocol/msg/OtaReady";
}

template<>
struct has_fixed_size<protocol::msg::OtaReady>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::OtaReady>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::OtaReady>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__OTA_READY__TRAITS_HPP_
