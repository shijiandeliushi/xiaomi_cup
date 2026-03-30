// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioAuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__TRAITS_HPP_

#include "protocol/srv/detail/audio_auth_token__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioAuthToken_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    value_to_yaml(msg.uid, out);
    out << "\n";
  }

  // member: token_access
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_access: ";
    value_to_yaml(msg.token_access, out);
    out << "\n";
  }

  // member: token_fresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_fresh: ";
    value_to_yaml(msg.token_fresh, out);
    out << "\n";
  }

  // member: token_expirein
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_expirein: ";
    value_to_yaml(msg.token_expirein, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AudioAuthToken_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioAuthToken_Request>()
{
  return "protocol::srv::AudioAuthToken_Request";
}

template<>
inline const char * name<protocol::srv::AudioAuthToken_Request>()
{
  return "protocol/srv/AudioAuthToken_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthToken_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AudioAuthToken_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AudioAuthToken_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioAuthToken_Response & msg,
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

inline std::string to_yaml(const protocol::srv::AudioAuthToken_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioAuthToken_Response>()
{
  return "protocol::srv::AudioAuthToken_Response";
}

template<>
inline const char * name<protocol::srv::AudioAuthToken_Response>()
{
  return "protocol/srv/AudioAuthToken_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthToken_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioAuthToken_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioAuthToken_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioAuthToken>()
{
  return "protocol::srv::AudioAuthToken";
}

template<>
inline const char * name<protocol::srv::AudioAuthToken>()
{
  return "protocol/srv/AudioAuthToken";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthToken>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioAuthToken_Request>::value &&
    has_fixed_size<protocol::srv::AudioAuthToken_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioAuthToken>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioAuthToken_Request>::value &&
    has_bounded_size<protocol::srv::AudioAuthToken_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioAuthToken>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioAuthToken_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioAuthToken_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__TRAITS_HPP_
