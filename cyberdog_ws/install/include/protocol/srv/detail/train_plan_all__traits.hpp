// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__TRAITS_HPP_

#include "protocol/srv/detail/train_plan_all__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TrainPlanAll_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::TrainPlanAll_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TrainPlanAll_Request>()
{
  return "protocol::srv::TrainPlanAll_Request";
}

template<>
inline const char * name<protocol::srv::TrainPlanAll_Request>()
{
  return "protocol/srv/TrainPlanAll_Request";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlanAll_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::TrainPlanAll_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::TrainPlanAll_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'training_set'
#include "protocol/msg/detail/train_plan__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TrainPlanAll_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: training_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.training_set.size() == 0) {
      out << "training_set: []\n";
    } else {
      out << "training_set:\n";
      for (auto item : msg.training_set) {
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

inline std::string to_yaml(const protocol::srv::TrainPlanAll_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TrainPlanAll_Response>()
{
  return "protocol::srv::TrainPlanAll_Response";
}

template<>
inline const char * name<protocol::srv::TrainPlanAll_Response>()
{
  return "protocol/srv/TrainPlanAll_Response";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlanAll_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::TrainPlanAll_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::TrainPlanAll_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::TrainPlanAll>()
{
  return "protocol::srv::TrainPlanAll";
}

template<>
inline const char * name<protocol::srv::TrainPlanAll>()
{
  return "protocol/srv/TrainPlanAll";
}

template<>
struct has_fixed_size<protocol::srv::TrainPlanAll>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::TrainPlanAll_Request>::value &&
    has_fixed_size<protocol::srv::TrainPlanAll_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::TrainPlanAll>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::TrainPlanAll_Request>::value &&
    has_bounded_size<protocol::srv::TrainPlanAll_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::TrainPlanAll>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::TrainPlanAll_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::TrainPlanAll_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__TRAITS_HPP_
