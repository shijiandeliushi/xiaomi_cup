// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/ManagerInit.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MANAGER_INIT__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MANAGER_INIT__BUILDER_HPP_

#include "protocol/srv/detail/manager_init__struct.hpp"
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
auto build<::protocol::srv::ManagerInit_Request>()
{
  return ::protocol::srv::ManagerInit_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ManagerInit_Response_res_code
{
public:
  Init_ManagerInit_Response_res_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ManagerInit_Response res_code(::protocol::srv::ManagerInit_Response::_res_code_type arg)
  {
    msg_.res_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ManagerInit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ManagerInit_Response>()
{
  return protocol::srv::builder::Init_ManagerInit_Response_res_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MANAGER_INIT__BUILDER_HPP_
