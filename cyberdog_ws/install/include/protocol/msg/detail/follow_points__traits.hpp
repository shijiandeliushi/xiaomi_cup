// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/FollowPoints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__TRAITS_HPP_

#include "protocol/msg/detail/follow_points__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::FollowPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token: ";
    value_to_yaml(msg.token, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::FollowPoints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::FollowPoints>()
{
  return "protocol::msg::FollowPoints";
}

template<>
inline const char * name<protocol::msg::FollowPoints>()
{
  return "protocol/msg/FollowPoints";
}

template<>
struct has_fixed_size<protocol::msg::FollowPoints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::FollowPoints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::FollowPoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__TRAITS_HPP_
