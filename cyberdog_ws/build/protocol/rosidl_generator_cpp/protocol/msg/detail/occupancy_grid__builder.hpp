// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_

#include "protocol/msg/detail/occupancy_grid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OccupancyGrid_data
{
public:
  explicit Init_OccupancyGrid_data(::protocol::msg::OccupancyGrid & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OccupancyGrid data(::protocol::msg::OccupancyGrid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OccupancyGrid msg_;
};

class Init_OccupancyGrid_info
{
public:
  explicit Init_OccupancyGrid_info(::protocol::msg::OccupancyGrid & msg)
  : msg_(msg)
  {}
  Init_OccupancyGrid_data info(::protocol::msg::OccupancyGrid::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OccupancyGrid_data(msg_);
  }

private:
  ::protocol::msg::OccupancyGrid msg_;
};

class Init_OccupancyGrid_header
{
public:
  Init_OccupancyGrid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OccupancyGrid_info header(::protocol::msg::OccupancyGrid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OccupancyGrid_info(msg_);
  }

private:
  ::protocol::msg::OccupancyGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OccupancyGrid>()
{
  return protocol::msg::builder::Init_OccupancyGrid_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__BUILDER_HPP_
