// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:action/AutoCharging.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_HPP_
#define PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_Goal __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_Goal __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_Goal_
{
  using Type = AutoCharging_Goal_<ContainerAllocator>;

  explicit AutoCharging_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = 0;
    }
  }

  explicit AutoCharging_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = 0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _start_type =
    uint8_t;
  _start_type start;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__start(
    const uint8_t & _arg)
  {
    this->start = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUTOCHARGING_GOAL_TYPE_STOP =
    0u;
  static constexpr uint8_t AUTOCHARGING_GOAL_TYPE_START =
    1u;

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_Goal
    std::shared_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_Goal
    std::shared_ptr<protocol::action::AutoCharging_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_Goal_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_Goal_

// alias to use template instance with default allocator
using AutoCharging_Goal =
  protocol::action::AutoCharging_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Goal_<ContainerAllocator>::AUTOCHARGING_GOAL_TYPE_STOP;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Goal_<ContainerAllocator>::AUTOCHARGING_GOAL_TYPE_START;

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_Result __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_Result __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_Result_
{
  using Type = AutoCharging_Result_<ContainerAllocator>;

  explicit AutoCharging_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit AutoCharging_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_SUCCESS =
    0u;
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_ACCEPT =
    1u;
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_UNAVALIBLE =
    2u;
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_FAILED =
    3u;
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_REJECT =
    4u;
  static constexpr uint8_t AUTOCHARGING_RESULT_TYPE_CANCEL =
    5u;

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_Result
    std::shared_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_Result
    std::shared_ptr<protocol::action::AutoCharging_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_Result_

// alias to use template instance with default allocator
using AutoCharging_Result =
  protocol::action::AutoCharging_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_ACCEPT;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_UNAVALIBLE;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_FAILED;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_REJECT;
template<typename ContainerAllocator>
constexpr uint8_t AutoCharging_Result_<ContainerAllocator>::AUTOCHARGING_RESULT_TYPE_CANCEL;

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_Feedback __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_Feedback_
{
  using Type = AutoCharging_Feedback_<ContainerAllocator>;

  explicit AutoCharging_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charging_stage = 0;
    }
  }

  explicit AutoCharging_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charging_stage = 0;
    }
  }

  // field types and members
  using _charging_stage_type =
    uint8_t;
  _charging_stage_type charging_stage;

  // setters for named parameter idiom
  Type & set__charging_stage(
    const uint8_t & _arg)
  {
    this->charging_stage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_Feedback
    std::shared_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_Feedback
    std::shared_ptr<protocol::action::AutoCharging_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_Feedback_ & other) const
  {
    if (this->charging_stage != other.charging_stage) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_Feedback_

// alias to use template instance with default allocator
using AutoCharging_Feedback =
  protocol::action::AutoCharging_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "protocol/action/detail/auto_charging__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_SendGoal_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_SendGoal_Request_
{
  using Type = AutoCharging_SendGoal_Request_<ContainerAllocator>;

  explicit AutoCharging_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit AutoCharging_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    protocol::action::AutoCharging_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const protocol::action::AutoCharging_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_SendGoal_Request
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_SendGoal_Request
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_SendGoal_Request_

// alias to use template instance with default allocator
using AutoCharging_SendGoal_Request =
  protocol::action::AutoCharging_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_SendGoal_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_SendGoal_Response_
{
  using Type = AutoCharging_SendGoal_Response_<ContainerAllocator>;

  explicit AutoCharging_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit AutoCharging_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_SendGoal_Response
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_SendGoal_Response
    std::shared_ptr<protocol::action::AutoCharging_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_SendGoal_Response_

// alias to use template instance with default allocator
using AutoCharging_SendGoal_Response =
  protocol::action::AutoCharging_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct AutoCharging_SendGoal
{
  using Request = protocol::action::AutoCharging_SendGoal_Request;
  using Response = protocol::action::AutoCharging_SendGoal_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_GetResult_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_GetResult_Request_
{
  using Type = AutoCharging_GetResult_Request_<ContainerAllocator>;

  explicit AutoCharging_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit AutoCharging_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_GetResult_Request
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_GetResult_Request
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_GetResult_Request_

// alias to use template instance with default allocator
using AutoCharging_GetResult_Request =
  protocol::action::AutoCharging_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/auto_charging__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_GetResult_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_GetResult_Response_
{
  using Type = AutoCharging_GetResult_Response_<ContainerAllocator>;

  explicit AutoCharging_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit AutoCharging_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    protocol::action::AutoCharging_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const protocol::action::AutoCharging_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_GetResult_Response
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_GetResult_Response
    std::shared_ptr<protocol::action::AutoCharging_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_GetResult_Response_

// alias to use template instance with default allocator
using AutoCharging_GetResult_Response =
  protocol::action::AutoCharging_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct AutoCharging_GetResult
{
  using Request = protocol::action::AutoCharging_GetResult_Request;
  using Response = protocol::action::AutoCharging_GetResult_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/auto_charging__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__AutoCharging_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__AutoCharging_FeedbackMessage __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AutoCharging_FeedbackMessage_
{
  using Type = AutoCharging_FeedbackMessage_<ContainerAllocator>;

  explicit AutoCharging_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit AutoCharging_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    protocol::action::AutoCharging_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const protocol::action::AutoCharging_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__AutoCharging_FeedbackMessage
    std::shared_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__AutoCharging_FeedbackMessage
    std::shared_ptr<protocol::action::AutoCharging_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoCharging_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoCharging_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoCharging_FeedbackMessage_

// alias to use template instance with default allocator
using AutoCharging_FeedbackMessage =
  protocol::action::AutoCharging_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace protocol
{

namespace action
{

struct AutoCharging
{
  /// The goal message defined in the action definition.
  using Goal = protocol::action::AutoCharging_Goal;
  /// The result message defined in the action definition.
  using Result = protocol::action::AutoCharging_Result;
  /// The feedback message defined in the action definition.
  using Feedback = protocol::action::AutoCharging_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = protocol::action::AutoCharging_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = protocol::action::AutoCharging_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = protocol::action::AutoCharging_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct AutoCharging AutoCharging;

}  // namespace action

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_HPP_
