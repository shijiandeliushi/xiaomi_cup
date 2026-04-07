// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__TRAITS_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__TRAITS_HPP_

#include "cyberdog_msg/msg/detail/apply_force__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cyberdog_msg::msg::ApplyForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force.size() == 0) {
      out << "force: []\n";
    } else {
      out << "force:\n";
      for (auto item : msg.force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rel_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rel_pos.size() == 0) {
      out << "rel_pos: []\n";
    } else {
      out << "rel_pos:\n";
      for (auto item : msg.rel_pos) {
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

inline std::string to_yaml(const cyberdog_msg::msg::ApplyForce & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cyberdog_msg::msg::ApplyForce>()
{
  return "cyberdog_msg::msg::ApplyForce";
}

template<>
inline const char * name<cyberdog_msg::msg::ApplyForce>()
{
  return "cyberdog_msg/msg/ApplyForce";
}

template<>
struct has_fixed_size<cyberdog_msg::msg::ApplyForce>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cyberdog_msg::msg::ApplyForce>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cyberdog_msg::msg::ApplyForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__TRAITS_HPP_
