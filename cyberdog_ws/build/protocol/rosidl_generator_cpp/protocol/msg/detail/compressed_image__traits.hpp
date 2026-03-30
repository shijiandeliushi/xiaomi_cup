// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_

#include "protocol/msg/detail/compressed_image__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::CompressedImage & msg,
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

  // member: format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "format: ";
    value_to_yaml(msg.format, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::CompressedImage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::CompressedImage>()
{
  return "protocol::msg::CompressedImage";
}

template<>
inline const char * name<protocol::msg::CompressedImage>()
{
  return "protocol/msg/CompressedImage";
}

template<>
struct has_fixed_size<protocol::msg::CompressedImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::CompressedImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::CompressedImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__TRAITS_HPP_
