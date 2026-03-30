// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRAIN_PLAN__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__TRAIN_PLAN__TRAITS_HPP_

#include "protocol/msg/detail/train_plan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::TrainPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    value_to_yaml(msg.trigger, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::TrainPlan & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::TrainPlan>()
{
  return "protocol::msg::TrainPlan";
}

template<>
inline const char * name<protocol::msg::TrainPlan>()
{
  return "protocol/msg/TrainPlan";
}

template<>
struct has_fixed_size<protocol::msg::TrainPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::TrainPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::TrainPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__TRAIN_PLAN__TRAITS_HPP_
