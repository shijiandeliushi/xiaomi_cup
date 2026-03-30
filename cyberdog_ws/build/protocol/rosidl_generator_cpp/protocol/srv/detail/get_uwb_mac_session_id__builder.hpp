// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/GetUWBMacSessionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__BUILDER_HPP_

#include "protocol/srv/detail/get_uwb_mac_session_id__struct.hpp"
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
auto build<::protocol::srv::GetUWBMacSessionID_Request>()
{
  return ::protocol::srv::GetUWBMacSessionID_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GetUWBMacSessionID_Response_code
{
public:
  explicit Init_GetUWBMacSessionID_Response_code(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::GetUWBMacSessionID_Response code(::protocol::srv::GetUWBMacSessionID_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_slave4
{
public:
  explicit Init_GetUWBMacSessionID_Response_slave4(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  Init_GetUWBMacSessionID_Response_code slave4(::protocol::srv::GetUWBMacSessionID_Response::_slave4_type arg)
  {
    msg_.slave4 = std::move(arg);
    return Init_GetUWBMacSessionID_Response_code(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_slave3
{
public:
  explicit Init_GetUWBMacSessionID_Response_slave3(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  Init_GetUWBMacSessionID_Response_slave4 slave3(::protocol::srv::GetUWBMacSessionID_Response::_slave3_type arg)
  {
    msg_.slave3 = std::move(arg);
    return Init_GetUWBMacSessionID_Response_slave4(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_slave2
{
public:
  explicit Init_GetUWBMacSessionID_Response_slave2(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  Init_GetUWBMacSessionID_Response_slave3 slave2(::protocol::srv::GetUWBMacSessionID_Response::_slave2_type arg)
  {
    msg_.slave2 = std::move(arg);
    return Init_GetUWBMacSessionID_Response_slave3(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_slave1
{
public:
  explicit Init_GetUWBMacSessionID_Response_slave1(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  Init_GetUWBMacSessionID_Response_slave2 slave1(::protocol::srv::GetUWBMacSessionID_Response::_slave1_type arg)
  {
    msg_.slave1 = std::move(arg);
    return Init_GetUWBMacSessionID_Response_slave2(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_master
{
public:
  explicit Init_GetUWBMacSessionID_Response_master(::protocol::srv::GetUWBMacSessionID_Response & msg)
  : msg_(msg)
  {}
  Init_GetUWBMacSessionID_Response_slave1 master(::protocol::srv::GetUWBMacSessionID_Response::_master_type arg)
  {
    msg_.master = std::move(arg);
    return Init_GetUWBMacSessionID_Response_slave1(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

class Init_GetUWBMacSessionID_Response_session_id
{
public:
  Init_GetUWBMacSessionID_Response_session_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUWBMacSessionID_Response_master session_id(::protocol::srv::GetUWBMacSessionID_Response::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_GetUWBMacSessionID_Response_master(msg_);
  }

private:
  ::protocol::srv::GetUWBMacSessionID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GetUWBMacSessionID_Response>()
{
  return protocol::srv::builder::Init_GetUWBMacSessionID_Response_session_id();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__BUILDER_HPP_
