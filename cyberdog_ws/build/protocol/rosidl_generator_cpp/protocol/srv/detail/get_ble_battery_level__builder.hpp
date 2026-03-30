// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/GetBLEBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__BUILDER_HPP_

#include "protocol/srv/detail/get_ble_battery_level__struct.hpp"
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
auto build<::protocol::srv::GetBLEBatteryLevel_Request>()
{
  return ::protocol::srv::GetBLEBatteryLevel_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GetBLEBatteryLevel_Response_code
{
public:
  explicit Init_GetBLEBatteryLevel_Response_code(::protocol::srv::GetBLEBatteryLevel_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::GetBLEBatteryLevel_Response code(::protocol::srv::GetBLEBatteryLevel_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GetBLEBatteryLevel_Response msg_;
};

class Init_GetBLEBatteryLevel_Response_persentage
{
public:
  explicit Init_GetBLEBatteryLevel_Response_persentage(::protocol::srv::GetBLEBatteryLevel_Response & msg)
  : msg_(msg)
  {}
  Init_GetBLEBatteryLevel_Response_code persentage(::protocol::srv::GetBLEBatteryLevel_Response::_persentage_type arg)
  {
    msg_.persentage = std::move(arg);
    return Init_GetBLEBatteryLevel_Response_code(msg_);
  }

private:
  ::protocol::srv::GetBLEBatteryLevel_Response msg_;
};

class Init_GetBLEBatteryLevel_Response_connected
{
public:
  Init_GetBLEBatteryLevel_Response_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBLEBatteryLevel_Response_persentage connected(::protocol::srv::GetBLEBatteryLevel_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_GetBLEBatteryLevel_Response_persentage(msg_);
  }

private:
  ::protocol::srv::GetBLEBatteryLevel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GetBLEBatteryLevel_Response>()
{
  return protocol::srv::builder::Init_GetBLEBatteryLevel_Response_connected();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__BUILDER_HPP_
