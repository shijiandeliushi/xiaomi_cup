// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OtaCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_CMD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_CMD__BUILDER_HPP_

#include "protocol/msg/detail/ota_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OtaCmd_type
{
public:
  explicit Init_OtaCmd_type(::protocol::msg::OtaCmd & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OtaCmd type(::protocol::msg::OtaCmd::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OtaCmd msg_;
};

class Init_OtaCmd_value
{
public:
  explicit Init_OtaCmd_value(::protocol::msg::OtaCmd & msg)
  : msg_(msg)
  {}
  Init_OtaCmd_type value(::protocol::msg::OtaCmd::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_OtaCmd_type(msg_);
  }

private:
  ::protocol::msg::OtaCmd msg_;
};

class Init_OtaCmd_key
{
public:
  Init_OtaCmd_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaCmd_value key(::protocol::msg::OtaCmd::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_OtaCmd_value(msg_);
  }

private:
  ::protocol::msg::OtaCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OtaCmd>()
{
  return protocol::msg::builder::Init_OtaCmd_key();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_CMD__BUILDER_HPP_
