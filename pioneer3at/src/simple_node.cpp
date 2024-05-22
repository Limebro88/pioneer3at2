#include "rclcpp/rclcpp.hpp"

class SimpleNode : public rclcpp::Node
{
public:
    SimpleNode() : Node("simple_node")
    {
        RCLCPP_INFO(this->get_logger(), "SimpleNode has been started.");
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SimpleNode>());
    rclcpp::shutdown();
    return 0;
}
