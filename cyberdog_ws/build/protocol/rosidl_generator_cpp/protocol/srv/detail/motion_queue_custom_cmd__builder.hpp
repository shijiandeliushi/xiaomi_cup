// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotionQueueCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__BUILDER_HPP_

#include "protocol/srv/detail/motion_queue_custom_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionQueueCustomCmd_Request_cmds
{
public:
  Init_MotionQueueCustomCmd_Request_cmds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::MotionQueueCustomCmd_Request cmds(::protocol::srv::MotionQueueCustomCmd_Request::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionQueueCustomCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionQueueCustomCmd_Request>()
{
  return protocol::srv::builder::Init_MotionQueueCustomCmd_Request_cmds();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionQueueCustomCmd_Response_code
{
public:
  explicit Init_MotionQueueCustomCmd_Response_code(::protocol::srv::MotionQueueCustomCmd_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionQueueCustomCmd_Response code(::protocol::srv::MotionQueueCustomCmd_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionQueueCustomCmd_Response msg_;
};

class Init_MotionQueueCustomCmd_Response_result
{
public:
  Init_MotionQueueCustomCmd_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionQueueCustomCmd_Response_code result(::protocol::srv::MotionQueueCustomCmd_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionQueueCustomCmd_Response_code(msg_);
  }

private:
  ::protocol::srv::MotionQueueCustomCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionQueueCustomCmd_Response>()
{
  return protocol::srv::builder::Init_MotionQueueCustomCmd_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__BUILDER_HPP_
