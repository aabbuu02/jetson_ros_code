#pragma once

#include <string>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Quaternion.h>

#include "graph_creator/graph_data_types.hpp"

namespace Graph::Transform
{

class VertexOrientationTransform
{
public:
    VertexOrientationTransform() = default;
    ~VertexOrientationTransform() = default;

    enum class OrientationType : uint8_t
    {
        NONE = 0,
        BIDIRECTIONAL = 1,
        INWARD = 2,
        OUTWARD = 3
    };

    void setOriginPose(const geometry_msgs::msg::Pose &origin_pose);
    
    void transformVertexOrientation(
        Graph::Vertex &vertex, 
        const OrientationType &orientation_type);
    
    void transformVertexOrientation(
        Graph::VertexList &vertices, 
        const OrientationType &orientation_type);

private:
    geometry_msgs::msg::Pose m_origin_pose;

    double calculateYaw(const geometry_msgs::msg::Pose &from_pose, 
                       const geometry_msgs::msg::Pose &to_pose) const;
    
    tf2::Quaternion createQuaternionFromYaw(double yaw) const;
};

}  // namespace Graph::Transform
