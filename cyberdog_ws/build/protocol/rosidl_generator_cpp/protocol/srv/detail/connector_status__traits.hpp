// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_

#include "protocol/srv/detail/connector_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ConnectorStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::ConnectorStatus_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ConnectorStatus_Request>()
{
  return "protocol::srv::ConnectorStatus_Request";
}

template<>
inline const char * name<protocol::srv::ConnectorStatus_Request>()
{
  return "protocol/srv/ConnectorStatus_Request";
}

template<>
struct has_fixed_size<protocol::srv::ConnectorStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::ConnectorStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::ConnectorStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ConnectorStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_connected: ";
    value_to_yaml(msg.is_connected, out);
    out << "\n";
  }

  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: strength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strength: ";
    value_to_yaml(msg.strength, out);
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

inline std::string to_yaml(const protocol::srv::ConnectorStatus_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ConnectorStatus_Response>()
{
  return "protocol::srv::ConnectorStatus_Response";
}

template<>
inline const char * name<protocol::srv::ConnectorStatus_Response>()
{
  return "protocol/srv/ConnectorStatus_Response";
}

template<>
struct has_fixed_size<protocol::srv::ConnectorStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::ConnectorStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::ConnectorStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::ConnectorStatus>()
{
  return "protocol::srv::ConnectorStatus";
}

template<>
inline const char * name<protocol::srv::ConnectorStatus>()
{
  return "protocol/srv/ConnectorStatus";
}

template<>
struct has_fixed_size<protocol::srv::ConnectorStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::ConnectorStatus_Request>::value &&
    has_fixed_size<protocol::srv::ConnectorStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::ConnectorStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::ConnectorStatus_Request>::value &&
    has_bounded_size<protocol::srv::ConnectorStatus_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::ConnectorStatus>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::ConnectorStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::ConnectorStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__TRAITS_HPP_
