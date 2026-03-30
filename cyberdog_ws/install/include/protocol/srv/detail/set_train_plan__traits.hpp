// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/SetTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__TRAITS_HPP_

#include "protocol/srv/detail/set_train_plan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SetTrainPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    value_to_yaml(msg.trigger, out);
    out << "\n";
  }

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

inline std::string to_yaml(const protocol::srv::SetTrainPlan_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SetTrainPlan_Request>()
{
  return "protocol::srv::SetTrainPlan_Request";
}

template<>
inline const char * name<protocol::srv::SetTrainPlan_Request>()
{
  return "protocol/srv/SetTrainPlan_Request";
}

template<>
struct has_fixed_size<protocol::srv::SetTrainPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::SetTrainPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::SetTrainPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SetTrainPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: skill_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skill_id: ";
    value_to_yaml(msg.skill_id, out);
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

inline std::string to_yaml(const protocol::srv::SetTrainPlan_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SetTrainPlan_Response>()
{
  return "protocol::srv::SetTrainPlan_Response";
}

template<>
inline const char * name<protocol::srv::SetTrainPlan_Response>()
{
  return "protocol/srv/SetTrainPlan_Response";
}

template<>
struct has_fixed_size<protocol::srv::SetTrainPlan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SetTrainPlan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SetTrainPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::SetTrainPlan>()
{
  return "protocol::srv::SetTrainPlan";
}

template<>
inline const char * name<protocol::srv::SetTrainPlan>()
{
  return "protocol/srv/SetTrainPlan";
}

template<>
struct has_fixed_size<protocol::srv::SetTrainPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::SetTrainPlan_Request>::value &&
    has_fixed_size<protocol::srv::SetTrainPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::SetTrainPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::SetTrainPlan_Request>::value &&
    has_bounded_size<protocol::srv::SetTrainPlan_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::SetTrainPlan>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::SetTrainPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::SetTrainPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__TRAITS_HPP_
