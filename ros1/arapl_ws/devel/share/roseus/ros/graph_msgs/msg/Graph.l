;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::Graph)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'Graph (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::GRAPH")
  (make-package "GRAPH_MSGS::GRAPH"))

(in-package "ROS")
;;//! \htmlinclude Graph.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass graph_msgs::Graph
  :super ros::object
  :slots (_header _meta_data _vertices _edges _properties ))

(defmethod graph_msgs::Graph
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:meta_data __meta_data) (instance graph_msgs::GraphMetaData :init))
    ((:vertices __vertices) ())
    ((:edges __edges) ())
    ((:properties __properties) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _meta_data __meta_data)
   (setq _vertices __vertices)
   (setq _edges __edges)
   (setq _properties __properties)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:meta_data
   (&rest __meta_data)
   (if (keywordp (car __meta_data))
       (send* _meta_data __meta_data)
     (progn
       (if __meta_data (setq _meta_data (car __meta_data)))
       _meta_data)))
  (:vertices
   (&rest __vertices)
   (if (keywordp (car __vertices))
       (send* _vertices __vertices)
     (progn
       (if __vertices (setq _vertices (car __vertices)))
       _vertices)))
  (:edges
   (&rest __edges)
   (if (keywordp (car __edges))
       (send* _edges __edges)
     (progn
       (if __edges (setq _edges (car __edges)))
       _edges)))
  (:properties
   (&rest __properties)
   (if (keywordp (car __properties))
       (send* _properties __properties)
     (progn
       (if __properties (setq _properties (car __properties)))
       _properties)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; graph_msgs/GraphMetaData _meta_data
    (send _meta_data :serialization-length)
    ;; graph_msgs/Vertex[] _vertices
    (apply #'+ (send-all _vertices :serialization-length)) 4
    ;; graph_msgs/Edge[] _edges
    (apply #'+ (send-all _edges :serialization-length)) 4
    ;; graph_msgs/Property[] _properties
    (apply #'+ (send-all _properties :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; graph_msgs/GraphMetaData _meta_data
       (send _meta_data :serialize s)
     ;; graph_msgs/Vertex[] _vertices
     (write-long (length _vertices) s)
     (dolist (elem _vertices)
       (send elem :serialize s)
       )
     ;; graph_msgs/Edge[] _edges
     (write-long (length _edges) s)
     (dolist (elem _edges)
       (send elem :serialize s)
       )
     ;; graph_msgs/Property[] _properties
     (write-long (length _properties) s)
     (dolist (elem _properties)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; graph_msgs/GraphMetaData _meta_data
     (send _meta_data :deserialize buf ptr-) (incf ptr- (send _meta_data :serialization-length))
   ;; graph_msgs/Vertex[] _vertices
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _vertices (let (r) (dotimes (i n) (push (instance graph_msgs::Vertex :init) r)) r))
     (dolist (elem- _vertices)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; graph_msgs/Edge[] _edges
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _edges (let (r) (dotimes (i n) (push (instance graph_msgs::Edge :init) r)) r))
     (dolist (elem- _edges)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; graph_msgs/Property[] _properties
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _properties (let (r) (dotimes (i n) (push (instance graph_msgs::Property :init) r)) r))
     (dolist (elem- _properties)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get graph_msgs::Graph :md5sum-) "0310af2f1693ece9ce205cea29e160ca")
(setf (get graph_msgs::Graph :datatype-) "graph_msgs/Graph")
(setf (get graph_msgs::Graph :definition-)
      "std_msgs/Header header
GraphMetaData meta_data
Vertex[] vertices       # List of vertices
Edge[] edges            # List of edges
Property[] properties 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: graph_msgs/GraphMetaData
uint8 DIRECTED=0
uint8 UNDIRECTED=1

std_msgs/Header header
string graph_name
uint8 graph_type
uint32 number_of_vertices
uint32 number_of_edges
================================================================================
MSG: graph_msgs/Vertex
# Vertex types
uint8 NORMAL=0
uint8 PARK=1
uint8 CHARGE=2
uint8 CONTROL=3
uint8 REPORT=4

uint32 id
string name
string alias
uint8 type
bool ignore_orientation
geometry_msgs/Pose pose
Property[] properties
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: graph_msgs/Property
string key
string value
================================================================================
MSG: graph_msgs/Edge
# Edge types
uint8 STRAIGHT_LINE=0
uint8 CUBIC_BEZIER=1

# Edge direction types
uint8 FORWARD=0
uint8 REVERSE=1
uint8 BIDIRECTIONAL=2

# Creation types 
uint8 CREATED=0     # The edge is created
uint8 GENERATED=1   # The edge is generated

string name
string alias
uint8 type
uint8 edge_direction_type
uint8 creation_type         #FIXME: This creation type is not required. The graph data structure should be able to handle both
uint32 source_vertex_id
uint32 target_vertex_id
float64 length
float64 cost_factor         # A factor by which the traversal cost is multiplied. In this case the length of the edge
bool bidirectional
bool independent_orientation
geometry_msgs/Pose[] control_points
geometry_msgs/Pose control_orientation
geometry_msgs/PoseArray poses   # Can contain the poses for the curve
Property[] properties
================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

")



(provide :graph_msgs/Graph "0310af2f1693ece9ce205cea29e160ca")


