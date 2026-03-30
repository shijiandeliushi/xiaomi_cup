// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/StopAlgoTask.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__BUILDER_HPP_

#include "protocol/srv/detail/stop_algo_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_StopAlgoTask_Request_map_name
{
public:
  explicit Init_StopAlgoTask_Request_map_name(::protocol::srv::StopAlgoTask_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::StopAlgoTask_Request map_name(::protocol::srv::StopAlgoTask_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::StopAlgoTask_Request msg_;
};

class Init_StopAlgoTask_Request_task_id
{
public:
  Init_StopAlgoTask_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopAlgoTask_Request_map_name task_id(::protocol::srv::StopAlgoTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_StopAlgoTask_Request_map_name(msg_);
  }

private:
  ::protocol::srv::StopAlgoTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::StopAlgoTask_Request>()
{
  return protocol::srv::builder::Init_StopAlgoTask_Request_task_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_StopAlgoTask_Response_code
{
public:
  explicit Init_StopAlgoTask_Response_code(::protocol::srv::StopAlgoTask_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::StopAlgoTask_Response code(::protocol::srv::StopAlgoTask_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::StopAlgoTask_Response msg_;
};

class Init_StopAlgoTask_Response_result
{
public:
  Init_StopAlgoTask_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopAlgoTask_Response_code result(::protocol::srv::StopAlgoTask_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_StopAlgoTask_Response_code(msg_);
  }

private:
  ::protocol::srv::StopAlgoTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::StopAlgoTask_Response>()
{
  return protocol::srv::builder::Init_StopAlgoTask_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__BUILDER_HPP_
