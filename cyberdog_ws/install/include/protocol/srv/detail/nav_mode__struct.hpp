// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/NavMode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__NavMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__NavMode_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavMode_Request_
{
  using Type = NavMode_Request_<ContainerAllocator>;

  explicit NavMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_mode = 0;
    }
  }

  explicit NavMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_mode = 0;
    }
  }

  // field types and members
  using _sub_mode_type =
    uint8_t;
  _sub_mode_type sub_mode;

  // setters for named parameter idiom
  Type & set__sub_mode(
    const uint8_t & _arg)
  {
    this->sub_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NULL_SUBMODE =
    0u;
  static constexpr uint8_t EXPLR_MAP_UPDATE =
    1u;
  static constexpr uint8_t EXPLR_MAP_NEW =
    2u;
  static constexpr uint8_t EXPLR_NAV_AB =
    3u;
  static constexpr uint8_t TRACK_F =
    4u;
  static constexpr uint8_t TRACK_S =
    5u;
  static constexpr uint8_t MODE_STOP =
    6u;

  // pointer types
  using RawPtr =
    protocol::srv::NavMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::NavMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::NavMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::NavMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::NavMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::NavMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::NavMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::NavMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::NavMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::NavMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__NavMode_Request
    std::shared_ptr<protocol::srv::NavMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__NavMode_Request
    std::shared_ptr<protocol::srv::NavMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavMode_Request_ & other) const
  {
    if (this->sub_mode != other.sub_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavMode_Request_

// alias to use template instance with default allocator
using NavMode_Request =
  protocol::srv::NavMode_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::NULL_SUBMODE;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::EXPLR_MAP_UPDATE;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::EXPLR_MAP_NEW;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::EXPLR_NAV_AB;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::TRACK_F;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::TRACK_S;
template<typename ContainerAllocator>
constexpr uint8_t NavMode_Request_<ContainerAllocator>::MODE_STOP;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__NavMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__NavMode_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavMode_Response_
{
  using Type = NavMode_Response_<ContainerAllocator>;

  explicit NavMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  explicit NavMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::NavMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::NavMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::NavMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::NavMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::NavMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::NavMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::NavMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::NavMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::NavMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::NavMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__NavMode_Response
    std::shared_ptr<protocol::srv::NavMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__NavMode_Response
    std::shared_ptr<protocol::srv::NavMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavMode_Response_

// alias to use template instance with default allocator
using NavMode_Response =
  protocol::srv::NavMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct NavMode
{
  using Request = protocol::srv::NavMode_Request;
  using Response = protocol::srv::NavMode_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_HPP_
