// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_

#include "protocol/srv/detail/algo_task_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AlgoTaskStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AlgoTaskStatus_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AlgoTaskStatus_Request>()
{
  return "protocol::srv::AlgoTaskStatus_Request";
}

template<>
inline const char * name<protocol::srv::AlgoTaskStatus_Request>()
{
  return "protocol/srv/AlgoTaskStatus_Request";
}

template<>
struct has_fixed_size<protocol::srv::AlgoTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AlgoTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AlgoTaskStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AlgoTaskStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
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

inline std::string to_yaml(const protocol::srv::AlgoTaskStatus_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AlgoTaskStatus_Response>()
{
  return "protocol::srv::AlgoTaskStatus_Response";
}

template<>
inline const char * name<protocol::srv::AlgoTaskStatus_Response>()
{
  return "protocol/srv/AlgoTaskStatus_Response";
}

template<>
struct has_fixed_size<protocol::srv::AlgoTaskStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AlgoTaskStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AlgoTaskStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AlgoTaskStatus>()
{
  return "protocol::srv::AlgoTaskStatus";
}

template<>
inline const char * name<protocol::srv::AlgoTaskStatus>()
{
  return "protocol/srv/AlgoTaskStatus";
}

template<>
struct has_fixed_size<protocol::srv::AlgoTaskStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AlgoTaskStatus_Request>::value &&
    has_fixed_size<protocol::srv::AlgoTaskStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AlgoTaskStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AlgoTaskStatus_Request>::value &&
    has_bounded_size<protocol::srv::AlgoTaskStatus_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AlgoTaskStatus>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AlgoTaskStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AlgoTaskStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__TRAITS_HPP_
