// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/algo_task_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AlgoTaskStatus_task_sub_status
{
public:
  explicit Init_AlgoTaskStatus_task_sub_status(::protocol::msg::AlgoTaskStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::AlgoTaskStatus task_sub_status(::protocol::msg::AlgoTaskStatus::_task_sub_status_type arg)
  {
    msg_.task_sub_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AlgoTaskStatus msg_;
};

class Init_AlgoTaskStatus_task_status
{
public:
  Init_AlgoTaskStatus_task_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlgoTaskStatus_task_sub_status task_status(::protocol::msg::AlgoTaskStatus::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_AlgoTaskStatus_task_sub_status(msg_);
  }

private:
  ::protocol::msg::AlgoTaskStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AlgoTaskStatus>()
{
  return protocol::msg::builder::Init_AlgoTaskStatus_task_status();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_
