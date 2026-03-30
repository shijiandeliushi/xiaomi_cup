// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_

#include "protocol/msg/detail/face_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::FaceResult & msg,
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

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: face_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.face_images.size() == 0) {
      out << "face_images: []\n";
    } else {
      out << "face_images:\n";
      for (auto item : msg.face_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::FaceResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::FaceResult>()
{
  return "protocol::msg::FaceResult";
}

template<>
inline const char * name<protocol::msg::FaceResult>()
{
  return "protocol/msg/FaceResult";
}

template<>
struct has_fixed_size<protocol::msg::FaceResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::FaceResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::FaceResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__FACE_RESULT__TRAITS_HPP_
