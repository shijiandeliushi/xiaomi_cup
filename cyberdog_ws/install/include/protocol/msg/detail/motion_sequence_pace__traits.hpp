// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionSequencePace.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__TRAITS_HPP_

#include "protocol/msg/detail/motion_sequence_pace__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'twist'
// Member 'weight'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'right_forefoot'
// Member 'left_forefoot'
// Member 'right_hindfoot'
// Member 'left_hindfoot'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionSequencePace & msg,
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

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_yaml(msg.centroid, out, indentation + 2);
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight:\n";
    to_yaml(msg.weight, out, indentation + 2);
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

  // member: friction_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_coefficient: ";
    value_to_yaml(msg.friction_coefficient, out);
    out << "\n";
  }

  // member: landing_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_gain: ";
    value_to_yaml(msg.landing_gain, out);
    out << "\n";
  }

  // member: use_mpc_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_mpc_track: ";
    value_to_yaml(msg.use_mpc_track, out);
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

inline std::string to_yaml(const protocol::msg::MotionSequencePace & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionSequencePace>()
{
  return "protocol::msg::MotionSequencePace";
}

template<>
inline const char * name<protocol::msg::MotionSequencePace>()
{
  return "protocol/msg/MotionSequencePace";
}

template<>
struct has_fixed_size<protocol::msg::MotionSequencePace>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<protocol::msg::MotionSequencePace>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<protocol::msg::MotionSequencePace>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__TRAITS_HPP_
