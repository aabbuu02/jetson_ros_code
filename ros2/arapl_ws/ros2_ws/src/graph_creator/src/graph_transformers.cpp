#include "graph_creator/graph_transformers.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <cmath>

namespace Graph::Transform
{

void VertexOrientationTransform::setOriginPose(const geometry_msgs::msg::Pose &origin_pose)
{
    m_origin_pose = origin_pose;
}

void VertexOrientationTransform::transformVertexOrientation(
    Graph::Vertex &vertex, 
    const OrientationType &orientation_type)
{
    if (orientation_type == OrientationType::NONE)
    {
        // No transformation needed
        return;
    }
    else if (orientation_type == OrientationType::BIDIRECTIONAL)
    {
        // Set ignore orientation flag for bidirectional vertices
        vertex.ignore_orientation = true;
    }
    else if (orientation_type == OrientationType::INWARD)
    {
        // Calculate orientation pointing toward the origin
        double yaw = calculateYaw(vertex.vertex_pose, m_origin_pose);
        tf2::Quaternion quat = createQuaternionFromYaw(yaw);
        vertex.vertex_pose.orientation = tf2::toMsg(quat);
    }
    else if (orientation_type == OrientationType::OUTWARD)
    {
        // Calculate orientation pointing away from the origin
        double yaw = calculateYaw(m_origin_pose, vertex.vertex_pose);
        tf2::Quaternion quat = createQuaternionFromYaw(yaw);
        vertex.vertex_pose.orientation = tf2::toMsg(quat);
    }
}

void VertexOrientationTransform::transformVertexOrientation(
    Graph::VertexList &vertices, 
    const OrientationType &orientation_type)
{
    for (auto &vertex : vertices)
    {
        transformVertexOrientation(vertex, orientation_type);
    }
}

double VertexOrientationTransform::calculateYaw(
    const geometry_msgs::msg::Pose &from_pose, 
    const geometry_msgs::msg::Pose &to_pose) const
{
    double dx = to_pose.position.x - from_pose.position.x;
    double dy = to_pose.position.y - from_pose.position.y;
    return std::atan2(dy, dx);
}

tf2::Quaternion VertexOrientationTransform::createQuaternionFromYaw(double yaw) const
{
    tf2::Quaternion quat;
    quat.setRPY(0.0, 0.0, yaw);
    return quat.normalize();
}

}  // namespace Graph::Transform
