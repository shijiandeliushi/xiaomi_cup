// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINTS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINTS__TRAITS_HPP_

#include "protocol/msg/detail/voice_prints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'prints'
#include "protocol/msg/detail/voice_print__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::VoicePrints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prints.size() == 0) {
      out << "prints: []\n";
    } else {
      out << "prints:\n";
      for (auto item : msg.prints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::VoicePrints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::VoicePrints>()
{
  return "protocol::msg::VoicePrints";
}

template<>
inline const char * name<protocol::msg::VoicePrints>()
{
  return "protocol/msg/VoicePrints";
}

template<>
struct has_fixed_size<protocol::msg::VoicePrints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::VoicePrints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::VoicePrints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINTS__TRAITS_HPP_
