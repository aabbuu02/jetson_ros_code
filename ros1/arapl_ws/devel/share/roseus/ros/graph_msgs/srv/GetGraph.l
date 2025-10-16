;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::GetGraph)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'GetGraph (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::GETGRAPH")
  (make-package "GRAPH_MSGS::GETGRAPH"))
(unless (find-package "GRAPH_MSGS::GETGRAPHREQUEST")
  (make-package "GRAPH_MSGS::GETGRAPHREQUEST"))
(unless (find-package "GRAPH_MSGS::GETGRAPHRESPONSE")
  (make-package "GRAPH_MSGS::GETGRAPHRESPONSE"))

(in-package "ROS")





(defclass graph_msgs::GetGraphRequest
  :super ros::object
  :slots ())

(defmethod graph_msgs::GetGraphRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(intern "*RESULT_GRAPH_VALID*" (find-package "GRAPH_MSGS::GETGRAPHRESPONSE"))
(shadow '*RESULT_GRAPH_VALID* (find-package "GRAPH_MSGS::GETGRAPHRESPONSE"))
(defconstant graph_msgs::GetGraphResponse::*RESULT_GRAPH_VALID* 0)
(intern "*RESULT_GRAPH_INVALID*" (find-package "GRAPH_MSGS::GETGRAPHRESPONSE"))
(shadow '*RESULT_GRAPH_INVALID* (find-package "GRAPH_MSGS::GETGRAPHRESPONSE"))
(defconstant graph_msgs::GetGraphResponse::*RESULT_GRAPH_INVALID* 1)

(defun graph_msgs::GetGraphResponse-to-symbol (const)
  (cond
        ((= const 0) 'graph_msgs::GetGraphResponse::*RESULT_GRAPH_VALID*)
        ((= const 1) 'graph_msgs::GetGraphResponse::*RESULT_GRAPH_INVALID*)
        (t nil)))

(defclass graph_msgs::GetGraphResponse
  :super ros::object
  :slots (_graph _result ))

(defmethod graph_msgs::GetGraphResponse
  (:init
   (&key
    ((:graph __graph) (instance graph_msgs::Graph :init))
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _graph __graph)
   (setq _result (round __result))
   self)
  (:graph
   (&rest __graph)
   (if (keywordp (car __graph))
       (send* _graph __graph)
     (progn
       (if __graph (setq _graph (car __graph)))
       _graph)))
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; graph_msgs/Graph _graph
    (send _graph :serialization-length)
    ;; uint8 _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_msgs/Graph _graph
       (send _graph :serialize s)
     ;; uint8 _result
       (write-byte _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_msgs/Graph _graph
     (send _graph :deserialize buf ptr-) (incf ptr- (send _graph :serialization-length))
   ;; uint8 _result
     (setq _result (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass graph_msgs::GetGraph
  :super ros::object
  :slots ())

(setf (get graph_msgs::GetGraph :md5sum-) "69b28c3b9947ded8e5533db9ff2abcd5")
(setf (get graph_msgs::GetGraph :datatype-) "graph_msgs/GetGraph")
(setf (get graph_msgs::GetGraph :request) graph_msgs::GetGraphRequest)
(setf (get graph_msgs::GetGraph :response) graph_msgs::GetGraphResponse)

(defmethod graph_msgs::GetGraphRequest
  (:response () (instance graph_msgs::GetGraphResponse :init)))

(setf (get graph_msgs::GetGraphRequest :md5sum-) "69b28c3b9947ded8e5533db9ff2abcd5")
(setf (get graph_msgs::GetGraphRequest :datatype-) "graph_msgs/GetGraphRequest")
(setf (get graph_msgs::GetGraphRequest :definition-)
      "---
uint8 RESULT_GRAPH_VALID=0
uint8 RESULT_GRAPH_INVALID=1

graph_msgs/Graph graph
uint8 result

================================================================================
MSG: graph_msgs/Graph
std_msgs/Header header
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

(setf (get graph_msgs::GetGraphResponse :md5sum-) "69b28c3b9947ded8e5533db9ff2abcd5")
(setf (get graph_msgs::GetGraphResponse :datatype-) "graph_msgs/GetGraphResponse")
(setf (get graph_msgs::GetGraphResponse :definition-)
      "---
uint8 RESULT_GRAPH_VALID=0
uint8 RESULT_GRAPH_INVALID=1

graph_msgs/Graph graph
uint8 result

================================================================================
MSG: graph_msgs/Graph
std_msgs/Header header
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



(provide :graph_msgs/GetGraph "69b28c3b9947ded8e5533db9ff2abcd5")


