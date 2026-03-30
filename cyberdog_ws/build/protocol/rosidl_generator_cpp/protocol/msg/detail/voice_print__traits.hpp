// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/VoicePrint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINT__TRAITS_HPP_

#include "protocol/msg/detail/voice_print__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::VoicePrint & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::VoicePrint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::VoicePrint>()
{
  return "protocol::msg::VoicePrint";
}

template<>
inline const char * name<protocol::msg::VoicePrint>()
{
  return "protocol/msg/VoicePrint";
}

template<>
struct has_fixed_size<protocol::msg::VoicePrint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::VoicePrint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::VoicePrint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINT__TRAITS_HPP_
