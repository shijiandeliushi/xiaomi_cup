// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__BUILDER_HPP_

#include "protocol/msg/detail/motion_servo_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionServoResponse_code
{
public:
  explicit Init_MotionServoResponse_code(::protocol::msg::MotionServoResponse & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionServoResponse code(::protocol::msg::MotionServoResponse::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

class Init_MotionServoResponse_result
{
public:
  explicit Init_MotionServoResponse_result(::protocol::msg::MotionServoResponse & msg)
  : msg_(msg)
  {}
  Init_MotionServoResponse_code result(::protocol::msg::MotionServoResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotionServoResponse_code(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

class Init_MotionServoResponse_status
{
public:
  explicit Init_MotionServoResponse_status(::protocol::msg::MotionServoResponse & msg)
  : msg_(msg)
  {}
  Init_MotionServoResponse_result status(::protocol::msg::MotionServoResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotionServoResponse_result(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

class Init_MotionServoResponse_order_process_bar
{
public:
  explicit Init_MotionServoResponse_order_process_bar(::protocol::msg::MotionServoResponse & msg)
  : msg_(msg)
  {}
  Init_MotionServoResponse_status order_process_bar(::protocol::msg::MotionServoResponse::_order_process_bar_type arg)
  {
    msg_.order_process_bar = std::move(arg);
    return Init_MotionServoResponse_status(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

class Init_MotionServoResponse_cmd_id
{
public:
  explicit Init_MotionServoResponse_cmd_id(::protocol::msg::MotionServoResponse & msg)
  : msg_(msg)
  {}
  Init_MotionServoResponse_order_process_bar cmd_id(::protocol::msg::MotionServoResponse::_cmd_id_type arg)
  {
    msg_.cmd_id = std::move(arg);
    return Init_MotionServoResponse_order_process_bar(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

class Init_MotionServoResponse_motion_id
{
public:
  Init_MotionServoResponse_motion_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionServoResponse_cmd_id motion_id(::protocol::msg::MotionServoResponse::_motion_id_type arg)
  {
    msg_.motion_id = std::move(arg);
    return Init_MotionServoResponse_cmd_id(msg_);
  }

private:
  ::protocol::msg::MotionServoResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionServoResponse>()
{
  return protocol::msg::builder::Init_MotionServoResponse_motion_id();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_RESPONSE__BUILDER_HPP_
