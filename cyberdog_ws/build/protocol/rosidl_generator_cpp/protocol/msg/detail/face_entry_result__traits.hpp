// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/FaceEntryResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__TRAITS_HPP_

#include "protocol/msg/detail/face_entry_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::FaceEntryResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: username
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "username: ";
    value_to_yaml(msg.username, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::FaceEntryResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::FaceEntryResult>()
{
  return "protocol::msg::FaceEntryResult";
}

template<>
inline const char * name<protocol::msg::FaceEntryResult>()
{
  return "protocol/msg/FaceEntryResult";
}

template<>
struct has_fixed_size<protocol::msg::FaceEntryResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::FaceEntryResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::FaceEntryResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__TRAITS_HPP_
