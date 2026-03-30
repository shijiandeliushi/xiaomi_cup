// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_

#include "protocol/srv/detail/motion_custom_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionCustomCmd_Request_motion_id
{
public:
  explicit Init_MotionCustomCmd_Request_motion_id(::protocol::srv::MotionCustomCmd_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionCustomCmd_Request motion_id(::protocol::srv::MotionCustomCmd_Request::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Request msg_;
};

class Init_MotionCustomCmd_Request_cmd_source
{
public:
  explicit Init_MotionCustomCmd_Request_cmd_source(::protocol::srv::MotionCustomCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_Request_motion_id cmd_source(::protocol::srv::MotionCustomCmd_Request::_cmd_source_type arg)
  {
    msg_.cmd_source = std::move(arg);
    return Init_MotionCustomCmd_Request_motion_id(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Request msg_;
};

class Init_MotionCustomCmd_Request_cmd_type
{
public:
  Init_MotionCustomCmd_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCustomCmd_Request_cmd_source cmd_type(::protocol::srv::MotionCustomCmd_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_MotionCustomCmd_Request_cmd_source(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionCustomCmd_Request>()
{
  return protocol::srv::builder::Init_MotionCustomCmd_Request_cmd_type();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionCustomCmd_Response_code
{
public:
  explicit Init_MotionCustomCmd_Response_code(::protocol::srv::MotionCustomCmd_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionCustomCmd_Response code(::protocol::srv::MotionCustomCmd_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Response msg_;
};

class Init_MotionCustomCmd_Response_result
{
public:
  explicit Init_MotionCustomCmd_Response_result(::protocol::srv::MotionCustomCmd_Response & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_Response_code result(::protocol::srv::MotionCustomCmd_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionCustomCmd_Response_code(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Response msg_;
};

class Init_MotionCustomCmd_Response_motion_id
{
public:
  Init_MotionCustomCmd_Response_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCustomCmd_Response_result motion_id(::protocol::srv::MotionCustomCmd_Response::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionCustomCmd_Response_result(msg_);
  }

private:
  ::protocol::srv::MotionCustomCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionCustomCmd_Response>()
{
  return protocol::srv::builder::Init_MotionCustomCmd_Response_motion_id();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_
