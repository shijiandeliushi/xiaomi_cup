// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/MotionCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionCustomCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionCustomCmd_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionCustomCmd_Request_
{
  using Type = MotionCustomCmd_Request_<ContainerAllocator>;

  explicit MotionCustomCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = 0l;
      this->cmd_source = 0l;
      this->motion_id = 0l;
    }
  }

  explicit MotionCustomCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = 0l;
      this->cmd_source = 0l;
      this->motion_id = 0l;
    }
  }

  // field types and members
  using _cmd_type_type =
    int32_t;
  _cmd_type_type cmd_type;
  using _cmd_source_type =
    int32_t;
  _cmd_source_type cmd_source;
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;

  // setters for named parameter idiom
  Type & set__cmd_type(
    const int32_t & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__cmd_source(
    const int32_t & _arg)
  {
    this->cmd_source = _arg;
    return *this;
  }
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DEFINITION =
    0;
  static constexpr int32_t EXECUTION =
    1;
  static constexpr int32_t APP =
    0;
  static constexpr int32_t AUDIO =
    1;
  static constexpr int32_t VIS =
    2;

  // pointer types
  using RawPtr =
    protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionCustomCmd_Request
    std::shared_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionCustomCmd_Request
    std::shared_ptr<protocol::srv::MotionCustomCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCustomCmd_Request_ & other) const
  {
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->cmd_source != other.cmd_source) {
      return false;
    }
    if (this->motion_id != other.motion_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCustomCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCustomCmd_Request_

// alias to use template instance with default allocator
using MotionCustomCmd_Request =
  protocol::srv::MotionCustomCmd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MotionCustomCmd_Request_<ContainerAllocator>::DEFINITION;
template<typename ContainerAllocator>
constexpr int32_t MotionCustomCmd_Request_<ContainerAllocator>::EXECUTION;
template<typename ContainerAllocator>
constexpr int32_t MotionCustomCmd_Request_<ContainerAllocator>::APP;
template<typename ContainerAllocator>
constexpr int32_t MotionCustomCmd_Request_<ContainerAllocator>::AUDIO;
template<typename ContainerAllocator>
constexpr int32_t MotionCustomCmd_Request_<ContainerAllocator>::VIS;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionCustomCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionCustomCmd_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionCustomCmd_Response_
{
  using Type = MotionCustomCmd_Response_<ContainerAllocator>;

  explicit MotionCustomCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->result = false;
      this->code = 0l;
    }
  }

  explicit MotionCustomCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->result = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _result_type =
    bool;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
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
    protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionCustomCmd_Response
    std::shared_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionCustomCmd_Response
    std::shared_ptr<protocol::srv::MotionCustomCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCustomCmd_Response_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCustomCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCustomCmd_Response_

// alias to use template instance with default allocator
using MotionCustomCmd_Response =
  protocol::srv::MotionCustomCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct MotionCustomCmd
{
  using Request = protocol::srv::MotionCustomCmd_Request;
  using Response = protocol::srv::MotionCustomCmd_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_CUSTOM_CMD__STRUCT_HPP_
