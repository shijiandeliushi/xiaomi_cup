// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__BUILDER_HPP_

#include "protocol/msg/detail/motion_servo_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionServoCmd_step_height
{
public:
  explicit Init_MotionServoCmd_step_height(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionServoCmd step_height(::protocol::msg::MotionServoCmd::_step_height_type arg)
  {
    msg_.step_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_foot_pose
{
public:
  explicit Init_MotionServoCmd_foot_pose(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_step_height foot_pose(::protocol::msg::MotionServoCmd::_foot_pose_type arg)
  {
    msg_.foot_pose = std::move(arg);
    return Init_MotionServoCmd_step_height(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_ctrl_point
{
public:
  explicit Init_MotionServoCmd_ctrl_point(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_foot_pose ctrl_point(::protocol::msg::MotionServoCmd::_ctrl_point_type arg)
  {
    msg_.ctrl_point = std::move(arg);
    return Init_MotionServoCmd_foot_pose(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_acc_des
{
public:
  explicit Init_MotionServoCmd_acc_des(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_ctrl_point acc_des(::protocol::msg::MotionServoCmd::_acc_des_type arg)
  {
    msg_.acc_des = std::move(arg);
    return Init_MotionServoCmd_ctrl_point(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_pos_des
{
public:
  explicit Init_MotionServoCmd_pos_des(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_acc_des pos_des(::protocol::msg::MotionServoCmd::_pos_des_type arg)
  {
    msg_.pos_des = std::move(arg);
    return Init_MotionServoCmd_acc_des(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_rpy_des
{
public:
  explicit Init_MotionServoCmd_rpy_des(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_pos_des rpy_des(::protocol::msg::MotionServoCmd::_rpy_des_type arg)
  {
    msg_.rpy_des = std::move(arg);
    return Init_MotionServoCmd_pos_des(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_vel_des
{
public:
  explicit Init_MotionServoCmd_vel_des(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_rpy_des vel_des(::protocol::msg::MotionServoCmd::_vel_des_type arg)
  {
    msg_.vel_des = std::move(arg);
    return Init_MotionServoCmd_rpy_des(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_value
{
public:
  explicit Init_MotionServoCmd_value(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_vel_des value(::protocol::msg::MotionServoCmd::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_MotionServoCmd_vel_des(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_cmd_source
{
public:
  explicit Init_MotionServoCmd_cmd_source(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_value cmd_source(::protocol::msg::MotionServoCmd::_cmd_source_type arg)
  {
    msg_.cmd_source = std::move(arg);
    return Init_MotionServoCmd_value(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_cmd_type
{
public:
  explicit Init_MotionServoCmd_cmd_type(::protocol::msg::MotionServoCmd & msg)
  : msg_(msg)
  {}
  Init_MotionServoCmd_cmd_source cmd_type(::protocol::msg::MotionServoCmd::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_MotionServoCmd_cmd_source(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

class Init_MotionServoCmd_motion_id
{
public:
  Init_MotionServoCmd_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionServoCmd_cmd_type motion_id(::protocol::msg::MotionServoCmd::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionServoCmd_cmd_type(msg_);
  }

private:
  ::protocol::msg::MotionServoCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionServoCmd>()
{
  return protocol::msg::builder::Init_MotionServoCmd_motion_id();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__BUILDER_HPP_
