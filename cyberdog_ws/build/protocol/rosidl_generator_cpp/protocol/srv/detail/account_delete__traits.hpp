// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AccountDelete.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__TRAITS_HPP_

#include "protocol/srv/detail/account_delete__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountDelete_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "member: ";
    value_to_yaml(msg.member, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AccountDelete_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountDelete_Request>()
{
  return "protocol::srv::AccountDelete_Request";
}

template<>
inline const char * name<protocol::srv::AccountDelete_Request>()
{
  return "protocol/srv/AccountDelete_Request";
}

template<>
struct has_fixed_size<protocol::srv::AccountDelete_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AccountDelete_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AccountDelete_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountDelete_Response & msg,
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

inline std::string to_yaml(const protocol::srv::AccountDelete_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountDelete_Response>()
{
  return "protocol::srv::AccountDelete_Response";
}

template<>
inline const char * name<protocol::srv::AccountDelete_Response>()
{
  return "protocol/srv/AccountDelete_Response";
}

template<>
struct has_fixed_size<protocol::srv::AccountDelete_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AccountDelete_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AccountDelete_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AccountDelete>()
{
  return "protocol::srv::AccountDelete";
}

template<>
inline const char * name<protocol::srv::AccountDelete>()
{
  return "protocol/srv/AccountDelete";
}

template<>
struct has_fixed_size<protocol::srv::AccountDelete>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AccountDelete_Request>::value &&
    has_fixed_size<protocol::srv::AccountDelete_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AccountDelete>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AccountDelete_Request>::value &&
    has_bounded_size<protocol::srv::AccountDelete_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AccountDelete>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AccountDelete_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AccountDelete_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__TRAITS_HPP_
