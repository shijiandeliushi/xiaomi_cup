// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/GestureActionControl.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__TRAITS_HPP_

#include "protocol/srv/detail/gesture_action_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GestureActionControl_Request & msg,
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

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    value_to_yaml(msg.timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::GestureActionControl_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GestureActionControl_Request>()
{
  return "protocol::srv::GestureActionControl_Request";
}

template<>
inline const char * name<protocol::srv::GestureActionControl_Request>()
{
  return "protocol/srv/GestureActionControl_Request";
}

template<>
struct has_fixed_size<protocol::srv::GestureActionControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::GestureActionControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::GestureActionControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GestureActionControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const protocol::srv::GestureActionControl_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GestureActionControl_Response>()
{
  return "protocol::srv::GestureActionControl_Response";
}

template<>
inline const char * name<protocol::srv::GestureActionControl_Response>()
{
  return "protocol/srv/GestureActionControl_Response";
}

template<>
struct has_fixed_size<protocol::srv::GestureActionControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::GestureActionControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::GestureActionControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::GestureActionControl>()
{
  return "protocol::srv::GestureActionControl";
}

template<>
inline const char * name<protocol::srv::GestureActionControl>()
{
  return "protocol/srv/GestureActionControl";
}

template<>
struct has_fixed_size<protocol::srv::GestureActionControl>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::GestureActionControl_Request>::value &&
    has_fixed_size<protocol::srv::GestureActionControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::GestureActionControl>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::GestureActionControl_Request>::value &&
    has_bounded_size<protocol::srv::GestureActionControl_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::GestureActionControl>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::GestureActionControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::GestureActionControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__TRAITS_HPP_
