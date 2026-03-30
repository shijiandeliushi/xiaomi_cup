// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BLEConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_CONNECT__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_CONNECT__BUILDER_HPP_

#include "protocol/srv/detail/ble_connect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BLEConnect_Request_selected_device
{
public:
  Init_BLEConnect_Request_selected_device()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::BLEConnect_Request selected_device(::protocol::srv::BLEConnect_Request::_selected_device_type arg)
  {
    msg_.selected_device = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BLEConnect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BLEConnect_Request>()
{
  return protocol::srv::builder::Init_BLEConnect_Request_selected_device();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BLEConnect_Response_code
{
public:
  explicit Init_BLEConnect_Response_code(::protocol::srv::BLEConnect_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BLEConnect_Response code(::protocol::srv::BLEConnect_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BLEConnect_Response msg_;
};

class Init_BLEConnect_Response_result
{
public:
  Init_BLEConnect_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BLEConnect_Response_code result(::protocol::srv::BLEConnect_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_BLEConnect_Response_code(msg_);
  }

private:
  ::protocol::srv::BLEConnect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BLEConnect_Response>()
{
  return protocol::srv::builder::Init_BLEConnect_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BLE_CONNECT__BUILDER_HPP_
