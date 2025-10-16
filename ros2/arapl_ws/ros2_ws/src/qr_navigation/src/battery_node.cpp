#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/float32.hpp>
#include <chrono>
#include <memory>

class Battery : public rclcpp::Node
{
private:
  double battery_percentage_;
  bool charging_;
  
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr charge_battery_sub_;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr charge_pub_;
  rclcpp::TimerBase::SharedPtr timer_;

public:
  Battery() : Node("battery_node")
  {
    battery_percentage_ = 100.0;
    charging_ = false;

    charge_battery_sub_ = this->create_subscription<std_msgs::msg::Int32>(
      "charge_battery", 10,
      std::bind(&Battery::charge_callback, this, std::placeholders::_1));

    charge_pub_ = this->create_publisher<std_msgs::msg::Float32>("battery", 10);

    // Timer to update battery status at 10 Hz
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(100),
      std::bind(&Battery::update_battery, this));

    RCLCPP_INFO(this->get_logger(), "Battery node initialized");
  }

  void charge_callback(const std_msgs::msg::Int32::SharedPtr msg)
  {
    if (msg->data == 0) {
      charging_ = false;
      RCLCPP_INFO(this->get_logger(), "Battery not charging");
    } else if (msg->data == 1) {
      charging_ = true;
      RCLCPP_INFO(this->get_logger(), "Battery charging");
    }
  }

  void increase_charge()
  {
    if (battery_percentage_ < 5.0)
      battery_percentage_ = 10.0;

    if (battery_percentage_ <= 100.0)
      battery_percentage_ += battery_percentage_ / 10000.0;

    auto value = std_msgs::msg::Float32();
    value.data = static_cast<float>(battery_percentage_);
    charge_pub_->publish(value);
  }

  void decrease_charge()
  {
    if (battery_percentage_ >= 0.0)
      battery_percentage_ -= battery_percentage_ / 10000.0;

    auto value = std_msgs::msg::Float32();
    value.data = static_cast<float>(battery_percentage_);
    charge_pub_->publish(value);

    if (battery_percentage_ < 5.0) {
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 5000,
                          "Battery low: %.2f%%", battery_percentage_);
    }
  }

  void update_battery()
  {
    if (charging_) {
      increase_charge();
    } else {
      decrease_charge();
    }
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Battery>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
