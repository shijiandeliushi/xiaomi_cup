// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/GetMapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__TRAITS_HPP_

#include "protocol/srv/detail/get_map_label__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GetMapLabel_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::GetMapLabel_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GetMapLabel_Request>()
{
  return "protocol::srv::GetMapLabel_Request";
}

template<>
inline const char * name<protocol::srv::GetMapLabel_Request>()
{
  return "protocol/srv/GetMapLabel_Request";
}

template<>
struct has_fixed_size<protocol::srv::GetMapLabel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::GetMapLabel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::GetMapLabel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'label'
#include "protocol/msg/detail/map_label__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GetMapLabel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label:\n";
    to_yaml(msg.label, out, indentation + 2);
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

inline std::string to_yaml(const protocol::srv::GetMapLabel_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GetMapLabel_Response>()
{
  return "protocol::srv::GetMapLabel_Response";
}

template<>
inline const char * name<protocol::srv::GetMapLabel_Response>()
{
  return "protocol/srv/GetMapLabel_Response";
}

template<>
struct has_fixed_size<protocol::srv::GetMapLabel_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::MapLabel>::value> {};

template<>
struct has_bounded_size<protocol::srv::GetMapLabel_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::MapLabel>::value> {};

template<>
struct is_message<protocol::srv::GetMapLabel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::GetMapLabel>()
{
  return "protocol::srv::GetMapLabel";
}

template<>
inline const char * name<protocol::srv::GetMapLabel>()
{
  return "protocol/srv/GetMapLabel";
}

template<>
struct has_fixed_size<protocol::srv::GetMapLabel>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::GetMapLabel_Request>::value &&
    has_fixed_size<protocol::srv::GetMapLabel_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::GetMapLabel>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::GetMapLabel_Request>::value &&
    has_bounded_size<protocol::srv::GetMapLabel_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::GetMapLabel>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::GetMapLabel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::GetMapLabel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__TRAITS_HPP_
