// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/TaskProcessor.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__TRAITS_HPP_

#include "protocol/srv/detail/task_processor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TaskProcessor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: processor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processor: ";
    value_to_yaml(msg.processor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::TaskProcessor_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TaskProcessor_Request>()
{
  return "protocol::srv::TaskProcessor_Request";
}

template<>
inline const char * name<protocol::srv::TaskProcessor_Request>()
{
  return "protocol/srv/TaskProcessor_Request";
}

template<>
struct has_fixed_size<protocol::srv::TaskProcessor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::TaskProcessor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::TaskProcessor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TaskProcessor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: purview
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "purview: ";
    value_to_yaml(msg.purview, out);
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

inline std::string to_yaml(const protocol::srv::TaskProcessor_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TaskProcessor_Response>()
{
  return "protocol::srv::TaskProcessor_Response";
}

template<>
inline const char * name<protocol::srv::TaskProcessor_Response>()
{
  return "protocol/srv/TaskProcessor_Response";
}

template<>
struct has_fixed_size<protocol::srv::TaskProcessor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::TaskProcessor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::TaskProcessor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::TaskProcessor>()
{
  return "protocol::srv::TaskProcessor";
}

template<>
inline const char * name<protocol::srv::TaskProcessor>()
{
  return "protocol/srv/TaskProcessor";
}

template<>
struct has_fixed_size<protocol::srv::TaskProcessor>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::TaskProcessor_Request>::value &&
    has_fixed_size<protocol::srv::TaskProcessor_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::TaskProcessor>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::TaskProcessor_Request>::value &&
    has_bounded_size<protocol::srv::TaskProcessor_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::TaskProcessor>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::TaskProcessor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::TaskProcessor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__TRAITS_HPP_
