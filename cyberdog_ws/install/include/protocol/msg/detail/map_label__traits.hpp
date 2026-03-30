// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_LABEL__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MAP_LABEL__TRAITS_HPP_

#include "protocol/msg/detail/map_label__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'map'
#include "protocol/msg/detail/occupancy_grid__traits.hpp"
// Member 'labels'
#include "protocol/msg/detail/label__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MapLabel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: is_outdoor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_outdoor: ";
    value_to_yaml(msg.is_outdoor, out);
    out << "\n";
  }

  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_yaml(msg.map, out, indentation + 2);
  }

  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MapLabel & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MapLabel>()
{
  return "protocol::msg::MapLabel";
}

template<>
inline const char * name<protocol::msg::MapLabel>()
{
  return "protocol/msg/MapLabel";
}

template<>
struct has_fixed_size<protocol::msg::MapLabel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::MapLabel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::MapLabel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MAP_LABEL__TRAITS_HPP_
