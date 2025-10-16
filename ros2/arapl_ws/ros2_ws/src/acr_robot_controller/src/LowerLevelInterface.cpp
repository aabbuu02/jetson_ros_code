#include "LowerLevelInterface.h"
#include <memory>

LowerLevelInterface::LowerLevelInterface(std::shared_ptr<rclcpp::Node> node)
    : node_(node)
{
    initializeParameters();
    
    p_getVariables = new RosClass(node_);
    p_lowerLevelComputation = new LowerLevelComputations(node_);
    p_client = new Client(node_, m_controllerType);
    p_highLevelController = p_client->getHighLevelController();
    
    m_lastTime = m_currentTime = Utilities::millis();
    
    RCLCPP_INFO(node_->get_logger(), "LowerLevelInterface Constructor called");
}

LowerLevelInterface::~LowerLevelInterface()
{
    delete p_getVariables;
    delete p_lowerLevelComputation;
    delete p_client;
}

void LowerLevelInterface::initializeParameters()
{
    // Declare parameters with default values
    node_->declare_parameter("controller_type", 1);
    node_->declare_parameter("publish_tf", true);
    node_->declare_parameter("odom_frame", std::string("odom_frame"));
    node_->declare_parameter("base_frame", std::string("base_footprint"));
    node_->declare_parameter("cmd_topic", std::string("cmd_vel"));
    node_->declare_parameter("odom_topic", std::string("odom"));
    node_->declare_parameter("barcode_global_topic", std::string("barcode/global"));
    node_->declare_parameter("emergency_stop_topic", std::string("e_stop"));
    node_->declare_parameter("battery_topic", std::string("bms_data/battery_state"));
    node_->declare_parameter("debug_cmd_topic", std::string("debug/cmd_vel"));
    node_->declare_parameter("cmd_vel_timeout", 0.5);
    node_->declare_parameter("roboteq_port", std::string("/dev/roboteq"));
    
    // Robot parameters
    node_->declare_parameter("robot.wheel_seperation", 0.90);
    node_->declare_parameter("robot.wheel_radius", 0.101);
    node_->declare_parameter("robot.TPR", 16384);
    node_->declare_parameter("robot.linear_vel_limit", 3.0);
    node_->declare_parameter("robot.angular_vel_limit", 1.0);
    node_->declare_parameter("robot.gearRatio", 9);
    
    // Get parameter values
    m_controllerType = node_->get_parameter("controller_type").as_int();
    m_publishTF = node_->get_parameter("publish_tf").as_bool();
    
    m_odom.pose.pose.orientation.z = 0.0;
    m_odom.pose.pose.orientation.w = 1.0;
}

void LowerLevelInterface::authenticationProcess()
{
    getMACAddress();
}

void LowerLevelInterface::getMACAddress()
{
    // MAC address retrieval implementation if needed
    RCLCPP_INFO(node_->get_logger(), "MAC Address: %s", MACADDRESS);
}

void LowerLevelInterface::diagnoseMotorControllerHealth(const readParameters &readParams,
                                                        geometry_msgs::msg::Twist &cmdVel)
{
    // Motor controller diagnostics implementation
    if(readParams.m_motorErrorFeedback)
    {
        RCLCPP_WARN(node_->get_logger(), "Motor controller error detected");
        resetCmdVelocity(cmdVel);
    }
}

void LowerLevelInterface::resetCmdVelocity(geometry_msgs::msg::Twist &cmdVel)
{
    cmdVel.linear.x = 0.0;
    cmdVel.linear.y = 0.0;
    cmdVel.linear.z = 0.0;
    cmdVel.angular.x = 0.0;
    cmdVel.angular.y = 0.0;
    cmdVel.angular.z = 0.0;
}

void LowerLevelInterface::controlFlow()
{
    m_currentTime = Utilities::millis();
    m_deltaTime = m_currentTime - m_lastTime;
    m_lastTime = m_currentTime;
    
    writeParameters writeParam;
    readParameters readParam;
    
    geometry_msgs::msg::Twist cmdVel = p_getVariables->getCommandVelocity();
    
    p_lowerLevelComputation->initializeComputation(cmdVel, writeParam);
    
    p_highLevelController->writeCommands(writeParam);
    p_highLevelController->readCommands(readParam);
    
    diagnoseMotorControllerHealth(readParam, cmdVel);
    
    // Log velocity like ROS1
    RCLCPP_WARN(node_->get_logger(), "Linear : %f   Angular : %f", cmdVel.linear.x, cmdVel.angular.z);
    
    p_lowerLevelComputation->updateOdometry(static_cast<uint32_t>(m_deltaTime), 
                                           readParam, m_odom);
    
    p_getVariables->sendOdometry(m_odom);
    p_getVariables->sendReadParameters(readParam);
    
    if(m_publishTF)
    {
        p_getVariables->updateTF(m_odom);
    }
}
