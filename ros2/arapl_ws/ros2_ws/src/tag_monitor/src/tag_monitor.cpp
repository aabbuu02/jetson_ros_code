#include "tag_monitor/tag_monitor.hpp"

TagMonitor::TagMonitor()
    : Node("tag_monitor"),
      m_enableTagDetAsInit(false),
      m_curTagId(0),
      m_prevTagId(0),
      m_maxDetectionDistance(1.0),
      m_isRobotInitialized(false),
      m_curDistTravelled(0.0)
{
    // Get parameters
    getParameters();

    // Initialize messages
    m_eStopMsg.data = false;
    m_initRobotMsg.data = false;

    // Initialize publishers and subscribers
    initializePublishers();
    initializeSubscribers();

    RCLCPP_INFO(this->get_logger(), "Tag Monitor node initialized successfully");
}

void TagMonitor::getParameters()
{
    // Declare and get parameters with default values
    this->declare_parameter<std::string>("odom_topic", "odom");
    this->declare_parameter<std::string>("initialize_robot_topic", "robot_initialized");
    this->declare_parameter<std::string>("deinitialize_robot_topic", "robot_initialized");
    this->declare_parameter<std::string>("tag_detection_topic", "barcode/local");
    this->declare_parameter<std::string>("emergency_stop_topic", "e_stop/tag_detection");
    this->declare_parameter<bool>("initialize_on_tag_detection", false);
    this->declare_parameter<double>("max_detection_distance", 1.2);

    this->get_parameter("odom_topic", m_odomTopic);
    this->get_parameter("initialize_robot_topic", m_initRobotTopic);
    this->get_parameter("deinitialize_robot_topic", m_deinitRobotTopic);
    this->get_parameter("tag_detection_topic", m_detTagTopic);
    this->get_parameter("emergency_stop_topic", m_eStopTopic);
    this->get_parameter("initialize_on_tag_detection", m_enableTagDetAsInit);
    this->get_parameter("max_detection_distance", m_maxDetectionDistance);

    RCLCPP_INFO(this->get_logger(), "Parameters loaded:");
    RCLCPP_INFO(this->get_logger(), "  Odometry topic: %s", m_odomTopic.c_str());
    RCLCPP_INFO(this->get_logger(), "  Tag detection topic: %s", m_detTagTopic.c_str());
    RCLCPP_INFO(this->get_logger(), "  E-Stop topic: %s", m_eStopTopic.c_str());
    RCLCPP_INFO(this->get_logger(), "  Max detection distance: %.2f m", m_maxDetectionDistance);
}

void TagMonitor::initializePublishers()
{
    // Create publishers with QoS settings
    m_eStopPub = this->create_publisher<std_msgs::msg::Bool>(m_eStopTopic, 10);
    m_initRobotPub = this->create_publisher<std_msgs::msg::Bool>(m_deinitRobotTopic, 10);

    RCLCPP_DEBUG(this->get_logger(), "Publishers initialized");
}

void TagMonitor::initializeSubscribers()
{
    // Create subscribers with QoS settings
    m_odomSub = this->create_subscription<nav_msgs::msg::Odometry>(
        m_odomTopic, 10,
        std::bind(&TagMonitor::odometryCb, this, std::placeholders::_1));

    m_detectedTagSub = this->create_subscription<anscer_msgs::msg::PGVPose>(
        m_detTagTopic, 10,
        std::bind(&TagMonitor::detectedTagCb, this, std::placeholders::_1));

    m_initRobotSub = this->create_subscription<std_msgs::msg::Bool>(
        m_initRobotTopic, 10,
        std::bind(&TagMonitor::initializeRobotCb, this, std::placeholders::_1));

    RCLCPP_DEBUG(this->get_logger(), "Subscribers initialized");
}

void TagMonitor::odometryCb(const nav_msgs::msg::Odometry::SharedPtr odomMsg)
{
    // Convert current position to tf2::Vector3
    tf2::fromMsg(odomMsg->pose.pose.position, m_curPoseVec);

    // Always publish current e-stop state
    m_eStopPub->publish(m_eStopMsg);

    // If robot not initialized, reset tracking variables
    if (!m_isRobotInitialized)
    {
        m_prevPoseVec = m_curPoseVec;
        m_curDistTravelled = 0.0;
        return;
    }

    // Calculate distance travelled from previous position
    m_curDistTravelled = m_curPoseVec.distance(m_prevPoseVec);

    RCLCPP_DEBUG_THROTTLE(
        this->get_logger(), 
        *this->get_clock(), 
        1000, // Log every 1 second
        "Distance travelled from last detected tag with ID %u: %.3f m", 
        m_prevTagId, 
        m_curDistTravelled);

    // Check if robot exceeded maximum allowed distance
    if (m_curDistTravelled >= m_maxDetectionDistance)
    {
        m_eStopMsg.data = true;
        RCLCPP_FATAL(
            this->get_logger(),
            "Robot has exceeded the maximum allowed travel distance of %.2f m without detecting a tag. "
            "Triggering emergency stop!", 
            m_maxDetectionDistance);
    }
}

void TagMonitor::detectedTagCb(const anscer_msgs::msg::PGVPose::SharedPtr tagMsg)
{
    m_curTagId = tagMsg->id;

    RCLCPP_INFO(this->get_logger(), "Detected tag with ID: %u", m_curTagId);

    // Reset distance tracking
    m_prevPoseVec = m_curPoseVec;
    m_curDistTravelled = 0.0;
    m_prevTagId = m_curTagId;

    // Handle tag detection as initialization if enabled
    if (m_enableTagDetAsInit && !m_isRobotInitialized)
    {
        RCLCPP_INFO(this->get_logger(), "Initializing robot based on tag detection");
        m_isRobotInitialized = true;
        m_initRobotMsg.data = true;
        m_initRobotPub->publish(m_initRobotMsg);
    }
}

void TagMonitor::initializeRobotCb(const std_msgs::msg::Bool::SharedPtr initStateMsg)
{
    bool prevState = m_isRobotInitialized;
    m_isRobotInitialized = initStateMsg->data;

    if (m_isRobotInitialized && !prevState)
    {
        RCLCPP_INFO(this->get_logger(), "Robot initialized - starting tag monitoring");
        m_prevPoseVec = m_curPoseVec;
        m_curDistTravelled = 0.0;
    }
    else if (!m_isRobotInitialized && prevState)
    {
        RCLCPP_INFO(this->get_logger(), "Robot deinitialized - pausing tag monitoring");
    }
}
