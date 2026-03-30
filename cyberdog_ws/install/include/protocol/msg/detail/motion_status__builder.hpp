// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/motion_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionStatus_motor_error
{
public:
  explicit Init_MotionStatus_motor_error(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionStatus motor_error(::protocol::msg::MotionStatus::_motor_error_type arg)
  {
    msg_.motor_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_footpos_error
{
public:
  explicit Init_MotionStatus_footpos_error(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  Init_MotionStatus_motor_error footpos_error(::protocol::msg::MotionStatus::_footpos_error_type arg)
  {
    msg_.footpos_error = std::move(arg);
    return Init_MotionStatus_motor_error(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_ori_error
{
public:
  explicit Init_MotionStatus_ori_error(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  Init_MotionStatus_footpos_error ori_error(::protocol::msg::MotionStatus::_ori_error_type arg)
  {
    msg_.ori_error = std::move(arg);
    return Init_MotionStatus_footpos_error(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_switch_status
{
public:
  explicit Init_MotionStatus_switch_status(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  Init_MotionStatus_ori_error switch_status(::protocol::msg::MotionStatus::_switch_status_type arg)
  {
    msg_.switch_status = std::move(arg);
    return Init_MotionStatus_ori_error(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_order_process_bar
{
public:
  explicit Init_MotionStatus_order_process_bar(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  Init_MotionStatus_switch_status order_process_bar(::protocol::msg::MotionStatus::_order_process_bar_type arg)
  {
    msg_.order_process_bar = std::move(arg);
    return Init_MotionStatus_switch_status(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_contact
{
public:
  explicit Init_MotionStatus_contact(::protocol::msg::MotionStatus & msg)
  : msg_(msg)
  {}
  Init_MotionStatus_order_process_bar contact(::protocol::msg::MotionStatus::_contact_type arg)
  {
    msg_.contact = std::move(arg);
    return Init_MotionStatus_order_process_bar(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

class Init_MotionStatus_motion_id
{
public:
  Init_MotionStatus_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionStatus_contact motion_id(::protocol::msg::MotionStatus::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionStatus_contact(msg_);
  }

private:
  ::protocol::msg::MotionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionStatus>()
{
  return protocol::msg::builder::Init_MotionStatus_motion_id();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_STATUS__BUILDER_HPP_
