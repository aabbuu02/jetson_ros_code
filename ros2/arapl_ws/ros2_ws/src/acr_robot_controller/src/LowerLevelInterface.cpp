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
    // Only get parameter values, don't declare them (they're already declared in RosClass)
    m_controllerType = node_->get_parameter("controller_type").as_int();
    m_publishTF = node_->get_parameter("publish_tf").as_bool();
    m_odomFrame = node_->get_parameter("odom_frame").as_string();
    m_baseFrame = node_->get_parameter("base_frame").as_string();
    m_cmdVelTopic = node_->get_parameter("cmd_topic").as_string();
    m_odomTopic = node_->get_parameter("odom_topic").as_string();
    m_barcodeGlobalTopic = node_->get_parameter("barcode_global_topic").as_string();
    m_emergencyStopTopic = node_->get_parameter("emergency_stop_topic").as_string();
    m_batteryTopic = node_->get_parameter("battery_topic").as_string();
    m_debugCmdVelTopic = node_->get_parameter("debug_cmd_topic").as_string();
    m_cmdVelTimeout = node_->get_parameter("cmd_vel_timeout").as_double();
    m_roboteqPort = node_->get_parameter("roboteq_port").as_string();
    
    // Robot parameters
    m_wheelSeperation = node_->get_parameter("robot.wheel_seperation").as_double();
    m_wheelRadius = node_->get_parameter("robot.wheel_radius").as_double();
    m_TPR = node_->get_parameter("robot.TPR").as_int();
    m_linearVelocityLimit = node_->get_parameter("robot.linear_vel_limit").as_double();
    m_angularVelocityLimit = node_->get_parameter("robot.angular_vel_limit").as_double();
    m_gearRatio = node_->get_parameter("robot.gearRatio").as_int();
    
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
