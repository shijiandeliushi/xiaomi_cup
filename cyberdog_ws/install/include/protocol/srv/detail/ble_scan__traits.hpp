// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_SCAN__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_SCAN__TRAITS_HPP_

#include "protocol/srv/detail/ble_scan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BLEScan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scan_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_seconds: ";
    value_to_yaml(msg.scan_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::BLEScan_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BLEScan_Request>()
{
  return "protocol::srv::BLEScan_Request";
}

template<>
inline const char * name<protocol::srv::BLEScan_Request>()
{
  return "protocol/srv/BLEScan_Request";
}

template<>
struct has_fixed_size<protocol::srv::BLEScan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::BLEScan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::BLEScan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'device_info_list'
#include "protocol/msg/detail/ble_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BLEScan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_info_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_info_list.size() == 0) {
      out << "device_info_list: []\n";
    } else {
      out << "device_info_list:\n";
      for (auto item : msg.device_info_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const protocol::srv::BLEScan_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BLEScan_Response>()
{
  return "protocol::srv::BLEScan_Response";
}

template<>
inline const char * name<protocol::srv::BLEScan_Response>()
{
  return "protocol/srv/BLEScan_Response";
}

template<>
struct has_fixed_size<protocol::srv::BLEScan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::BLEScan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::BLEScan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::BLEScan>()
{
  return "protocol::srv::BLEScan";
}

template<>
inline const char * name<protocol::srv::BLEScan>()
{
  return "protocol/srv/BLEScan";
}

template<>
struct has_fixed_size<protocol::srv::BLEScan>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::BLEScan_Request>::value &&
    has_fixed_size<protocol::srv::BLEScan_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::BLEScan>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::BLEScan_Request>::value &&
    has_bounded_size<protocol::srv::BLEScan_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::BLEScan>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::BLEScan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::BLEScan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__BLE_SCAN__TRAITS_HPP_
