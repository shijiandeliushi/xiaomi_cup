// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioTextPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__TRAITS_HPP_

#include "protocol/srv/detail/audio_text_play__struct.hpp"
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
  const protocol::srv::AudioTextPlay_Request & msg,
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

inline std::string to_yaml(const protocol::srv::AudioTextPlay_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioTextPlay_Request>()
{
  return "protocol::srv::AudioTextPlay_Request";
}

template<>
inline const char * name<protocol::srv::AudioTextPlay_Request>()
{
  return "protocol/srv/AudioTextPlay_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioTextPlay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AudioTextPlay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AudioTextPlay_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioTextPlay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
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

inline std::string to_yaml(const protocol::srv::AudioTextPlay_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioTextPlay_Response>()
{
  return "protocol::srv::AudioTextPlay_Response";
}

template<>
inline const char * name<protocol::srv::AudioTextPlay_Response>()
{
  return "protocol/srv/AudioTextPlay_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioTextPlay_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioTextPlay_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioTextPlay_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioTextPlay>()
{
  return "protocol::srv::AudioTextPlay";
}

template<>
inline const char * name<protocol::srv::AudioTextPlay>()
{
  return "protocol/srv/AudioTextPlay";
}

template<>
struct has_fixed_size<protocol::srv::AudioTextPlay>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioTextPlay_Request>::value &&
    has_fixed_size<protocol::srv::AudioTextPlay_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioTextPlay>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioTextPlay_Request>::value &&
    has_bounded_size<protocol::srv::AudioTextPlay_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioTextPlay>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioTextPlay_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioTextPlay_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__TRAITS_HPP_
