#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import tf2_ros
from geometry_msgs.msg import TransformStamped
from tf_transformations import quaternion_from_euler


class MapToQRBroadcaster(Node):
    def __init__(self):
        super().__init__('map_to_qr_tf_broadcaster')
        
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)
        
        # Declare and get parameters
        self.declare_parameter('map_xspacing', 1.0)
        self.declare_parameter('map_yspacing', 1.0)
        self.declare_parameter('tagmap.points', [])
        
        self.xsp = self.get_parameter('map_xspacing').value
        self.ysp = self.get_parameter('map_yspacing').value
        self.map_points = self.get_parameter('tagmap.points').value
        
        # Log the tag positions
        for point in self.map_points:
            frame = f"tag_{point['tag_id']}"
            x = point['row'] * self.xsp
            y = point['col'] * self.ysp
            self.get_logger().info(f"{frame}: ({x}, {y})")
        
        # Create timer to broadcast transforms at 30 Hz
        self.timer = self.create_timer(1.0 / 30.0, self.broadcast_transforms)
        
        self.get_logger().info('Map to QR TF broadcaster initialized')

    def broadcast_transforms(self):
        for point in self.map_points:
            tag_frame = f"tag_{point['tag_id']}"
            x = point['row'] * self.xsp
            y = point['col'] * self.ysp
            
            t = TransformStamped()
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = 'map'
            t.child_frame_id = tag_frame
            
            t.transform.translation.x = x
            t.transform.translation.y = y
            t.transform.translation.z = 0.0
            
            # Convert euler to quaternion (0, 0, -1.5708)
            q = quaternion_from_euler(0, 0, -1.5708)
            t.transform.rotation.x = q[0]
            t.transform.rotation.y = q[1]
            t.transform.rotation.z = q[2]
            t.transform.rotation.w = q[3]
            
            self.tf_broadcaster.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    node = MapToQRBroadcaster()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
