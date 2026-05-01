// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__FUNCTIONS_H_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "llm_pack_interface/msg/rosidl_generator_c__visibility_control.h"

#include "llm_pack_interface/msg/detail/traj_context__struct.h"

/// Initialize msg/TrajContext message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llm_pack_interface__msg__TrajContext
 * )) before or use
 * llm_pack_interface__msg__TrajContext__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__init(llm_pack_interface__msg__TrajContext * msg);

/// Finalize msg/TrajContext message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
void
llm_pack_interface__msg__TrajContext__fini(llm_pack_interface__msg__TrajContext * msg);

/// Create msg/TrajContext message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llm_pack_interface__msg__TrajContext__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
llm_pack_interface__msg__TrajContext *
llm_pack_interface__msg__TrajContext__create();

/// Destroy msg/TrajContext message.
/**
 * It calls
 * llm_pack_interface__msg__TrajContext__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
void
llm_pack_interface__msg__TrajContext__destroy(llm_pack_interface__msg__TrajContext * msg);

/// Check for msg/TrajContext message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__are_equal(const llm_pack_interface__msg__TrajContext * lhs, const llm_pack_interface__msg__TrajContext * rhs);

/// Copy a msg/TrajContext message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__copy(
  const llm_pack_interface__msg__TrajContext * input,
  llm_pack_interface__msg__TrajContext * output);

/// Initialize array of msg/TrajContext messages.
/**
 * It allocates the memory for the number of elements and calls
 * llm_pack_interface__msg__TrajContext__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__Sequence__init(llm_pack_interface__msg__TrajContext__Sequence * array, size_t size);

/// Finalize array of msg/TrajContext messages.
/**
 * It calls
 * llm_pack_interface__msg__TrajContext__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
void
llm_pack_interface__msg__TrajContext__Sequence__fini(llm_pack_interface__msg__TrajContext__Sequence * array);

/// Create array of msg/TrajContext messages.
/**
 * It allocates the memory for the array and calls
 * llm_pack_interface__msg__TrajContext__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
llm_pack_interface__msg__TrajContext__Sequence *
llm_pack_interface__msg__TrajContext__Sequence__create(size_t size);

/// Destroy array of msg/TrajContext messages.
/**
 * It calls
 * llm_pack_interface__msg__TrajContext__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
void
llm_pack_interface__msg__TrajContext__Sequence__destroy(llm_pack_interface__msg__TrajContext__Sequence * array);

/// Check for msg/TrajContext message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__Sequence__are_equal(const llm_pack_interface__msg__TrajContext__Sequence * lhs, const llm_pack_interface__msg__TrajContext__Sequence * rhs);

/// Copy an array of msg/TrajContext messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_pack_interface
bool
llm_pack_interface__msg__TrajContext__Sequence__copy(
  const llm_pack_interface__msg__TrajContext__Sequence * input,
  llm_pack_interface__msg__TrajContext__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__FUNCTIONS_H_
