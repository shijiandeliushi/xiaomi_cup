// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACK_RESULT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__TRACK_RESULT__TRAITS_HPP_

#include "protocol/msg/detail/track_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::TrackResult & msg,
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

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::TrackResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::TrackResult>()
{
  return "protocol::msg::TrackResult";
}

template<>
inline const char * name<protocol::msg::TrackResult>()
{
  return "protocol/msg/TrackResult";
}

template<>
struct has_fixed_size<protocol::msg::TrackResult>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<protocol::msg::TrackResult>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<protocol::msg::TrackResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__TRACK_RESULT__TRAITS_HPP_
