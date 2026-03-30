// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/BodyRegion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__BodyRegion_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BodyRegion_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BodyRegion_Request_
{
  using Type = BodyRegion_Request_<ContainerAllocator>;

  explicit BodyRegion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    (void)_init;
  }

  explicit BodyRegion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::BodyRegion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BodyRegion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BodyRegion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BodyRegion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BodyRegion_Request
    std::shared_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BodyRegion_Request
    std::shared_ptr<protocol::srv::BodyRegion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyRegion_Request_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyRegion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyRegion_Request_

// alias to use template instance with default allocator
using BodyRegion_Request =
  protocol::srv::BodyRegion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__BodyRegion_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__BodyRegion_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BodyRegion_Response_
{
  using Type = BodyRegion_Response_<ContainerAllocator>;

  explicit BodyRegion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  explicit BodyRegion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    protocol::srv::BodyRegion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::BodyRegion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BodyRegion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::BodyRegion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__BodyRegion_Response
    std::shared_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__BodyRegion_Response
    std::shared_ptr<protocol::srv::BodyRegion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyRegion_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyRegion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyRegion_Response_

// alias to use template instance with default allocator
using BodyRegion_Response =
  protocol::srv::BodyRegion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct BodyRegion
{
  using Request = protocol::srv::BodyRegion_Request;
  using Response = protocol::srv::BodyRegion_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_HPP_
