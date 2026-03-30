// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLE_INFO__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BLE_INFO__BUILDER_HPP_

#include "protocol/msg/detail/ble_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_BLEInfo_firmware_version
{
public:
  explicit Init_BLEInfo_firmware_version(::protocol::msg::BLEInfo & msg)
  : msg_(msg)
  {}
  ::protocol::msg::BLEInfo firmware_version(::protocol::msg::BLEInfo::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

class Init_BLEInfo_battery_level
{
public:
  explicit Init_BLEInfo_battery_level(::protocol::msg::BLEInfo & msg)
  : msg_(msg)
  {}
  Init_BLEInfo_firmware_version battery_level(::protocol::msg::BLEInfo::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_BLEInfo_firmware_version(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

class Init_BLEInfo_device_type
{
public:
  explicit Init_BLEInfo_device_type(::protocol::msg::BLEInfo & msg)
  : msg_(msg)
  {}
  Init_BLEInfo_battery_level device_type(::protocol::msg::BLEInfo::_device_type_type arg)
  {
    msg_.device_type = std::move(arg);
    return Init_BLEInfo_battery_level(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

class Init_BLEInfo_addr_type
{
public:
  explicit Init_BLEInfo_addr_type(::protocol::msg::BLEInfo & msg)
  : msg_(msg)
  {}
  Init_BLEInfo_device_type addr_type(::protocol::msg::BLEInfo::_addr_type_type arg)
  {
    msg_.addr_type = std::move(arg);
    return Init_BLEInfo_device_type(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

class Init_BLEInfo_name
{
public:
  explicit Init_BLEInfo_name(::protocol::msg::BLEInfo & msg)
  : msg_(msg)
  {}
  Init_BLEInfo_addr_type name(::protocol::msg::BLEInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BLEInfo_addr_type(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

class Init_BLEInfo_mac
{
public:
  Init_BLEInfo_mac()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BLEInfo_name mac(::protocol::msg::BLEInfo::_mac_type arg)
  {
    msg_.mac = std::move(arg);
    return Init_BLEInfo_name(msg_);
  }

private:
  ::protocol::msg::BLEInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::BLEInfo>()
{
  return protocol::msg::builder::Init_BLEInfo_mac();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLE_INFO__BUILDER_HPP_
