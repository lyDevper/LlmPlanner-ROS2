// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__TRAITS_HPP_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_pack_interface/msg/detail/traj_context__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 's_goal'
// Member 'q_init'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace llm_pack_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajContext & msg,
  std::ostream & out)
{
  out << "{";
  // member: s_goal
  {
    out << "s_goal: ";
    to_flow_style_yaml(msg.s_goal, out);
    out << ", ";
  }

  // member: v_const
  {
    out << "v_const: ";
    rosidl_generator_traits::value_to_yaml(msg.v_const, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: q_init
  {
    out << "q_init: ";
    to_flow_style_yaml(msg.q_init, out);
    out << ", ";
  }

  // member: part
  {
    out << "part: ";
    rosidl_generator_traits::value_to_yaml(msg.part, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_goal:\n";
    to_block_style_yaml(msg.s_goal, out, indentation + 2);
  }

  // member: v_const
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_const: ";
    rosidl_generator_traits::value_to_yaml(msg.v_const, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: q_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q_init:\n";
    to_block_style_yaml(msg.q_init, out, indentation + 2);
  }

  // member: part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part: ";
    rosidl_generator_traits::value_to_yaml(msg.part, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajContext & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace llm_pack_interface

namespace rosidl_generator_traits
{

[[deprecated("use llm_pack_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_pack_interface::msg::TrajContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_pack_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_pack_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const llm_pack_interface::msg::TrajContext & msg)
{
  return llm_pack_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llm_pack_interface::msg::TrajContext>()
{
  return "llm_pack_interface::msg::TrajContext";
}

template<>
inline const char * name<llm_pack_interface::msg::TrajContext>()
{
  return "llm_pack_interface/msg/TrajContext";
}

template<>
struct has_fixed_size<llm_pack_interface::msg::TrajContext>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<llm_pack_interface::msg::TrajContext>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<llm_pack_interface::msg::TrajContext>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__TRAITS_HPP_
