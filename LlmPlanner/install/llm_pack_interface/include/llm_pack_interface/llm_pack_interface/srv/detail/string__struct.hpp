// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_pack_interface:srv/String.idl
// generated code does not contain a copyright notice

#ifndef LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_HPP_
#define LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llm_pack_interface__srv__String_Request __attribute__((deprecated))
#else
# define DEPRECATED__llm_pack_interface__srv__String_Request __declspec(deprecated)
#endif

namespace llm_pack_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct String_Request_
{
  using Type = String_Request_<ContainerAllocator>;

  explicit String_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit String_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_pack_interface::srv::String_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_pack_interface::srv::String_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::srv::String_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::srv::String_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_pack_interface__srv__String_Request
    std::shared_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_pack_interface__srv__String_Request
    std::shared_ptr<llm_pack_interface::srv::String_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const String_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String_Request_

// alias to use template instance with default allocator
using String_Request =
  llm_pack_interface::srv::String_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llm_pack_interface


#ifndef _WIN32
# define DEPRECATED__llm_pack_interface__srv__String_Response __attribute__((deprecated))
#else
# define DEPRECATED__llm_pack_interface__srv__String_Response __declspec(deprecated)
#endif

namespace llm_pack_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct String_Response_
{
  using Type = String_Response_<ContainerAllocator>;

  explicit String_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit String_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_pack_interface::srv::String_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_pack_interface::srv::String_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::srv::String_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_pack_interface::srv::String_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_pack_interface__srv__String_Response
    std::shared_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_pack_interface__srv__String_Response
    std::shared_ptr<llm_pack_interface::srv::String_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const String_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String_Response_

// alias to use template instance with default allocator
using String_Response =
  llm_pack_interface::srv::String_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llm_pack_interface

namespace llm_pack_interface
{

namespace srv
{

struct String
{
  using Request = llm_pack_interface::srv::String_Request;
  using Response = llm_pack_interface::srv::String_Response;
};

}  // namespace srv

}  // namespace llm_pack_interface

#endif  // LLM_PACK_INTERFACE__SRV__DETAIL__STRING__STRUCT_HPP_
