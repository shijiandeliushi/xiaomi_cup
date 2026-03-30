// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/StopAlgoTask.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__TRAITS_HPP_

#include "protocol/srv/detail/stop_algo_task__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::StopAlgoTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    value_to_yaml(msg.map_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::StopAlgoTask_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::StopAlgoTask_Request>()
{
  return "protocol::srv::StopAlgoTask_Request";
}

template<>
inline const char * name<protocol::srv::StopAlgoTask_Request>()
{
  return "protocol/srv/StopAlgoTask_Request";
}

template<>
struct has_fixed_size<protocol::srv::StopAlgoTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::StopAlgoTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::StopAlgoTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::StopAlgoTask_Response & msg,
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

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::StopAlgoTask_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::StopAlgoTask_Response>()
{
  return "protocol::srv::StopAlgoTask_Response";
}

template<>
inline const char * name<protocol::srv::StopAlgoTask_Response>()
{
  return "protocol/srv/StopAlgoTask_Response";
}

template<>
struct has_fixed_size<protocol::srv::StopAlgoTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::StopAlgoTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::StopAlgoTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::StopAlgoTask>()
{
  return "protocol::srv::StopAlgoTask";
}

template<>
inline const char * name<protocol::srv::StopAlgoTask>()
{
  return "protocol/srv/StopAlgoTask";
}

template<>
struct has_fixed_size<protocol::srv::StopAlgoTask>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::StopAlgoTask_Request>::value &&
    has_fixed_size<protocol::srv::StopAlgoTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::StopAlgoTask>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::StopAlgoTask_Request>::value &&
    has_bounded_size<protocol::srv::StopAlgoTask_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::StopAlgoTask>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::StopAlgoTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::StopAlgoTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__TRAITS_HPP_
