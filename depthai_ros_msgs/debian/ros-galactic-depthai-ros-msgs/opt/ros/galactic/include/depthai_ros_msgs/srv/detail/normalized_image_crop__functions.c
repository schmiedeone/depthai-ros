// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice
#include "depthai_ros_msgs/srv/detail/normalized_image_crop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `top_left`
// Member `bottom_right`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__init(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // top_left
  if (!geometry_msgs__msg__Pose2D__init(&msg->top_left)) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(msg);
    return false;
  }
  // bottom_right
  if (!geometry_msgs__msg__Pose2D__init(&msg->bottom_right)) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(msg);
    return false;
  }
  return true;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg)
{
  if (!msg) {
    return;
  }
  // top_left
  geometry_msgs__msg__Pose2D__fini(&msg->top_left);
  // bottom_right
  geometry_msgs__msg__Pose2D__fini(&msg->bottom_right);
}

depthai_ros_msgs__srv__NormalizedImageCrop_Request *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__create()
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg = (depthai_ros_msgs__srv__NormalizedImageCrop_Request *)malloc(sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Request));
  bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Request * msg)
{
  if (msg) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(msg);
  }
  free(msg);
}


bool
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Request * data = NULL;
  if (size) {
    data = (depthai_ros_msgs__srv__NormalizedImageCrop_Request *)calloc(size, sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(&data[i - 1]);
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
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      depthai_ros_msgs__srv__NormalizedImageCrop_Request__fini(&array->data[i]);
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

depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__create(size_t size)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array = (depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence *)malloc(sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence * array)
{
  if (array) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Request__Sequence__fini(array);
  }
  free(array);
}


bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__init(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

depthai_ros_msgs__srv__NormalizedImageCrop_Response *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__create()
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg = (depthai_ros_msgs__srv__NormalizedImageCrop_Response *)malloc(sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Response));
  bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Response * msg)
{
  if (msg) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(msg);
  }
  free(msg);
}


bool
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  depthai_ros_msgs__srv__NormalizedImageCrop_Response * data = NULL;
  if (size) {
    data = (depthai_ros_msgs__srv__NormalizedImageCrop_Response *)calloc(size, sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(&data[i - 1]);
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
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      depthai_ros_msgs__srv__NormalizedImageCrop_Response__fini(&array->data[i]);
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

depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__create(size_t size)
{
  depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array = (depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence *)malloc(sizeof(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__destroy(depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence * array)
{
  if (array) {
    depthai_ros_msgs__srv__NormalizedImageCrop_Response__Sequence__fini(array);
  }
  free(array);
}
