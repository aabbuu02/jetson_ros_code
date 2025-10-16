#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from qr_navigation.msg import GoalMsg
import tf2_ros
from tf_transformations import euler_from_quaternion, quaternion_from_euler
from geometry_msgs.msg import Pose2D
from std_msgs.msg import String


class PathPublisher(Node):
    def __init__(self):
        super().__init__('path_publisher')
        
        self.goal_msg_pub = self.create_publisher(GoalMsg, '/goal_path', 10)
        self.goal_segment_completion_ack = self.create_publisher(Pose2D, 'segment_completion_ack', 10)
        
        self.position_x = 0.0
        self.position_y = 0.0
        self.yaw = 0.0
        self.poses = []
        self.flag = False
        self.current_pose = []
        
        self.result_sub = self.create_subscription(
            String,
            '/goal_result',
            self.goal_result_callback,
            10)
        
        self.path_sub = self.create_subscription(
            Path,
            'path',
            self.path_callback,
            10)
        
        self.get_logger().info('Path Publisher node initialized')

    def goal_result_callback(self, msg):
        self.get_logger().info(f'Goal result: {msg.data}')
        
        for i in range(len(self.poses)):
            data_message = f"reached_pos{i}"
            
            if str(msg.data) == data_message:
                if i >= len(self.poses) - 1:
                    self.get_logger().info(str(self.poses[0]))
                    next_pose = f"next_pos{1}"
                    self.current_pose = self.poses[0]
                    self.flag = True
                else:
                    goal_ack = Pose2D()
                    goal_ack.x = self.current_pose[0]
                    goal_ack.y = self.current_pose[1]
                    goal_ack.theta = self.current_pose[2]
                    self.goal_segment_completion_ack.publish(goal_ack)
                    
                    self.get_logger().info(str(self.poses[i + 1]))
                    next_pose = f"next_pos{i + 2}"
                    self.current_pose = self.poses[i + 1]
                    self.flag = True

        if self.flag:
            goal_msg_data = GoalMsg()
            goal_msg_data.pose = "goal"
            goal_msg_data.start = [self.position_x, self.position_y, self.yaw]
            goal_msg_data.goal = self.current_pose
            goal_msg_data.operation = "NORMAL"
            
            self.goal_msg_pub.publish(goal_msg_data)
            self.flag = False

    def path_callback(self, path_msg):
        self.poses = []
        
        for pose in path_msg.poses:
            self.position_x = pose.pose.position.x
            self.position_y = pose.pose.position.y
            
            orientation_q = pose.pose.orientation
            orientation_list = [orientation_q.x, orientation_q.y, 
                              orientation_q.z, orientation_q.w]
            (roll, pitch, yaw) = euler_from_quaternion(orientation_list)
            self.yaw = yaw
            
            self.poses.append([self.position_x, self.position_y, self.yaw])
        
        if len(self.poses) > 0:
            self.get_logger().info(f'Received path with {len(self.poses)} poses')
            self.current_pose = self.poses[0]
            
            goal_msg_data = GoalMsg()
            goal_msg_data.pose = "goal"
            goal_msg_data.start = [self.position_x, self.position_y, self.yaw]
            goal_msg_data.goal = self.current_pose
            goal_msg_data.operation = "NORMAL"
            
            self.goal_msg_pub.publish(goal_msg_data)


def main(args=None):
    rclpy.init(args=args)
    node = PathPublisher()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
