// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BMS_CMD__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__BMS_CMD__TRAITS_HPP_

#include "protocol/srv/detail/bms_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BmsCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: electric_machine_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "electric_machine_command: ";
    value_to_yaml(msg.electric_machine_command, out);
    out << "\n";
  }

  // member: wireless_charging_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wireless_charging_command: ";
    value_to_yaml(msg.wireless_charging_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::BmsCmd_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BmsCmd_Request>()
{
  return "protocol::srv::BmsCmd_Request";
}

template<>
inline const char * name<protocol::srv::BmsCmd_Request>()
{
  return "protocol/srv/BmsCmd_Request";
}

template<>
struct has_fixed_size<protocol::srv::BmsCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::BmsCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::BmsCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BmsCmd_Response & msg,
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

inline std::string to_yaml(const protocol::srv::BmsCmd_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BmsCmd_Response>()
{
  return "protocol::srv::BmsCmd_Response";
}

template<>
inline const char * name<protocol::srv::BmsCmd_Response>()
{
  return "protocol/srv/BmsCmd_Response";
}

template<>
struct has_fixed_size<protocol::srv::BmsCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::BmsCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::BmsCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::BmsCmd>()
{
  return "protocol::srv::BmsCmd";
}

template<>
inline const char * name<protocol::srv::BmsCmd>()
{
  return "protocol/srv/BmsCmd";
}

template<>
struct has_fixed_size<protocol::srv::BmsCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::BmsCmd_Request>::value &&
    has_fixed_size<protocol::srv::BmsCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::BmsCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::BmsCmd_Request>::value &&
    has_bounded_size<protocol::srv::BmsCmd_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::BmsCmd>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::BmsCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::BmsCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__BMS_CMD__TRAITS_HPP_
