// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/TrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRAIN_PLAN__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__TRAIN_PLAN__BUILDER_HPP_

#include "protocol/msg/detail/train_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_TrainPlan_value
{
public:
  explicit Init_TrainPlan_value(::protocol::msg::TrainPlan & msg)
  : msg_(msg)
  {}
  ::protocol::msg::TrainPlan value(::protocol::msg::TrainPlan::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::TrainPlan msg_;
};

class Init_TrainPlan_type
{
public:
  explicit Init_TrainPlan_type(::protocol::msg::TrainPlan & msg)
  : msg_(msg)
  {}
  Init_TrainPlan_value type(::protocol::msg::TrainPlan::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TrainPlan_value(msg_);
  }

private:
  ::protocol::msg::TrainPlan msg_;
};

class Init_TrainPlan_trigger
{
public:
  Init_TrainPlan_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrainPlan_type trigger(::protocol::msg::TrainPlan::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_TrainPlan_type(msg_);
  }

private:
  ::protocol::msg::TrainPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::TrainPlan>()
{
  return protocol::msg::builder::Init_TrainPlan_trigger();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRAIN_PLAN__BUILDER_HPP_
