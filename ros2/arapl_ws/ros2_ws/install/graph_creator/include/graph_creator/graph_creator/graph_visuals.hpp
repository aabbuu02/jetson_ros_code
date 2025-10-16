#pragma once

#include <string>
#include <vector>
#include <cstdint>

#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/interactive_marker.hpp>
#include <visualization_msgs/msg/interactive_marker_control.hpp>

#include "graph_creator/graph_colors.hpp"

namespace Graph::Visuals
{

// Graph marker types
enum GraphMarkerTypes
{
    VERTEX_NON_ORIENTED = 0,
    VERTEX_ORIENTED = 1,
    EDGE = 2,
    CONTROL_POSE = 3,
    CONTROL_ORIENTATION = 4,
    FORWARD_DIRECTION_ARROW = 5,
    REVERSE_DIRECTION_ARROW = 6
};

// Common marker and controls
visualization_msgs::msg::InteractiveMarkerControl makeButtonControl(
    visualization_msgs::msg::InteractiveMarker& int_marker, 
    visualization_msgs::msg::Marker& marker);

// For vertices
std::string generateVertexMarkerName(int vertex_id);

visualization_msgs::msg::InteractiveMarker makeInteractiveVertexMarker(
    int vertex_id, 
    const geometry_msgs::msg::Pose &pose);

visualization_msgs::msg::Marker makeVertexSphereMarker();
visualization_msgs::msg::Marker makeVertexOrientationArrowMarker();

visualization_msgs::msg::InteractiveMarkerControl makeVertexSphereControls(
    visualization_msgs::msg::InteractiveMarker &int_marker);

visualization_msgs::msg::InteractiveMarkerControl makeVertexArrowControls(
    visualization_msgs::msg::InteractiveMarker &int_marker);

// For edges
std::string generateEdgeMarkerName(int start_vertex_id, int end_vertex_id);

visualization_msgs::msg::InteractiveMarker makeInteractiveEdgeMarker(
    const std::string &edge_name);

visualization_msgs::msg::Marker makeEdgePointMarker(
    const std::vector<geometry_msgs::msg::Pose>& poses);

visualization_msgs::msg::InteractiveMarkerControl makeEdgePointControls(
    visualization_msgs::msg::InteractiveMarker& int_marker,
    const std::vector<geometry_msgs::msg::Pose>& poses);

// Function for control points or poses markers
std::string generateControlPoseMarkerName(
    int control_pose_id,
    const std::string &edge_name);

visualization_msgs::msg::InteractiveMarker makeInteractiveControlPoseMarker(
    const std::string &control_pose_name, 
    const geometry_msgs::msg::Pose &pose);

visualization_msgs::msg::Marker makeControlPoseSphereMarker();

visualization_msgs::msg::InteractiveMarkerControl makeControlPoseControls(
    visualization_msgs::msg::InteractiveMarker& int_marker);

// Function for control orientation markers
std::string generateControlOrientationMarkerName(const std::string &edge_name);

visualization_msgs::msg::InteractiveMarker makeInteractiveControlOrientMarker(
    const std::string &control_orient_name, 
    const geometry_msgs::msg::Pose &pose);

visualization_msgs::msg::Marker makeControlOrientArrowMarker();

visualization_msgs::msg::InteractiveMarkerControl makeControlOrientControls(
    visualization_msgs::msg::InteractiveMarker& int_marker);

void calculateControlOrientationMarkerPose(
    const std::vector<geometry_msgs::msg::Pose> &poses, 
    geometry_msgs::msg::Pose &ctrl_orient_pose);

// Functions for edge directionality markers
std::string generateEdgeDirectionMarkerName(
    const std::string &edge_name, 
    int16_t marker_type);

visualization_msgs::msg::InteractiveMarker makeInteractiveEdgeDirectionMarkers(
    const std::string &edge_name, 
    const geometry_msgs::msg::Pose &pose, 
    int16_t marker_type);

visualization_msgs::msg::Marker makeEdgeDirectionArrowMarker(
    int16_t marker_type); // Based on directionality arrow color changes

visualization_msgs::msg::InteractiveMarkerControl makeEdgeDirectionMarkerControls(
    visualization_msgs::msg::InteractiveMarker& int_marker,
    int16_t marker_type);

void calculateEdgeDirectionMarkerPose(
    const std::vector<geometry_msgs::msg::Pose> &poses, 
    double pose_spacing,
    geometry_msgs::msg::Pose &fwd_dir_pose, 
    geometry_msgs::msg::Pose &rev_dir_pose);

}  // namespace Graph::Visuals
