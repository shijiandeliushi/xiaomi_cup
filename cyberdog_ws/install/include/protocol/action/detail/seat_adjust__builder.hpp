// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:action/SeatAdjust.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__SEAT_ADJUST__BUILDER_HPP_
#define PROTOCOL__ACTION__DETAIL__SEAT_ADJUST__BUILDER_HPP_

#include "protocol/action/detail/seat_adjust__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_Goal_start
{
public:
  Init_SeatAdjust_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::SeatAdjust_Goal start(::protocol::action::SeatAdjust_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_Goal>()
{
  return protocol::action::builder::Init_SeatAdjust_Goal_start();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_Result_result
{
public:
  Init_SeatAdjust_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::SeatAdjust_Result result(::protocol::action::SeatAdjust_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_Result>()
{
  return protocol::action::builder::Init_SeatAdjust_Result_result();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_Feedback_count
{
public:
  Init_SeatAdjust_Feedback_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::SeatAdjust_Feedback count(::protocol::action::SeatAdjust_Feedback::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_Feedback>()
{
  return protocol::action::builder::Init_SeatAdjust_Feedback_count();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_SendGoal_Request_goal
{
public:
  explicit Init_SeatAdjust_SendGoal_Request_goal(::protocol::action::SeatAdjust_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::protocol::action::SeatAdjust_SendGoal_Request goal(::protocol::action::SeatAdjust_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_SendGoal_Request msg_;
};

class Init_SeatAdjust_SendGoal_Request_goal_id
{
public:
  Init_SeatAdjust_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeatAdjust_SendGoal_Request_goal goal_id(::protocol::action::SeatAdjust_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SeatAdjust_SendGoal_Request_goal(msg_);
  }

private:
  ::protocol::action::SeatAdjust_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_SendGoal_Request>()
{
  return protocol::action::builder::Init_SeatAdjust_SendGoal_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_SendGoal_Response_stamp
{
public:
  explicit Init_SeatAdjust_SendGoal_Response_stamp(::protocol::action::SeatAdjust_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::SeatAdjust_SendGoal_Response stamp(::protocol::action::SeatAdjust_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_SendGoal_Response msg_;
};

class Init_SeatAdjust_SendGoal_Response_accepted
{
public:
  Init_SeatAdjust_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeatAdjust_SendGoal_Response_stamp accepted(::protocol::action::SeatAdjust_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SeatAdjust_SendGoal_Response_stamp(msg_);
  }

private:
  ::protocol::action::SeatAdjust_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_SendGoal_Response>()
{
  return protocol::action::builder::Init_SeatAdjust_SendGoal_Response_accepted();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_GetResult_Request_goal_id
{
public:
  Init_SeatAdjust_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::SeatAdjust_GetResult_Request goal_id(::protocol::action::SeatAdjust_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_GetResult_Request>()
{
  return protocol::action::builder::Init_SeatAdjust_GetResult_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_GetResult_Response_result
{
public:
  explicit Init_SeatAdjust_GetResult_Response_result(::protocol::action::SeatAdjust_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::SeatAdjust_GetResult_Response result(::protocol::action::SeatAdjust_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_GetResult_Response msg_;
};

class Init_SeatAdjust_GetResult_Response_status
{
public:
  Init_SeatAdjust_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeatAdjust_GetResult_Response_result status(::protocol::action::SeatAdjust_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SeatAdjust_GetResult_Response_result(msg_);
  }

private:
  ::protocol::action::SeatAdjust_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_GetResult_Response>()
{
  return protocol::action::builder::Init_SeatAdjust_GetResult_Response_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_SeatAdjust_FeedbackMessage_feedback
{
public:
  explicit Init_SeatAdjust_FeedbackMessage_feedback(::protocol::action::SeatAdjust_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::protocol::action::SeatAdjust_FeedbackMessage feedback(::protocol::action::SeatAdjust_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::SeatAdjust_FeedbackMessage msg_;
};

class Init_SeatAdjust_FeedbackMessage_goal_id
{
public:
  Init_SeatAdjust_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeatAdjust_FeedbackMessage_feedback goal_id(::protocol::action::SeatAdjust_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SeatAdjust_FeedbackMessage_feedback(msg_);
  }

private:
  ::protocol::action::SeatAdjust_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::SeatAdjust_FeedbackMessage>()
{
  return protocol::action::builder::Init_SeatAdjust_FeedbackMessage_goal_id();
}

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__SEAT_ADJUST__BUILDER_HPP_
