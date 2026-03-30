// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionCode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CODE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_CODE__TRAITS_HPP_

#include "protocol/msg/detail/motion_code__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionCode & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MotionCode & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionCode>()
{
  return "protocol::msg::MotionCode";
}

template<>
inline const char * name<protocol::msg::MotionCode>()
{
  return "protocol/msg/MotionCode";
}

template<>
struct has_fixed_size<protocol::msg::MotionCode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::MotionCode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::MotionCode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CODE__TRAITS_HPP_
