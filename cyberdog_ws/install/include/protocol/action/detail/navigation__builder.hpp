// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_
#define PROTOCOL__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_

#include "protocol/action/detail/navigation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_Goal_object_tracking
{
public:
  explicit Init_Navigation_Goal_object_tracking(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_Goal object_tracking(::protocol::action::Navigation_Goal::_object_tracking_type arg)
  {
    msg_.object_tracking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_outdoor
{
public:
  explicit Init_Navigation_Goal_outdoor(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_object_tracking outdoor(::protocol::action::Navigation_Goal::_outdoor_type arg)
  {
    msg_.outdoor = std::move(arg);
    return Init_Navigation_Goal_object_tracking(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_keep_distance
{
public:
  explicit Init_Navigation_Goal_keep_distance(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_outdoor keep_distance(::protocol::action::Navigation_Goal::_keep_distance_type arg)
  {
    msg_.keep_distance = std::move(arg);
    return Init_Navigation_Goal_outdoor(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_relative_pos
{
public:
  explicit Init_Navigation_Goal_relative_pos(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_keep_distance relative_pos(::protocol::action::Navigation_Goal::_relative_pos_type arg)
  {
    msg_.relative_pos = std::move(arg);
    return Init_Navigation_Goal_keep_distance(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_tracking_roi
{
public:
  explicit Init_Navigation_Goal_tracking_roi(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_relative_pos tracking_roi(::protocol::action::Navigation_Goal::_tracking_roi_type arg)
  {
    msg_.tracking_roi = std::move(arg);
    return Init_Navigation_Goal_relative_pos(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_map_name
{
public:
  explicit Init_Navigation_Goal_map_name(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_tracking_roi map_name(::protocol::action::Navigation_Goal::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_Navigation_Goal_tracking_roi(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_label_id
{
public:
  explicit Init_Navigation_Goal_label_id(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_map_name label_id(::protocol::action::Navigation_Goal::_label_id_type arg)
  {
    msg_.label_id = std::move(arg);
    return Init_Navigation_Goal_map_name(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_poses
{
public:
  explicit Init_Navigation_Goal_poses(::protocol::action::Navigation_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigation_Goal_label_id poses(::protocol::action::Navigation_Goal::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_Navigation_Goal_label_id(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

class Init_Navigation_Goal_nav_type
{
public:
  Init_Navigation_Goal_nav_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_Goal_poses nav_type(::protocol::action::Navigation_Goal::_nav_type_type arg)
  {
    msg_.nav_type = std::move(arg);
    return Init_Navigation_Goal_poses(msg_);
  }

private:
  ::protocol::action::Navigation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_Goal>()
{
  return protocol::action::builder::Init_Navigation_Goal_nav_type();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_Result_result
{
public:
  Init_Navigation_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::Navigation_Result result(::protocol::action::Navigation_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_Result>()
{
  return protocol::action::builder::Init_Navigation_Result_result();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_Feedback_feedback_msg
{
public:
  explicit Init_Navigation_Feedback_feedback_msg(::protocol::action::Navigation_Feedback & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_Feedback feedback_msg(::protocol::action::Navigation_Feedback::_feedback_msg_type arg)
  {
    msg_.feedback_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_Feedback msg_;
};

class Init_Navigation_Feedback_feedback_code
{
public:
  Init_Navigation_Feedback_feedback_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_Feedback_feedback_msg feedback_code(::protocol::action::Navigation_Feedback::_feedback_code_type arg)
  {
    msg_.feedback_code = std::move(arg);
    return Init_Navigation_Feedback_feedback_msg(msg_);
  }

private:
  ::protocol::action::Navigation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_Feedback>()
{
  return protocol::action::builder::Init_Navigation_Feedback_feedback_code();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_SendGoal_Request_goal
{
public:
  explicit Init_Navigation_SendGoal_Request_goal(::protocol::action::Navigation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_SendGoal_Request goal(::protocol::action::Navigation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_SendGoal_Request msg_;
};

class Init_Navigation_SendGoal_Request_goal_id
{
public:
  Init_Navigation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_SendGoal_Request_goal goal_id(::protocol::action::Navigation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigation_SendGoal_Request_goal(msg_);
  }

private:
  ::protocol::action::Navigation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_SendGoal_Request>()
{
  return protocol::action::builder::Init_Navigation_SendGoal_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_SendGoal_Response_stamp
{
public:
  explicit Init_Navigation_SendGoal_Response_stamp(::protocol::action::Navigation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_SendGoal_Response stamp(::protocol::action::Navigation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_SendGoal_Response msg_;
};

class Init_Navigation_SendGoal_Response_accepted
{
public:
  Init_Navigation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_SendGoal_Response_stamp accepted(::protocol::action::Navigation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigation_SendGoal_Response_stamp(msg_);
  }

private:
  ::protocol::action::Navigation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_SendGoal_Response>()
{
  return protocol::action::builder::Init_Navigation_SendGoal_Response_accepted();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_GetResult_Request_goal_id
{
public:
  Init_Navigation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::action::Navigation_GetResult_Request goal_id(::protocol::action::Navigation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_GetResult_Request>()
{
  return protocol::action::builder::Init_Navigation_GetResult_Request_goal_id();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_GetResult_Response_result
{
public:
  explicit Init_Navigation_GetResult_Response_result(::protocol::action::Navigation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_GetResult_Response result(::protocol::action::Navigation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_GetResult_Response msg_;
};

class Init_Navigation_GetResult_Response_status
{
public:
  Init_Navigation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_GetResult_Response_result status(::protocol::action::Navigation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigation_GetResult_Response_result(msg_);
  }

private:
  ::protocol::action::Navigation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_GetResult_Response>()
{
  return protocol::action::builder::Init_Navigation_GetResult_Response_status();
}

}  // namespace protocol


namespace protocol
{

namespace action
{

namespace builder
{

class Init_Navigation_FeedbackMessage_feedback
{
public:
  explicit Init_Navigation_FeedbackMessage_feedback(::protocol::action::Navigation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::protocol::action::Navigation_FeedbackMessage feedback(::protocol::action::Navigation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::action::Navigation_FeedbackMessage msg_;
};

class Init_Navigation_FeedbackMessage_goal_id
{
public:
  Init_Navigation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_FeedbackMessage_feedback goal_id(::protocol::action::Navigation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigation_FeedbackMessage_feedback(msg_);
  }

private:
  ::protocol::action::Navigation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::action::Navigation_FeedbackMessage>()
{
  return protocol::action::builder::Init_Navigation_FeedbackMessage_goal_id();
}

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_
