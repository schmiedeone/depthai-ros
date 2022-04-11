// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__FUNCTIONS_H_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "depthai_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "depthai_ros_msgs/msg/detail/spatial_detection_array__struct.h"

/// Initialize msg/SpatialDetectionArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * depthai_ros_msgs__msg__SpatialDetectionArray
 * )) before or use
 * depthai_ros_msgs__msg__SpatialDetectionArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__SpatialDetectionArray__init(depthai_ros_msgs__msg__SpatialDetectionArray * msg);

/// Finalize msg/SpatialDetectionArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__SpatialDetectionArray__fini(depthai_ros_msgs__msg__SpatialDetectionArray * msg);

/// Create msg/SpatialDetectionArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__SpatialDetectionArray *
depthai_ros_msgs__msg__SpatialDetectionArray__create();

/// Destroy msg/SpatialDetectionArray message.
/**
 * It calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__SpatialDetectionArray__destroy(depthai_ros_msgs__msg__SpatialDetectionArray * msg);


/// Initialize array of msg/SpatialDetectionArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
bool
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array, size_t size);

/// Finalize array of msg/SpatialDetectionArray messages.
/**
 * It calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array);

/// Create array of msg/SpatialDetectionArray messages.
/**
 * It allocates the memory for the array and calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence *
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__create(size_t size);

/// Destroy array of msg/SpatialDetectionArray messages.
/**
 * It calls
 * depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_depthai_ros_msgs
void
depthai_ros_msgs__msg__SpatialDetectionArray__Sequence__destroy(depthai_ros_msgs__msg__SpatialDetectionArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__FUNCTIONS_H_
