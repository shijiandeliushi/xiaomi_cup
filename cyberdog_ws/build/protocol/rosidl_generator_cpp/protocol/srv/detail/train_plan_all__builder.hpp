// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__BUILDER_HPP_

#include "protocol/srv/detail/train_plan_all__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TrainPlanAll_Request>()
{
  return ::protocol::srv::TrainPlanAll_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TrainPlanAll_Response_code
{
public:
  explicit Init_TrainPlanAll_Response_code(::protocol::srv::TrainPlanAll_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::TrainPlanAll_Response code(::protocol::srv::TrainPlanAll_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TrainPlanAll_Response msg_;
};

class Init_TrainPlanAll_Response_training_set
{
public:
  Init_TrainPlanAll_Response_training_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainPlanAll_Response_code training_set(::protocol::srv::TrainPlanAll_Response::_training_set_type arg)
  {
    msg_.training_set = std::move(arg);
    return Init_TrainPlanAll_Response_code(msg_);
  }

private:
  ::protocol::srv::TrainPlanAll_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TrainPlanAll_Response>()
{
  return protocol::srv::builder::Init_TrainPlanAll_Response_training_set();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__BUILDER_HPP_
