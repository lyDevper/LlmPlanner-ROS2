// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "llm_pack_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "llm_pack_interface/msg/detail/traj_context__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace llm_pack_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_pack_interface
cdr_serialize(
  const llm_pack_interface::msg::TrajContext & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_pack_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  llm_pack_interface::msg::TrajContext & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_pack_interface
get_serialized_size(
  const llm_pack_interface::msg::TrajContext & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_pack_interface
max_serialized_size_TrajContext(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace llm_pack_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_pack_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, llm_pack_interface, msg, TrajContext)();

#ifdef __cplusplus
}
#endif

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
