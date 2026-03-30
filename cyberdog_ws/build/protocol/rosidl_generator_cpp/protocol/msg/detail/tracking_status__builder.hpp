// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/TrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACKING_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__TRACKING_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/tracking_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_TrackingStatus_status
{
public:
  Init_TrackingStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::TrackingStatus status(::protocol::msg::TrackingStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::TrackingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::TrackingStatus>()
{
  return protocol::msg::builder::Init_TrackingStatus_status();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRACKING_STATUS__BUILDER_HPP_
