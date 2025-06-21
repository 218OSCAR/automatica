// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cable_detection_picking:action/RunPipeline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cable_detection_picking/action/run_pipeline.hpp"


#ifndef CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__BUILDER_HPP_
#define CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cable_detection_picking/action/detail/run_pipeline__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_Goal_start
{
public:
  Init_RunPipeline_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cable_detection_picking::action::RunPipeline_Goal start(::cable_detection_picking::action::RunPipeline_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_Goal>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_Goal_start();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_Result_message
{
public:
  explicit Init_RunPipeline_Result_message(::cable_detection_picking::action::RunPipeline_Result & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_Result message(::cable_detection_picking::action::RunPipeline_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_Result msg_;
};

class Init_RunPipeline_Result_success
{
public:
  Init_RunPipeline_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_Result_message success(::cable_detection_picking::action::RunPipeline_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RunPipeline_Result_message(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_Result>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_Result_success();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_Feedback_current_step
{
public:
  Init_RunPipeline_Feedback_current_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cable_detection_picking::action::RunPipeline_Feedback current_step(::cable_detection_picking::action::RunPipeline_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_Feedback>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_Feedback_current_step();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_SendGoal_Request_goal
{
public:
  explicit Init_RunPipeline_SendGoal_Request_goal(::cable_detection_picking::action::RunPipeline_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_SendGoal_Request goal(::cable_detection_picking::action::RunPipeline_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Request msg_;
};

class Init_RunPipeline_SendGoal_Request_goal_id
{
public:
  Init_RunPipeline_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_SendGoal_Request_goal goal_id(::cable_detection_picking::action::RunPipeline_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunPipeline_SendGoal_Request_goal(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_SendGoal_Request>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_SendGoal_Request_goal_id();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_SendGoal_Response_stamp
{
public:
  explicit Init_RunPipeline_SendGoal_Response_stamp(::cable_detection_picking::action::RunPipeline_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_SendGoal_Response stamp(::cable_detection_picking::action::RunPipeline_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Response msg_;
};

class Init_RunPipeline_SendGoal_Response_accepted
{
public:
  Init_RunPipeline_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_SendGoal_Response_stamp accepted(::cable_detection_picking::action::RunPipeline_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunPipeline_SendGoal_Response_stamp(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_SendGoal_Response>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_SendGoal_Response_accepted();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_SendGoal_Event_response
{
public:
  explicit Init_RunPipeline_SendGoal_Event_response(::cable_detection_picking::action::RunPipeline_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_SendGoal_Event response(::cable_detection_picking::action::RunPipeline_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Event msg_;
};

class Init_RunPipeline_SendGoal_Event_request
{
public:
  explicit Init_RunPipeline_SendGoal_Event_request(::cable_detection_picking::action::RunPipeline_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_RunPipeline_SendGoal_Event_response request(::cable_detection_picking::action::RunPipeline_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RunPipeline_SendGoal_Event_response(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Event msg_;
};

class Init_RunPipeline_SendGoal_Event_info
{
public:
  Init_RunPipeline_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_SendGoal_Event_request info(::cable_detection_picking::action::RunPipeline_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RunPipeline_SendGoal_Event_request(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_SendGoal_Event>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_SendGoal_Event_info();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_GetResult_Request_goal_id
{
public:
  Init_RunPipeline_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cable_detection_picking::action::RunPipeline_GetResult_Request goal_id(::cable_detection_picking::action::RunPipeline_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_GetResult_Request>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_GetResult_Request_goal_id();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_GetResult_Response_result
{
public:
  explicit Init_RunPipeline_GetResult_Response_result(::cable_detection_picking::action::RunPipeline_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_GetResult_Response result(::cable_detection_picking::action::RunPipeline_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Response msg_;
};

class Init_RunPipeline_GetResult_Response_status
{
public:
  Init_RunPipeline_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_GetResult_Response_result status(::cable_detection_picking::action::RunPipeline_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunPipeline_GetResult_Response_result(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_GetResult_Response>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_GetResult_Response_status();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_GetResult_Event_response
{
public:
  explicit Init_RunPipeline_GetResult_Event_response(::cable_detection_picking::action::RunPipeline_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_GetResult_Event response(::cable_detection_picking::action::RunPipeline_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Event msg_;
};

class Init_RunPipeline_GetResult_Event_request
{
public:
  explicit Init_RunPipeline_GetResult_Event_request(::cable_detection_picking::action::RunPipeline_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_RunPipeline_GetResult_Event_response request(::cable_detection_picking::action::RunPipeline_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RunPipeline_GetResult_Event_response(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Event msg_;
};

class Init_RunPipeline_GetResult_Event_info
{
public:
  Init_RunPipeline_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_GetResult_Event_request info(::cable_detection_picking::action::RunPipeline_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RunPipeline_GetResult_Event_request(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_GetResult_Event>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_GetResult_Event_info();
}

}  // namespace cable_detection_picking


namespace cable_detection_picking
{

namespace action
{

namespace builder
{

class Init_RunPipeline_FeedbackMessage_feedback
{
public:
  explicit Init_RunPipeline_FeedbackMessage_feedback(::cable_detection_picking::action::RunPipeline_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cable_detection_picking::action::RunPipeline_FeedbackMessage feedback(::cable_detection_picking::action::RunPipeline_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_FeedbackMessage msg_;
};

class Init_RunPipeline_FeedbackMessage_goal_id
{
public:
  Init_RunPipeline_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunPipeline_FeedbackMessage_feedback goal_id(::cable_detection_picking::action::RunPipeline_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunPipeline_FeedbackMessage_feedback(msg_);
  }

private:
  ::cable_detection_picking::action::RunPipeline_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cable_detection_picking::action::RunPipeline_FeedbackMessage>()
{
  return cable_detection_picking::action::builder::Init_RunPipeline_FeedbackMessage_goal_id();
}

}  // namespace cable_detection_picking

#endif  // CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__BUILDER_HPP_
