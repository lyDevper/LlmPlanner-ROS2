// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_pack_interface:srv/String.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__SRV__DETAIL__STRING__TRAITS_HPP_
#define LLM_PACK_INTERFACE__SRV__DETAIL__STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_pack_interface/srv/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llm_pack_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const String_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const String_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const String_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace llm_pack_interface

namespace rosidl_generator_traits
{

[[deprecated("use llm_pack_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_pack_interface::srv::String_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_pack_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_pack_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const llm_pack_interface::srv::String_Request & msg)
{
  return llm_pack_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llm_pack_interface::srv::String_Request>()
{
  return "llm_pack_interface::srv::String_Request";
}

template<>
inline const char * name<llm_pack_interface::srv::String_Request>()
{
  return "llm_pack_interface/srv/String_Request";
}

template<>
struct has_fixed_size<llm_pack_interface::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_pack_interface::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_pack_interface::srv::String_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace llm_pack_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const String_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const String_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const String_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace llm_pack_interface

namespace rosidl_generator_traits
{

[[deprecated("use llm_pack_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_pack_interface::srv::String_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_pack_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_pack_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const llm_pack_interface::srv::String_Response & msg)
{
  return llm_pack_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llm_pack_interface::srv::String_Response>()
{
  return "llm_pack_interface::srv::String_Response";
}

template<>
inline const char * name<llm_pack_interface::srv::String_Response>()
{
  return "llm_pack_interface/srv/String_Response";
}

template<>
struct has_fixed_size<llm_pack_interface::srv::String_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_pack_interface::srv::String_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_pack_interface::srv::String_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llm_pack_interface::srv::String>()
{
  return "llm_pack_interface::srv::String";
}

template<>
inline const char * name<llm_pack_interface::srv::String>()
{
  return "llm_pack_interface/srv/String";
}

template<>
struct has_fixed_size<llm_pack_interface::srv::String>
  : std::integral_constant<
    bool,
    has_fixed_size<llm_pack_interface::srv::String_Request>::value &&
    has_fixed_size<llm_pack_interface::srv::String_Response>::value
  >
{
};

template<>
struct has_bounded_size<llm_pack_interface::srv::String>
  : std::integral_constant<
    bool,
    has_bounded_size<llm_pack_interface::srv::String_Request>::value &&
    has_bounded_size<llm_pack_interface::srv::String_Response>::value
  >
{
};

template<>
struct is_service<llm_pack_interface::srv::String>
  : std::true_type
{
};

template<>
struct is_service_request<llm_pack_interface::srv::String_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llm_pack_interface::srv::String_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLM_PACK_INTERFACE__SRV__DETAIL__STRING__TRAITS_HPP_
