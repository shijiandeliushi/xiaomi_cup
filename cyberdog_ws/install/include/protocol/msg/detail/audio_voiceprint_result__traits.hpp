// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__TRAITS_HPP_

#include "protocol/msg/detail/audio_voiceprint_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'voice_print'
#include "protocol/msg/detail/voice_print__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::AudioVoiceprintResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: voice_print
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_print:\n";
    to_yaml(msg.voice_print, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::AudioVoiceprintResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::AudioVoiceprintResult>()
{
  return "protocol::msg::AudioVoiceprintResult";
}

template<>
inline const char * name<protocol::msg::AudioVoiceprintResult>()
{
  return "protocol/msg/AudioVoiceprintResult";
}

template<>
struct has_fixed_size<protocol::msg::AudioVoiceprintResult>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::VoicePrint>::value> {};

template<>
struct has_bounded_size<protocol::msg::AudioVoiceprintResult>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::VoicePrint>::value> {};

template<>
struct is_message<protocol::msg::AudioVoiceprintResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__TRAITS_HPP_
