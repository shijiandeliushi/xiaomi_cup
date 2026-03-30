// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionSequenceParam.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__TRAITS_HPP_

#include "protocol/msg/detail/motion_sequence_param__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'centroid_height'
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionSequenceParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_yaml(msg.twist, out, indentation + 2);
  }

  // member: centroid_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_height:\n";
    to_yaml(msg.centroid_height, out, indentation + 2);
  }

  // member: right_forefoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_forefoot:\n";
    to_yaml(msg.right_forefoot, out, indentation + 2);
  }

  // member: left_forefoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_forefoot:\n";
    to_yaml(msg.left_forefoot, out, indentation + 2);
  }

  // member: right_hindfoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hindfoot:\n";
    to_yaml(msg.right_hindfoot, out, indentation + 2);
  }

  // member: left_hindfoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hindfoot:\n";
    to_yaml(msg.left_hindfoot, out, indentation + 2);
  }

  // member: forefoot_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forefoot_height: ";
    value_to_yaml(msg.forefoot_height, out);
    out << "\n";
  }

  // member: hindfoot_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hindfoot_height: ";
    value_to_yaml(msg.hindfoot_height, out);
    out << "\n";
  }

  // member: friction_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_coefficient: ";
    value_to_yaml(msg.friction_coefficient, out);
    out << "\n";
  }

  // member: duration_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_ms: ";
    value_to_yaml(msg.duration_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MotionSequenceParam & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionSequenceParam>()
{
  return "protocol::msg::MotionSequenceParam";
}

template<>
inline const char * name<protocol::msg::MotionSequenceParam>()
{
  return "protocol/msg/MotionSequenceParam";
}

template<>
struct has_fixed_size<protocol::msg::MotionSequenceParam>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<protocol::msg::MotionSequenceParam>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<protocol::msg::MotionSequenceParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__TRAITS_HPP_
