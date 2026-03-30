// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_

#include "protocol/msg/detail/motion_custom_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionCustomCmd_duration
{
public:
  explicit Init_MotionCustomCmd_duration(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionCustomCmd duration(::protocol::msg::MotionCustomCmd::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_value
{
public:
  explicit Init_MotionCustomCmd_value(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_duration value(::protocol::msg::MotionCustomCmd::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_MotionCustomCmd_duration(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_step_height
{
public:
  explicit Init_MotionCustomCmd_step_height(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_value step_height(::protocol::msg::MotionCustomCmd::_step_height_type arg)
  {
    msg_.step_height = std::move(arg);
    return Init_MotionCustomCmd_value(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_foot_pose
{
public:
  explicit Init_MotionCustomCmd_foot_pose(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_step_height foot_pose(::protocol::msg::MotionCustomCmd::_foot_pose_type arg)
  {
    msg_.foot_pose = std::move(arg);
    return Init_MotionCustomCmd_step_height(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_ctrl_point
{
public:
  explicit Init_MotionCustomCmd_ctrl_point(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_foot_pose ctrl_point(::protocol::msg::MotionCustomCmd::_ctrl_point_type arg)
  {
    msg_.ctrl_point = std::move(arg);
    return Init_MotionCustomCmd_foot_pose(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_acc_des
{
public:
  explicit Init_MotionCustomCmd_acc_des(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_ctrl_point acc_des(::protocol::msg::MotionCustomCmd::_acc_des_type arg)
  {
    msg_.acc_des = std::move(arg);
    return Init_MotionCustomCmd_ctrl_point(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_pos_des
{
public:
  explicit Init_MotionCustomCmd_pos_des(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_acc_des pos_des(::protocol::msg::MotionCustomCmd::_pos_des_type arg)
  {
    msg_.pos_des = std::move(arg);
    return Init_MotionCustomCmd_acc_des(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_rpy_des
{
public:
  explicit Init_MotionCustomCmd_rpy_des(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_pos_des rpy_des(::protocol::msg::MotionCustomCmd::_rpy_des_type arg)
  {
    msg_.rpy_des = std::move(arg);
    return Init_MotionCustomCmd_pos_des(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_vel_des
{
public:
  explicit Init_MotionCustomCmd_vel_des(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_rpy_des vel_des(::protocol::msg::MotionCustomCmd::_vel_des_type arg)
  {
    msg_.vel_des = std::move(arg);
    return Init_MotionCustomCmd_rpy_des(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_life_count
{
public:
  explicit Init_MotionCustomCmd_life_count(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_vel_des life_count(::protocol::msg::MotionCustomCmd::_life_count_type arg)
  {
    msg_.life_count = std::move(arg);
    return Init_MotionCustomCmd_vel_des(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_contact
{
public:
  explicit Init_MotionCustomCmd_contact(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_life_count contact(::protocol::msg::MotionCustomCmd::_contact_type arg)
  {
    msg_.contact = std::move(arg);
    return Init_MotionCustomCmd_life_count(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_gait_id
{
public:
  explicit Init_MotionCustomCmd_gait_id(::protocol::msg::MotionCustomCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCustomCmd_contact gait_id(::protocol::msg::MotionCustomCmd::_gait_id_type arg)
  {
    msg_.gait_id = std::move(arg);
    return Init_MotionCustomCmd_contact(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

class Init_MotionCustomCmd_mode
{
public:
  Init_MotionCustomCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCustomCmd_gait_id mode(::protocol::msg::MotionCustomCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotionCustomCmd_gait_id(msg_);
  }

private:
  ::protocol::msg::MotionCustomCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionCustomCmd>()
{
  return protocol::msg::builder::Init_MotionCustomCmd_mode();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_CUSTOM_CMD__BUILDER_HPP_
