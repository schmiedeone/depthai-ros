// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_

#include "depthai_ros_msgs/srv/detail/trigger_named__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const depthai_ros_msgs::srv::TriggerNamed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const depthai_ros_msgs::srv::TriggerNamed_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed_Request>()
{
  return "depthai_ros_msgs::srv::TriggerNamed_Request";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed_Request>()
{
  return "depthai_ros_msgs/srv/TriggerNamed_Request";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const depthai_ros_msgs::srv::TriggerNamed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const depthai_ros_msgs::srv::TriggerNamed_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed_Response>()
{
  return "depthai_ros_msgs::srv::TriggerNamed_Response";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed_Response>()
{
  return "depthai_ros_msgs/srv/TriggerNamed_Response";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<depthai_ros_msgs::srv::TriggerNamed>()
{
  return "depthai_ros_msgs::srv::TriggerNamed";
}

template<>
inline const char * name<depthai_ros_msgs::srv::TriggerNamed>()
{
  return "depthai_ros_msgs/srv/TriggerNamed";
}

template<>
struct has_fixed_size<depthai_ros_msgs::srv::TriggerNamed>
  : std::integral_constant<
    bool,
    has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Request>::value &&
    has_fixed_size<depthai_ros_msgs::srv::TriggerNamed_Response>::value
  >
{
};

template<>
struct has_bounded_size<depthai_ros_msgs::srv::TriggerNamed>
  : std::integral_constant<
    bool,
    has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Request>::value &&
    has_bounded_size<depthai_ros_msgs::srv::TriggerNamed_Response>::value
  >
{
};

template<>
struct is_service<depthai_ros_msgs::srv::TriggerNamed>
  : std::true_type
{
};

template<>
struct is_service_request<depthai_ros_msgs::srv::TriggerNamed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<depthai_ros_msgs::srv::TriggerNamed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__TRAITS_HPP_
