// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_

#include "protocol/msg/detail/visual_programming_operate__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::VisualProgrammingOperate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
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

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_id.size() == 0) {
      out << "target_id: []\n";
    } else {
      out << "target_id:\n";
      for (auto item : msg.target_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: describe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "describe: ";
    value_to_yaml(msg.describe, out);
    out << "\n";
  }

  // member: style
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "style: ";
    value_to_yaml(msg.style, out);
    out << "\n";
  }

  // member: operate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate: ";
    value_to_yaml(msg.operate, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition: ";
    value_to_yaml(msg.condition, out);
    out << "\n";
  }

  // member: body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body: ";
    value_to_yaml(msg.body, out);
    out << "\n";
  }

  // member: fsm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm: ";
    value_to_yaml(msg.fsm, out);
    out << "\n";
  }

  // member: dependent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dependent.size() == 0) {
      out << "dependent: []\n";
    } else {
      out << "dependent:\n";
      for (auto item : msg.dependent) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: be_depended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.be_depended.size() == 0) {
      out << "be_depended: []\n";
    } else {
      out << "be_depended:\n";
      for (auto item : msg.be_depended) {
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

inline std::string to_yaml(const protocol::msg::VisualProgrammingOperate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::VisualProgrammingOperate>()
{
  return "protocol::msg::VisualProgrammingOperate";
}

template<>
inline const char * name<protocol::msg::VisualProgrammingOperate>()
{
  return "protocol/msg/VisualProgrammingOperate";
}

template<>
struct has_fixed_size<protocol::msg::VisualProgrammingOperate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::VisualProgrammingOperate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::VisualProgrammingOperate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_
