// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioNickName.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__TRAITS_HPP_

#include "protocol/srv/detail/audio_nick_name__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioNickName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nick_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nick_name: ";
    value_to_yaml(msg.nick_name, out);
    out << "\n";
  }

  // member: wake_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wake_name: ";
    value_to_yaml(msg.wake_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AudioNickName_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioNickName_Request>()
{
  return "protocol::srv::AudioNickName_Request";
}

template<>
inline const char * name<protocol::srv::AudioNickName_Request>()
{
  return "protocol/srv/AudioNickName_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioNickName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AudioNickName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AudioNickName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioNickName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
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

inline std::string to_yaml(const protocol::srv::AudioNickName_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioNickName_Response>()
{
  return "protocol::srv::AudioNickName_Response";
}

template<>
inline const char * name<protocol::srv::AudioNickName_Response>()
{
  return "protocol/srv/AudioNickName_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioNickName_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioNickName_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioNickName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioNickName>()
{
  return "protocol::srv::AudioNickName";
}

template<>
inline const char * name<protocol::srv::AudioNickName>()
{
  return "protocol/srv/AudioNickName";
}

template<>
struct has_fixed_size<protocol::srv::AudioNickName>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioNickName_Request>::value &&
    has_fixed_size<protocol::srv::AudioNickName_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioNickName>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioNickName_Request>::value &&
    has_bounded_size<protocol::srv::AudioNickName_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioNickName>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioNickName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioNickName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__TRAITS_HPP_
