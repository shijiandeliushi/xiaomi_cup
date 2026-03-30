// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__TRAITS_HPP_

#include "protocol/msg/detail/audio_play_extend__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'speech'
#include "protocol/msg/detail/audio_play__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::AudioPlayExtend & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_name: ";
    value_to_yaml(msg.module_name, out);
    out << "\n";
  }

  // member: is_online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_online: ";
    value_to_yaml(msg.is_online, out);
    out << "\n";
  }

  // member: speech
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speech:\n";
    to_yaml(msg.speech, out, indentation + 2);
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::AudioPlayExtend & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::AudioPlayExtend>()
{
  return "protocol::msg::AudioPlayExtend";
}

template<>
inline const char * name<protocol::msg::AudioPlayExtend>()
{
  return "protocol/msg/AudioPlayExtend";
}

template<>
struct has_fixed_size<protocol::msg::AudioPlayExtend>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::AudioPlayExtend>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::AudioPlayExtend>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__TRAITS_HPP_
