// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__TRAITS_HPP_

#include "protocol/msg/detail/motion_sequence_gait__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionSequenceGait & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_forefoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_forefoot: ";
    value_to_yaml(msg.right_forefoot, out);
    out << "\n";
  }

  // member: left_forefoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_forefoot: ";
    value_to_yaml(msg.left_forefoot, out);
    out << "\n";
  }

  // member: right_hindfoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hindfoot: ";
    value_to_yaml(msg.right_hindfoot, out);
    out << "\n";
  }

  // member: left_hindfoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hindfoot: ";
    value_to_yaml(msg.left_hindfoot, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MotionSequenceGait & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionSequenceGait>()
{
  return "protocol::msg::MotionSequenceGait";
}

template<>
inline const char * name<protocol::msg::MotionSequenceGait>()
{
  return "protocol/msg/MotionSequenceGait";
}

template<>
struct has_fixed_size<protocol::msg::MotionSequenceGait>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::MotionSequenceGait>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::MotionSequenceGait>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__TRAITS_HPP_
