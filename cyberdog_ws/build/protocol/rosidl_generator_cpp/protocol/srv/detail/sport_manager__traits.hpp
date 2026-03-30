// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/SportManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SPORT_MANAGER__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__SPORT_MANAGER__TRAITS_HPP_

#include "protocol/srv/detail/sport_manager__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SportManager_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sport_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sport_type: ";
    value_to_yaml(msg.sport_type, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counts: ";
    value_to_yaml(msg.counts, out);
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

inline std::string to_yaml(const protocol::srv::SportManager_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SportManager_Request>()
{
  return "protocol::srv::SportManager_Request";
}

template<>
inline const char * name<protocol::srv::SportManager_Request>()
{
  return "protocol/srv/SportManager_Request";
}

template<>
struct has_fixed_size<protocol::srv::SportManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::SportManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::SportManager_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SportManager_Response & msg,
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

inline std::string to_yaml(const protocol::srv::SportManager_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SportManager_Response>()
{
  return "protocol::srv::SportManager_Response";
}

template<>
inline const char * name<protocol::srv::SportManager_Response>()
{
  return "protocol/srv/SportManager_Response";
}

template<>
struct has_fixed_size<protocol::srv::SportManager_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SportManager_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SportManager_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::SportManager>()
{
  return "protocol::srv::SportManager";
}

template<>
inline const char * name<protocol::srv::SportManager>()
{
  return "protocol/srv/SportManager";
}

template<>
struct has_fixed_size<protocol::srv::SportManager>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::SportManager_Request>::value &&
    has_fixed_size<protocol::srv::SportManager_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::SportManager>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::SportManager_Request>::value &&
    has_bounded_size<protocol::srv::SportManager_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::SportManager>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::SportManager_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::SportManager_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__SPORT_MANAGER__TRAITS_HPP_
