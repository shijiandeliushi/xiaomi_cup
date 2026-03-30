// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/srv/detail/motion_sequence_show__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionSequenceShow_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::srv::MotionSequenceShow_Request(_init);
}

void MotionSequenceShow_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::srv::MotionSequenceShow_Request *>(message_memory);
  typed_message->~MotionSequenceShow_Request();
}

size_t size_function__MotionSequenceShow_Request__gait_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::MotionSequenceGait> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionSequenceShow_Request__gait_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::MotionSequenceGait> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionSequenceShow_Request__gait_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::MotionSequenceGait> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionSequenceShow_Request__gait_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::MotionSequenceGait> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionSequenceShow_Request__pace_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::MotionSequencePace> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionSequenceShow_Request__pace_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::MotionSequencePace> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionSequenceShow_Request__pace_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::MotionSequencePace> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionSequenceShow_Request__pace_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::MotionSequencePace> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionSequenceShow_Request__gait_toml_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionSequenceShow_Request__gait_toml_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionSequenceShow_Request__gait_toml_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionSequenceShow_Request__gait_toml_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionSequenceShow_Request__pace_toml_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionSequenceShow_Request__pace_toml_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionSequenceShow_Request__pace_toml_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionSequenceShow_Request__pace_toml_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionSequenceShow_Request_message_member_array[9] = {
  {
    "motion_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, motion_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, cmd_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gait_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::MotionSequenceGait>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, gait_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionSequenceShow_Request__gait_list,  // size() function pointer
    get_const_function__MotionSequenceShow_Request__gait_list,  // get_const(index) function pointer
    get_function__MotionSequenceShow_Request__gait_list,  // get(index) function pointer
    resize_function__MotionSequenceShow_Request__gait_list  // resize(index) function pointer
  },
  {
    "pace_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::MotionSequencePace>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, pace_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionSequenceShow_Request__pace_list,  // size() function pointer
    get_const_function__MotionSequenceShow_Request__pace_list,  // get_const(index) function pointer
    get_function__MotionSequenceShow_Request__pace_list,  // get(index) function pointer
    resize_function__MotionSequenceShow_Request__pace_list  // resize(index) function pointer
  },
  {
    "gait_toml_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, gait_toml_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionSequenceShow_Request__gait_toml_list,  // size() function pointer
    get_const_function__MotionSequenceShow_Request__gait_toml_list,  // get_const(index) function pointer
    get_function__MotionSequenceShow_Request__gait_toml_list,  // get(index) function pointer
    resize_function__MotionSequenceShow_Request__gait_toml_list  // resize(index) function pointer
  },
  {
    "pace_toml_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, pace_toml_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionSequenceShow_Request__pace_toml_list,  // size() function pointer
    get_const_function__MotionSequenceShow_Request__pace_toml_list,  // get_const(index) function pointer
    get_function__MotionSequenceShow_Request__pace_toml_list,  // get(index) function pointer
    resize_function__MotionSequenceShow_Request__pace_toml_list  // resize(index) function pointer
  },
  {
    "gait_toml",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, gait_toml),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pace_toml",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Request, pace_toml),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionSequenceShow_Request_message_members = {
  "protocol::srv",  // message namespace
  "MotionSequenceShow_Request",  // message name
  9,  // number of fields
  sizeof(protocol::srv::MotionSequenceShow_Request),
  MotionSequenceShow_Request_message_member_array,  // message members
  MotionSequenceShow_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionSequenceShow_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionSequenceShow_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionSequenceShow_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::MotionSequenceShow_Request>()
{
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::MotionSequenceShow_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, MotionSequenceShow_Request)() {
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::MotionSequenceShow_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "protocol/srv/detail/motion_sequence_show__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionSequenceShow_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::srv::MotionSequenceShow_Response(_init);
}

void MotionSequenceShow_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::srv::MotionSequenceShow_Response *>(message_memory);
  typed_message->~MotionSequenceShow_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionSequenceShow_Response_message_member_array[4] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Response, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "describe",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Response, describe),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motion_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::srv::MotionSequenceShow_Response, motion_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionSequenceShow_Response_message_members = {
  "protocol::srv",  // message namespace
  "MotionSequenceShow_Response",  // message name
  4,  // number of fields
  sizeof(protocol::srv::MotionSequenceShow_Response),
  MotionSequenceShow_Response_message_member_array,  // message members
  MotionSequenceShow_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionSequenceShow_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionSequenceShow_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionSequenceShow_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::srv::MotionSequenceShow_Response>()
{
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::MotionSequenceShow_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, MotionSequenceShow_Response)() {
  return &::protocol::srv::rosidl_typesupport_introspection_cpp::MotionSequenceShow_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "protocol/srv/detail/motion_sequence_show__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace protocol
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MotionSequenceShow_service_members = {
  "protocol::srv",  // service namespace
  "MotionSequenceShow",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<protocol::srv::MotionSequenceShow>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t MotionSequenceShow_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionSequenceShow_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<protocol::srv::MotionSequenceShow>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::protocol::srv::rosidl_typesupport_introspection_cpp::MotionSequenceShow_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::protocol::srv::MotionSequenceShow_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::protocol::srv::MotionSequenceShow_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, srv, MotionSequenceShow)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<protocol::srv::MotionSequenceShow>();
}

#ifdef __cplusplus
}
#endif
