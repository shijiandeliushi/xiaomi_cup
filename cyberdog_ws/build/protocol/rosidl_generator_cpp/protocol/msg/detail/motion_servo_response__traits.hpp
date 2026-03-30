// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__TRAITS_HPP_

#include "protocol/msg/detail/motion_servo_response__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionServoResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_id: ";
    value_to_yaml(msg.motion_id, out);
    out << "\n";
  }

  // member: cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_id: ";
    value_to_yaml(msg.cmd_id, out);
    out << "\n";
  }

  // member: order_process_bar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_process_bar: ";
    value_to_yaml(msg.order_process_bar, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

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

inline std::string to_yaml(const protocol::msg::MotionServoResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionServoResponse>()
{
  return "protocol::msg::MotionServoResponse";
}

template<>
inline const char * name<protocol::msg::MotionServoResponse>()
{
  return "protocol/msg/MotionServoResponse";
}

template<>
struct has_fixed_size<protocol::msg::MotionServoResponse>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::MotionServoResponse>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::MotionServoResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__TRAITS_HPP_
