// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AccountSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__TRAITS_HPP_

#include "protocol/srv/detail/account_search__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountSearch_Request & msg,
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

inline std::string to_yaml(const protocol::srv::AccountSearch_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountSearch_Request>()
{
  return "protocol::srv::AccountSearch_Request";
}

template<>
inline const char * name<protocol::srv::AccountSearch_Request>()
{
  return "protocol/srv/AccountSearch_Request";
}

template<>
struct has_fixed_size<protocol::srv::AccountSearch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AccountSearch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AccountSearch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AccountSearch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    value_to_yaml(msg.data, out);
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

inline std::string to_yaml(const protocol::srv::AccountSearch_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AccountSearch_Response>()
{
  return "protocol::srv::AccountSearch_Response";
}

template<>
inline const char * name<protocol::srv::AccountSearch_Response>()
{
  return "protocol/srv/AccountSearch_Response";
}

template<>
struct has_fixed_size<protocol::srv::AccountSearch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AccountSearch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AccountSearch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AccountSearch>()
{
  return "protocol::srv::AccountSearch";
}

template<>
inline const char * name<protocol::srv::AccountSearch>()
{
  return "protocol/srv/AccountSearch";
}

template<>
struct has_fixed_size<protocol::srv::AccountSearch>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AccountSearch_Request>::value &&
    has_fixed_size<protocol::srv::AccountSearch_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AccountSearch>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AccountSearch_Request>::value &&
    has_bounded_size<protocol::srv::AccountSearch_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AccountSearch>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AccountSearch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AccountSearch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__TRAITS_HPP_
