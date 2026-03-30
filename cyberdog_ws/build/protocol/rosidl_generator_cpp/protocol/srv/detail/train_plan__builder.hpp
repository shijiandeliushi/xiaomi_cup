// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN__BUILDER_HPP_

#include "protocol/srv/detail/train_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TrainPlan_Request_value
{
public:
  explicit Init_TrainPlan_Request_value(::protocol::srv::TrainPlan_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::TrainPlan_Request value(::protocol::srv::TrainPlan_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TrainPlan_Request msg_;
};

class Init_TrainPlan_Request_type
{
public:
  Init_TrainPlan_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainPlan_Request_value type(::protocol::srv::TrainPlan_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TrainPlan_Request_value(msg_);
  }

private:
  ::protocol::srv::TrainPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TrainPlan_Request>()
{
  return protocol::srv::builder::Init_TrainPlan_Request_type();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TrainPlan_Response_code
{
public:
  explicit Init_TrainPlan_Response_code(::protocol::srv::TrainPlan_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::TrainPlan_Response code(::protocol::srv::TrainPlan_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TrainPlan_Response msg_;
};

class Init_TrainPlan_Response_training
{
public:
  Init_TrainPlan_Response_training()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainPlan_Response_code training(::protocol::srv::TrainPlan_Response::_training_type arg)
  {
    msg_.training = std::move(arg);
    return Init_TrainPlan_Response_code(msg_);
  }

private:
  ::protocol::srv::TrainPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TrainPlan_Response>()
{
  return protocol::srv::builder::Init_TrainPlan_Response_training();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN__BUILDER_HPP_
