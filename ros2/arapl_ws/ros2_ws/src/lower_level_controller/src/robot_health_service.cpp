#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int32.hpp"

class RobotHealthService : public rclcpp::Node
{
public:
    RobotHealthService() : Node("robot_health_service")
    {
        // Create service to set robot health status
        health_service_ = this->create_service<std_srvs::srv::Trigger>(
            "set_robot_healthy",
            std::bind(&RobotHealthService::setRobotHealthy, this, 
                     std::placeholders::_1, std::placeholders::_2));
        
        // Create service to set robot ready for missions
        ready_service_ = this->create_service<std_srvs::srv::Trigger>(
            "set_robot_ready",
            std::bind(&RobotHealthService::setRobotReady, this,
                     std::placeholders::_1, std::placeholders::_2));
        
        // Create publisher for robot status
        status_pub_ = this->create_publisher<std_msgs::msg::Bool>("robot_health_status", 10);
        
        // Create publisher for mission readiness
        mission_ready_pub_ = this->create_publisher<std_msgs::msg::Bool>("mission_ready_status", 10);
        
        // Initialize robot as healthy and ready
        setRobotHealthStatus(true);
        setMissionReadyStatus(true);
        
        RCLCPP_INFO(this->get_logger(), "Robot Health Service initialized - Robot is HEALTHY and READY");
    }

private:
    void setRobotHealthy(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                        std::shared_ptr<std_srvs::srv::Trigger::Response> response)
    {
        (void)request; // Suppress unused parameter warning
        
        setRobotHealthStatus(true);
        response->success = true;
        response->message = "Robot health status set to HEALTHY - White LED should be on";
        
        RCLCPP_INFO(this->get_logger(), "Robot health status set to HEALTHY");
    }
    
    void setRobotReady(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                      std::shared_ptr<std_srvs::srv::Trigger::Response> response)
    {
        (void)request; // Suppress unused parameter warning
        
        setMissionReadyStatus(true);
        response->success = true;
        response->message = "Robot mission readiness set to READY";
        
        RCLCPP_INFO(this->get_logger(), "Robot mission readiness set to READY");
    }
    
    void setRobotHealthStatus(bool healthy)
    {
        std_msgs::msg::Bool status_msg;
        status_msg.data = healthy;
        status_pub_->publish(status_msg);
        
        if (healthy) {
            RCLCPP_INFO(this->get_logger(), "🤖 Robot Health Status: HEALTHY (White LED ON)");
        } else {
            RCLCPP_WARN(this->get_logger(), "⚠️ Robot Health Status: UNHEALTHY (White LED OFF)");
        }
    }
    
    void setMissionReadyStatus(bool ready)
    {
        std_msgs::msg::Bool ready_msg;
        ready_msg.data = ready;
        mission_ready_pub_->publish(ready_msg);
        
        if (ready) {
            RCLCPP_INFO(this->get_logger(), "✅ Mission Ready Status: READY for operations");
        } else {
            RCLCPP_WARN(this->get_logger(), "❌ Mission Ready Status: NOT READY");
        }
    }
    
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr health_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr ready_service_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr status_pub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr mission_ready_pub_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotHealthService>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}