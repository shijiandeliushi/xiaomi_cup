// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/BLEScan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BLEScan_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BLEScan_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BLEScan_Request_
{
  using Type = BLEScan_Request_<ContainerAllocator>;

  explicit BLEScan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_seconds = 0.0;
    }
  }

  explicit BLEScan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_seconds = 0.0;
    }
  }

  // field types and members
  using _scan_seconds_type =
    double;
  _scan_seconds_type scan_seconds;

  // setters for named parameter idiom
  Type & set__scan_seconds(
    const double & _arg)
  {
    this->scan_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::BLEScan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BLEScan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEScan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEScan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BLEScan_Request
    std::shared_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BLEScan_Request
    std::shared_ptr<protocol::srv::BLEScan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEScan_Request_ & other) const
  {
    if (this->scan_seconds != other.scan_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEScan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEScan_Request_

// alias to use template instance with default allocator
using BLEScan_Request =
  protocol::srv::BLEScan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'device_info_list'
#include "protocol/msg/detail/ble_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__BLEScan_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BLEScan_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BLEScan_Response_
{
  using Type = BLEScan_Response_<ContainerAllocator>;

  explicit BLEScan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit BLEScan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _device_info_list_type =
    std::vector<protocol::msg::BLEInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::BLEInfo_<ContainerAllocator>>>;
  _device_info_list_type device_info_list;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__device_info_list(
    const std::vector<protocol::msg::BLEInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::BLEInfo_<ContainerAllocator>>> & _arg)
  {
    this->device_info_list = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::BLEScan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BLEScan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEScan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEScan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BLEScan_Response
    std::shared_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BLEScan_Response
    std::shared_ptr<protocol::srv::BLEScan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEScan_Response_ & other) const
  {
    if (this->device_info_list != other.device_info_list) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEScan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEScan_Response_

// alias to use template instance with default allocator
using BLEScan_Response =
  protocol::srv::BLEScan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct BLEScan
{
  using Request = protocol::srv::BLEScan_Request;
  using Response = protocol::srv::BLEScan_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BLE_SCAN__STRUCT_HPP_
