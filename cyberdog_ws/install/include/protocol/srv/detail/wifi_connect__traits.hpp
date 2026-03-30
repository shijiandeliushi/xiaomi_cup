// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__WIFI_CONNECT__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__WIFI_CONNECT__TRAITS_HPP_

#include "protocol/srv/detail/wifi_connect__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::WifiConnect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: pwd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwd: ";
    value_to_yaml(msg.pwd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::WifiConnect_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::WifiConnect_Request>()
{
  return "protocol::srv::WifiConnect_Request";
}

template<>
inline const char * name<protocol::srv::WifiConnect_Request>()
{
  return "protocol/srv/WifiConnect_Request";
}

template<>
struct has_fixed_size<protocol::srv::WifiConnect_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::WifiConnect_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::WifiConnect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::WifiConnect_Response & msg,
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

inline std::string to_yaml(const protocol::srv::WifiConnect_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::WifiConnect_Response>()
{
  return "protocol::srv::WifiConnect_Response";
}

template<>
inline const char * name<protocol::srv::WifiConnect_Response>()
{
  return "protocol/srv/WifiConnect_Response";
}

template<>
struct has_fixed_size<protocol::srv::WifiConnect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::WifiConnect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::WifiConnect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::WifiConnect>()
{
  return "protocol::srv::WifiConnect";
}

template<>
inline const char * name<protocol::srv::WifiConnect>()
{
  return "protocol/srv/WifiConnect";
}

template<>
struct has_fixed_size<protocol::srv::WifiConnect>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::WifiConnect_Request>::value &&
    has_fixed_size<protocol::srv::WifiConnect_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::WifiConnect>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::WifiConnect_Request>::value &&
    has_bounded_size<protocol::srv::WifiConnect_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::WifiConnect>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::WifiConnect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::WifiConnect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__WIFI_CONNECT__TRAITS_HPP_
