// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OtaReady.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_READY__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_READY__BUILDER_HPP_

#include "protocol/msg/detail/ota_ready__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OtaReady_status
{
public:
  explicit Init_OtaReady_status(::protocol::msg::OtaReady & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OtaReady status(::protocol::msg::OtaReady::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OtaReady msg_;
};

class Init_OtaReady_ready
{
public:
  explicit Init_OtaReady_ready(::protocol::msg::OtaReady & msg)
  : msg_(msg)
  {}
  Init_OtaReady_status ready(::protocol::msg::OtaReady::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_OtaReady_status(msg_);
  }

private:
  ::protocol::msg::OtaReady msg_;
};

class Init_OtaReady_name
{
public:
  Init_OtaReady_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaReady_ready name(::protocol::msg::OtaReady::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_OtaReady_ready(msg_);
  }

private:
  ::protocol::msg::OtaReady msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OtaReady>()
{
  return protocol::msg::builder::Init_OtaReady_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_READY__BUILDER_HPP_
