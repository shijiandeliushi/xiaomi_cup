// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice
#include "cyberdog_msg/msg/detail/apply_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"

bool
cyberdog_msg__msg__ApplyForce__init(cyberdog_msg__msg__ApplyForce * msg)
{
  if (!msg) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    cyberdog_msg__msg__ApplyForce__fini(msg);
    return false;
  }
  // time
  // force
  // rel_pos
  return true;
}

void
cyberdog_msg__msg__ApplyForce__fini(cyberdog_msg__msg__ApplyForce * msg)
{
  if (!msg) {
    return;
  }
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // time
  // force
  // rel_pos
}

bool
cyberdog_msg__msg__ApplyForce__are_equal(const cyberdog_msg__msg__ApplyForce * lhs, const cyberdog_msg__msg__ApplyForce * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_name), &(rhs->link_name)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // force
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->force[i] != rhs->force[i]) {
      return false;
    }
  }
  // rel_pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rel_pos[i] != rhs->rel_pos[i]) {
      return false;
    }
  }
  return true;
}

bool
cyberdog_msg__msg__ApplyForce__copy(
  const cyberdog_msg__msg__ApplyForce * input,
  cyberdog_msg__msg__ApplyForce * output)
{
  if (!input || !output) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link_name), &(output->link_name)))
  {
    return false;
  }
  // time
  output->time = input->time;
  // force
  for (size_t i = 0; i < 3; ++i) {
    output->force[i] = input->force[i];
  }
  // rel_pos
  for (size_t i = 0; i < 3; ++i) {
    output->rel_pos[i] = input->rel_pos[i];
  }
  return true;
}

cyberdog_msg__msg__ApplyForce *
cyberdog_msg__msg__ApplyForce__create()
{
  cyberdog_msg__msg__ApplyForce * msg = (cyberdog_msg__msg__ApplyForce *)malloc(sizeof(cyberdog_msg__msg__ApplyForce));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cyberdog_msg__msg__ApplyForce));
  bool success = cyberdog_msg__msg__ApplyForce__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cyberdog_msg__msg__ApplyForce__destroy(cyberdog_msg__msg__ApplyForce * msg)
{
  if (msg) {
    cyberdog_msg__msg__ApplyForce__fini(msg);
  }
  free(msg);
}


bool
cyberdog_msg__msg__ApplyForce__Sequence__init(cyberdog_msg__msg__ApplyForce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cyberdog_msg__msg__ApplyForce * data = NULL;
  if (size) {
    data = (cyberdog_msg__msg__ApplyForce *)calloc(size, sizeof(cyberdog_msg__msg__ApplyForce));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cyberdog_msg__msg__ApplyForce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cyberdog_msg__msg__ApplyForce__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cyberdog_msg__msg__ApplyForce__Sequence__fini(cyberdog_msg__msg__ApplyForce__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cyberdog_msg__msg__ApplyForce__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cyberdog_msg__msg__ApplyForce__Sequence *
cyberdog_msg__msg__ApplyForce__Sequence__create(size_t size)
{
  cyberdog_msg__msg__ApplyForce__Sequence * array = (cyberdog_msg__msg__ApplyForce__Sequence *)malloc(sizeof(cyberdog_msg__msg__ApplyForce__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cyberdog_msg__msg__ApplyForce__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cyberdog_msg__msg__ApplyForce__Sequence__destroy(cyberdog_msg__msg__ApplyForce__Sequence * array)
{
  if (array) {
    cyberdog_msg__msg__ApplyForce__Sequence__fini(array);
  }
  free(array);
}

bool
cyberdog_msg__msg__ApplyForce__Sequence__are_equal(const cyberdog_msg__msg__ApplyForce__Sequence * lhs, const cyberdog_msg__msg__ApplyForce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cyberdog_msg__msg__ApplyForce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cyberdog_msg__msg__ApplyForce__Sequence__copy(
  const cyberdog_msg__msg__ApplyForce__Sequence * input,
  cyberdog_msg__msg__ApplyForce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cyberdog_msg__msg__ApplyForce);
    cyberdog_msg__msg__ApplyForce * data =
      (cyberdog_msg__msg__ApplyForce *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cyberdog_msg__msg__ApplyForce__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cyberdog_msg__msg__ApplyForce__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cyberdog_msg__msg__ApplyForce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
