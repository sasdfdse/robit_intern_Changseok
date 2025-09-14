#include "../include/ros2_create_qt_pkg/qnode.hpp"

QNode::QNode(const std::string& name) : Node(name)
{
  publisher_ = this->create_publisher<std_msgs::msg::String>("topicname", 10);
}

void QNode::publishString(const std::string &text)
{
  auto message = std_msgs::msg::String();
  message.data = text;
  publisher_->publish(message);
}



