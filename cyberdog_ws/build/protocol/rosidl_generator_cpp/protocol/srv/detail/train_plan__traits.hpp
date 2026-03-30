// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN__TRAITS_HPP_

#include "protocol/srv/detail/train_plan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TrainPlan_Request & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::TrainPlan_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TrainPlan_Request>()
{
  return "protocol::srv::TrainPlan_Request";
}

template<>
inline const char * name<protocol::srv::TrainPlan_Request>()
{
  return "protocol/srv/TrainPlan_Request";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::TrainPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::TrainPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'training'
#include "protocol/msg/detail/train_plan__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TrainPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: training
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "training:\n";
    to_yaml(msg.training, out, indentation + 2);
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

inline std::string to_yaml(const protocol::srv::TrainPlan_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TrainPlan_Response>()
{
  return "protocol::srv::TrainPlan_Response";
}

template<>
inline const char * name<protocol::srv::TrainPlan_Response>()
{
  return "protocol/srv/TrainPlan_Response";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlan_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::msg::TrainPlan>::value> {};

template<>
struct has_bounded_size<protocol::srv::TrainPlan_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::msg::TrainPlan>::value> {};

template<>
struct is_message<protocol::srv::TrainPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::TrainPlan>()
{
  return "protocol::srv::TrainPlan";
}

template<>
inline const char * name<protocol::srv::TrainPlan>()
{
  return "protocol/srv/TrainPlan";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::TrainPlan_Request>::value &&
    has_fixed_size<protocol::srv::TrainPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::TrainPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::TrainPlan_Request>::value &&
    has_bounded_size<protocol::srv::TrainPlan_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::TrainPlan>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::TrainPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::TrainPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN__TRAITS_HPP_
