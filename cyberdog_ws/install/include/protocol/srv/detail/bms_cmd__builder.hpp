// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BmsCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BMS_CMD__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BMS_CMD__BUILDER_HPP_

#include "protocol/srv/detail/bms_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BmsCmd_Request_wireless_charging_command
{
public:
  explicit Init_BmsCmd_Request_wireless_charging_command(::protocol::srv::BmsCmd_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BmsCmd_Request wireless_charging_command(::protocol::srv::BmsCmd_Request::_wireless_charging_command_type arg)
  {
    msg_.wireless_charging_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BmsCmd_Request msg_;
};

class Init_BmsCmd_Request_electric_machine_command
{
public:
  Init_BmsCmd_Request_electric_machine_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsCmd_Request_wireless_charging_command electric_machine_command(::protocol::srv::BmsCmd_Request::_electric_machine_command_type arg)
  {
    msg_.electric_machine_command = std::move(arg);
    return Init_BmsCmd_Request_wireless_charging_command(msg_);
  }

private:
  ::protocol::srv::BmsCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BmsCmd_Request>()
{
  return protocol::srv::builder::Init_BmsCmd_Request_electric_machine_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BmsCmd_Response_code
{
public:
  explicit Init_BmsCmd_Response_code(::protocol::srv::BmsCmd_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BmsCmd_Response code(::protocol::srv::BmsCmd_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BmsCmd_Response msg_;
};

class Init_BmsCmd_Response_success
{
public:
  Init_BmsCmd_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsCmd_Response_code success(::protocol::srv::BmsCmd_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_BmsCmd_Response_code(msg_);
  }

private:
  ::protocol::srv::BmsCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BmsCmd_Response>()
{
  return protocol::srv::builder::Init_BmsCmd_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BMS_CMD__BUILDER_HPP_
