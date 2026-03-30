// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice
#include "protocol/action/detail/over_the_air__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal_msg`
// Member `id`
// Member `user`
// Member `operate`
// Member `data`
// Member `type`
// Member `depth`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__action__OverTheAir_Goal__init(protocol__action__OverTheAir_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_msg
  if (!rosidl_runtime_c__String__init(&msg->goal_msg)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // user
  if (!rosidl_runtime_c__String__init(&msg->user)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__init(&msg->operate)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  // depth
  if (!rosidl_runtime_c__String__init(&msg->depth)) {
    protocol__action__OverTheAir_Goal__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_Goal__fini(protocol__action__OverTheAir_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_msg
  rosidl_runtime_c__String__fini(&msg->goal_msg);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // user
  rosidl_runtime_c__String__fini(&msg->user);
  // operate
  rosidl_runtime_c__String__fini(&msg->operate);
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // depth
  rosidl_runtime_c__String__fini(&msg->depth);
}

bool
protocol__action__OverTheAir_Goal__are_equal(const protocol__action__OverTheAir_Goal * lhs, const protocol__action__OverTheAir_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->goal_msg), &(rhs->goal_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // user
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user), &(rhs->user)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operate), &(rhs->operate)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->depth), &(rhs->depth)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_Goal__copy(
  const protocol__action__OverTheAir_Goal * input,
  protocol__action__OverTheAir_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->goal_msg), &(output->goal_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // user
  if (!rosidl_runtime_c__String__copy(
      &(input->user), &(output->user)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__copy(
      &(input->operate), &(output->operate)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__String__copy(
      &(input->depth), &(output->depth)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_Goal *
protocol__action__OverTheAir_Goal__create()
{
  protocol__action__OverTheAir_Goal * msg = (protocol__action__OverTheAir_Goal *)malloc(sizeof(protocol__action__OverTheAir_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_Goal));
  bool success = protocol__action__OverTheAir_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_Goal__destroy(protocol__action__OverTheAir_Goal * msg)
{
  if (msg) {
    protocol__action__OverTheAir_Goal__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_Goal__Sequence__init(protocol__action__OverTheAir_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_Goal * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_Goal *)calloc(size, sizeof(protocol__action__OverTheAir_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_Goal__fini(&data[i - 1]);
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
protocol__action__OverTheAir_Goal__Sequence__fini(protocol__action__OverTheAir_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_Goal__fini(&array->data[i]);
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

protocol__action__OverTheAir_Goal__Sequence *
protocol__action__OverTheAir_Goal__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_Goal__Sequence * array = (protocol__action__OverTheAir_Goal__Sequence *)malloc(sizeof(protocol__action__OverTheAir_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_Goal__Sequence__destroy(protocol__action__OverTheAir_Goal__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_Goal__Sequence__are_equal(const protocol__action__OverTheAir_Goal__Sequence * lhs, const protocol__action__OverTheAir_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_Goal__Sequence__copy(
  const protocol__action__OverTheAir_Goal__Sequence * input,
  protocol__action__OverTheAir_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_Goal);
    protocol__action__OverTheAir_Goal * data =
      (protocol__action__OverTheAir_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_Goal__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_msg`
// Member `id`
// Member `type`
// Member `operate`
// Member `sn`
// Member `not_unlocked`
// Member `version_nx`
// Member `version_nx_mini_led`
// Member `version_nx_head_tof`
// Member `version_nx_rear_tof`
// Member `version_nx_head_uwb`
// Member `version_nx_rear_uwb`
// Member `version_nx_imu`
// Member `version_nx_power`
// Member `version_r329`
// Member `version_mr813`
// Member `version_mr813_spie1`
// Member `version_mr813_spie2`
// Member `version_motors`
// Member `disk_name`
// Member `disk_filesystem`
// Member `disk_size`
// Member `disk_used`
// Member `disk_avail`
// Member `disk_scale`
// Member `disk_mounted`
// Member `disk_meta_name`
// Member `disk_meta_size`
// Member `disk_meta_change_time`
// Member `disk_meta_user_rights`
// Member `reboot`
// Member `state`
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
protocol__action__OverTheAir_Result__init(protocol__action__OverTheAir_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__init(&msg->result_msg)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__init(&msg->operate)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // sn
  if (!rosidl_runtime_c__String__init(&msg->sn)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // not_unlocked
  if (!rosidl_runtime_c__String__init(&msg->not_unlocked)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx
  if (!rosidl_runtime_c__String__init(&msg->version_nx)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_mini_led
  if (!rosidl_runtime_c__String__init(&msg->version_nx_mini_led)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_head_tof
  if (!rosidl_runtime_c__String__init(&msg->version_nx_head_tof)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_rear_tof
  if (!rosidl_runtime_c__String__init(&msg->version_nx_rear_tof)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_head_uwb
  if (!rosidl_runtime_c__String__init(&msg->version_nx_head_uwb)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_rear_uwb
  if (!rosidl_runtime_c__String__init(&msg->version_nx_rear_uwb)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_imu
  if (!rosidl_runtime_c__String__init(&msg->version_nx_imu)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_nx_power
  if (!rosidl_runtime_c__String__init(&msg->version_nx_power)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_r329
  if (!rosidl_runtime_c__String__init(&msg->version_r329)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_mr813
  if (!rosidl_runtime_c__String__init(&msg->version_mr813)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_mr813_spie1
  if (!rosidl_runtime_c__String__init(&msg->version_mr813_spie1)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_mr813_spie2
  if (!rosidl_runtime_c__String__init(&msg->version_mr813_spie2)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // version_motors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->version_motors, 0)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_name
  if (!rosidl_runtime_c__String__init(&msg->disk_name)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_filesystem
  if (!rosidl_runtime_c__String__init(&msg->disk_filesystem)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_size
  if (!rosidl_runtime_c__String__init(&msg->disk_size)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_used
  if (!rosidl_runtime_c__String__init(&msg->disk_used)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_avail
  if (!rosidl_runtime_c__String__init(&msg->disk_avail)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_scale
  if (!rosidl_runtime_c__String__init(&msg->disk_scale)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_mounted
  if (!rosidl_runtime_c__String__init(&msg->disk_mounted)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_meta_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disk_meta_name, 0)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_meta_size
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disk_meta_size, 0)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_meta_change_time
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disk_meta_change_time, 0)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // disk_meta_user_rights
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disk_meta_user_rights, 0)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // reboot
  if (!rosidl_runtime_c__String__init(&msg->reboot)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  // code
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    protocol__action__OverTheAir_Result__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_Result__fini(protocol__action__OverTheAir_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_msg
  rosidl_runtime_c__String__fini(&msg->result_msg);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // operate
  rosidl_runtime_c__String__fini(&msg->operate);
  // sn
  rosidl_runtime_c__String__fini(&msg->sn);
  // not_unlocked
  rosidl_runtime_c__String__fini(&msg->not_unlocked);
  // version_nx
  rosidl_runtime_c__String__fini(&msg->version_nx);
  // version_nx_mini_led
  rosidl_runtime_c__String__fini(&msg->version_nx_mini_led);
  // version_nx_head_tof
  rosidl_runtime_c__String__fini(&msg->version_nx_head_tof);
  // version_nx_rear_tof
  rosidl_runtime_c__String__fini(&msg->version_nx_rear_tof);
  // version_nx_head_uwb
  rosidl_runtime_c__String__fini(&msg->version_nx_head_uwb);
  // version_nx_rear_uwb
  rosidl_runtime_c__String__fini(&msg->version_nx_rear_uwb);
  // version_nx_imu
  rosidl_runtime_c__String__fini(&msg->version_nx_imu);
  // version_nx_power
  rosidl_runtime_c__String__fini(&msg->version_nx_power);
  // version_r329
  rosidl_runtime_c__String__fini(&msg->version_r329);
  // version_mr813
  rosidl_runtime_c__String__fini(&msg->version_mr813);
  // version_mr813_spie1
  rosidl_runtime_c__String__fini(&msg->version_mr813_spie1);
  // version_mr813_spie2
  rosidl_runtime_c__String__fini(&msg->version_mr813_spie2);
  // version_motors
  rosidl_runtime_c__String__Sequence__fini(&msg->version_motors);
  // disk_name
  rosidl_runtime_c__String__fini(&msg->disk_name);
  // disk_filesystem
  rosidl_runtime_c__String__fini(&msg->disk_filesystem);
  // disk_size
  rosidl_runtime_c__String__fini(&msg->disk_size);
  // disk_used
  rosidl_runtime_c__String__fini(&msg->disk_used);
  // disk_avail
  rosidl_runtime_c__String__fini(&msg->disk_avail);
  // disk_scale
  rosidl_runtime_c__String__fini(&msg->disk_scale);
  // disk_mounted
  rosidl_runtime_c__String__fini(&msg->disk_mounted);
  // disk_meta_name
  rosidl_runtime_c__String__Sequence__fini(&msg->disk_meta_name);
  // disk_meta_size
  rosidl_runtime_c__String__Sequence__fini(&msg->disk_meta_size);
  // disk_meta_change_time
  rosidl_runtime_c__String__Sequence__fini(&msg->disk_meta_change_time);
  // disk_meta_user_rights
  rosidl_runtime_c__String__Sequence__fini(&msg->disk_meta_user_rights);
  // reboot
  rosidl_runtime_c__String__fini(&msg->reboot);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // code
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
protocol__action__OverTheAir_Result__are_equal(const protocol__action__OverTheAir_Result * lhs, const protocol__action__OverTheAir_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_msg), &(rhs->result_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operate), &(rhs->operate)))
  {
    return false;
  }
  // sn
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sn), &(rhs->sn)))
  {
    return false;
  }
  // not_unlocked
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->not_unlocked), &(rhs->not_unlocked)))
  {
    return false;
  }
  // version_nx
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx), &(rhs->version_nx)))
  {
    return false;
  }
  // version_nx_mini_led
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_mini_led), &(rhs->version_nx_mini_led)))
  {
    return false;
  }
  // version_nx_head_tof
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_head_tof), &(rhs->version_nx_head_tof)))
  {
    return false;
  }
  // version_nx_rear_tof
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_rear_tof), &(rhs->version_nx_rear_tof)))
  {
    return false;
  }
  // version_nx_head_uwb
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_head_uwb), &(rhs->version_nx_head_uwb)))
  {
    return false;
  }
  // version_nx_rear_uwb
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_rear_uwb), &(rhs->version_nx_rear_uwb)))
  {
    return false;
  }
  // version_nx_imu
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_imu), &(rhs->version_nx_imu)))
  {
    return false;
  }
  // version_nx_power
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_nx_power), &(rhs->version_nx_power)))
  {
    return false;
  }
  // version_r329
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_r329), &(rhs->version_r329)))
  {
    return false;
  }
  // version_mr813
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_mr813), &(rhs->version_mr813)))
  {
    return false;
  }
  // version_mr813_spie1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_mr813_spie1), &(rhs->version_mr813_spie1)))
  {
    return false;
  }
  // version_mr813_spie2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_mr813_spie2), &(rhs->version_mr813_spie2)))
  {
    return false;
  }
  // version_motors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->version_motors), &(rhs->version_motors)))
  {
    return false;
  }
  // disk_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_name), &(rhs->disk_name)))
  {
    return false;
  }
  // disk_filesystem
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_filesystem), &(rhs->disk_filesystem)))
  {
    return false;
  }
  // disk_size
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_size), &(rhs->disk_size)))
  {
    return false;
  }
  // disk_used
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_used), &(rhs->disk_used)))
  {
    return false;
  }
  // disk_avail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_avail), &(rhs->disk_avail)))
  {
    return false;
  }
  // disk_scale
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_scale), &(rhs->disk_scale)))
  {
    return false;
  }
  // disk_mounted
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_mounted), &(rhs->disk_mounted)))
  {
    return false;
  }
  // disk_meta_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disk_meta_name), &(rhs->disk_meta_name)))
  {
    return false;
  }
  // disk_meta_size
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disk_meta_size), &(rhs->disk_meta_size)))
  {
    return false;
  }
  // disk_meta_change_time
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disk_meta_change_time), &(rhs->disk_meta_change_time)))
  {
    return false;
  }
  // disk_meta_user_rights
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disk_meta_user_rights), &(rhs->disk_meta_user_rights)))
  {
    return false;
  }
  // reboot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reboot), &(rhs->reboot)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_Result__copy(
  const protocol__action__OverTheAir_Result * input,
  protocol__action__OverTheAir_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->result_msg), &(output->result_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__copy(
      &(input->operate), &(output->operate)))
  {
    return false;
  }
  // sn
  if (!rosidl_runtime_c__String__copy(
      &(input->sn), &(output->sn)))
  {
    return false;
  }
  // not_unlocked
  if (!rosidl_runtime_c__String__copy(
      &(input->not_unlocked), &(output->not_unlocked)))
  {
    return false;
  }
  // version_nx
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx), &(output->version_nx)))
  {
    return false;
  }
  // version_nx_mini_led
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_mini_led), &(output->version_nx_mini_led)))
  {
    return false;
  }
  // version_nx_head_tof
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_head_tof), &(output->version_nx_head_tof)))
  {
    return false;
  }
  // version_nx_rear_tof
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_rear_tof), &(output->version_nx_rear_tof)))
  {
    return false;
  }
  // version_nx_head_uwb
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_head_uwb), &(output->version_nx_head_uwb)))
  {
    return false;
  }
  // version_nx_rear_uwb
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_rear_uwb), &(output->version_nx_rear_uwb)))
  {
    return false;
  }
  // version_nx_imu
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_imu), &(output->version_nx_imu)))
  {
    return false;
  }
  // version_nx_power
  if (!rosidl_runtime_c__String__copy(
      &(input->version_nx_power), &(output->version_nx_power)))
  {
    return false;
  }
  // version_r329
  if (!rosidl_runtime_c__String__copy(
      &(input->version_r329), &(output->version_r329)))
  {
    return false;
  }
  // version_mr813
  if (!rosidl_runtime_c__String__copy(
      &(input->version_mr813), &(output->version_mr813)))
  {
    return false;
  }
  // version_mr813_spie1
  if (!rosidl_runtime_c__String__copy(
      &(input->version_mr813_spie1), &(output->version_mr813_spie1)))
  {
    return false;
  }
  // version_mr813_spie2
  if (!rosidl_runtime_c__String__copy(
      &(input->version_mr813_spie2), &(output->version_mr813_spie2)))
  {
    return false;
  }
  // version_motors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->version_motors), &(output->version_motors)))
  {
    return false;
  }
  // disk_name
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_name), &(output->disk_name)))
  {
    return false;
  }
  // disk_filesystem
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_filesystem), &(output->disk_filesystem)))
  {
    return false;
  }
  // disk_size
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_size), &(output->disk_size)))
  {
    return false;
  }
  // disk_used
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_used), &(output->disk_used)))
  {
    return false;
  }
  // disk_avail
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_avail), &(output->disk_avail)))
  {
    return false;
  }
  // disk_scale
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_scale), &(output->disk_scale)))
  {
    return false;
  }
  // disk_mounted
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_mounted), &(output->disk_mounted)))
  {
    return false;
  }
  // disk_meta_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disk_meta_name), &(output->disk_meta_name)))
  {
    return false;
  }
  // disk_meta_size
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disk_meta_size), &(output->disk_meta_size)))
  {
    return false;
  }
  // disk_meta_change_time
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disk_meta_change_time), &(output->disk_meta_change_time)))
  {
    return false;
  }
  // disk_meta_user_rights
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disk_meta_user_rights), &(output->disk_meta_user_rights)))
  {
    return false;
  }
  // reboot
  if (!rosidl_runtime_c__String__copy(
      &(input->reboot), &(output->reboot)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // code
  output->code = input->code;
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_Result *
protocol__action__OverTheAir_Result__create()
{
  protocol__action__OverTheAir_Result * msg = (protocol__action__OverTheAir_Result *)malloc(sizeof(protocol__action__OverTheAir_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_Result));
  bool success = protocol__action__OverTheAir_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_Result__destroy(protocol__action__OverTheAir_Result * msg)
{
  if (msg) {
    protocol__action__OverTheAir_Result__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_Result__Sequence__init(protocol__action__OverTheAir_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_Result * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_Result *)calloc(size, sizeof(protocol__action__OverTheAir_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_Result__fini(&data[i - 1]);
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
protocol__action__OverTheAir_Result__Sequence__fini(protocol__action__OverTheAir_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_Result__fini(&array->data[i]);
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

protocol__action__OverTheAir_Result__Sequence *
protocol__action__OverTheAir_Result__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_Result__Sequence * array = (protocol__action__OverTheAir_Result__Sequence *)malloc(sizeof(protocol__action__OverTheAir_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_Result__Sequence__destroy(protocol__action__OverTheAir_Result__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_Result__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_Result__Sequence__are_equal(const protocol__action__OverTheAir_Result__Sequence * lhs, const protocol__action__OverTheAir_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_Result__Sequence__copy(
  const protocol__action__OverTheAir_Result__Sequence * input,
  protocol__action__OverTheAir_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_Result);
    protocol__action__OverTheAir_Result * data =
      (protocol__action__OverTheAir_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_Result__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_msg`
// Member `id`
// Member `type`
// Member `operate`
// Member `now_version`
// Member `ota_version`
// Member `stage`
// Member `target`
// Member `target_stage`
// Member `file`
// Member `size`
// Member `schedule`
// Member `time_remaining`
// Member `progress`
// Member `speed`
// Member `describe`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
protocol__action__OverTheAir_Feedback__init(protocol__action__OverTheAir_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__init(&msg->feedback_msg)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__init(&msg->operate)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // now_version
  if (!rosidl_runtime_c__String__init(&msg->now_version)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // ota_version
  if (!rosidl_runtime_c__String__init(&msg->ota_version)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__init(&msg->stage)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__init(&msg->target)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // target_stage
  if (!rosidl_runtime_c__String__init(&msg->target_stage)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__init(&msg->file)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__init(&msg->size)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // schedule
  if (!rosidl_runtime_c__String__init(&msg->schedule)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__String__init(&msg->time_remaining)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__init(&msg->progress)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // speed
  if (!rosidl_runtime_c__String__init(&msg->speed)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__init(&msg->describe)) {
    protocol__action__OverTheAir_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_Feedback__fini(protocol__action__OverTheAir_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_msg
  rosidl_runtime_c__String__fini(&msg->feedback_msg);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // operate
  rosidl_runtime_c__String__fini(&msg->operate);
  // now_version
  rosidl_runtime_c__String__fini(&msg->now_version);
  // ota_version
  rosidl_runtime_c__String__fini(&msg->ota_version);
  // stage
  rosidl_runtime_c__String__fini(&msg->stage);
  // target
  rosidl_runtime_c__String__fini(&msg->target);
  // target_stage
  rosidl_runtime_c__String__fini(&msg->target_stage);
  // file
  rosidl_runtime_c__String__fini(&msg->file);
  // size
  rosidl_runtime_c__String__fini(&msg->size);
  // schedule
  rosidl_runtime_c__String__fini(&msg->schedule);
  // time_remaining
  rosidl_runtime_c__String__fini(&msg->time_remaining);
  // progress
  rosidl_runtime_c__String__fini(&msg->progress);
  // speed
  rosidl_runtime_c__String__fini(&msg->speed);
  // describe
  rosidl_runtime_c__String__fini(&msg->describe);
}

bool
protocol__action__OverTheAir_Feedback__are_equal(const protocol__action__OverTheAir_Feedback * lhs, const protocol__action__OverTheAir_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_msg), &(rhs->feedback_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operate), &(rhs->operate)))
  {
    return false;
  }
  // now_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->now_version), &(rhs->now_version)))
  {
    return false;
  }
  // ota_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ota_version), &(rhs->ota_version)))
  {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stage), &(rhs->stage)))
  {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // target_stage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_stage), &(rhs->target_stage)))
  {
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file), &(rhs->file)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // schedule
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->schedule), &(rhs->schedule)))
  {
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time_remaining), &(rhs->time_remaining)))
  {
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->progress), &(rhs->progress)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->describe), &(rhs->describe)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_Feedback__copy(
  const protocol__action__OverTheAir_Feedback * input,
  protocol__action__OverTheAir_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_msg), &(output->feedback_msg)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__copy(
      &(input->operate), &(output->operate)))
  {
    return false;
  }
  // now_version
  if (!rosidl_runtime_c__String__copy(
      &(input->now_version), &(output->now_version)))
  {
    return false;
  }
  // ota_version
  if (!rosidl_runtime_c__String__copy(
      &(input->ota_version), &(output->ota_version)))
  {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__copy(
      &(input->stage), &(output->stage)))
  {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // target_stage
  if (!rosidl_runtime_c__String__copy(
      &(input->target_stage), &(output->target_stage)))
  {
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__copy(
      &(input->file), &(output->file)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // schedule
  if (!rosidl_runtime_c__String__copy(
      &(input->schedule), &(output->schedule)))
  {
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__String__copy(
      &(input->time_remaining), &(output->time_remaining)))
  {
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__copy(
      &(input->progress), &(output->progress)))
  {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__String__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__copy(
      &(input->describe), &(output->describe)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_Feedback *
protocol__action__OverTheAir_Feedback__create()
{
  protocol__action__OverTheAir_Feedback * msg = (protocol__action__OverTheAir_Feedback *)malloc(sizeof(protocol__action__OverTheAir_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_Feedback));
  bool success = protocol__action__OverTheAir_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_Feedback__destroy(protocol__action__OverTheAir_Feedback * msg)
{
  if (msg) {
    protocol__action__OverTheAir_Feedback__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_Feedback__Sequence__init(protocol__action__OverTheAir_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_Feedback * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_Feedback *)calloc(size, sizeof(protocol__action__OverTheAir_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_Feedback__fini(&data[i - 1]);
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
protocol__action__OverTheAir_Feedback__Sequence__fini(protocol__action__OverTheAir_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_Feedback__fini(&array->data[i]);
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

protocol__action__OverTheAir_Feedback__Sequence *
protocol__action__OverTheAir_Feedback__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_Feedback__Sequence * array = (protocol__action__OverTheAir_Feedback__Sequence *)malloc(sizeof(protocol__action__OverTheAir_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_Feedback__Sequence__destroy(protocol__action__OverTheAir_Feedback__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_Feedback__Sequence__are_equal(const protocol__action__OverTheAir_Feedback__Sequence * lhs, const protocol__action__OverTheAir_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_Feedback__Sequence__copy(
  const protocol__action__OverTheAir_Feedback__Sequence * input,
  protocol__action__OverTheAir_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_Feedback);
    protocol__action__OverTheAir_Feedback * data =
      (protocol__action__OverTheAir_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_Feedback__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"

bool
protocol__action__OverTheAir_SendGoal_Request__init(protocol__action__OverTheAir_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__OverTheAir_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!protocol__action__OverTheAir_Goal__init(&msg->goal)) {
    protocol__action__OverTheAir_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_SendGoal_Request__fini(protocol__action__OverTheAir_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  protocol__action__OverTheAir_Goal__fini(&msg->goal);
}

bool
protocol__action__OverTheAir_SendGoal_Request__are_equal(const protocol__action__OverTheAir_SendGoal_Request * lhs, const protocol__action__OverTheAir_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!protocol__action__OverTheAir_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_SendGoal_Request__copy(
  const protocol__action__OverTheAir_SendGoal_Request * input,
  protocol__action__OverTheAir_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!protocol__action__OverTheAir_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_SendGoal_Request *
protocol__action__OverTheAir_SendGoal_Request__create()
{
  protocol__action__OverTheAir_SendGoal_Request * msg = (protocol__action__OverTheAir_SendGoal_Request *)malloc(sizeof(protocol__action__OverTheAir_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_SendGoal_Request));
  bool success = protocol__action__OverTheAir_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_SendGoal_Request__destroy(protocol__action__OverTheAir_SendGoal_Request * msg)
{
  if (msg) {
    protocol__action__OverTheAir_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_SendGoal_Request__Sequence__init(protocol__action__OverTheAir_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_SendGoal_Request * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_SendGoal_Request *)calloc(size, sizeof(protocol__action__OverTheAir_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_SendGoal_Request__fini(&data[i - 1]);
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
protocol__action__OverTheAir_SendGoal_Request__Sequence__fini(protocol__action__OverTheAir_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_SendGoal_Request__fini(&array->data[i]);
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

protocol__action__OverTheAir_SendGoal_Request__Sequence *
protocol__action__OverTheAir_SendGoal_Request__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_SendGoal_Request__Sequence * array = (protocol__action__OverTheAir_SendGoal_Request__Sequence *)malloc(sizeof(protocol__action__OverTheAir_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_SendGoal_Request__Sequence__destroy(protocol__action__OverTheAir_SendGoal_Request__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_SendGoal_Request__Sequence__are_equal(const protocol__action__OverTheAir_SendGoal_Request__Sequence * lhs, const protocol__action__OverTheAir_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_SendGoal_Request__Sequence__copy(
  const protocol__action__OverTheAir_SendGoal_Request__Sequence * input,
  protocol__action__OverTheAir_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_SendGoal_Request);
    protocol__action__OverTheAir_SendGoal_Request * data =
      (protocol__action__OverTheAir_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_SendGoal_Request__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
protocol__action__OverTheAir_SendGoal_Response__init(protocol__action__OverTheAir_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    protocol__action__OverTheAir_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_SendGoal_Response__fini(protocol__action__OverTheAir_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
protocol__action__OverTheAir_SendGoal_Response__are_equal(const protocol__action__OverTheAir_SendGoal_Response * lhs, const protocol__action__OverTheAir_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_SendGoal_Response__copy(
  const protocol__action__OverTheAir_SendGoal_Response * input,
  protocol__action__OverTheAir_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_SendGoal_Response *
protocol__action__OverTheAir_SendGoal_Response__create()
{
  protocol__action__OverTheAir_SendGoal_Response * msg = (protocol__action__OverTheAir_SendGoal_Response *)malloc(sizeof(protocol__action__OverTheAir_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_SendGoal_Response));
  bool success = protocol__action__OverTheAir_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_SendGoal_Response__destroy(protocol__action__OverTheAir_SendGoal_Response * msg)
{
  if (msg) {
    protocol__action__OverTheAir_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_SendGoal_Response__Sequence__init(protocol__action__OverTheAir_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_SendGoal_Response * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_SendGoal_Response *)calloc(size, sizeof(protocol__action__OverTheAir_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_SendGoal_Response__fini(&data[i - 1]);
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
protocol__action__OverTheAir_SendGoal_Response__Sequence__fini(protocol__action__OverTheAir_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_SendGoal_Response__fini(&array->data[i]);
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

protocol__action__OverTheAir_SendGoal_Response__Sequence *
protocol__action__OverTheAir_SendGoal_Response__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_SendGoal_Response__Sequence * array = (protocol__action__OverTheAir_SendGoal_Response__Sequence *)malloc(sizeof(protocol__action__OverTheAir_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_SendGoal_Response__Sequence__destroy(protocol__action__OverTheAir_SendGoal_Response__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_SendGoal_Response__Sequence__are_equal(const protocol__action__OverTheAir_SendGoal_Response__Sequence * lhs, const protocol__action__OverTheAir_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_SendGoal_Response__Sequence__copy(
  const protocol__action__OverTheAir_SendGoal_Response__Sequence * input,
  protocol__action__OverTheAir_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_SendGoal_Response);
    protocol__action__OverTheAir_SendGoal_Response * data =
      (protocol__action__OverTheAir_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_SendGoal_Response__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
protocol__action__OverTheAir_GetResult_Request__init(protocol__action__OverTheAir_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__OverTheAir_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_GetResult_Request__fini(protocol__action__OverTheAir_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
protocol__action__OverTheAir_GetResult_Request__are_equal(const protocol__action__OverTheAir_GetResult_Request * lhs, const protocol__action__OverTheAir_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_GetResult_Request__copy(
  const protocol__action__OverTheAir_GetResult_Request * input,
  protocol__action__OverTheAir_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_GetResult_Request *
protocol__action__OverTheAir_GetResult_Request__create()
{
  protocol__action__OverTheAir_GetResult_Request * msg = (protocol__action__OverTheAir_GetResult_Request *)malloc(sizeof(protocol__action__OverTheAir_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_GetResult_Request));
  bool success = protocol__action__OverTheAir_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_GetResult_Request__destroy(protocol__action__OverTheAir_GetResult_Request * msg)
{
  if (msg) {
    protocol__action__OverTheAir_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_GetResult_Request__Sequence__init(protocol__action__OverTheAir_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_GetResult_Request * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_GetResult_Request *)calloc(size, sizeof(protocol__action__OverTheAir_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_GetResult_Request__fini(&data[i - 1]);
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
protocol__action__OverTheAir_GetResult_Request__Sequence__fini(protocol__action__OverTheAir_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_GetResult_Request__fini(&array->data[i]);
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

protocol__action__OverTheAir_GetResult_Request__Sequence *
protocol__action__OverTheAir_GetResult_Request__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_GetResult_Request__Sequence * array = (protocol__action__OverTheAir_GetResult_Request__Sequence *)malloc(sizeof(protocol__action__OverTheAir_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_GetResult_Request__Sequence__destroy(protocol__action__OverTheAir_GetResult_Request__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_GetResult_Request__Sequence__are_equal(const protocol__action__OverTheAir_GetResult_Request__Sequence * lhs, const protocol__action__OverTheAir_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_GetResult_Request__Sequence__copy(
  const protocol__action__OverTheAir_GetResult_Request__Sequence * input,
  protocol__action__OverTheAir_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_GetResult_Request);
    protocol__action__OverTheAir_GetResult_Request * data =
      (protocol__action__OverTheAir_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_GetResult_Request__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"

bool
protocol__action__OverTheAir_GetResult_Response__init(protocol__action__OverTheAir_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!protocol__action__OverTheAir_Result__init(&msg->result)) {
    protocol__action__OverTheAir_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_GetResult_Response__fini(protocol__action__OverTheAir_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  protocol__action__OverTheAir_Result__fini(&msg->result);
}

bool
protocol__action__OverTheAir_GetResult_Response__are_equal(const protocol__action__OverTheAir_GetResult_Response * lhs, const protocol__action__OverTheAir_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!protocol__action__OverTheAir_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_GetResult_Response__copy(
  const protocol__action__OverTheAir_GetResult_Response * input,
  protocol__action__OverTheAir_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!protocol__action__OverTheAir_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_GetResult_Response *
protocol__action__OverTheAir_GetResult_Response__create()
{
  protocol__action__OverTheAir_GetResult_Response * msg = (protocol__action__OverTheAir_GetResult_Response *)malloc(sizeof(protocol__action__OverTheAir_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_GetResult_Response));
  bool success = protocol__action__OverTheAir_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_GetResult_Response__destroy(protocol__action__OverTheAir_GetResult_Response * msg)
{
  if (msg) {
    protocol__action__OverTheAir_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_GetResult_Response__Sequence__init(protocol__action__OverTheAir_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_GetResult_Response * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_GetResult_Response *)calloc(size, sizeof(protocol__action__OverTheAir_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_GetResult_Response__fini(&data[i - 1]);
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
protocol__action__OverTheAir_GetResult_Response__Sequence__fini(protocol__action__OverTheAir_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_GetResult_Response__fini(&array->data[i]);
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

protocol__action__OverTheAir_GetResult_Response__Sequence *
protocol__action__OverTheAir_GetResult_Response__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_GetResult_Response__Sequence * array = (protocol__action__OverTheAir_GetResult_Response__Sequence *)malloc(sizeof(protocol__action__OverTheAir_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_GetResult_Response__Sequence__destroy(protocol__action__OverTheAir_GetResult_Response__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_GetResult_Response__Sequence__are_equal(const protocol__action__OverTheAir_GetResult_Response__Sequence * lhs, const protocol__action__OverTheAir_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_GetResult_Response__Sequence__copy(
  const protocol__action__OverTheAir_GetResult_Response__Sequence * input,
  protocol__action__OverTheAir_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_GetResult_Response);
    protocol__action__OverTheAir_GetResult_Response * data =
      (protocol__action__OverTheAir_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_GetResult_Response__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/over_the_air__functions.h"

bool
protocol__action__OverTheAir_FeedbackMessage__init(protocol__action__OverTheAir_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__OverTheAir_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!protocol__action__OverTheAir_Feedback__init(&msg->feedback)) {
    protocol__action__OverTheAir_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__OverTheAir_FeedbackMessage__fini(protocol__action__OverTheAir_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  protocol__action__OverTheAir_Feedback__fini(&msg->feedback);
}

bool
protocol__action__OverTheAir_FeedbackMessage__are_equal(const protocol__action__OverTheAir_FeedbackMessage * lhs, const protocol__action__OverTheAir_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!protocol__action__OverTheAir_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__OverTheAir_FeedbackMessage__copy(
  const protocol__action__OverTheAir_FeedbackMessage * input,
  protocol__action__OverTheAir_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!protocol__action__OverTheAir_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

protocol__action__OverTheAir_FeedbackMessage *
protocol__action__OverTheAir_FeedbackMessage__create()
{
  protocol__action__OverTheAir_FeedbackMessage * msg = (protocol__action__OverTheAir_FeedbackMessage *)malloc(sizeof(protocol__action__OverTheAir_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__OverTheAir_FeedbackMessage));
  bool success = protocol__action__OverTheAir_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__OverTheAir_FeedbackMessage__destroy(protocol__action__OverTheAir_FeedbackMessage * msg)
{
  if (msg) {
    protocol__action__OverTheAir_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
protocol__action__OverTheAir_FeedbackMessage__Sequence__init(protocol__action__OverTheAir_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__OverTheAir_FeedbackMessage * data = NULL;
  if (size) {
    data = (protocol__action__OverTheAir_FeedbackMessage *)calloc(size, sizeof(protocol__action__OverTheAir_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__OverTheAir_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__OverTheAir_FeedbackMessage__fini(&data[i - 1]);
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
protocol__action__OverTheAir_FeedbackMessage__Sequence__fini(protocol__action__OverTheAir_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__OverTheAir_FeedbackMessage__fini(&array->data[i]);
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

protocol__action__OverTheAir_FeedbackMessage__Sequence *
protocol__action__OverTheAir_FeedbackMessage__Sequence__create(size_t size)
{
  protocol__action__OverTheAir_FeedbackMessage__Sequence * array = (protocol__action__OverTheAir_FeedbackMessage__Sequence *)malloc(sizeof(protocol__action__OverTheAir_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__OverTheAir_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__OverTheAir_FeedbackMessage__Sequence__destroy(protocol__action__OverTheAir_FeedbackMessage__Sequence * array)
{
  if (array) {
    protocol__action__OverTheAir_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__OverTheAir_FeedbackMessage__Sequence__are_equal(const protocol__action__OverTheAir_FeedbackMessage__Sequence * lhs, const protocol__action__OverTheAir_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__OverTheAir_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__OverTheAir_FeedbackMessage__Sequence__copy(
  const protocol__action__OverTheAir_FeedbackMessage__Sequence * input,
  protocol__action__OverTheAir_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__OverTheAir_FeedbackMessage);
    protocol__action__OverTheAir_FeedbackMessage * data =
      (protocol__action__OverTheAir_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__OverTheAir_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__OverTheAir_FeedbackMessage__fini(&data[i]);
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
    if (!protocol__action__OverTheAir_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
