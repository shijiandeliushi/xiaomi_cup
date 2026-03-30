// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionResultCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionResultCmd_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionResultCmd_Request_
{
  using Type = MotionResultCmd_Request_<ContainerAllocator>;

  explicit MotionResultCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_source = 0l;
      this->duration = 0l;
      this->value = 0l;
      this->contact = 0l;
      this->gait_toml = "";
      this->toml_data = "";
    }
  }

  explicit MotionResultCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gait_toml(_alloc),
    toml_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->cmd_source = 0l;
      this->duration = 0l;
      this->value = 0l;
      this->contact = 0l;
      this->gait_toml = "";
      this->toml_data = "";
    }
  }

  // field types and members
  using _motion_id_type =
    int32_t;
  _motion_id_type motion_id;
  using _cmd_source_type =
    int32_t;
  _cmd_source_type cmd_source;
  using _vel_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vel_des_type vel_des;
  using _rpy_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rpy_des_type rpy_des;
  using _pos_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pos_des_type pos_des;
  using _acc_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acc_des_type acc_des;
  using _ctrl_point_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ctrl_point_type ctrl_point;
  using _foot_pose_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _foot_pose_type foot_pose;
  using _step_height_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _step_height_type step_height;
  using _duration_type =
    int32_t;
  _duration_type duration;
  using _value_type =
    int32_t;
  _value_type value;
  using _contact_type =
    int32_t;
  _contact_type contact;
  using _gait_toml_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gait_toml_type gait_toml;
  using _toml_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toml_data_type toml_data;

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
  Type & set__vel_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vel_des = _arg;
    return *this;
  }
  Type & set__rpy_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rpy_des = _arg;
    return *this;
  }
  Type & set__pos_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pos_des = _arg;
    return *this;
  }
  Type & set__acc_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acc_des = _arg;
    return *this;
  }
  Type & set__ctrl_point(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ctrl_point = _arg;
    return *this;
  }
  Type & set__foot_pose(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->foot_pose = _arg;
    return *this;
  }
  Type & set__step_height(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->step_height = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__contact(
    const int32_t & _arg)
  {
    this->contact = _arg;
    return *this;
  }
  Type & set__gait_toml(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gait_toml = _arg;
    return *this;
  }
  Type & set__toml_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toml_data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t FSM =
    -2;
  static constexpr int32_t DEBUG =
    -1;
  static constexpr int32_t APP =
    0;
  static constexpr int32_t AUDIO =
    1;
  static constexpr int32_t VIS =
    2;
  static constexpr int32_t BLUTELE =
    3;
  static constexpr int32_t ALGO =
    4;

  // pointer types
  using RawPtr =
    protocol::srv::MotionResultCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionResultCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionResultCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionResultCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionResultCmd_Request
    std::shared_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionResultCmd_Request
    std::shared_ptr<protocol::srv::MotionResultCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionResultCmd_Request_ & other) const
  {
    if (this->motion_id != other.motion_id) {
      return false;
    }
    if (this->cmd_source != other.cmd_source) {
      return false;
    }
    if (this->vel_des != other.vel_des) {
      return false;
    }
    if (this->rpy_des != other.rpy_des) {
      return false;
    }
    if (this->pos_des != other.pos_des) {
      return false;
    }
    if (this->acc_des != other.acc_des) {
      return false;
    }
    if (this->ctrl_point != other.ctrl_point) {
      return false;
    }
    if (this->foot_pose != other.foot_pose) {
      return false;
    }
    if (this->step_height != other.step_height) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->contact != other.contact) {
      return false;
    }
    if (this->gait_toml != other.gait_toml) {
      return false;
    }
    if (this->toml_data != other.toml_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionResultCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionResultCmd_Request_

// alias to use template instance with default allocator
using MotionResultCmd_Request =
  protocol::srv::MotionResultCmd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::FSM;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::DEBUG;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::APP;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::AUDIO;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::VIS;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::BLUTELE;
template<typename ContainerAllocator>
constexpr int32_t MotionResultCmd_Request_<ContainerAllocator>::ALGO;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__MotionResultCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__MotionResultCmd_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotionResultCmd_Response_
{
  using Type = MotionResultCmd_Response_<ContainerAllocator>;

  explicit MotionResultCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_id = 0l;
      this->result = false;
      this->code = 0l;
    }
  }

  explicit MotionResultCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::MotionResultCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::MotionResultCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionResultCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::MotionResultCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__MotionResultCmd_Response
    std::shared_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__MotionResultCmd_Response
    std::shared_ptr<protocol::srv::MotionResultCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionResultCmd_Response_ & other) const
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
  bool operator!=(const MotionResultCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionResultCmd_Response_

// alias to use template instance with default allocator
using MotionResultCmd_Response =
  protocol::srv::MotionResultCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct MotionResultCmd
{
  using Request = protocol::srv::MotionResultCmd_Request;
  using Response = protocol::srv::MotionResultCmd_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__STRUCT_HPP_
