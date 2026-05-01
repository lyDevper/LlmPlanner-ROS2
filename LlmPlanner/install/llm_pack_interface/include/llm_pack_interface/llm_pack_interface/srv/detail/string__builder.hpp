// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_pack_interface:srv/String.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__SRV__DETAIL__STRING__BUILDER_HPP_
#define LLM_PACK_INTERFACE__SRV__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_pack_interface/srv/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_pack_interface
{

namespace srv
{

namespace builder
{

class Init_String_Request_prompt
{
public:
  Init_String_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_pack_interface::srv::String_Request prompt(::llm_pack_interface::srv::String_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_pack_interface::srv::String_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_pack_interface::srv::String_Request>()
{
  return llm_pack_interface::srv::builder::Init_String_Request_prompt();
}

}  // namespace llm_pack_interface


namespace llm_pack_interface
{

namespace srv
{

namespace builder
{

class Init_String_Response_response
{
public:
  Init_String_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_pack_interface::srv::String_Response response(::llm_pack_interface::srv::String_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_pack_interface::srv::String_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_pack_interface::srv::String_Response>()
{
  return llm_pack_interface::srv::builder::Init_String_Response_response();
}

}  // namespace llm_pack_interface

#endif  // LLM_PACK_INTERFACE__SRV__DETAIL__STRING__BUILDER_HPP_
