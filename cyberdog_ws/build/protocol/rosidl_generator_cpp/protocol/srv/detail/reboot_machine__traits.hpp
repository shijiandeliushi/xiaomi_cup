// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/RebootMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__TRAITS_HPP_

#include "protocol/srv/detail/reboot_machine__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::RebootMachine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rebootmachine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rebootmachine: ";
    value_to_yaml(msg.rebootmachine, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::RebootMachine_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::RebootMachine_Request>()
{
  return "protocol::srv::RebootMachine_Request";
}

template<>
inline const char * name<protocol::srv::RebootMachine_Request>()
{
  return "protocol/srv/RebootMachine_Request";
}

template<>
struct has_fixed_size<protocol::srv::RebootMachine_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::RebootMachine_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::RebootMachine_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::RebootMachine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rebootresult
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rebootresult: ";
    value_to_yaml(msg.rebootresult, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::RebootMachine_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::RebootMachine_Response>()
{
  return "protocol::srv::RebootMachine_Response";
}

template<>
inline const char * name<protocol::srv::RebootMachine_Response>()
{
  return "protocol/srv/RebootMachine_Response";
}

template<>
struct has_fixed_size<protocol::srv::RebootMachine_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::RebootMachine_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::RebootMachine_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::RebootMachine>()
{
  return "protocol::srv::RebootMachine";
}

template<>
inline const char * name<protocol::srv::RebootMachine>()
{
  return "protocol/srv/RebootMachine";
}

template<>
struct has_fixed_size<protocol::srv::RebootMachine>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::RebootMachine_Request>::value &&
    has_fixed_size<protocol::srv::RebootMachine_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::RebootMachine>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::RebootMachine_Request>::value &&
    has_bounded_size<protocol::srv::RebootMachine_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::RebootMachine>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::RebootMachine_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::RebootMachine_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__TRAITS_HPP_
