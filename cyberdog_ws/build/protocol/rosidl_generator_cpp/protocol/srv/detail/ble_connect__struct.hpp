// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/BLEConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'selected_device'
#include "protocol/msg/detail/ble_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__BLEConnect_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BLEConnect_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BLEConnect_Request_
{
  using Type = BLEConnect_Request_<ContainerAllocator>;

  explicit BLEConnect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : selected_device(_init)
  {
    (void)_init;
  }

  explicit BLEConnect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : selected_device(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _selected_device_type =
    protocol::msg::BLEInfo_<ContainerAllocator>;
  _selected_device_type selected_device;

  // setters for named parameter idiom
  Type & set__selected_device(
    const protocol::msg::BLEInfo_<ContainerAllocator> & _arg)
  {
    this->selected_device = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::BLEConnect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BLEConnect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEConnect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEConnect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BLEConnect_Request
    std::shared_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BLEConnect_Request
    std::shared_ptr<protocol::srv::BLEConnect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEConnect_Request_ & other) const
  {
    if (this->selected_device != other.selected_device) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEConnect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEConnect_Request_

// alias to use template instance with default allocator
using BLEConnect_Request =
  protocol::srv::BLEConnect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BLEConnect_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BLEConnect_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BLEConnect_Response_
{
  using Type = BLEConnect_Response_<ContainerAllocator>;

  explicit BLEConnect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  explicit BLEConnect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
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
    protocol::srv::BLEConnect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BLEConnect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEConnect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BLEConnect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BLEConnect_Response
    std::shared_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BLEConnect_Response
    std::shared_ptr<protocol::srv::BLEConnect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BLEConnect_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BLEConnect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BLEConnect_Response_

// alias to use template instance with default allocator
using BLEConnect_Response =
  protocol::srv::BLEConnect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct BLEConnect
{
  using Request = protocol::srv::BLEConnect_Request;
  using Response = protocol::srv::BLEConnect_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BLE_CONNECT__STRUCT_HPP_
