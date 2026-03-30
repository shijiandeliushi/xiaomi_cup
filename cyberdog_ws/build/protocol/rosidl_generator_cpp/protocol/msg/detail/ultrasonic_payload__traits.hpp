// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/UltrasonicPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__TRAITS_HPP_

#include "protocol/msg/detail/ultrasonic_payload__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'ultrasonic_info'
#include "sensor_msgs/msg/detail/range__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::UltrasonicPayload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ultrasonic_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_info:\n";
    to_yaml(msg.ultrasonic_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::UltrasonicPayload & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::UltrasonicPayload>()
{
  return "protocol::msg::UltrasonicPayload";
}

template<>
inline const char * name<protocol::msg::UltrasonicPayload>()
{
  return "protocol/msg/UltrasonicPayload";
}

template<>
struct has_fixed_size<protocol::msg::UltrasonicPayload>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Range>::value> {};

template<>
struct has_bounded_size<protocol::msg::UltrasonicPayload>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Range>::value> {};

template<>
struct is_message<protocol::msg::UltrasonicPayload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__TRAITS_HPP_
