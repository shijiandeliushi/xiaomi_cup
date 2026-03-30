// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/NavMode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__NAV_MODE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__NAV_MODE__TRAITS_HPP_

#include "protocol/srv/detail/nav_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::NavMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_mode: ";
    value_to_yaml(msg.sub_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::NavMode_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::NavMode_Request>()
{
  return "protocol::srv::NavMode_Request";
}

template<>
inline const char * name<protocol::srv::NavMode_Request>()
{
  return "protocol/srv/NavMode_Request";
}

template<>
struct has_fixed_size<protocol::srv::NavMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::NavMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::NavMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::NavMode_Response & msg,
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

inline std::string to_yaml(const protocol::srv::NavMode_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::NavMode_Response>()
{
  return "protocol::srv::NavMode_Response";
}

template<>
inline const char * name<protocol::srv::NavMode_Response>()
{
  return "protocol/srv/NavMode_Response";
}

template<>
struct has_fixed_size<protocol::srv::NavMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::NavMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::NavMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::NavMode>()
{
  return "protocol::srv::NavMode";
}

template<>
inline const char * name<protocol::srv::NavMode>()
{
  return "protocol/srv/NavMode";
}

template<>
struct has_fixed_size<protocol::srv::NavMode>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::NavMode_Request>::value &&
    has_fixed_size<protocol::srv::NavMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::NavMode>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::NavMode_Request>::value &&
    has_bounded_size<protocol::srv::NavMode_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::NavMode>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::NavMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::NavMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__NAV_MODE__TRAITS_HPP_
