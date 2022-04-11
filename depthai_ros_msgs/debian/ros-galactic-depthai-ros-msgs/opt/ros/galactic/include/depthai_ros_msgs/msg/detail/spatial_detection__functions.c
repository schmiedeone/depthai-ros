// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `results`
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `tracking_id`
#include "rosidl_runtime_c/string_functions.h"

bool
depthai_ros_msgs__msg__SpatialDetection__init(depthai_ros_msgs__msg__SpatialDetection * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!vision_msgs__msg__ObjectHypothesis__Sequence__init(&msg->results, 0)) {
    depthai_ros_msgs__msg__SpatialDetection__fini(msg);
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox2D__init(&msg->bbox)) {
    depthai_ros_msgs__msg__SpatialDetection__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    depthai_ros_msgs__msg__SpatialDetection__fini(msg);
    return false;
  }
  // is_tracking
  // tracking_id
  if (!rosidl_runtime_c__String__init(&msg->tracking_id)) {
    depthai_ros_msgs__msg__SpatialDetection__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__msg__SpatialDetection__fini(depthai_ros_msgs__msg__SpatialDetection * msg)
{
  if (!msg) {
    return;
  }
  // results
  vision_msgs__msg__ObjectHypothesis__Sequence__fini(&msg->results);
  // bbox
  vision_msgs__msg__BoundingBox2D__fini(&msg->bbox);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // is_tracking
  // tracking_id
  rosidl_runtime_c__String__fini(&msg->tracking_id);
}

depthai_ros_msgs__msg__SpatialDetection *
depthai_ros_msgs__msg__SpatialDetection__create()
{
  depthai_ros_msgs__msg__SpatialDetection * msg = (depthai_ros_msgs__msg__SpatialDetection *)malloc(sizeof(depthai_ros_msgs__msg__SpatialDetection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__msg__SpatialDetection));
  bool success = depthai_ros_msgs__msg__SpatialDetection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__msg__SpatialDetection__destroy(depthai_ros_msgs__msg__SpatialDetection * msg)
{
  if (msg) {
    depthai_ros_msgs__msg__SpatialDetection__fini(msg);
  }
  free(msg);
}


bool
depthai_ros_msgs__msg__SpatialDetection__Sequence__init(depthai_ros_msgs__msg__SpatialDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  depthai_ros_msgs__msg__SpatialDetection * data = NULL;
  if (size) {
    data = (depthai_ros_msgs__msg__SpatialDetection *)calloc(size, sizeof(depthai_ros_msgs__msg__SpatialDetection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__msg__SpatialDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__msg__SpatialDetection__fini(&data[i - 1]);
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
depthai_ros_msgs__msg__SpatialDetection__Sequence__fini(depthai_ros_msgs__msg__SpatialDetection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      depthai_ros_msgs__msg__SpatialDetection__fini(&array->data[i]);
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

depthai_ros_msgs__msg__SpatialDetection__Sequence *
depthai_ros_msgs__msg__SpatialDetection__Sequence__create(size_t size)
{
  depthai_ros_msgs__msg__SpatialDetection__Sequence * array = (depthai_ros_msgs__msg__SpatialDetection__Sequence *)malloc(sizeof(depthai_ros_msgs__msg__SpatialDetection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__msg__SpatialDetection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__msg__SpatialDetection__Sequence__destroy(depthai_ros_msgs__msg__SpatialDetection__Sequence * array)
{
  if (array) {
    depthai_ros_msgs__msg__SpatialDetection__Sequence__fini(array);
  }
  free(array);
}
