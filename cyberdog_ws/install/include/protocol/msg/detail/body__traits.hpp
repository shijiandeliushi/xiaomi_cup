// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__BODY__TRAITS_HPP_

#include "protocol/msg/detail/body__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"
// Member 'keypoints'
#include "protocol/msg/detail/keypoint__traits.hpp"
// Member 'gesture'
#include "protocol/msg/detail/gesture__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::Body & msg,
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

  // member: reid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reid: ";
    value_to_yaml(msg.reid, out);
    out << "\n";
  }

  // member: feats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feats.size() == 0) {
      out << "feats: []\n";
    } else {
      out << "feats:\n";
      for (auto item : msg.feats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []\n";
    } else {
      out << "keypoints:\n";
      for (auto item : msg.keypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: gesture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture:\n";
    to_yaml(msg.gesture, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::Body & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::Body>()
{
  return "protocol::msg::Body";
}

template<>
inline const char * name<protocol::msg::Body>()
{
  return "protocol/msg/Body";
}

template<>
struct has_fixed_size<protocol::msg::Body>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::Body>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::Body>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__BODY__TRAITS_HPP_
