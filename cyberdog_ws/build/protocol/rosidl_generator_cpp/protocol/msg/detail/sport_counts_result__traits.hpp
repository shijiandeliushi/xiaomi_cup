// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__TRAITS_HPP_

#include "protocol/msg/detail/sport_counts_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::SportCountsResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: algo_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algo_switch: ";
    value_to_yaml(msg.algo_switch, out);
    out << "\n";
  }

  // member: sport_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sport_type: ";
    value_to_yaml(msg.sport_type, out);
    out << "\n";
  }

  // member: counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counts: ";
    value_to_yaml(msg.counts, out);
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

inline std::string to_yaml(const protocol::msg::SportCountsResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::SportCountsResult>()
{
  return "protocol::msg::SportCountsResult";
}

template<>
inline const char * name<protocol::msg::SportCountsResult>()
{
  return "protocol/msg/SportCountsResult";
}

template<>
struct has_fixed_size<protocol::msg::SportCountsResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::SportCountsResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::SportCountsResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__TRAITS_HPP_
