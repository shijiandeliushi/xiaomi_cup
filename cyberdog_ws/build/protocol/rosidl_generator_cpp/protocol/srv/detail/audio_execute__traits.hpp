// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AudioExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__TRAITS_HPP_

#include "protocol/srv/detail/audio_execute__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'status'
#include "protocol/msg/detail/audio_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioExecute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: client
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client: ";
    value_to_yaml(msg.client, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AudioExecute_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioExecute_Request>()
{
  return "protocol::srv::AudioExecute_Request";
}

template<>
inline const char * name<protocol::srv::AudioExecute_Request>()
{
  return "protocol/srv/AudioExecute_Request";
}

template<>
struct has_fixed_size<protocol::srv::AudioExecute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AudioExecute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AudioExecute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AudioExecute_Response & msg,
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

inline std::string to_yaml(const protocol::srv::AudioExecute_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AudioExecute_Response>()
{
  return "protocol::srv::AudioExecute_Response";
}

template<>
inline const char * name<protocol::srv::AudioExecute_Response>()
{
  return "protocol/srv/AudioExecute_Response";
}

template<>
struct has_fixed_size<protocol::srv::AudioExecute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AudioExecute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AudioExecute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AudioExecute>()
{
  return "protocol::srv::AudioExecute";
}

template<>
inline const char * name<protocol::srv::AudioExecute>()
{
  return "protocol/srv/AudioExecute";
}

template<>
struct has_fixed_size<protocol::srv::AudioExecute>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AudioExecute_Request>::value &&
    has_fixed_size<protocol::srv::AudioExecute_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AudioExecute>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AudioExecute_Request>::value &&
    has_bounded_size<protocol::srv::AudioExecute_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AudioExecute>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AudioExecute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AudioExecute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__TRAITS_HPP_
