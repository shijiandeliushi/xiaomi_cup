// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:action/Speech.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__SPEECH__BUILDER_HPP_
#define PROTOCOL__ACTION__DETAIL__SPEECH__BUILDER_HPP_

#include "protocol/action/detail/speech__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_Goal_text
{
public:
  explicit Init_Speech_Goal_text(::protocol::action::Speech_Goal & msg)
  : msg_(msg)
  {}
  ::protocol::action::Speech_Goal text(::protocol::action::Speech_Goal::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_Goal msg_;
};

class Init_Speech_Goal_speech
{
public:
  explicit Init_Speech_Goal_speech(::protocol::action::Speech_Goal & msg)
  : msg_(msg)
  {}
  Init_Speech_Goal_text speech(::protocol::action::Speech_Goal::_speech_type arg)
  {
    msg_.speech = std::move(arg);
    return Init_Speech_Goal_text(msg_);
  }

private:
  ::protocol::action::Speech_Goal msg_;
};

class Init_Speech_Goal_is_online
{
public:
  explicit Init_Speech_Goal_is_online(::protocol::action::Speech_Goal & msg)
  : msg_(msg)
  {}
  Init_Speech_Goal_speech is_online(::protocol::action::Speech_Goal::_is_online_type arg)
  {
    msg_.is_online = std::move(arg);
    return Init_Speech_Goal_speech(msg_);
  }

private:
  ::protocol::action::Speech_Goal msg_;
};

class Init_Speech_Goal_module_name
{
public:
  Init_Speech_Goal_module_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_Goal_is_online module_name(::protocol::action::Speech_Goal::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_Speech_Goal_is_online(msg_);
  }

private:
  ::protocol::action::Speech_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_Goal>()
{
  return protocol::action::builder::Init_Speech_Goal_module_name();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_Result_status
{
public:
  Init_Speech_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::Speech_Result status(::protocol::action::Speech_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_Result>()
{
  return protocol::action::builder::Init_Speech_Result_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_Feedback_talking
{
public:
  Init_Speech_Feedback_talking()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::Speech_Feedback talking(::protocol::action::Speech_Feedback::_talking_type arg)
  {
    msg_.talking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_Feedback>()
{
  return protocol::action::builder::Init_Speech_Feedback_talking();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_SendGoal_Request_goal
{
public:
  explicit Init_Speech_SendGoal_Request_goal(::protocol::action::Speech_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::protocol::action::Speech_SendGoal_Request goal(::protocol::action::Speech_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_SendGoal_Request msg_;
};

class Init_Speech_SendGoal_Request_goal_id
{
public:
  Init_Speech_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_SendGoal_Request_goal goal_id(::protocol::action::Speech_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Speech_SendGoal_Request_goal(msg_);
  }

private:
  ::protocol::action::Speech_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_SendGoal_Request>()
{
  return protocol::action::builder::Init_Speech_SendGoal_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_SendGoal_Response_stamp
{
public:
  explicit Init_Speech_SendGoal_Response_stamp(::protocol::action::Speech_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::Speech_SendGoal_Response stamp(::protocol::action::Speech_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_SendGoal_Response msg_;
};

class Init_Speech_SendGoal_Response_accepted
{
public:
  Init_Speech_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_SendGoal_Response_stamp accepted(::protocol::action::Speech_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Speech_SendGoal_Response_stamp(msg_);
  }

private:
  ::protocol::action::Speech_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_SendGoal_Response>()
{
  return protocol::action::builder::Init_Speech_SendGoal_Response_accepted();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_GetResult_Request_goal_id
{
public:
  Init_Speech_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::Speech_GetResult_Request goal_id(::protocol::action::Speech_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_GetResult_Request>()
{
  return protocol::action::builder::Init_Speech_GetResult_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_GetResult_Response_result
{
public:
  explicit Init_Speech_GetResult_Response_result(::protocol::action::Speech_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::Speech_GetResult_Response result(::protocol::action::Speech_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_GetResult_Response msg_;
};

class Init_Speech_GetResult_Response_status
{
public:
  Init_Speech_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_GetResult_Response_result status(::protocol::action::Speech_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Speech_GetResult_Response_result(msg_);
  }

private:
  ::protocol::action::Speech_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_GetResult_Response>()
{
  return protocol::action::builder::Init_Speech_GetResult_Response_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Speech_FeedbackMessage_feedback
{
public:
  explicit Init_Speech_FeedbackMessage_feedback(::protocol::action::Speech_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::protocol::action::Speech_FeedbackMessage feedback(::protocol::action::Speech_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Speech_FeedbackMessage msg_;
};

class Init_Speech_FeedbackMessage_goal_id
{
public:
  Init_Speech_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_FeedbackMessage_feedback goal_id(::protocol::action::Speech_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Speech_FeedbackMessage_feedback(msg_);
  }

private:
  ::protocol::action::Speech_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Speech_FeedbackMessage>()
{
  return protocol::action::builder::Init_Speech_FeedbackMessage_goal_id();
}

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__SPEECH__BUILDER_HPP_
