#include "../include/hw4/qnode.hpp"
#include <QDebug>
#include <QStringList>

QNode::QNode(int argc, char** argv) :
  init_argc(argc),
  init_argv(argv)
{}

QNode::~QNode() {
    if(rclcpp::ok()) {
        rclcpp::shutdown();
    }
    wait();
}

bool QNode::init() {
    rclcpp::init(init_argc, init_argv);
    node_ = std::make_shared<rclcpp::Node>("hw4_node");


    auto joint_state_callback = 
      [this](const sensor_msgs::msg::JointState::SharedPtr msg) -> void
      {
        if (msg->position.size() > 0 && msg->name.size() > 0)
        {
            Q_EMIT jointStateReceived(msg->position, msg->name);
        }
      };

    auto subscription_options = rclcpp::SubscriptionOptions();
    rclcpp::QoS qos(rclcpp::KeepLast(10));

    joint_state_subscriber = node_->create_subscription<sensor_msgs::msg::JointState>(
      "/joint_states", qos, joint_state_callback, subscription_options);


    auto command_callback =
      [this](const std_msgs::msg::String::SharedPtr msg) -> void
      {
        QString q_msg = QString::fromStdString(msg->data);
        QStringList parts = q_msg.split(" ");
        if (parts.length() == 2) {
            QString name = parts[0];
            bool ok;
            int angle = parts[1].toInt(&ok);
            if (ok) {
                Q_EMIT commandReceived(name, angle);
            }
        }
      };

    command_subscriber_ = node_->create_subscription<std_msgs::msg::String>(
      "/gui_command", qos, command_callback, subscription_options);

    this->start();
    return true;
}

void QNode::run() {
    rclcpp::spin(node_);
    Q_EMIT rosShutDown(); // Used to signal the gui for a shutdown (useful to close window)
}
