// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/TrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACKING_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__TRACKING_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/tracking_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::TrackingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::TrackingStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::TrackingStatus>()
{
  return "protocol::msg::TrackingStatus";
}

template<>
inline const char * name<protocol::msg::TrackingStatus>()
{
  return "protocol/msg/TrackingStatus";
}

template<>
struct has_fixed_size<protocol::msg::TrackingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::TrackingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::TrackingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__TRACKING_STATUS__TRAITS_HPP_
