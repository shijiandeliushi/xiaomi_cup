// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/BodyRegion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BODY_REGION__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__BODY_REGION__TRAITS_HPP_

#include "protocol/srv/detail/body_region__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BodyRegion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::BodyRegion_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BodyRegion_Request>()
{
  return "protocol::srv::BodyRegion_Request";
}

template<>
inline const char * name<protocol::srv::BodyRegion_Request>()
{
  return "protocol/srv/BodyRegion_Request";
}

template<>
struct has_fixed_size<protocol::srv::BodyRegion_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<protocol::srv::BodyRegion_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<protocol::srv::BodyRegion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BodyRegion_Response & msg,
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

inline std::string to_yaml(const protocol::srv::BodyRegion_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BodyRegion_Response>()
{
  return "protocol::srv::BodyRegion_Response";
}

template<>
inline const char * name<protocol::srv::BodyRegion_Response>()
{
  return "protocol/srv/BodyRegion_Response";
}

template<>
struct has_fixed_size<protocol::srv::BodyRegion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::BodyRegion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::BodyRegion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::BodyRegion>()
{
  return "protocol::srv::BodyRegion";
}

template<>
inline const char * name<protocol::srv::BodyRegion>()
{
  return "protocol/srv/BodyRegion";
}

template<>
struct has_fixed_size<protocol::srv::BodyRegion>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::BodyRegion_Request>::value &&
    has_fixed_size<protocol::srv::BodyRegion_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::BodyRegion>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::BodyRegion_Request>::value &&
    has_bounded_size<protocol::srv::BodyRegion_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::BodyRegion>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::BodyRegion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::BodyRegion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__BODY_REGION__TRAITS_HPP_
