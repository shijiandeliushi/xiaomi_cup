// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__FACE__TRAITS_HPP_

#include "protocol/msg/detail/face__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Face & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_yaml(msg.roi, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: match
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "match: ";
    value_to_yaml(msg.match, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row: ";
    value_to_yaml(msg.row, out);
    out << "\n";
  }

  // member: is_host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_host: ";
    value_to_yaml(msg.is_host, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: emotion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emotion: ";
    value_to_yaml(msg.emotion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Face & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Face>()
{
  return "protocol::msg::Face";
}

template<>
inline const char * name<protocol::msg::Face>()
{
  return "protocol/msg/Face";
}

template<>
struct has_fixed_size<protocol::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::Face>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__FACE__TRAITS_HPP_
