#ifndef POSE_STRUCT_H
#define POSE_STRUCT_H

namespace pose_struct
{
  // Pose container
  struct Position
  {
    double x;
    double y;
    double z;
  };

  // Orientation container
  struct Euler
  {
    double roll;
    double pitch;
    double yaw;
  };

  // Quaternion container
  struct Quaternion
  {
    double x;
    double y;
    double z;
    double w;
  };

  // Container for holding pose information
  struct PoseQuaternion
  {
    Position position;
    Quaternion orientation;
  };

  struct PoseEuler
  {
    Position position;
    Euler orientation;
  };

  // Path data container of the robot
  struct PathData
  {
    PoseEuler init_pose;
    PoseEuler goal_pose;
  };

  // Container for holding frame relations
  struct Transform
  {
    Position origin;
    Euler rotation;
  };

  struct LinearVelocity
  {
    double x;
    double y;
    double z;
  };

  struct AngularVelocity
  {
    double x;
    double y;
    double z;
  };

  struct ControlInput
  {
    LinearVelocity linear;
    AngularVelocity angular;
  };

  struct Matrix
  {
    double **array;
    int rows;
    int columns;
  };
}

#endif
