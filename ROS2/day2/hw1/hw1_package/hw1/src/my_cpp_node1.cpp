#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <memory>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

#include "my_node.hpp"

MyNode1::MyNode1() : Node("mynode1")
{
    publisher_ = this->create_publisher<std_msgs::msg::String>("topicname", 10);
    input_thread_ = std::thread(&MyNode1::input_thread_func, this);
    input_thread_.detach(); 
}

MyNode1::~MyNode1()
{
    
    if (input_thread_.joinable()) {
        input_thread_.join();
    }
}

void MyNode1::input_thread_func()
{
    while (rclcpp::ok()) {
        std::cout << "전송할 문장을 입력하세요: " << std::endl;
        std::getline(std::cin, sendstring);

        if (!sendstring.empty()) {
            queue_v.push_back(sendstring);

            auto msg = std_msgs::msg::String();
            msg.data = sendstring;
            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published message: '%s'", msg.data.c_str());
        }
    }
}

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode1>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}









