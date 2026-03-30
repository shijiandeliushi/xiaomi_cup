// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/RearTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__TRAITS_HPP_

#include "protocol/msg/detail/rear_tof_payload__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'left_rear'
// Member 'right_rear'
#include "protocol/msg/detail/single_tof_payload__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::RearTofPayload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rear:\n";
    to_yaml(msg.left_rear, out, indentation + 2);
  }

  // member: right_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rear:\n";
    to_yaml(msg.right_rear, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::RearTofPayload & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::RearTofPayload>()
{
  return "protocol::msg::RearTofPayload";
}

template<>
inline const char * name<protocol::msg::RearTofPayload>()
{
  return "protocol/msg/RearTofPayload";
}

template<>
struct has_fixed_size<protocol::msg::RearTofPayload>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::SingleTofPayload>::value> {};

template<>
struct has_bounded_size<protocol::msg::RearTofPayload>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::SingleTofPayload>::value> {};

template<>
struct is_message<protocol::msg::RearTofPayload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__TRAITS_HPP_
