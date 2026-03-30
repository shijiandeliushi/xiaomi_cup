// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/TakePhoto.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TAKE_PHOTO__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__TAKE_PHOTO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__TakePhoto_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TakePhoto_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TakePhoto_Request_
{
  using Type = TakePhoto_Request_<ContainerAllocator>;

  explicit TakePhoto_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TakePhoto_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::TakePhoto_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TakePhoto_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TakePhoto_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TakePhoto_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TakePhoto_Request
    std::shared_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TakePhoto_Request
    std::shared_ptr<protocol::srv::TakePhoto_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakePhoto_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakePhoto_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakePhoto_Request_

// alias to use template instance with default allocator
using TakePhoto_Request =
  protocol::srv::TakePhoto_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__TakePhoto_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__TakePhoto_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TakePhoto_Response_
{
  using Type = TakePhoto_Response_<ContainerAllocator>;

  explicit TakePhoto_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->result = false;
      this->code = 0l;
    }
  }

  explicit TakePhoto_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    img(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->result = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _result_type =
    bool;
  _result_type result;
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
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
    protocol::srv::TakePhoto_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::TakePhoto_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TakePhoto_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::TakePhoto_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__TakePhoto_Response
    std::shared_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__TakePhoto_Response
    std::shared_ptr<protocol::srv::TakePhoto_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakePhoto_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->img != other.img) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakePhoto_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakePhoto_Response_

// alias to use template instance with default allocator
using TakePhoto_Response =
  protocol::srv::TakePhoto_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct TakePhoto
{
  using Request = protocol::srv::TakePhoto_Request;
  using Response = protocol::srv::TakePhoto_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TAKE_PHOTO__STRUCT_HPP_
