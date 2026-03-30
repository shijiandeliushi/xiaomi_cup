// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/HeadTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__TRAITS_HPP_

#include "protocol/msg/detail/head_tof_payload__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'left_head'
// Member 'right_head'
#include "protocol/msg/detail/single_tof_payload__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::HeadTofPayload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_head:\n";
    to_yaml(msg.left_head, out, indentation + 2);
  }

  // member: right_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_head:\n";
    to_yaml(msg.right_head, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::HeadTofPayload & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::HeadTofPayload>()
{
  return "protocol::msg::HeadTofPayload";
}

template<>
inline const char * name<protocol::msg::HeadTofPayload>()
{
  return "protocol/msg/HeadTofPayload";
}

template<>
struct has_fixed_size<protocol::msg::HeadTofPayload>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::SingleTofPayload>::value> {};

template<>
struct has_bounded_size<protocol::msg::HeadTofPayload>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::SingleTofPayload>::value> {};

template<>
struct is_message<protocol::msg::HeadTofPayload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__TRAITS_HPP_
