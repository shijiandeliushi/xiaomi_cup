// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/motion_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionStatus & msg,
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

  // member: contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact: ";
    value_to_yaml(msg.contact, out);
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

  // member: switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_status: ";
    value_to_yaml(msg.switch_status, out);
    out << "\n";
  }

  // member: ori_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ori_error: ";
    value_to_yaml(msg.ori_error, out);
    out << "\n";
  }

  // member: footpos_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footpos_error: ";
    value_to_yaml(msg.footpos_error, out);
    out << "\n";
  }

  // member: motor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_error.size() == 0) {
      out << "motor_error: []\n";
    } else {
      out << "motor_error:\n";
      for (auto item : msg.motor_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MotionStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionStatus>()
{
  return "protocol::msg::MotionStatus";
}

template<>
inline const char * name<protocol::msg::MotionStatus>()
{
  return "protocol/msg/MotionStatus";
}

template<>
struct has_fixed_size<protocol::msg::MotionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::MotionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::MotionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_STATUS__TRAITS_HPP_
