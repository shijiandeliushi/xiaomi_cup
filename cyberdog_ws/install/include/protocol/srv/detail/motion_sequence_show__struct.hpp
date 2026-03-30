// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'gait_list'
#include "protocol/msg/detail/motion_sequence_gait__struct.hpp"
// Member 'pace_list'
#include "protocol/msg/detail/motion_sequence_pace__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionSequenceShow_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionSequenceShow_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceShow_Request_
{
  using Type = MotionSequenceShow_Request_<ContainerAllocator>;

  explicit MotionSequenceShow_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_source = 0l;
      this->duration = 0ll;
      this->gait_toml = "";
      this->pace_toml = "";
    }
  }

  explicit MotionSequenceShow_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gait_toml(_alloc),
    pace_toml(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_source = 0l;
      this->duration = 0ll;
      this->gait_toml = "";
      this->pace_toml = "";
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _cmd_source_type =
    int32_t;
  _cmd_source_type cmd_source;
  using _duration_type =
    int64_t;
  _duration_type duration;
  using _gait_list_type =
    std::vector<protocol::msg::MotionSequenceGait_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequenceGait_<ContainerAllocator>>>;
  _gait_list_type gait_list;
  using _pace_list_type =
    std::vector<protocol::msg::MotionSequencePace_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequencePace_<ContainerAllocator>>>;
  _pace_list_type pace_list;
  using _gait_toml_list_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _gait_toml_list_type gait_toml_list;
  using _pace_toml_list_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _pace_toml_list_type pace_toml_list;
  using _gait_toml_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gait_toml_type gait_toml;
  using _pace_toml_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pace_toml_type pace_toml;

  // setters for named parameter idiom
  Type & set__motion_id(
    const int32_t & _arg)
  {
    this->motion_id = _arg;
    return *this;
  }
  Type & set__cmd_source(
    const int32_t & _arg)
  {
    this->cmd_source = _arg;
    return *this;
  }
  Type & set__duration(
    const int64_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__gait_list(
    const std::vector<protocol::msg::MotionSequenceGait_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequenceGait_<ContainerAllocator>>> & _arg)
  {
    this->gait_list = _arg;
    return *this;
  }
  Type & set__pace_list(
    const std::vector<protocol::msg::MotionSequencePace_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotionSequencePace_<ContainerAllocator>>> & _arg)
  {
    this->pace_list = _arg;
    return *this;
  }
  Type & set__gait_toml_list(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->gait_toml_list = _arg;
    return *this;
  }
  Type & set__pace_toml_list(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->pace_toml_list = _arg;
    return *this;
  }
  Type & set__gait_toml(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gait_toml = _arg;
    return *this;
  }
  Type & set__pace_toml(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pace_toml = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionSequenceShow_Request
    std::shared_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionSequenceShow_Request
    std::shared_ptr<protocol::srv::MotionSequenceShow_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceShow_Request_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->cmd_source != other.cmd_source) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->gait_list != other.gait_list) {
      return false;
    }
    if (this->pace_list != other.pace_list) {
      return false;
    }
    if (this->gait_toml_list != other.gait_toml_list) {
      return false;
    }
    if (this->pace_toml_list != other.pace_toml_list) {
      return false;
    }
    if (this->gait_toml != other.gait_toml) {
      return false;
    }
    if (this->pace_toml != other.pace_toml) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceShow_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceShow_Request_

// alias to use template instance with default allocator
using MotionSequenceShow_Request =
  protocol::srv::MotionSequenceShow_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionSequenceShow_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionSequenceShow_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceShow_Response_
{
  using Type = MotionSequenceShow_Response_<ContainerAllocator>;

  explicit MotionSequenceShow_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit MotionSequenceShow_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionSequenceShow_Response
    std::shared_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionSequenceShow_Response
    std::shared_ptr<protocol::srv::MotionSequenceShow_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceShow_Response_ & other) const
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
  bool operator!=(const MotionSequenceShow_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceShow_Response_

// alias to use template instance with default allocator
using MotionSequenceShow_Response =
  protocol::srv::MotionSequenceShow_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct MotionSequenceShow
{
  using Request = protocol::srv::MotionSequenceShow_Request;
  using Response = protocol::srv::MotionSequenceShow_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_HPP_
