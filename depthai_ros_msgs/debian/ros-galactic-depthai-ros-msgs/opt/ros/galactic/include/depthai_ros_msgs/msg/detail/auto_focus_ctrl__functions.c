// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
depthai_ros_msgs__msg__AutoFocusCtrl__init(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // auto_focus_mode
  // trigger_auto_focus
  return true;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__fini(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  if (!msg) {
    return;
  }
  // auto_focus_mode
  // trigger_auto_focus
}

depthai_ros_msgs__msg__AutoFocusCtrl *
depthai_ros_msgs__msg__AutoFocusCtrl__create()
{
  depthai_ros_msgs__msg__AutoFocusCtrl * msg = (depthai_ros_msgs__msg__AutoFocusCtrl *)malloc(sizeof(depthai_ros_msgs__msg__AutoFocusCtrl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__AutoFocusCtrl));
  bool success = depthai_ros_msgs__msg__AutoFocusCtrl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__destroy(depthai_ros_msgs__msg__AutoFocusCtrl * msg)
{
  if (msg) {
    depthai_ros_msgs__msg__AutoFocusCtrl__fini(msg);
  }
  free(msg);
}


bool
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  depthai_ros_msgs__msg__AutoFocusCtrl * data = NULL;
  if (size) {
    data = (depthai_ros_msgs__msg__AutoFocusCtrl *)calloc(size, sizeof(depthai_ros_msgs__msg__AutoFocusCtrl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__AutoFocusCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__AutoFocusCtrl__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      depthai_ros_msgs__msg__AutoFocusCtrl__fini(&array->data[i]);
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

depthai_ros_msgs__msg__AutoFocusCtrl__Sequence *
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__create(size_t size)
{
  depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array = (depthai_ros_msgs__msg__AutoFocusCtrl__Sequence *)malloc(sizeof(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__destroy(depthai_ros_msgs__msg__AutoFocusCtrl__Sequence * array)
{
  if (array) {
    depthai_ros_msgs__msg__AutoFocusCtrl__Sequence__fini(array);
  }
  free(array);
}
