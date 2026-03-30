// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/TaskProcessor.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__BUILDER_HPP_

#include "protocol/srv/detail/task_processor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TaskProcessor_Request_processor
{
public:
  Init_TaskProcessor_Request_processor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::TaskProcessor_Request processor(::protocol::srv::TaskProcessor_Request::_processor_type arg)
  {
    msg_.processor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TaskProcessor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TaskProcessor_Request>()
{
  return protocol::srv::builder::Init_TaskProcessor_Request_processor();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TaskProcessor_Response_code
{
public:
  explicit Init_TaskProcessor_Response_code(::protocol::srv::TaskProcessor_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::TaskProcessor_Response code(::protocol::srv::TaskProcessor_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TaskProcessor_Response msg_;
};

class Init_TaskProcessor_Response_purview
{
public:
  Init_TaskProcessor_Response_purview()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskProcessor_Response_code purview(::protocol::srv::TaskProcessor_Response::_purview_type arg)
  {
    msg_.purview = std::move(arg);
    return Init_TaskProcessor_Response_code(msg_);
  }

private:
  ::protocol::srv::TaskProcessor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TaskProcessor_Response>()
{
  return protocol::srv::builder::Init_TaskProcessor_Response_purview();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TASK_PROCESSOR__BUILDER_HPP_
