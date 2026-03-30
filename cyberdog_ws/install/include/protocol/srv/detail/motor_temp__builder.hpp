// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MotorTemp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTOR_TEMP__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MOTOR_TEMP__BUILDER_HPP_

#include "protocol/srv/detail/motor_temp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotorTemp_Request>()
{
  return ::protocol::srv::MotorTemp_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MotorTemp_Response_code
{
public:
  explicit Init_MotorTemp_Response_code(::protocol::srv::MotorTemp_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MotorTemp_Response code(::protocol::srv::MotorTemp_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MotorTemp_Response msg_;
};

class Init_MotorTemp_Response_motor_temp
{
public:
  explicit Init_MotorTemp_Response_motor_temp(::protocol::srv::MotorTemp_Response & msg)
  : msg_(msg)
  {}
  Init_MotorTemp_Response_code motor_temp(::protocol::srv::MotorTemp_Response::_motor_temp_type arg)
  {
    msg_.motor_temp = std::move(arg);
    return Init_MotorTemp_Response_code(msg_);
  }

private:
  ::protocol::srv::MotorTemp_Response msg_;
};

class Init_MotorTemp_Response_result
{
public:
  Init_MotorTemp_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorTemp_Response_motor_temp result(::protocol::srv::MotorTemp_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MotorTemp_Response_motor_temp(msg_);
  }

private:
  ::protocol::srv::MotorTemp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MotorTemp_Response>()
{
  return protocol::srv::builder::Init_MotorTemp_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTOR_TEMP__BUILDER_HPP_
