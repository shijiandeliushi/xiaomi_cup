// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_

#include "protocol/msg/detail/algo_task_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::AlgoTaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    value_to_yaml(msg.task_status, out);
    out << "\n";
  }

  // member: task_sub_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_sub_status: ";
    value_to_yaml(msg.task_sub_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::AlgoTaskStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::AlgoTaskStatus>()
{
  return "protocol::msg::AlgoTaskStatus";
}

template<>
inline const char * name<protocol::msg::AlgoTaskStatus>()
{
  return "protocol/msg/AlgoTaskStatus";
}

template<>
struct has_fixed_size<protocol::msg::AlgoTaskStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::AlgoTaskStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::AlgoTaskStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_
