// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__TRAITS_HPP_

#include "depthai_ros_msgs/msg/detail/spatial_detection_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "depthai_ros_msgs/msg/detail/spatial_detection__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const depthai_ros_msgs::msg::SpatialDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const depthai_ros_msgs::msg::SpatialDetectionArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::SpatialDetectionArray>()
{
  return "depthai_ros_msgs::msg::SpatialDetectionArray";
}

template<>
inline const char * name<depthai_ros_msgs::msg::SpatialDetectionArray>()
{
  return "depthai_ros_msgs/msg/SpatialDetectionArray";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::SpatialDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::SpatialDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::msg::SpatialDetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__TRAITS_HPP_
