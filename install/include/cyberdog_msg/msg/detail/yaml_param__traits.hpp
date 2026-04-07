// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__TRAITS_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__TRAITS_HPP_

#include "cyberdog_msg/msg/detail/yaml_param__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cyberdog_msg::msg::YamlParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kind: ";
    value_to_yaml(msg.kind, out);
    out << "\n";
  }

  // member: s64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s64_value: ";
    value_to_yaml(msg.s64_value, out);
    out << "\n";
  }

  // member: double_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_value: ";
    value_to_yaml(msg.double_value, out);
    out << "\n";
  }

  // member: vecxd_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vecxd_value.size() == 0) {
      out << "vecxd_value: []\n";
    } else {
      out << "vecxd_value:\n";
      for (auto item : msg.vecxd_value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_user
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_user: ";
    value_to_yaml(msg.is_user, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cyberdog_msg::msg::YamlParam & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cyberdog_msg::msg::YamlParam>()
{
  return "cyberdog_msg::msg::YamlParam";
}

template<>
inline const char * name<cyberdog_msg::msg::YamlParam>()
{
  return "cyberdog_msg/msg/YamlParam";
}

template<>
struct has_fixed_size<cyberdog_msg::msg::YamlParam>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cyberdog_msg::msg::YamlParam>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cyberdog_msg::msg::YamlParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__TRAITS_HPP_
