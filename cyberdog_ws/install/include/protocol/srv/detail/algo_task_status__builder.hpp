// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_

#include "protocol/srv/detail/algo_task_status__struct.hpp"
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
auto build<::protocol::srv::AlgoTaskStatus_Request>()
{
  return ::protocol::srv::AlgoTaskStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AlgoTaskStatus_Response_code
{
public:
  explicit Init_AlgoTaskStatus_Response_code(::protocol::srv::AlgoTaskStatus_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AlgoTaskStatus_Response code(::protocol::srv::AlgoTaskStatus_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AlgoTaskStatus_Response msg_;
};

class Init_AlgoTaskStatus_Response_status
{
public:
  Init_AlgoTaskStatus_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlgoTaskStatus_Response_code status(::protocol::srv::AlgoTaskStatus_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AlgoTaskStatus_Response_code(msg_);
  }

private:
  ::protocol::srv::AlgoTaskStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AlgoTaskStatus_Response>()
{
  return protocol::srv::builder::Init_AlgoTaskStatus_Response_status();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__BUILDER_HPP_
