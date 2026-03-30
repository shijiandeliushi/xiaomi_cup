// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'params'
#include "protocol/msg/detail/motion_sequence_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionSequence_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionSequence_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionSequence_Request_
{
  using Type = MotionSequence_Request_<ContainerAllocator>;

  explicit MotionSequence_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->duration = 0l;
      this->toml_data = "";
    }
  }

  explicit MotionSequence_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : toml_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->duration = 0l;
      this->toml_data = "";
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _duration_type =
    int32_t;
  _duration_type duration;
  using _toml_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toml_data_type toml_data;
  using _params_type =
    std::vector<protocol::msg::MotionSequenceParam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequenceParam_<ContainerAllocator>>>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__toml_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toml_data = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<protocol::msg::MotionSequenceParam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequenceParam_<ContainerAllocator>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::MotionSequence_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionSequence_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequence_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequence_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionSequence_Request
    std::shared_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionSequence_Request
    std::shared_ptr<protocol::srv::MotionSequence_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequence_Request_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->toml_data != other.toml_data) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequence_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequence_Request_

// alias to use template instance with default allocator
using MotionSequence_Request =
  protocol::srv::MotionSequence_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionSequence_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionSequence_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionSequence_Response_
{
  using Type = MotionSequence_Response_<ContainerAllocator>;

  explicit MotionSequence_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
      this->describe = "";
      this->motion_id = 0l;
    }
  }

  explicit MotionSequence_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : describe(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
      this->describe = "";
      this->motion_id = 0l;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;
  using _describe_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _describe_type describe;
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;

  // setters for named parameter idiom
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
  Type & set__describe(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->describe = _arg;
    return *this;
  }
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::MotionSequence_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionSequence_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequence_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequence_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionSequence_Response
    std::shared_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionSequence_Response
    std::shared_ptr<protocol::srv::MotionSequence_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequence_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->describe != other.describe) {
      return false;
    }
    if (this->motion_id != other.motion_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequence_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequence_Response_

// alias to use template instance with default allocator
using MotionSequence_Response =
  protocol::srv::MotionSequence_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct MotionSequence
{
  using Request = protocol::srv::MotionSequence_Request;
  using Response = protocol::srv::MotionSequence_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_
