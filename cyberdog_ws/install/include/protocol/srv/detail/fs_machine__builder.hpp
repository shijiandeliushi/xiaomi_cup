// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/FsMachine.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FS_MACHINE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__FS_MACHINE__BUILDER_HPP_

#include "protocol/srv/detail/fs_machine__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FsMachine_Request_target_state
{
public:
  Init_FsMachine_Request_target_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::FsMachine_Request target_state(::protocol::srv::FsMachine_Request::_target_state_type arg)
  {
    msg_.target_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FsMachine_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FsMachine_Request>()
{
  return protocol::srv::builder::Init_FsMachine_Request_target_state();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FsMachine_Response_code
{
public:
  explicit Init_FsMachine_Response_code(::protocol::srv::FsMachine_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FsMachine_Response code(::protocol::srv::FsMachine_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FsMachine_Response msg_;
};

class Init_FsMachine_Response_current_state
{
public:
  Init_FsMachine_Response_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsMachine_Response_code current_state(::protocol::srv::FsMachine_Response::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_FsMachine_Response_code(msg_);
  }

private:
  ::protocol::srv::FsMachine_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FsMachine_Response>()
{
  return protocol::srv::builder::Init_FsMachine_Response_current_state();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FS_MACHINE__BUILDER_HPP_
