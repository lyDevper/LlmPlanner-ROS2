// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_HPP_
#define LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 's_goal'
// Member 'q_init'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llm_pack_interface__msg__TrajContext __attribute__((deprecated))
#else
# define DEPRECATED__llm_pack_interface__msg__TrajContext __declspec(deprecated)
#endif

namespace llm_pack_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajContext_
{
  using Type = TrajContext_<ContainerAllocator>;

  explicit TrajContext_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : s_goal(_init),
    q_init(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_const = 0.0f;
      this->a = 0.0f;
      this->part = 0;
    }
  }

  explicit TrajContext_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : s_goal(_alloc, _init),
    q_init(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_const = 0.0f;
      this->a = 0.0f;
      this->part = 0;
    }
  }

  // field types and members
  using _s_goal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _s_goal_type s_goal;
  using _v_const_type =
    float;
  _v_const_type v_const;
  using _a_type =
    float;
  _a_type a;
  using _q_init_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _q_init_type q_init;
  using _part_type =
    uint8_t;
  _part_type part;

  // setters for named parameter idiom
  Type & set__s_goal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->s_goal = _arg;
    return *this;
  }
  Type & set__v_const(
    const float & _arg)
  {
    this->v_const = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__q_init(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->q_init = _arg;
    return *this;
  }
  Type & set__part(
    const uint8_t & _arg)
  {
    this->part = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACCELERATION =
    0u;
  static constexpr uint8_t CONSTANT =
    1u;
  static constexpr uint8_t DECELERATION =
    2u;

  // pointer types
  using RawPtr =
    llm_pack_interface::msg::TrajContext_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_pack_interface::msg::TrajContext_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::msg::TrajContext_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::msg::TrajContext_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_pack_interface__msg__TrajContext
    std::shared_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_pack_interface__msg__TrajContext
    std::shared_ptr<llm_pack_interface::msg::TrajContext_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajContext_ & other) const
  {
    if (this->s_goal != other.s_goal) {
      return false;
    }
    if (this->v_const != other.v_const) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->q_init != other.q_init) {
      return false;
    }
    if (this->part != other.part) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajContext_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajContext_

// alias to use template instance with default allocator
using TrajContext =
  llm_pack_interface::msg::TrajContext_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrajContext_<ContainerAllocator>::ACCELERATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrajContext_<ContainerAllocator>::CONSTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrajContext_<ContainerAllocator>::DECELERATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace llm_pack_interface

#endif  // LLM_PACK_INTERFACE__MSG__DETAIL__TRAJ_CONTEXT__STRUCT_HPP_
