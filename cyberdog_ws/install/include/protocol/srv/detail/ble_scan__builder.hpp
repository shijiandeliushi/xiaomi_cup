// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_SCAN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_SCAN__BUILDER_HPP_

#include "protocol/srv/detail/ble_scan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BLEScan_Request_scan_seconds
{
public:
  Init_BLEScan_Request_scan_seconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::BLEScan_Request scan_seconds(::protocol::srv::BLEScan_Request::_scan_seconds_type arg)
  {
    msg_.scan_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BLEScan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BLEScan_Request>()
{
  return protocol::srv::builder::Init_BLEScan_Request_scan_seconds();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BLEScan_Response_code
{
public:
  explicit Init_BLEScan_Response_code(::protocol::srv::BLEScan_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BLEScan_Response code(::protocol::srv::BLEScan_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BLEScan_Response msg_;
};

class Init_BLEScan_Response_device_info_list
{
public:
  Init_BLEScan_Response_device_info_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BLEScan_Response_code device_info_list(::protocol::srv::BLEScan_Response::_device_info_list_type arg)
  {
    msg_.device_info_list = std::move(arg);
    return Init_BLEScan_Response_code(msg_);
  }

private:
  ::protocol::srv::BLEScan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BLEScan_Response>()
{
  return protocol::srv::builder::Init_BLEScan_Response_device_info_list();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BLE_SCAN__BUILDER_HPP_
