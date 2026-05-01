// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__BUILDER_HPP_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_pack_interface/msg/detail/traj_context__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_pack_interface
{

namespace msg
{

namespace builder
{

class Init_TrajContext_part
{
public:
  explicit Init_TrajContext_part(::llm_pack_interface::msg::TrajContext & msg)
  : msg_(msg)
  {}
  ::llm_pack_interface::msg::TrajContext part(::llm_pack_interface::msg::TrajContext::_part_type arg)
  {
    msg_.part = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_pack_interface::msg::TrajContext msg_;
};

class Init_TrajContext_q_init
{
public:
  explicit Init_TrajContext_q_init(::llm_pack_interface::msg::TrajContext & msg)
  : msg_(msg)
  {}
  Init_TrajContext_part q_init(::llm_pack_interface::msg::TrajContext::_q_init_type arg)
  {
    msg_.q_init = std::move(arg);
    return Init_TrajContext_part(msg_);
  }

private:
  ::llm_pack_interface::msg::TrajContext msg_;
};

class Init_TrajContext_a
{
public:
  explicit Init_TrajContext_a(::llm_pack_interface::msg::TrajContext & msg)
  : msg_(msg)
  {}
  Init_TrajContext_q_init a(::llm_pack_interface::msg::TrajContext::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TrajContext_q_init(msg_);
  }

private:
  ::llm_pack_interface::msg::TrajContext msg_;
};

class Init_TrajContext_v_const
{
public:
  explicit Init_TrajContext_v_const(::llm_pack_interface::msg::TrajContext & msg)
  : msg_(msg)
  {}
  Init_TrajContext_a v_const(::llm_pack_interface::msg::TrajContext::_v_const_type arg)
  {
    msg_.v_const = std::move(arg);
    return Init_TrajContext_a(msg_);
  }

private:
  ::llm_pack_interface::msg::TrajContext msg_;
};

class Init_TrajContext_s_goal
{
public:
  Init_TrajContext_s_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajContext_v_const s_goal(::llm_pack_interface::msg::TrajContext::_s_goal_type arg)
  {
    msg_.s_goal = std::move(arg);
    return Init_TrajContext_v_const(msg_);
  }

private:
  ::llm_pack_interface::msg::TrajContext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_pack_interface::msg::TrajContext>()
{
  return llm_pack_interface::msg::builder::Init_TrajContext_s_goal();
}

}  // namespace llm_pack_interface

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__BUILDER_HPP_
