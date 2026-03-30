// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AlgoList.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_LIST__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__ALGO_LIST__BUILDER_HPP_

#include "protocol/msg/detail/algo_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AlgoList_algo_module
{
public:
  Init_AlgoList_algo_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::AlgoList algo_module(::protocol::msg::AlgoList::_algo_module_type arg)
  {
    msg_.algo_module = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AlgoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AlgoList>()
{
  return protocol::msg::builder::Init_AlgoList_algo_module();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ALGO_LIST__BUILDER_HPP_
