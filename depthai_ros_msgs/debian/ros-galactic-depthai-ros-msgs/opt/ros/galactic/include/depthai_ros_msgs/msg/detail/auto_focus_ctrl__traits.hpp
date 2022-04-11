// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_

#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const depthai_ros_msgs::msg::AutoFocusCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_focus_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_focus_mode: ";
    value_to_yaml(msg.auto_focus_mode, out);
    out << "\n";
  }

  // member: trigger_auto_focus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_auto_focus: ";
    value_to_yaml(msg.trigger_auto_focus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const depthai_ros_msgs::msg::AutoFocusCtrl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::AutoFocusCtrl>()
{
  return "depthai_ros_msgs::msg::AutoFocusCtrl";
}

template<>
inline const char * name<depthai_ros_msgs::msg::AutoFocusCtrl>()
{
  return "depthai_ros_msgs/msg/AutoFocusCtrl";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_
