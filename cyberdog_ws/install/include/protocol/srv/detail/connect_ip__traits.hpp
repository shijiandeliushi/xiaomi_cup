// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/ConnectIp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECT_IP__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECT_IP__TRAITS_HPP_

#include "protocol/srv/detail/connect_ip__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ConnectIp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_address: ";
    value_to_yaml(msg.ip_address, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::ConnectIp_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ConnectIp_Request>()
{
  return "protocol::srv::ConnectIp_Request";
}

template<>
inline const char * name<protocol::srv::ConnectIp_Request>()
{
  return "protocol/srv/ConnectIp_Request";
}

template<>
struct has_fixed_size<protocol::srv::ConnectIp_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::ConnectIp_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::ConnectIp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ConnectIp_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::ConnectIp_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ConnectIp_Response>()
{
  return "protocol::srv::ConnectIp_Response";
}

template<>
inline const char * name<protocol::srv::ConnectIp_Response>()
{
  return "protocol/srv/ConnectIp_Response";
}

template<>
struct has_fixed_size<protocol::srv::ConnectIp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::ConnectIp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::ConnectIp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::ConnectIp>()
{
  return "protocol::srv::ConnectIp";
}

template<>
inline const char * name<protocol::srv::ConnectIp>()
{
  return "protocol/srv/ConnectIp";
}

template<>
struct has_fixed_size<protocol::srv::ConnectIp>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::ConnectIp_Request>::value &&
    has_fixed_size<protocol::srv::ConnectIp_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::ConnectIp>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::ConnectIp_Request>::value &&
    has_bounded_size<protocol::srv::ConnectIp_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::ConnectIp>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::ConnectIp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::ConnectIp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__CONNECT_IP__TRAITS_HPP_
