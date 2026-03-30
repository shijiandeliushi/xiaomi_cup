// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUTH_TOKEN__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__AUTH_TOKEN__TRAITS_HPP_

#include "protocol/msg/detail/auth_token__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::AuthToken & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    value_to_yaml(msg.uid, out);
    out << "\n";
  }

  // member: token_access
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_access: ";
    value_to_yaml(msg.token_access, out);
    out << "\n";
  }

  // member: token_fresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_fresh: ";
    value_to_yaml(msg.token_fresh, out);
    out << "\n";
  }

  // member: token_expirein
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token_expirein: ";
    value_to_yaml(msg.token_expirein, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::AuthToken & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::AuthToken>()
{
  return "protocol::msg::AuthToken";
}

template<>
inline const char * name<protocol::msg::AuthToken>()
{
  return "protocol/msg/AuthToken";
}

template<>
struct has_fixed_size<protocol::msg::AuthToken>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::AuthToken>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::AuthToken>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__AUTH_TOKEN__TRAITS_HPP_
