// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AccountChange.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__TRAITS_HPP_

#include "protocol/srv/detail/account_change__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountChange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pre_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_name: ";
    value_to_yaml(msg.pre_name, out);
    out << "\n";
  }

  // member: new_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_name: ";
    value_to_yaml(msg.new_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AccountChange_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountChange_Request>()
{
  return "protocol::srv::AccountChange_Request";
}

template<>
inline const char * name<protocol::srv::AccountChange_Request>()
{
  return "protocol/srv/AccountChange_Request";
}

template<>
struct has_fixed_size<protocol::srv::AccountChange_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AccountChange_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AccountChange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountChange_Response & msg,
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

inline std::string to_yaml(const protocol::srv::AccountChange_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountChange_Response>()
{
  return "protocol::srv::AccountChange_Response";
}

template<>
inline const char * name<protocol::srv::AccountChange_Response>()
{
  return "protocol/srv/AccountChange_Response";
}

template<>
struct has_fixed_size<protocol::srv::AccountChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AccountChange_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AccountChange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AccountChange>()
{
  return "protocol::srv::AccountChange";
}

template<>
inline const char * name<protocol::srv::AccountChange>()
{
  return "protocol/srv/AccountChange";
}

template<>
struct has_fixed_size<protocol::srv::AccountChange>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AccountChange_Request>::value &&
    has_fixed_size<protocol::srv::AccountChange_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AccountChange>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AccountChange_Request>::value &&
    has_bounded_size<protocol::srv::AccountChange_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AccountChange>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AccountChange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AccountChange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__TRAITS_HPP_
