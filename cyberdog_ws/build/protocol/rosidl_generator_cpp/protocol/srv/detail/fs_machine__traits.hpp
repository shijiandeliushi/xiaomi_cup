// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/FsMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FS_MACHINE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__FS_MACHINE__TRAITS_HPP_

#include "protocol/srv/detail/fs_machine__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FsMachine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_state: ";
    value_to_yaml(msg.target_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::FsMachine_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FsMachine_Request>()
{
  return "protocol::srv::FsMachine_Request";
}

template<>
inline const char * name<protocol::srv::FsMachine_Request>()
{
  return "protocol/srv/FsMachine_Request";
}

template<>
struct has_fixed_size<protocol::srv::FsMachine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::FsMachine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::FsMachine_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FsMachine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    value_to_yaml(msg.current_state, out);
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

inline std::string to_yaml(const protocol::srv::FsMachine_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FsMachine_Response>()
{
  return "protocol::srv::FsMachine_Response";
}

template<>
inline const char * name<protocol::srv::FsMachine_Response>()
{
  return "protocol/srv/FsMachine_Response";
}

template<>
struct has_fixed_size<protocol::srv::FsMachine_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::FsMachine_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::FsMachine_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::FsMachine>()
{
  return "protocol::srv::FsMachine";
}

template<>
inline const char * name<protocol::srv::FsMachine>()
{
  return "protocol/srv/FsMachine";
}

template<>
struct has_fixed_size<protocol::srv::FsMachine>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::FsMachine_Request>::value &&
    has_fixed_size<protocol::srv::FsMachine_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::FsMachine>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::FsMachine_Request>::value &&
    has_bounded_size<protocol::srv::FsMachine_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::FsMachine>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::FsMachine_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::FsMachine_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__FS_MACHINE__TRAITS_HPP_
