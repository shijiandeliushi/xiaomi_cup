// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/BluetoothStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/bluetooth_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_BluetoothStatus_connectable
{
public:
  explicit Init_BluetoothStatus_connectable(::protocol::msg::BluetoothStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::BluetoothStatus connectable(::protocol::msg::BluetoothStatus::_connectable_type arg)
  {
    msg_.connectable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::BluetoothStatus msg_;
};

class Init_BluetoothStatus_advtiseable
{
public:
  Init_BluetoothStatus_advtiseable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BluetoothStatus_connectable advtiseable(::protocol::msg::BluetoothStatus::_advtiseable_type arg)
  {
    msg_.advtiseable = std::move(arg);
    return Init_BluetoothStatus_connectable(msg_);
  }

private:
  ::protocol::msg::BluetoothStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::BluetoothStatus>()
{
  return protocol::msg::builder::Init_BluetoothStatus_advtiseable();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__BUILDER_HPP_
