// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__PERSON__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "protocol/msg/detail/person__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'face_info'
#include "protocol/msg/detail/face_info__traits.hpp"
// Member 'body_info'
#include "protocol/msg/detail/body_info__traits.hpp"
// Member 'track_res'
#include "protocol/msg/detail/track_result__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Person & msg,
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

  // member: face_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face_info:\n";
    to_yaml(msg.face_info, out, indentation + 2);
  }

  // member: body_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_info:\n";
    to_yaml(msg.body_info, out, indentation + 2);
  }

  // member: track_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_res:\n";
    to_yaml(msg.track_res, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Person & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Person>()
{
  return "protocol::msg::Person";
}

template<>
inline const char * name<protocol::msg::Person>()
{
  return "protocol/msg/Person";
}

template<>
struct has_fixed_size<protocol::msg::Person>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::BodyInfo>::value && has_fixed_size<protocol::msg::FaceInfo>::value && has_fixed_size<protocol::msg::TrackResult>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<protocol::msg::Person>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::BodyInfo>::value && has_bounded_size<protocol::msg::FaceInfo>::value && has_bounded_size<protocol::msg::TrackResult>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<protocol::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__PERSON__TRAITS_HPP_
