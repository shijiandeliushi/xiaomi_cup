// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/GestureActionControl.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__BUILDER_HPP_

#include "protocol/srv/detail/gesture_action_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GestureActionControl_Request_timeout
{
public:
  explicit Init_GestureActionControl_Request_timeout(::protocol::srv::GestureActionControl_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::GestureActionControl_Request timeout(::protocol::srv::GestureActionControl_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GestureActionControl_Request msg_;
};

class Init_GestureActionControl_Request_command
{
public:
  Init_GestureActionControl_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GestureActionControl_Request_timeout command(::protocol::srv::GestureActionControl_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_GestureActionControl_Request_timeout(msg_);
  }

private:
  ::protocol::srv::GestureActionControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GestureActionControl_Request>()
{
  return protocol::srv::builder::Init_GestureActionControl_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GestureActionControl_Response_code
{
public:
  Init_GestureActionControl_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::GestureActionControl_Response code(::protocol::srv::GestureActionControl_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GestureActionControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GestureActionControl_Response>()
{
  return protocol::srv::builder::Init_GestureActionControl_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GESTURE_ACTION_CONTROL__BUILDER_HPP_
