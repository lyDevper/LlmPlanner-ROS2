// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_H_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCELERATION'.
enum
{
  llm_pack_interface__msg__TrajContext__ACCELERATION = 0
};

/// Constant 'CONSTANT'.
enum
{
  llm_pack_interface__msg__TrajContext__CONSTANT = 1
};

/// Constant 'DECELERATION'.
enum
{
  llm_pack_interface__msg__TrajContext__DECELERATION = 2
};

// Include directives for member types
// Member 's_goal'
// Member 'q_init'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/TrajContext in the package llm_pack_interface.
/**
  * TrajectPart Enum Constants
 */
typedef struct llm_pack_interface__msg__TrajContext
{
  /// Goal position (3D vector)
  geometry_msgs__msg__Vector3 s_goal;
  /// Kinematic parameters
  float v_const;
  float a;
  /// Current pose at window start (Optional/Filled by FM if needed)
  geometry_msgs__msg__Vector3 q_init;
  /// Current state machine part (Default: CONSTANT)
  uint8_t part;
} llm_pack_interface__msg__TrajContext;

// Struct for a sequence of llm_pack_interface__msg__TrajContext.
typedef struct llm_pack_interface__msg__TrajContext__Sequence
{
  llm_pack_interface__msg__TrajContext * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_pack_interface__msg__TrajContext__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_H_
