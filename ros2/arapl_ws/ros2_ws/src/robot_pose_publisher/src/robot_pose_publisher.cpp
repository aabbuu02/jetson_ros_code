/*!
 * \file robot_pose_publisher.cpp
 * \brief Publishes the robot's position in a geometry_msgs/PoseStamped message.
 *
 * Publishes the robot's position based on the TF2 transform between
 * the map frame and base_link frame.
 *
 * \author Russell Toris - rctoris@wpi.edu (Original ROS1 version)
 * \date April 3, 2014
 * Updated for ROS2
 */

#include <memory>
#include <string>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_listener.hpp"
#include "tf2_ros/buffer.hpp"
#include "tf2_ros/static_transform_broadcaster.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

using namespace std::chrono_literals;

/*!
 * \class RobotPosePublisher
 * \brief A ROS2 node that publishes robot pose from TF2 transforms
 */
class RobotPosePublisher : public rclcpp::Node
{
public:
  /*!
   * \brief Constructor - initializes the node and sets up publisher/listener
   */
  RobotPosePublisher() : Node("robot_pose_publisher")
  {
    // Declare parameters with default values
    this->declare_parameter<std::string>("map_frame", "map");
    this->declare_parameter<std::string>("base_frame", "base_link");
    this->declare_parameter<double>("publish_frequency", 10.0);
    this->declare_parameter<bool>("is_stamped", false);

    // Get parameters
    map_frame_ = this->get_parameter("map_frame").as_string();
    base_frame_ = this->get_parameter("base_frame").as_string();
    double publish_frequency = this->get_parameter("publish_frequency").as_double();
    is_stamped_ = this->get_parameter("is_stamped").as_bool();

    // Log parameter values
    RCLCPP_INFO(this->get_logger(), "Parameters:");
    RCLCPP_INFO(this->get_logger(), "  map_frame: %s", map_frame_.c_str());
    RCLCPP_INFO(this->get_logger(), "  base_frame: %s", base_frame_.c_str());
    RCLCPP_INFO(this->get_logger(), "  publish_frequency: %.2f Hz", publish_frequency);
    RCLCPP_INFO(this->get_logger(), "  is_stamped: %s", is_stamped_ ? "true" : "false");

    // Initialize TF2 buffer and listener
    tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    static_broadcaster_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

    // Publish a static transform (odom_frame -> base_footprint) if tree is incomplete
    publish_default_static_tf();

    // Create publisher based on is_stamped parameter
    if (is_stamped_) {
      pose_stamped_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>(
        "robot_pose", 10);
    } else {
      pose_pub_ = this->create_publisher<geometry_msgs::msg::Pose>(
        "robot_pose", 10);
    }

    // Create timer for periodic publishing
    auto timer_duration = std::chrono::duration<double>(1.0 / publish_frequency);
    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::milliseconds>(timer_duration),
      std::bind(&RobotPosePublisher::timerCallback, this));

    RCLCPP_INFO(this->get_logger(), "Robot pose publisher initialized successfully");
  }

private:
  /*!
   * \brief Publishes a static transform between odom_frame and base_footprint if needed
   */
  void publish_default_static_tf()
  {
    geometry_msgs::msg::TransformStamped static_transform;
    static_transform.header.stamp = this->now();
    static_transform.header.frame_id = "odom_frame";
    static_transform.child_frame_id = "base_footprint";

    static_transform.transform.translation.x = 0.0;
    static_transform.transform.translation.y = 0.0;
    static_transform.transform.translation.z = 0.0;

    static_transform.transform.rotation.x = 0.0;
    static_transform.transform.rotation.y = 0.0;
    static_transform.transform.rotation.z = 0.0;
    static_transform.transform.rotation.w = 1.0;

    RCLCPP_INFO(this->get_logger(), "Publishing static transform: odom_frame -> base_footprint");
    static_broadcaster_->sendTransform(static_transform);
  }

  /*!
   * \brief Timer callback to publish robot pose
   */
  void timerCallback()
  {
    geometry_msgs::msg::TransformStamped transform_stamped;

    try {
      // Look up the transform from map to base_link
      transform_stamped = tf_buffer_->lookupTransform(
        map_frame_, base_frame_, tf2::TimePointZero);

      // Construct pose message
      geometry_msgs::msg::PoseStamped pose_stamped;
      pose_stamped.header.stamp = this->now();
      pose_stamped.header.frame_id = map_frame_;

      // Extract position from transform
      pose_stamped.pose.position.x = transform_stamped.transform.translation.x;
      pose_stamped.pose.position.y = transform_stamped.transform.translation.y;
      pose_stamped.pose.position.z = transform_stamped.transform.translation.z;

      // Extract orientation from transform
      pose_stamped.pose.orientation = transform_stamped.transform.rotation;

      // Publish based on is_stamped parameter
      if (is_stamped_) {
        pose_stamped_pub_->publish(pose_stamped);
      } else {
        pose_pub_->publish(pose_stamped.pose);
      }
    }
    catch (const tf2::TransformException & ex) {
      RCLCPP_WARN_THROTTLE(
        this->get_logger(),
        *this->get_clock(),
        5000,
        "Could not transform %s to %s: %s",
        base_frame_.c_str(),
        map_frame_.c_str(),
        ex.what());
    }
  }

  // Member variables
  std::string map_frame_;
  std::string base_frame_;
  bool is_stamped_;

  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_broadcaster_;

  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_stamped_pub_;
  rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr pose_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

/*!
 * \brief Main function - creates and spins the node
 */
int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RobotPosePublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return EXIT_SUCCESS;
}

