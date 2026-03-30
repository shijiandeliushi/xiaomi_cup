// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__LED_EXECUTE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__LED_EXECUTE__TRAITS_HPP_

#include "protocol/srv/detail/led_execute__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::LedExecute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupation: ";
    value_to_yaml(msg.occupation, out);
    out << "\n";
  }

  // member: client
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client: ";
    value_to_yaml(msg.client, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect: ";
    value_to_yaml(msg.effect, out);
    out << "\n";
  }

  // member: r_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_value: ";
    value_to_yaml(msg.r_value, out);
    out << "\n";
  }

  // member: g_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g_value: ";
    value_to_yaml(msg.g_value, out);
    out << "\n";
  }

  // member: b_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_value: ";
    value_to_yaml(msg.b_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::LedExecute_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::LedExecute_Request>()
{
  return "protocol::srv::LedExecute_Request";
}

template<>
inline const char * name<protocol::srv::LedExecute_Request>()
{
  return "protocol/srv/LedExecute_Request";
}

template<>
struct has_fixed_size<protocol::srv::LedExecute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::LedExecute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::LedExecute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::LedExecute_Response & msg,
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

inline std::string to_yaml(const protocol::srv::LedExecute_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::LedExecute_Response>()
{
  return "protocol::srv::LedExecute_Response";
}

template<>
inline const char * name<protocol::srv::LedExecute_Response>()
{
  return "protocol/srv/LedExecute_Response";
}

template<>
struct has_fixed_size<protocol::srv::LedExecute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::LedExecute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::LedExecute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::LedExecute>()
{
  return "protocol::srv::LedExecute";
}

template<>
inline const char * name<protocol::srv::LedExecute>()
{
  return "protocol/srv/LedExecute";
}

template<>
struct has_fixed_size<protocol::srv::LedExecute>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::LedExecute_Request>::value &&
    has_fixed_size<protocol::srv::LedExecute_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::LedExecute>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::LedExecute_Request>::value &&
    has_bounded_size<protocol::srv::LedExecute_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::LedExecute>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::LedExecute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::LedExecute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__LED_EXECUTE__TRAITS_HPP_
