#ifndef CLIENT_H
#define CLIENT_H

#include "RoboteqController.h"
#include "rclcpp/rclcpp.hpp"

class Client 
{
public:
    Client(std::shared_ptr<rclcpp::Node> node, int type)
    {
        RCLCPP_INFO(node->get_logger(), "Client constructor called with type %d", type);
        
        if (type == ROBOTEQ_DEVICE)
        {
            p_highLevelController = new RoboteqController(node);
        }
        else
        {
            p_highLevelController = nullptr;
            RCLCPP_FATAL(node->get_logger(), "Please check the controller type selected");
            exit(0);
        }
    }
    
    ~Client()
    {
        if (p_highLevelController) 
        {
            delete p_highLevelController;
            p_highLevelController = nullptr;
        }
    }
    
    AHighLevelController* getHighLevelController() { return p_highLevelController; }

private:
    AHighLevelController* p_highLevelController;
};

#endif
