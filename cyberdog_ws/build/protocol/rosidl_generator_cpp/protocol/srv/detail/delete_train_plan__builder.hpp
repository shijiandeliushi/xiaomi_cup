// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/DeleteTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__BUILDER_HPP_

#include "protocol/srv/detail/delete_train_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_DeleteTrainPlan_Request_trigger
{
public:
  Init_DeleteTrainPlan_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::DeleteTrainPlan_Request trigger(::protocol::srv::DeleteTrainPlan_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::DeleteTrainPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::DeleteTrainPlan_Request>()
{
  return protocol::srv::builder::Init_DeleteTrainPlan_Request_trigger();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_DeleteTrainPlan_Response_code
{
public:
  Init_DeleteTrainPlan_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::DeleteTrainPlan_Response code(::protocol::srv::DeleteTrainPlan_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::DeleteTrainPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::DeleteTrainPlan_Response>()
{
  return protocol::srv::builder::Init_DeleteTrainPlan_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__DELETE_TRAIN_PLAN__BUILDER_HPP_
