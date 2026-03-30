// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__BUILDER_HPP_

#include "protocol/srv/detail/motion_sequence_show__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionSequenceShow_Request_pace_toml
{
public:
  explicit Init_MotionSequenceShow_Request_pace_toml(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionSequenceShow_Request pace_toml(::protocol::srv::MotionSequenceShow_Request::_pace_toml_type arg)
  {
    msg_.pace_toml = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_gait_toml
{
public:
  explicit Init_MotionSequenceShow_Request_gait_toml(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_pace_toml gait_toml(::protocol::srv::MotionSequenceShow_Request::_gait_toml_type arg)
  {
    msg_.gait_toml = std::move(arg);
    return Init_MotionSequenceShow_Request_pace_toml(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_pace_toml_list
{
public:
  explicit Init_MotionSequenceShow_Request_pace_toml_list(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_gait_toml pace_toml_list(::protocol::srv::MotionSequenceShow_Request::_pace_toml_list_type arg)
  {
    msg_.pace_toml_list = std::move(arg);
    return Init_MotionSequenceShow_Request_gait_toml(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_gait_toml_list
{
public:
  explicit Init_MotionSequenceShow_Request_gait_toml_list(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_pace_toml_list gait_toml_list(::protocol::srv::MotionSequenceShow_Request::_gait_toml_list_type arg)
  {
    msg_.gait_toml_list = std::move(arg);
    return Init_MotionSequenceShow_Request_pace_toml_list(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_pace_list
{
public:
  explicit Init_MotionSequenceShow_Request_pace_list(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_gait_toml_list pace_list(::protocol::srv::MotionSequenceShow_Request::_pace_list_type arg)
  {
    msg_.pace_list = std::move(arg);
    return Init_MotionSequenceShow_Request_gait_toml_list(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_gait_list
{
public:
  explicit Init_MotionSequenceShow_Request_gait_list(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_pace_list gait_list(::protocol::srv::MotionSequenceShow_Request::_gait_list_type arg)
  {
    msg_.gait_list = std::move(arg);
    return Init_MotionSequenceShow_Request_pace_list(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_duration
{
public:
  explicit Init_MotionSequenceShow_Request_duration(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_gait_list duration(::protocol::srv::MotionSequenceShow_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MotionSequenceShow_Request_gait_list(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_cmd_source
{
public:
  explicit Init_MotionSequenceShow_Request_cmd_source(::protocol::srv::MotionSequenceShow_Request & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Request_duration cmd_source(::protocol::srv::MotionSequenceShow_Request::_cmd_source_type arg)
  {
    msg_.cmd_source = std::move(arg);
    return Init_MotionSequenceShow_Request_duration(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

class Init_MotionSequenceShow_Request_motion_id
{
public:
  Init_MotionSequenceShow_Request_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceShow_Request_cmd_source motion_id(::protocol::srv::MotionSequenceShow_Request::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionSequenceShow_Request_cmd_source(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionSequenceShow_Request>()
{
  return protocol::srv::builder::Init_MotionSequenceShow_Request_motion_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionSequenceShow_Response_motion_id
{
public:
  explicit Init_MotionSequenceShow_Response_motion_id(::protocol::srv::MotionSequenceShow_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionSequenceShow_Response motion_id(::protocol::srv::MotionSequenceShow_Response::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Response msg_;
};

class Init_MotionSequenceShow_Response_describe
{
public:
  explicit Init_MotionSequenceShow_Response_describe(::protocol::srv::MotionSequenceShow_Response & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Response_motion_id describe(::protocol::srv::MotionSequenceShow_Response::_describe_type arg)
  {
    msg_.describe = std::move(arg);
    return Init_MotionSequenceShow_Response_motion_id(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Response msg_;
};

class Init_MotionSequenceShow_Response_code
{
public:
  explicit Init_MotionSequenceShow_Response_code(::protocol::srv::MotionSequenceShow_Response & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceShow_Response_describe code(::protocol::srv::MotionSequenceShow_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_MotionSequenceShow_Response_describe(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Response msg_;
};

class Init_MotionSequenceShow_Response_result
{
public:
  Init_MotionSequenceShow_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceShow_Response_code result(::protocol::srv::MotionSequenceShow_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionSequenceShow_Response_code(msg_);
  }

private:
  ::protocol::srv::MotionSequenceShow_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionSequenceShow_Response>()
{
  return protocol::srv::builder::Init_MotionSequenceShow_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__BUILDER_HPP_
