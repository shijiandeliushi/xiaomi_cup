// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/RebootMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__BUILDER_HPP_

#include "protocol/srv/detail/reboot_machine__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_RebootMachine_Request_rebootmachine
{
public:
  Init_RebootMachine_Request_rebootmachine()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::RebootMachine_Request rebootmachine(::protocol::srv::RebootMachine_Request::_rebootmachine_type arg)
  {
    msg_.rebootmachine = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::RebootMachine_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::RebootMachine_Request>()
{
  return protocol::srv::builder::Init_RebootMachine_Request_rebootmachine();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_RebootMachine_Response_rebootresult
{
public:
  Init_RebootMachine_Response_rebootresult()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::RebootMachine_Response rebootresult(::protocol::srv::RebootMachine_Response::_rebootresult_type arg)
  {
    msg_.rebootresult = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::RebootMachine_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::RebootMachine_Response>()
{
  return protocol::srv::builder::Init_RebootMachine_Response_rebootresult();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__REBOOT_MACHINE__BUILDER_HPP_
