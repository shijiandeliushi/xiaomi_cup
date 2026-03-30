// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/MotorTemp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTOR_TEMP__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MOTOR_TEMP__TRAITS_HPP_

#include "protocol/srv/detail/motor_temp__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotorTemp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotorTemp_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotorTemp_Request>()
{
  return "protocol::srv::MotorTemp_Request";
}

template<>
inline const char * name<protocol::srv::MotorTemp_Request>()
{
  return "protocol/srv/MotorTemp_Request";
}

template<>
struct has_fixed_size<protocol::srv::MotorTemp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::MotorTemp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::MotorTemp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotorTemp_Response & msg,
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

  // member: motor_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_temp.size() == 0) {
      out << "motor_temp: []\n";
    } else {
      out << "motor_temp:\n";
      for (auto item : msg.motor_temp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
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

inline std::string to_yaml(const protocol::srv::MotorTemp_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotorTemp_Response>()
{
  return "protocol::srv::MotorTemp_Response";
}

template<>
inline const char * name<protocol::srv::MotorTemp_Response>()
{
  return "protocol/srv/MotorTemp_Response";
}

template<>
struct has_fixed_size<protocol::srv::MotorTemp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotorTemp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotorTemp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::MotorTemp>()
{
  return "protocol::srv::MotorTemp";
}

template<>
inline const char * name<protocol::srv::MotorTemp>()
{
  return "protocol/srv/MotorTemp";
}

template<>
struct has_fixed_size<protocol::srv::MotorTemp>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::MotorTemp_Request>::value &&
    has_fixed_size<protocol::srv::MotorTemp_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::MotorTemp>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::MotorTemp_Request>::value &&
    has_bounded_size<protocol::srv::MotorTemp_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::MotorTemp>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::MotorTemp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::MotorTemp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MOTOR_TEMP__TRAITS_HPP_
