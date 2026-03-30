// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/OtaServerCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__TRAITS_HPP_

#include "protocol/srv/detail/ota_server_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "protocol/msg/detail/ota_cmd__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::OtaServerCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::OtaServerCmd_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::OtaServerCmd_Request>()
{
  return "protocol::srv::OtaServerCmd_Request";
}

template<>
inline const char * name<protocol::srv::OtaServerCmd_Request>()
{
  return "protocol/srv/OtaServerCmd_Request";
}

template<>
struct has_fixed_size<protocol::srv::OtaServerCmd_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::OtaCmd>::value> {};

template<>
struct has_bounded_size<protocol::srv::OtaServerCmd_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::OtaCmd>::value> {};

template<>
struct is_message<protocol::srv::OtaServerCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
// already included above
// #include "protocol/msg/detail/ota_cmd__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::OtaServerCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_yaml(msg.response, out, indentation + 2);
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

inline std::string to_yaml(const protocol::srv::OtaServerCmd_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::OtaServerCmd_Response>()
{
  return "protocol::srv::OtaServerCmd_Response";
}

template<>
inline const char * name<protocol::srv::OtaServerCmd_Response>()
{
  return "protocol/srv/OtaServerCmd_Response";
}

template<>
struct has_fixed_size<protocol::srv::OtaServerCmd_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::OtaCmd>::value> {};

template<>
struct has_bounded_size<protocol::srv::OtaServerCmd_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::OtaCmd>::value> {};

template<>
struct is_message<protocol::srv::OtaServerCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::OtaServerCmd>()
{
  return "protocol::srv::OtaServerCmd";
}

template<>
inline const char * name<protocol::srv::OtaServerCmd>()
{
  return "protocol/srv/OtaServerCmd";
}

template<>
struct has_fixed_size<protocol::srv::OtaServerCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::OtaServerCmd_Request>::value &&
    has_fixed_size<protocol::srv::OtaServerCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::OtaServerCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::OtaServerCmd_Request>::value &&
    has_bounded_size<protocol::srv::OtaServerCmd_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::OtaServerCmd>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::OtaServerCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::OtaServerCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__TRAITS_HPP_
