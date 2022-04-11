// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/spatial_detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

bool
depthai_ros_msgs__msg__SpatialDetectionArray__init(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
    return false;
  }
  // detections
  if (!depthai_ros_msgs__msg__SpatialDetection__Sequence__init(&msg->detections, 0)) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__fini(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  depthai_ros_msgs__msg__SpatialDetection__Sequence__fini(&msg->detections);
}

depthai_ros_msgs__msg__SpatialDetectionArray *
depthai_ros_msgs__msg__SpatialDetectionArray__create()
{
  depthai_ros_msgs__msg__SpatialDetectionArray * msg = (depthai_ros_msgs__msg__SpatialDetectionArray *)malloc(sizeof(depthai_ros_msgs__msg__SpatialDetectionArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__SpatialDetectionArray));
  bool success = depthai_ros_msgs__msg__SpatialDetectionArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__destroy(depthai_ros_msgs__msg__SpatialDetectionArray * msg)
{
  if (msg) {
    depthai_ros_msgs__msg__SpatialDetectionArray__fini(msg);
  }
  free(msg);
}


bool
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  depthai_ros_msgs__msg__SpatialDetectionArray * data = NULL;
  if (size) {
    data = (depthai_ros_msgs__msg__SpatialDetectionArray *)calloc(size, sizeof(depthai_ros_msgs__msg__SpatialDetectionArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__SpatialDetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__SpatialDetectionArray__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      depthai_ros_msgs__msg__SpatialDetectionArray__fini(&array->data[i]);
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

depthai_ros_msgs__msg__SpatialDetectionArray__Sequence *
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__create(size_t size)
{
  depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array = (depthai_ros_msgs__msg__SpatialDetectionArray__Sequence *)malloc(sizeof(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__destroy(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array)
{
  if (array) {
    depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini(array);
  }
  free(array);
}
