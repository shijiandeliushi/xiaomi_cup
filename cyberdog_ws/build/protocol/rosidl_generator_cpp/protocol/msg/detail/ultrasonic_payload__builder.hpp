// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/UltrasonicPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/ultrasonic_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_UltrasonicPayload_ultrasonic_info
{
public:
  Init_UltrasonicPayload_ultrasonic_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::UltrasonicPayload ultrasonic_info(::protocol::msg::UltrasonicPayload::_ultrasonic_info_type arg)
  {
    msg_.ultrasonic_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::UltrasonicPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::UltrasonicPayload>()
{
  return protocol::msg::builder::Init_UltrasonicPayload_ultrasonic_info();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ULTRASONIC_PAYLOAD__BUILDER_HPP_
