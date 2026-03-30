// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OtaMotion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_MOTION__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_MOTION__BUILDER_HPP_

#include "protocol/msg/detail/ota_motion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OtaMotion_version
{
public:
  explicit Init_OtaMotion_version(::protocol::msg::OtaMotion & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OtaMotion version(::protocol::msg::OtaMotion::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OtaMotion msg_;
};

class Init_OtaMotion_command
{
public:
  Init_OtaMotion_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaMotion_version command(::protocol::msg::OtaMotion::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_OtaMotion_version(msg_);
  }

private:
  ::protocol::msg::OtaMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OtaMotion>()
{
  return protocol::msg::builder::Init_OtaMotion_command();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_MOTION__BUILDER_HPP_
