// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/MachineState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MACHINE_STATE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MACHINE_STATE__BUILDER_HPP_

#include "protocol/srv/detail/machine_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MachineState_Request_ticks
{
public:
  explicit Init_MachineState_Request_ticks(::protocol::srv::MachineState_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MachineState_Request ticks(::protocol::srv::MachineState_Request::_ticks_type arg)
  {
    msg_.ticks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MachineState_Request msg_;
};

class Init_MachineState_Request_state
{
public:
  Init_MachineState_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineState_Request_ticks state(::protocol::srv::MachineState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MachineState_Request_ticks(msg_);
  }

private:
  ::protocol::srv::MachineState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MachineState_Request>()
{
  return protocol::srv::builder::Init_MachineState_Request_state();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_MachineState_Response_code
{
public:
  explicit Init_MachineState_Response_code(::protocol::srv::MachineState_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::MachineState_Response code(::protocol::srv::MachineState_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::MachineState_Response msg_;
};

class Init_MachineState_Response_success
{
public:
  Init_MachineState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineState_Response_code success(::protocol::srv::MachineState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MachineState_Response_code(msg_);
  }

private:
  ::protocol::srv::MachineState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::MachineState_Response>()
{
  return protocol::srv::builder::Init_MachineState_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MACHINE_STATE__BUILDER_HPP_
