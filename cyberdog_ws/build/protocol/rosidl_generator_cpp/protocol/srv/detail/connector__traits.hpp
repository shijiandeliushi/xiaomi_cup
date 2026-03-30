// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/Connector.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR__TRAITS_HPP_

#include "protocol/srv/detail/connector__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::Connector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wifi_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wifi_name: ";
    value_to_yaml(msg.wifi_name, out);
    out << "\n";
  }

  // member: wifi_password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wifi_password: ";
    value_to_yaml(msg.wifi_password, out);
    out << "\n";
  }

  // member: provider_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "provider_ip: ";
    value_to_yaml(msg.provider_ip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::Connector_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::Connector_Request>()
{
  return "protocol::srv::Connector_Request";
}

template<>
inline const char * name<protocol::srv::Connector_Request>()
{
  return "protocol/srv/Connector_Request";
}

template<>
struct has_fixed_size<protocol::srv::Connector_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::Connector_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::Connector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::Connector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    value_to_yaml(msg.connected, out);
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

inline std::string to_yaml(const protocol::srv::Connector_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::Connector_Response>()
{
  return "protocol::srv::Connector_Response";
}

template<>
inline const char * name<protocol::srv::Connector_Response>()
{
  return "protocol/srv/Connector_Response";
}

template<>
struct has_fixed_size<protocol::srv::Connector_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::Connector_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::Connector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::Connector>()
{
  return "protocol::srv::Connector";
}

template<>
inline const char * name<protocol::srv::Connector>()
{
  return "protocol/srv/Connector";
}

template<>
struct has_fixed_size<protocol::srv::Connector>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::Connector_Request>::value &&
    has_fixed_size<protocol::srv::Connector_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::Connector>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::Connector_Request>::value &&
    has_bounded_size<protocol::srv::Connector_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::Connector>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::Connector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::Connector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR__TRAITS_HPP_
