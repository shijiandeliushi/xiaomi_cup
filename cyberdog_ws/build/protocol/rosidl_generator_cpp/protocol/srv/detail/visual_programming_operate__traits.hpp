// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_

#include "protocol/srv/detail/visual_programming_operate__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'form'
#include "protocol/msg/detail/visual_programming_operate__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::VisualProgrammingOperate_Request & msg,
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

  // member: json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json: ";
    value_to_yaml(msg.json, out);
    out << "\n";
  }

  // member: form
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "form:\n";
    to_yaml(msg.form, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::VisualProgrammingOperate_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::VisualProgrammingOperate_Request>()
{
  return "protocol::srv::VisualProgrammingOperate_Request";
}

template<>
inline const char * name<protocol::srv::VisualProgrammingOperate_Request>()
{
  return "protocol/srv/VisualProgrammingOperate_Request";
}

template<>
struct has_fixed_size<protocol::srv::VisualProgrammingOperate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::VisualProgrammingOperate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::VisualProgrammingOperate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::VisualProgrammingOperate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json: ";
    value_to_yaml(msg.json, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::VisualProgrammingOperate_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::VisualProgrammingOperate_Response>()
{
  return "protocol::srv::VisualProgrammingOperate_Response";
}

template<>
inline const char * name<protocol::srv::VisualProgrammingOperate_Response>()
{
  return "protocol/srv/VisualProgrammingOperate_Response";
}

template<>
struct has_fixed_size<protocol::srv::VisualProgrammingOperate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::VisualProgrammingOperate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::VisualProgrammingOperate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::VisualProgrammingOperate>()
{
  return "protocol::srv::VisualProgrammingOperate";
}

template<>
inline const char * name<protocol::srv::VisualProgrammingOperate>()
{
  return "protocol/srv/VisualProgrammingOperate";
}

template<>
struct has_fixed_size<protocol::srv::VisualProgrammingOperate>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::VisualProgrammingOperate_Request>::value &&
    has_fixed_size<protocol::srv::VisualProgrammingOperate_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::VisualProgrammingOperate>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::VisualProgrammingOperate_Request>::value &&
    has_bounded_size<protocol::srv::VisualProgrammingOperate_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::VisualProgrammingOperate>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::VisualProgrammingOperate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::VisualProgrammingOperate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__TRAITS_HPP_
