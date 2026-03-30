// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:action/AutoCharging.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__BUILDER_HPP_
#define PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__BUILDER_HPP_

#include "protocol/action/detail/auto_charging__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_Goal_start
{
public:
  explicit Init_AutoCharging_Goal_start(::protocol::action::AutoCharging_Goal & msg)
  : msg_(msg)
  {}
  ::protocol::action::AutoCharging_Goal start(::protocol::action::AutoCharging_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_Goal msg_;
};

class Init_AutoCharging_Goal_pose
{
public:
  Init_AutoCharging_Goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoCharging_Goal_start pose(::protocol::action::AutoCharging_Goal::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_AutoCharging_Goal_start(msg_);
  }

private:
  ::protocol::action::AutoCharging_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_Goal>()
{
  return protocol::action::builder::Init_AutoCharging_Goal_pose();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_Result_result
{
public:
  Init_AutoCharging_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::AutoCharging_Result result(::protocol::action::AutoCharging_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_Result>()
{
  return protocol::action::builder::Init_AutoCharging_Result_result();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_Feedback_charging_stage
{
public:
  Init_AutoCharging_Feedback_charging_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::AutoCharging_Feedback charging_stage(::protocol::action::AutoCharging_Feedback::_charging_stage_type arg)
  {
    msg_.charging_stage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_Feedback>()
{
  return protocol::action::builder::Init_AutoCharging_Feedback_charging_stage();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_SendGoal_Request_goal
{
public:
  explicit Init_AutoCharging_SendGoal_Request_goal(::protocol::action::AutoCharging_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::protocol::action::AutoCharging_SendGoal_Request goal(::protocol::action::AutoCharging_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_SendGoal_Request msg_;
};

class Init_AutoCharging_SendGoal_Request_goal_id
{
public:
  Init_AutoCharging_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoCharging_SendGoal_Request_goal goal_id(::protocol::action::AutoCharging_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AutoCharging_SendGoal_Request_goal(msg_);
  }

private:
  ::protocol::action::AutoCharging_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_SendGoal_Request>()
{
  return protocol::action::builder::Init_AutoCharging_SendGoal_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_SendGoal_Response_stamp
{
public:
  explicit Init_AutoCharging_SendGoal_Response_stamp(::protocol::action::AutoCharging_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::AutoCharging_SendGoal_Response stamp(::protocol::action::AutoCharging_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_SendGoal_Response msg_;
};

class Init_AutoCharging_SendGoal_Response_accepted
{
public:
  Init_AutoCharging_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoCharging_SendGoal_Response_stamp accepted(::protocol::action::AutoCharging_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AutoCharging_SendGoal_Response_stamp(msg_);
  }

private:
  ::protocol::action::AutoCharging_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_SendGoal_Response>()
{
  return protocol::action::builder::Init_AutoCharging_SendGoal_Response_accepted();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_GetResult_Request_goal_id
{
public:
  Init_AutoCharging_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::AutoCharging_GetResult_Request goal_id(::protocol::action::AutoCharging_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_GetResult_Request>()
{
  return protocol::action::builder::Init_AutoCharging_GetResult_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_GetResult_Response_result
{
public:
  explicit Init_AutoCharging_GetResult_Response_result(::protocol::action::AutoCharging_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::AutoCharging_GetResult_Response result(::protocol::action::AutoCharging_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_GetResult_Response msg_;
};

class Init_AutoCharging_GetResult_Response_status
{
public:
  Init_AutoCharging_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoCharging_GetResult_Response_result status(::protocol::action::AutoCharging_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AutoCharging_GetResult_Response_result(msg_);
  }

private:
  ::protocol::action::AutoCharging_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_GetResult_Response>()
{
  return protocol::action::builder::Init_AutoCharging_GetResult_Response_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_AutoCharging_FeedbackMessage_feedback
{
public:
  explicit Init_AutoCharging_FeedbackMessage_feedback(::protocol::action::AutoCharging_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::protocol::action::AutoCharging_FeedbackMessage feedback(::protocol::action::AutoCharging_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::AutoCharging_FeedbackMessage msg_;
};

class Init_AutoCharging_FeedbackMessage_goal_id
{
public:
  Init_AutoCharging_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoCharging_FeedbackMessage_feedback goal_id(::protocol::action::AutoCharging_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AutoCharging_FeedbackMessage_feedback(msg_);
  }

private:
  ::protocol::action::AutoCharging_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::AutoCharging_FeedbackMessage>()
{
  return protocol::action::builder::Init_AutoCharging_FeedbackMessage_goal_id();
}

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__BUILDER_HPP_
