// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/ElecSkin.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ELEC_SKIN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ELEC_SKIN__BUILDER_HPP_

#include "protocol/srv/detail/elec_skin__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ElecSkin_Request_wave_cycle_time
{
public:
  explicit Init_ElecSkin_Request_wave_cycle_time(::protocol::srv::ElecSkin_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::ElecSkin_Request wave_cycle_time(::protocol::srv::ElecSkin_Request::_wave_cycle_time_type arg)
  {
    msg_.wave_cycle_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ElecSkin_Request msg_;
};

class Init_ElecSkin_Request_mode
{
public:
  Init_ElecSkin_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElecSkin_Request_wave_cycle_time mode(::protocol::srv::ElecSkin_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ElecSkin_Request_wave_cycle_time(msg_);
  }

private:
  ::protocol::srv::ElecSkin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ElecSkin_Request>()
{
  return protocol::srv::builder::Init_ElecSkin_Request_mode();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ElecSkin_Response_success
{
public:
  Init_ElecSkin_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ElecSkin_Response success(::protocol::srv::ElecSkin_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ElecSkin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ElecSkin_Response>()
{
  return protocol::srv::builder::Init_ElecSkin_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ELEC_SKIN__BUILDER_HPP_
