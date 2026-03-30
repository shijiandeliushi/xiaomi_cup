// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioVoiceprintsSet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__TRAITS_HPP_

#include "protocol/srv/detail/audio_voiceprints_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'voice_prints'
#include "protocol/msg/detail/voice_prints__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioVoiceprintsSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voice_prints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_prints:\n";
    to_yaml(msg.voice_prints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AudioVoiceprintsSet_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioVoiceprintsSet_Request>()
{
  return "protocol::srv::AudioVoiceprintsSet_Request";
}

template<>
inline const char * name<protocol::srv::AudioVoiceprintsSet_Request>()
{
  return "protocol/srv/AudioVoiceprintsSet_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioVoiceprintsSet_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::VoicePrints>::value> {};

template<>
struct has_bounded_size<protocol::srv::AudioVoiceprintsSet_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::VoicePrints>::value> {};

template<>
struct is_message<protocol::srv::AudioVoiceprintsSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioVoiceprintsSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
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

inline std::string to_yaml(const protocol::srv::AudioVoiceprintsSet_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioVoiceprintsSet_Response>()
{
  return "protocol::srv::AudioVoiceprintsSet_Response";
}

template<>
inline const char * name<protocol::srv::AudioVoiceprintsSet_Response>()
{
  return "protocol/srv/AudioVoiceprintsSet_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioVoiceprintsSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioVoiceprintsSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioVoiceprintsSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioVoiceprintsSet>()
{
  return "protocol::srv::AudioVoiceprintsSet";
}

template<>
inline const char * name<protocol::srv::AudioVoiceprintsSet>()
{
  return "protocol/srv/AudioVoiceprintsSet";
}

template<>
struct has_fixed_size<protocol::srv::AudioVoiceprintsSet>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioVoiceprintsSet_Request>::value &&
    has_fixed_size<protocol::srv::AudioVoiceprintsSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioVoiceprintsSet>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioVoiceprintsSet_Request>::value &&
    has_bounded_size<protocol::srv::AudioVoiceprintsSet_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioVoiceprintsSet>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioVoiceprintsSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioVoiceprintsSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__TRAITS_HPP_
