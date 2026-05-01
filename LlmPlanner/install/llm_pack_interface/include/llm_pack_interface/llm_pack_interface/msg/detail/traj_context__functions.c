// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llm_pack_interface:msg/TrajContext.idl
// generated code does not contain a copyright notice
#include "llm_pack_interface/msg/detail/traj_context__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `s_goal`
// Member `q_init`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
llm_pack_interface__msg__TrajContext__init(llm_pack_interface__msg__TrajContext * msg)
{
  if (!msg) {
    return false;
  }
  // s_goal
  if (!geometry_msgs__msg__Vector3__init(&msg->s_goal)) {
    llm_pack_interface__msg__TrajContext__fini(msg);
    return false;
  }
  // v_const
  // a
  // q_init
  if (!geometry_msgs__msg__Vector3__init(&msg->q_init)) {
    llm_pack_interface__msg__TrajContext__fini(msg);
    return false;
  }
  // part
  return true;
}

void
llm_pack_interface__msg__TrajContext__fini(llm_pack_interface__msg__TrajContext * msg)
{
  if (!msg) {
    return;
  }
  // s_goal
  geometry_msgs__msg__Vector3__fini(&msg->s_goal);
  // v_const
  // a
  // q_init
  geometry_msgs__msg__Vector3__fini(&msg->q_init);
  // part
}

bool
llm_pack_interface__msg__TrajContext__are_equal(const llm_pack_interface__msg__TrajContext * lhs, const llm_pack_interface__msg__TrajContext * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s_goal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->s_goal), &(rhs->s_goal)))
  {
    return false;
  }
  // v_const
  if (lhs->v_const != rhs->v_const) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // q_init
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->q_init), &(rhs->q_init)))
  {
    return false;
  }
  // part
  if (lhs->part != rhs->part) {
    return false;
  }
  return true;
}

bool
llm_pack_interface__msg__TrajContext__copy(
  const llm_pack_interface__msg__TrajContext * input,
  llm_pack_interface__msg__TrajContext * output)
{
  if (!input || !output) {
    return false;
  }
  // s_goal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->s_goal), &(output->s_goal)))
  {
    return false;
  }
  // v_const
  output->v_const = input->v_const;
  // a
  output->a = input->a;
  // q_init
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->q_init), &(output->q_init)))
  {
    return false;
  }
  // part
  output->part = input->part;
  return true;
}

llm_pack_interface__msg__TrajContext *
llm_pack_interface__msg__TrajContext__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_pack_interface__msg__TrajContext * msg = (llm_pack_interface__msg__TrajContext *)allocator.allocate(sizeof(llm_pack_interface__msg__TrajContext), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_pack_interface__msg__TrajContext));
  bool success = llm_pack_interface__msg__TrajContext__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_pack_interface__msg__TrajContext__destroy(llm_pack_interface__msg__TrajContext * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_pack_interface__msg__TrajContext__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_pack_interface__msg__TrajContext__Sequence__init(llm_pack_interface__msg__TrajContext__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_pack_interface__msg__TrajContext * data = NULL;

  if (size) {
    data = (llm_pack_interface__msg__TrajContext *)allocator.zero_allocate(size, sizeof(llm_pack_interface__msg__TrajContext), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_pack_interface__msg__TrajContext__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_pack_interface__msg__TrajContext__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_pack_interface__msg__TrajContext__Sequence__fini(llm_pack_interface__msg__TrajContext__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_pack_interface__msg__TrajContext__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_pack_interface__msg__TrajContext__Sequence *
llm_pack_interface__msg__TrajContext__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_pack_interface__msg__TrajContext__Sequence * array = (llm_pack_interface__msg__TrajContext__Sequence *)allocator.allocate(sizeof(llm_pack_interface__msg__TrajContext__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_pack_interface__msg__TrajContext__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_pack_interface__msg__TrajContext__Sequence__destroy(llm_pack_interface__msg__TrajContext__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_pack_interface__msg__TrajContext__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_pack_interface__msg__TrajContext__Sequence__are_equal(const llm_pack_interface__msg__TrajContext__Sequence * lhs, const llm_pack_interface__msg__TrajContext__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_pack_interface__msg__TrajContext__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_pack_interface__msg__TrajContext__Sequence__copy(
  const llm_pack_interface__msg__TrajContext__Sequence * input,
  llm_pack_interface__msg__TrajContext__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_pack_interface__msg__TrajContext);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_pack_interface__msg__TrajContext * data =
      (llm_pack_interface__msg__TrajContext *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_pack_interface__msg__TrajContext__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_pack_interface__msg__TrajContext__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_pack_interface__msg__TrajContext__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
