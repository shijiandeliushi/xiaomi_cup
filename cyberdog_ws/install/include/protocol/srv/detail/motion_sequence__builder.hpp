// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_

#include "protocol/srv/detail/motion_sequence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionSequence_Request_params
{
public:
  explicit Init_MotionSequence_Request_params(::protocol::srv::MotionSequence_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionSequence_Request params(::protocol::srv::MotionSequence_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Request msg_;
};

class Init_MotionSequence_Request_toml_data
{
public:
  explicit Init_MotionSequence_Request_toml_data(::protocol::srv::MotionSequence_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequence_Request_params toml_data(::protocol::srv::MotionSequence_Request::_toml_data_type arg)
  {
    msg_.toml_data = std::move(arg);
    return Init_MotionSequence_Request_params(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Request msg_;
};

class Init_MotionSequence_Request_duration
{
public:
  explicit Init_MotionSequence_Request_duration(::protocol::srv::MotionSequence_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequence_Request_toml_data duration(::protocol::srv::MotionSequence_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MotionSequence_Request_toml_data(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Request msg_;
};

class Init_MotionSequence_Request_motion_id
{
public:
  Init_MotionSequence_Request_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequence_Request_duration motion_id(::protocol::srv::MotionSequence_Request::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionSequence_Request_duration(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionSequence_Request>()
{
  return protocol::srv::builder::Init_MotionSequence_Request_motion_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionSequence_Response_motion_id
{
public:
  explicit Init_MotionSequence_Response_motion_id(::protocol::srv::MotionSequence_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionSequence_Response motion_id(::protocol::srv::MotionSequence_Response::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Response msg_;
};

class Init_MotionSequence_Response_describe
{
public:
  explicit Init_MotionSequence_Response_describe(::protocol::srv::MotionSequence_Response & msg)
  : msg_(msg)
  {}
  Init_MotionSequence_Response_motion_id describe(::protocol::srv::MotionSequence_Response::_describe_type arg)
  {
    msg_.describe = std::move(arg);
    return Init_MotionSequence_Response_motion_id(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Response msg_;
};

class Init_MotionSequence_Response_code
{
public:
  explicit Init_MotionSequence_Response_code(::protocol::srv::MotionSequence_Response & msg)
  : msg_(msg)
  {}
  Init_MotionSequence_Response_describe code(::protocol::srv::MotionSequence_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_MotionSequence_Response_describe(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Response msg_;
};

class Init_MotionSequence_Response_result
{
public:
  Init_MotionSequence_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequence_Response_code result(::protocol::srv::MotionSequence_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionSequence_Response_code(msg_);
  }

private:
  ::protocol::srv::MotionSequence_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionSequence_Response>()
{
  return protocol::srv::builder::Init_MotionSequence_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_
