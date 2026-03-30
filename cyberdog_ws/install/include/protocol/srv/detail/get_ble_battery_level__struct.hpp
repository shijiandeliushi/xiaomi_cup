// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/GetBLEBatteryLevel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetBLEBatteryLevel_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetBLEBatteryLevel_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBLEBatteryLevel_Request_
{
  using Type = GetBLEBatteryLevel_Request_<ContainerAllocator>;

  explicit GetBLEBatteryLevel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetBLEBatteryLevel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetBLEBatteryLevel_Request
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetBLEBatteryLevel_Request
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBLEBatteryLevel_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBLEBatteryLevel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBLEBatteryLevel_Request_

// alias to use template instance with default allocator
using GetBLEBatteryLevel_Request =
  protocol::srv::GetBLEBatteryLevel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__GetBLEBatteryLevel_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__GetBLEBatteryLevel_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBLEBatteryLevel_Response_
{
  using Type = GetBLEBatteryLevel_Response_<ContainerAllocator>;

  explicit GetBLEBatteryLevel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->persentage = 0.0f;
      this->code = 0l;
    }
  }

  explicit GetBLEBatteryLevel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->persentage = 0.0f;
      this->code = 0l;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _persentage_type =
    float;
  _persentage_type persentage;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__persentage(
    const float & _arg)
  {
    this->persentage = _arg;
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
    protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__GetBLEBatteryLevel_Response
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__GetBLEBatteryLevel_Response
    std::shared_ptr<protocol::srv::GetBLEBatteryLevel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBLEBatteryLevel_Response_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->persentage != other.persentage) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBLEBatteryLevel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBLEBatteryLevel_Response_

// alias to use template instance with default allocator
using GetBLEBatteryLevel_Response =
  protocol::srv::GetBLEBatteryLevel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct GetBLEBatteryLevel
{
  using Request = protocol::srv::GetBLEBatteryLevel_Request;
  using Response = protocol::srv::GetBLEBatteryLevel_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_BLE_BATTERY_LEVEL__STRUCT_HPP_
