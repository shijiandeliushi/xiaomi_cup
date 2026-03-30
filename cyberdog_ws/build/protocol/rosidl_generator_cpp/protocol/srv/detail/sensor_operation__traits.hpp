// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/SensorOperation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__TRAITS_HPP_

#include "protocol/srv/detail/sensor_operation__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SensorOperation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::SensorOperation_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SensorOperation_Request>()
{
  return "protocol::srv::SensorOperation_Request";
}

template<>
inline const char * name<protocol::srv::SensorOperation_Request>()
{
  return "protocol/srv/SensorOperation_Request";
}

template<>
struct has_fixed_size<protocol::srv::SensorOperation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SensorOperation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SensorOperation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SensorOperation_Response & msg,
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

inline std::string to_yaml(const protocol::srv::SensorOperation_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SensorOperation_Response>()
{
  return "protocol::srv::SensorOperation_Response";
}

template<>
inline const char * name<protocol::srv::SensorOperation_Response>()
{
  return "protocol/srv/SensorOperation_Response";
}

template<>
struct has_fixed_size<protocol::srv::SensorOperation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SensorOperation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SensorOperation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::SensorOperation>()
{
  return "protocol::srv::SensorOperation";
}

template<>
inline const char * name<protocol::srv::SensorOperation>()
{
  return "protocol/srv/SensorOperation";
}

template<>
struct has_fixed_size<protocol::srv::SensorOperation>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::SensorOperation_Request>::value &&
    has_fixed_size<protocol::srv::SensorOperation_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::SensorOperation>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::SensorOperation_Request>::value &&
    has_bounded_size<protocol::srv::SensorOperation_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::SensorOperation>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::SensorOperation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::SensorOperation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__TRAITS_HPP_
