#pragma once

#include <vector>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2/LinearMath/Vector3.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Transform.h>

namespace Graph::Curves
{

// Function for straight lines
void calculateEquiDistantPosesLine(
    const std::vector<geometry_msgs::msg::Pose> &in_poses, 
    std::vector<geometry_msgs::msg::Pose> &eqd_poses,
    double &length, 
    double pose_spacing);

// Functions for cubic bezier curves
inline void quadraticCurve(
    const tf2::Vector3 &p_1, 
    const tf2::Vector3 &p_2, 
    const tf2::Vector3 &p_3, 
    double t, 
    tf2::Vector3 &p_out);

inline void cubicCurve(
    const tf2::Vector3 &p_1, 
    const tf2::Vector3 &p_2, 
    const tf2::Vector3 &p_3, 
    const tf2::Vector3 &p_4, 
    double t, 
    tf2::Vector3 &p_out);

void calculateControlPosesForBezier(
    const std::vector<geometry_msgs::msg::Pose> &anchor_poses, 
    std::vector<geometry_msgs::msg::Pose> &in_poses,
    std::vector<geometry_msgs::msg::Pose> &control_poses);

void calculateControlOrientForCurves(
    const std::vector<geometry_msgs::msg::Pose> &in_poses, 
    geometry_msgs::msg::Pose &ctrl_orient_pose);

void calculateEquiDistantPosesBezier(
    const std::vector<geometry_msgs::msg::Pose> &in_poses, 
    std::vector<geometry_msgs::msg::Pose> &eqd_poses,
    double &length, 
    double pose_spacing, 
    double resolution);

}  // namespace Graph::Curves
