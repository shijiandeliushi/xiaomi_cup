// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'map'
#include "protocol/msg/detail/occupancy_grid__struct.hpp"
// Member 'labels'
#include "protocol/msg/detail/label__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__MapLabel __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MapLabel __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapLabel_
{
  using Type = MapLabel_<ContainerAllocator>;

  explicit MapLabel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->map_id = 0ull;
      this->is_outdoor = false;
    }
  }

  explicit MapLabel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc),
    map(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->map_id = 0ull;
      this->is_outdoor = false;
    }
  }

  // field types and members
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;
  using _is_outdoor_type =
    bool;
  _is_outdoor_type is_outdoor;
  using _map_type =
    protocol::msg::OccupancyGrid_<ContainerAllocator>;
  _map_type map;
  using _labels_type =
    std::vector<protocol::msg::Label_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Label_<ContainerAllocator>>>;
  _labels_type labels;

  // setters for named parameter idiom
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__map_id(
    const uint64_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__is_outdoor(
    const bool & _arg)
  {
    this->is_outdoor = _arg;
    return *this;
  }
  Type & set__map(
    const protocol::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__labels(
    const std::vector<protocol::msg::Label_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::Label_<ContainerAllocator>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MapLabel_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MapLabel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MapLabel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MapLabel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MapLabel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MapLabel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MapLabel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MapLabel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MapLabel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MapLabel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MapLabel
    std::shared_ptr<protocol::msg::MapLabel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MapLabel
    std::shared_ptr<protocol::msg::MapLabel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapLabel_ & other) const
  {
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->is_outdoor != other.is_outdoor) {
      return false;
    }
    if (this->map != other.map) {
      return false;
    }
    if (this->labels != other.labels) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapLabel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapLabel_

// alias to use template instance with default allocator
using MapLabel =
  protocol::msg::MapLabel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_HPP_
