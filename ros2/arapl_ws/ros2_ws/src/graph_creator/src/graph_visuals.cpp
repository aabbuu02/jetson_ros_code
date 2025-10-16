#include "graph_creator/graph_visuals.hpp"
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include <rclcpp/rclcpp.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Vector3.h>
#include <sstream>
#include <cmath>

namespace Graph::Visuals
{

visualization_msgs::msg::InteractiveMarkerControl makeButtonControl(
    visualization_msgs::msg::InteractiveMarker& int_marker, 
    visualization_msgs::msg::Marker& marker)
{
    visualization_msgs::msg::InteractiveMarkerControl button_control;
    button_control.name = int_marker.name + "_btn";
    button_control.always_visible = true;
    button_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::BUTTON;
    button_control.markers.push_back(marker);
    int_marker.controls.push_back(button_control);
    return int_marker.controls.back();
}

std::string generateVertexMarkerName(int vertex_id)
{
    return "v" + std::to_string(vertex_id);
}

visualization_msgs::msg::InteractiveMarker makeInteractiveVertexMarker(
    int vertex_id, 
    const geometry_msgs::msg::Pose &pose)
{
    visualization_msgs::msg::InteractiveMarker vertex_marker;
    vertex_marker.header.frame_id = "map";
    vertex_marker.header.stamp = rclcpp::Clock().now();
    vertex_marker.name = generateVertexMarkerName(vertex_id);
    vertex_marker.description = "Vertex " + std::to_string(vertex_id);
    vertex_marker.scale = 0.5;
    vertex_marker.pose = pose;
    return vertex_marker;
}

visualization_msgs::msg::Marker makeVertexSphereMarker()
{
    visualization_msgs::msg::Marker sphere_marker;
    sphere_marker.header.stamp = rclcpp::Clock().now();
    sphere_marker.ns = "vertex_non_oriented";
    sphere_marker.id = VERTEX_NON_ORIENTED;
    sphere_marker.type = visualization_msgs::msg::Marker::SPHERE;
    sphere_marker.scale.x = 0.25;
    sphere_marker.scale.y = 0.25;
    sphere_marker.scale.z = 0.25;
    sphere_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::RED);
    return sphere_marker;
}

visualization_msgs::msg::Marker makeVertexOrientationArrowMarker()
{
    visualization_msgs::msg::Marker arrow_marker;
    arrow_marker.header.stamp = rclcpp::Clock().now();
    arrow_marker.ns = "vertex_oriented";
    arrow_marker.id = VERTEX_ORIENTED;
    arrow_marker.type = visualization_msgs::msg::Marker::ARROW;
    arrow_marker.scale.x = 0.5;
    arrow_marker.scale.y = 0.075;
    arrow_marker.scale.z = 0.075;
    arrow_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::RED);
    return arrow_marker;
}

visualization_msgs::msg::InteractiveMarkerControl makeVertexSphereControls(
    visualization_msgs::msg::InteractiveMarker &int_marker)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl vertex_sphere_control;
    
    // Move on plane
    vertex_sphere_control.name = int_marker.name + "_control_move";
    vertex_sphere_control.always_visible = false;
    vertex_sphere_control.orientation.w = 1;
    vertex_sphere_control.orientation.z = 0;
    vertex_sphere_control.orientation.y = 1;
    vertex_sphere_control.orientation.x = 0;
    vertex_sphere_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::MOVE_PLANE;
    vertex_sphere_control.independent_marker_orientation = true;
    int_marker.controls.push_back(vertex_sphere_control);
    
    vertex_sphere_control.markers.push_back(makeVertexSphereMarker());
    vertex_sphere_control.always_visible = true;
    int_marker.controls.push_back(vertex_sphere_control);
    
    return int_marker.controls.back();
}

visualization_msgs::msg::InteractiveMarkerControl makeVertexArrowControls(
    visualization_msgs::msg::InteractiveMarker &int_marker)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl vertex_sphere_control;
    
    // Rotate around the view axis
    vertex_sphere_control.name = int_marker.name + "_control_rotate";
    vertex_sphere_control.always_visible = false;
    vertex_sphere_control.orientation.w = 1;
    vertex_sphere_control.orientation.z = 0;
    vertex_sphere_control.orientation.y = 1;
    vertex_sphere_control.orientation.x = 0;
    vertex_sphere_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::ROTATE_AXIS;
    int_marker.controls.push_back(vertex_sphere_control);
    
    // Move on plane
    vertex_sphere_control.name = int_marker.name + "_control_move";
    vertex_sphere_control.always_visible = true;
    vertex_sphere_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::MOVE_PLANE;
    vertex_sphere_control.markers.push_back(makeVertexOrientationArrowMarker());
    int_marker.controls.push_back(vertex_sphere_control);
    
    return int_marker.controls.back();
}

std::string generateEdgeMarkerName(int start_vertex_id, int end_vertex_id)
{
    std::stringstream ss;
    ss << "e" << start_vertex_id << end_vertex_id;
    return ss.str();
}

visualization_msgs::msg::InteractiveMarker makeInteractiveEdgeMarker(const std::string &edge_name)
{
    visualization_msgs::msg::InteractiveMarker edge_marker;
    edge_marker.header.frame_id = "map";
    edge_marker.header.stamp = rclcpp::Clock().now();
    edge_marker.name = edge_name;
    edge_marker.scale = 0.5;
    return edge_marker;
}

visualization_msgs::msg::Marker makeEdgePointMarker(const std::vector<geometry_msgs::msg::Pose>& poses)
{
    visualization_msgs::msg::Marker point_marker;
    point_marker.header.stamp = rclcpp::Clock().now();
    point_marker.ns = "edge";
    point_marker.id = EDGE;
    point_marker.type = visualization_msgs::msg::Marker::POINTS;
    point_marker.scale.x = 0.05;
    point_marker.scale.y = 0.05;
    point_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::GREEN);
    
    for (const auto &p : poses)
    {
        point_marker.points.push_back(p.position);
    }
    
    return point_marker;
}

visualization_msgs::msg::InteractiveMarkerControl makeEdgePointControls(
    visualization_msgs::msg::InteractiveMarker& int_marker,
    const std::vector<geometry_msgs::msg::Pose>& poses)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl point_button_control;
    point_button_control.name = int_marker.name + "_btn";
    point_button_control.always_visible = true;
    point_button_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::BUTTON;
    point_button_control.markers.push_back(makeEdgePointMarker(poses));
    int_marker.controls.push_back(point_button_control);
    return int_marker.controls.back();
}

std::string generateControlPoseMarkerName(int control_pose_id, const std::string &edge_name)
{
    return "c" + std::to_string(control_pose_id) + edge_name;
}

visualization_msgs::msg::InteractiveMarker makeInteractiveControlPoseMarker(
    const std::string &control_pose_name, 
    const geometry_msgs::msg::Pose &pose)
{
    visualization_msgs::msg::InteractiveMarker control_pose_marker;
    control_pose_marker.header.frame_id = "map";
    control_pose_marker.header.stamp = rclcpp::Clock().now();
    control_pose_marker.name = control_pose_name;
    control_pose_marker.scale = 0.5;
    control_pose_marker.pose = pose;
    return control_pose_marker;
}

visualization_msgs::msg::Marker makeControlPoseSphereMarker()
{
    visualization_msgs::msg::Marker sphere_marker;
    sphere_marker.header.stamp = rclcpp::Clock().now();
    sphere_marker.ns = "control_pose";
    sphere_marker.id = CONTROL_POSE;
    sphere_marker.type = visualization_msgs::msg::Marker::SPHERE;
    sphere_marker.scale.x = 0.15;
    sphere_marker.scale.y = 0.15;
    sphere_marker.scale.z = 0.15;
    sphere_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::WHITE);
    return sphere_marker;
}

visualization_msgs::msg::InteractiveMarkerControl makeControlPoseControls(
    visualization_msgs::msg::InteractiveMarker& int_marker)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl control_sphere_control;
    control_sphere_control.name = int_marker.name + "_control_move";
    control_sphere_control.always_visible = false;
    control_sphere_control.orientation.w = 1;
    control_sphere_control.orientation.z = 0;
    control_sphere_control.orientation.y = 1;
    control_sphere_control.orientation.x = 0;
    control_sphere_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::MOVE_PLANE;
    control_sphere_control.independent_marker_orientation = true;
    int_marker.controls.push_back(control_sphere_control);
    
    control_sphere_control.markers.push_back(makeControlPoseSphereMarker());
    control_sphere_control.always_visible = true;
    int_marker.controls.push_back(control_sphere_control);
    
    return int_marker.controls.back();
}

std::string generateControlOrientationMarkerName(const std::string &edge_name)
{
    return "co" + edge_name;
}

visualization_msgs::msg::InteractiveMarker makeInteractiveControlOrientMarker(
    const std::string &control_orient_name, 
    const geometry_msgs::msg::Pose &pose)
{
    visualization_msgs::msg::InteractiveMarker orientation_control_marker;
    orientation_control_marker.header.frame_id = "map";
    orientation_control_marker.header.stamp = rclcpp::Clock().now();
    orientation_control_marker.name = control_orient_name;
    orientation_control_marker.scale = 0.5;
    orientation_control_marker.pose = pose;
    return orientation_control_marker;
}

visualization_msgs::msg::Marker makeControlOrientArrowMarker()
{
    visualization_msgs::msg::Marker arrow_marker;
    arrow_marker.header.stamp = rclcpp::Clock().now();
    arrow_marker.ns = "control_orientation";
    arrow_marker.id = CONTROL_ORIENTATION;
    arrow_marker.type = visualization_msgs::msg::Marker::ARROW;
    arrow_marker.scale.x = 0.35;
    arrow_marker.scale.y = 0.055;
    arrow_marker.scale.z = 0.055;
    arrow_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::YELLOW);
    return arrow_marker;
}

visualization_msgs::msg::InteractiveMarkerControl makeControlOrientControls(
    visualization_msgs::msg::InteractiveMarker& int_marker)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl orient_arrow_control;
    
    // Rotate around the view axis
    orient_arrow_control.name = int_marker.name + "_control_rotate";
    orient_arrow_control.always_visible = false;
    orient_arrow_control.orientation.w = 1;
    orient_arrow_control.orientation.z = 0;
    orient_arrow_control.orientation.y = 1;
    orient_arrow_control.orientation.x = 0;
    orient_arrow_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::ROTATE_AXIS;
    int_marker.controls.push_back(orient_arrow_control);
    
    // Adding the arrow marker
    orient_arrow_control.always_visible = true;
    orient_arrow_control.markers.push_back(makeControlOrientArrowMarker());
    int_marker.controls.push_back(orient_arrow_control);
    
    return int_marker.controls.back();
}

void calculateControlOrientationMarkerPose(
    const std::vector<geometry_msgs::msg::Pose> &poses, 
    geometry_msgs::msg::Pose &ctrl_orient_pose)
{
    int pose_list_size = static_cast<int>(poses.size());
    
    if (pose_list_size % 2 == 0) // For even number of poses
    {
        int first_idx = static_cast<int>(std::ceil(pose_list_size / 2.0)) - 1;
        int second_idx = first_idx + 1;
        tf2::Vector3 vec_1, vec_2;
        tf2::fromMsg(poses.at(first_idx).position, vec_1);
        tf2::fromMsg(poses.at(second_idx).position, vec_2);
        
        // Place in the middle between the two poses
        auto lerp_result = tf2::lerp(vec_1, vec_2, 0.5);
        ctrl_orient_pose.position.x = lerp_result.x();
        ctrl_orient_pose.position.y = lerp_result.y();
        ctrl_orient_pose.position.z = lerp_result.z();
        ctrl_orient_pose.orientation = poses.at(first_idx).orientation;
    }
    else // For odd number of poses
    {
        int req_idx = static_cast<int>(std::ceil(pose_list_size / 2.0)) - 1;
        ctrl_orient_pose = poses.at(req_idx);
    }
}

std::string generateEdgeDirectionMarkerName(const std::string &edge_name, int16_t marker_type)
{
    if (marker_type == FORWARD_DIRECTION_ARROW)
        return "fd" + edge_name;
    else if (marker_type == REVERSE_DIRECTION_ARROW)
        return "rd" + edge_name;
    return "";
}

visualization_msgs::msg::InteractiveMarker makeInteractiveEdgeDirectionMarkers(
    const std::string &dir_name, 
    const geometry_msgs::msg::Pose &pose, 
    int16_t marker_type)
{
    (void)marker_type;  // Suppress unused parameter warning

    visualization_msgs::msg::InteractiveMarker direction_int_marker;
    direction_int_marker.header.frame_id = "map";
    direction_int_marker.header.stamp = rclcpp::Clock().now();
    direction_int_marker.name = dir_name;
    direction_int_marker.scale = 0.5;
    direction_int_marker.pose = pose;
    return direction_int_marker;
}

visualization_msgs::msg::Marker makeEdgeDirectionArrowMarker(int16_t marker_type)
{
    visualization_msgs::msg::Marker arrow_marker;
    arrow_marker.header.stamp = rclcpp::Clock().now();
    arrow_marker.ns = "direction";
    arrow_marker.id = marker_type;
    arrow_marker.type = visualization_msgs::msg::Marker::ARROW;
    arrow_marker.scale.x = 0.3;
    arrow_marker.scale.y = 0.1;
    arrow_marker.scale.z = 0.1;
    
    if (marker_type == FORWARD_DIRECTION_ARROW)
        arrow_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::BLACK);
    else
        arrow_marker.color = Graph::Colors::getColorRGBAMsg(Graph::Colors::GREY);
    
    return arrow_marker;
}

visualization_msgs::msg::InteractiveMarkerControl makeEdgeDirectionMarkerControls(
    visualization_msgs::msg::InteractiveMarker& int_marker,
    int16_t marker_type)
{
    int_marker.controls.clear();
    visualization_msgs::msg::InteractiveMarkerControl direction_arrow_control;
    direction_arrow_control.name = int_marker.name + "_btn";
    direction_arrow_control.always_visible = true;
    direction_arrow_control.interaction_mode = visualization_msgs::msg::InteractiveMarkerControl::BUTTON;
    direction_arrow_control.markers.push_back(makeEdgeDirectionArrowMarker(marker_type));
    int_marker.controls.push_back(direction_arrow_control);
    return int_marker.controls.back();
}

void calculateEdgeDirectionMarkerPose(
    const std::vector<geometry_msgs::msg::Pose> &poses, 
    double pose_spacing,
    geometry_msgs::msg::Pose &fwd_dir_pose, 
    geometry_msgs::msg::Pose &rev_dir_pose)
{
    if (poses.size() < 2)
    {
        RCLCPP_ERROR(rclcpp::get_logger("graph_visuals"), 
                    "Cannot calculate poses for directional markers as the number of poses in the edges is less than 2");
        return;
    }
    
    int place_idx = 0;
    for (size_t i = 0; i < poses.size() - 1; ++i)
    {
        if (i * pose_spacing >= 1.0)
            break;
        place_idx = static_cast<int>(i);
    }
    
    double yaw = 0.0;
    tf2::Vector3 point_1, point_2, unit_vec;
    tf2::Quaternion quat;
    
    // For the forward direction marker pose
    tf2::fromMsg(poses.at(poses.size() - place_idx - 1).position, point_1);
    tf2::fromMsg(poses.at(poses.size() - place_idx - 2).position, point_2);
    unit_vec = (point_1 - point_2).normalize();
    yaw = std::atan2(unit_vec.getY(), unit_vec.getX());
    quat.setRPY(0.0, 0.0, yaw);
    fwd_dir_pose.position = poses.at(poses.size() - place_idx - 1).position;
    fwd_dir_pose.orientation = tf2::toMsg(quat.normalize());
    
    // For the backward direction marker pose
    tf2::fromMsg(poses.at(place_idx + 1).position, point_1);
    tf2::fromMsg(poses.at(place_idx).position, point_2);
    unit_vec = (point_2 - point_1).normalize();
    yaw = std::atan2(unit_vec.getY(), unit_vec.getX());
    quat.setRPY(0.0, 0.0, yaw);
    rev_dir_pose.position = poses.at(place_idx + 1).position;
    rev_dir_pose.orientation = tf2::toMsg(quat.normalize());
}

}  // namespace Graph::Visuals
