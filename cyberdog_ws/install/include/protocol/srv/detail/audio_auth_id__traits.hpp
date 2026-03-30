// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioAuthId.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__TRAITS_HPP_

#include "protocol/srv/detail/audio_auth_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioAuthId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AudioAuthId_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioAuthId_Request>()
{
  return "protocol::srv::AudioAuthId_Request";
}

template<>
inline const char * name<protocol::srv::AudioAuthId_Request>()
{
  return "protocol/srv/AudioAuthId_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioAuthId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioAuthId_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioAuthId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: did
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "did: ";
    value_to_yaml(msg.did, out);
    out << "\n";
  }

  // member: sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sn: ";
    value_to_yaml(msg.sn, out);
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

inline std::string to_yaml(const protocol::srv::AudioAuthId_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioAuthId_Response>()
{
  return "protocol::srv::AudioAuthId_Response";
}

template<>
inline const char * name<protocol::srv::AudioAuthId_Response>()
{
  return "protocol/srv/AudioAuthId_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AudioAuthId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AudioAuthId_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioAuthId>()
{
  return "protocol::srv::AudioAuthId";
}

template<>
inline const char * name<protocol::srv::AudioAuthId>()
{
  return "protocol/srv/AudioAuthId";
}

template<>
struct has_fixed_size<protocol::srv::AudioAuthId>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioAuthId_Request>::value &&
    has_fixed_size<protocol::srv::AudioAuthId_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioAuthId>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioAuthId_Request>::value &&
    has_bounded_size<protocol::srv::AudioAuthId_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioAuthId>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioAuthId_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioAuthId_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__TRAITS_HPP_
