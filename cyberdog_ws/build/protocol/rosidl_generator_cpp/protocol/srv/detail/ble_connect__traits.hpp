// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/BLEConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_CONNECT__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_CONNECT__TRAITS_HPP_

#include "protocol/srv/detail/ble_connect__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'selected_device'
#include "protocol/msg/detail/ble_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BLEConnect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: selected_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_device:\n";
    to_yaml(msg.selected_device, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::BLEConnect_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BLEConnect_Request>()
{
  return "protocol::srv::BLEConnect_Request";
}

template<>
inline const char * name<protocol::srv::BLEConnect_Request>()
{
  return "protocol/srv/BLEConnect_Request";
}

template<>
struct has_fixed_size<protocol::srv::BLEConnect_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::BLEInfo>::value> {};

template<>
struct has_bounded_size<protocol::srv::BLEConnect_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::BLEInfo>::value> {};

template<>
struct is_message<protocol::srv::BLEConnect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BLEConnect_Response & msg,
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

inline std::string to_yaml(const protocol::srv::BLEConnect_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BLEConnect_Response>()
{
  return "protocol::srv::BLEConnect_Response";
}

template<>
inline const char * name<protocol::srv::BLEConnect_Response>()
{
  return "protocol/srv/BLEConnect_Response";
}

template<>
struct has_fixed_size<protocol::srv::BLEConnect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::BLEConnect_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::BLEConnect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::BLEConnect>()
{
  return "protocol::srv::BLEConnect";
}

template<>
inline const char * name<protocol::srv::BLEConnect>()
{
  return "protocol/srv/BLEConnect";
}

template<>
struct has_fixed_size<protocol::srv::BLEConnect>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::BLEConnect_Request>::value &&
    has_fixed_size<protocol::srv::BLEConnect_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::BLEConnect>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::BLEConnect_Request>::value &&
    has_bounded_size<protocol::srv::BLEConnect_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::BLEConnect>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::BLEConnect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::BLEConnect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__BLE_CONNECT__TRAITS_HPP_
