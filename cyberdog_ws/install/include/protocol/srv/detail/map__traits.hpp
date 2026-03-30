// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/Map.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MAP__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MAP__TRAITS_HPP_

#include "protocol/srv/detail/map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::Map_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: map_build_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_build_type: ";
    value_to_yaml(msg.map_build_type, out);
    out << "\n";
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::Map_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::Map_Request>()
{
  return "protocol::srv::Map_Request";
}

template<>
inline const char * name<protocol::srv::Map_Request>()
{
  return "protocol/srv/Map_Request";
}

template<>
struct has_fixed_size<protocol::srv::Map_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::Map_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::Map_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::Map_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    value_to_yaml(msg.response, out);
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

inline std::string to_yaml(const protocol::srv::Map_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::Map_Response>()
{
  return "protocol::srv::Map_Response";
}

template<>
inline const char * name<protocol::srv::Map_Response>()
{
  return "protocol/srv/Map_Response";
}

template<>
struct has_fixed_size<protocol::srv::Map_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::Map_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::Map_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::Map>()
{
  return "protocol::srv::Map";
}

template<>
inline const char * name<protocol::srv::Map>()
{
  return "protocol/srv/Map";
}

template<>
struct has_fixed_size<protocol::srv::Map>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::Map_Request>::value &&
    has_fixed_size<protocol::srv::Map_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::Map>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::Map_Request>::value &&
    has_bounded_size<protocol::srv::Map_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::Map>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::Map_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::Map_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MAP__TRAITS_HPP_
