// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_pack_interface:srv/String.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_H_
#define LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/String in the package llm_pack_interface.
typedef struct llm_pack_interface__srv__String_Request
{
  rosidl_runtime_c__String prompt;
} llm_pack_interface__srv__String_Request;

// Struct for a sequence of llm_pack_interface__srv__String_Request.
typedef struct llm_pack_interface__srv__String_Request__Sequence
{
  llm_pack_interface__srv__String_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_pack_interface__srv__String_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/String in the package llm_pack_interface.
typedef struct llm_pack_interface__srv__String_Response
{
  rosidl_runtime_c__String response;
} llm_pack_interface__srv__String_Response;

// Struct for a sequence of llm_pack_interface__srv__String_Response.
typedef struct llm_pack_interface__srv__String_Response__Sequence
{
  llm_pack_interface__srv__String_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_pack_interface__srv__String_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_H_
