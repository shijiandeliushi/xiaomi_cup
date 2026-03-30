// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__BUILDER_HPP_

#include "protocol/srv/detail/motion_result_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionResultCmd_Request_toml_data
{
public:
  explicit Init_MotionResultCmd_Request_toml_data(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionResultCmd_Request toml_data(::protocol::srv::MotionResultCmd_Request::_toml_data_type arg)
  {
    msg_.toml_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_gait_toml
{
public:
  explicit Init_MotionResultCmd_Request_gait_toml(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_toml_data gait_toml(::protocol::srv::MotionResultCmd_Request::_gait_toml_type arg)
  {
    msg_.gait_toml = std::move(arg);
    return Init_MotionResultCmd_Request_toml_data(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_contact
{
public:
  explicit Init_MotionResultCmd_Request_contact(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_gait_toml contact(::protocol::srv::MotionResultCmd_Request::_contact_type arg)
  {
    msg_.contact = std::move(arg);
    return Init_MotionResultCmd_Request_gait_toml(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_value
{
public:
  explicit Init_MotionResultCmd_Request_value(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_contact value(::protocol::srv::MotionResultCmd_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_MotionResultCmd_Request_contact(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_duration
{
public:
  explicit Init_MotionResultCmd_Request_duration(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_value duration(::protocol::srv::MotionResultCmd_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MotionResultCmd_Request_value(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_step_height
{
public:
  explicit Init_MotionResultCmd_Request_step_height(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_duration step_height(::protocol::srv::MotionResultCmd_Request::_step_height_type arg)
  {
    msg_.step_height = std::move(arg);
    return Init_MotionResultCmd_Request_duration(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_foot_pose
{
public:
  explicit Init_MotionResultCmd_Request_foot_pose(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_step_height foot_pose(::protocol::srv::MotionResultCmd_Request::_foot_pose_type arg)
  {
    msg_.foot_pose = std::move(arg);
    return Init_MotionResultCmd_Request_step_height(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_ctrl_point
{
public:
  explicit Init_MotionResultCmd_Request_ctrl_point(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_foot_pose ctrl_point(::protocol::srv::MotionResultCmd_Request::_ctrl_point_type arg)
  {
    msg_.ctrl_point = std::move(arg);
    return Init_MotionResultCmd_Request_foot_pose(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_acc_des
{
public:
  explicit Init_MotionResultCmd_Request_acc_des(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_ctrl_point acc_des(::protocol::srv::MotionResultCmd_Request::_acc_des_type arg)
  {
    msg_.acc_des = std::move(arg);
    return Init_MotionResultCmd_Request_ctrl_point(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_pos_des
{
public:
  explicit Init_MotionResultCmd_Request_pos_des(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_acc_des pos_des(::protocol::srv::MotionResultCmd_Request::_pos_des_type arg)
  {
    msg_.pos_des = std::move(arg);
    return Init_MotionResultCmd_Request_acc_des(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_rpy_des
{
public:
  explicit Init_MotionResultCmd_Request_rpy_des(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_pos_des rpy_des(::protocol::srv::MotionResultCmd_Request::_rpy_des_type arg)
  {
    msg_.rpy_des = std::move(arg);
    return Init_MotionResultCmd_Request_pos_des(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_vel_des
{
public:
  explicit Init_MotionResultCmd_Request_vel_des(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_rpy_des vel_des(::protocol::srv::MotionResultCmd_Request::_vel_des_type arg)
  {
    msg_.vel_des = std::move(arg);
    return Init_MotionResultCmd_Request_rpy_des(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_cmd_source
{
public:
  explicit Init_MotionResultCmd_Request_cmd_source(::protocol::srv::MotionResultCmd_Request & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Request_vel_des cmd_source(::protocol::srv::MotionResultCmd_Request::_cmd_source_type arg)
  {
    msg_.cmd_source = std::move(arg);
    return Init_MotionResultCmd_Request_vel_des(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

class Init_MotionResultCmd_Request_motion_id
{
public:
  Init_MotionResultCmd_Request_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionResultCmd_Request_cmd_source motion_id(::protocol::srv::MotionResultCmd_Request::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionResultCmd_Request_cmd_source(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionResultCmd_Request>()
{
  return protocol::srv::builder::Init_MotionResultCmd_Request_motion_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotionResultCmd_Response_code
{
public:
  explicit Init_MotionResultCmd_Response_code(::protocol::srv::MotionResultCmd_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotionResultCmd_Response code(::protocol::srv::MotionResultCmd_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Response msg_;
};

class Init_MotionResultCmd_Response_result
{
public:
  explicit Init_MotionResultCmd_Response_result(::protocol::srv::MotionResultCmd_Response & msg)
  : msg_(msg)
  {}
  Init_MotionResultCmd_Response_code result(::protocol::srv::MotionResultCmd_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionResultCmd_Response_code(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Response msg_;
};

class Init_MotionResultCmd_Response_motion_id
{
public:
  Init_MotionResultCmd_Response_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionResultCmd_Response_result motion_id(::protocol::srv::MotionResultCmd_Response::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionResultCmd_Response_result(msg_);
  }

private:
  ::protocol::srv::MotionResultCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotionResultCmd_Response>()
{
  return protocol::srv::builder::Init_MotionResultCmd_Response_motion_id();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__BUILDER_HPP_
