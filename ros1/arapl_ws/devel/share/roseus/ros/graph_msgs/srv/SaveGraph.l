;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::SaveGraph)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'SaveGraph (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::SAVEGRAPH")
  (make-package "GRAPH_MSGS::SAVEGRAPH"))
(unless (find-package "GRAPH_MSGS::SAVEGRAPHREQUEST")
  (make-package "GRAPH_MSGS::SAVEGRAPHREQUEST"))
(unless (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE")
  (make-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))

(in-package "ROS")





(defclass graph_msgs::SaveGraphRequest
  :super ros::object
  :slots (_graph_file_name _save_graph_url ))

(defmethod graph_msgs::SaveGraphRequest
  (:init
   (&key
    ((:graph_file_name __graph_file_name) "")
    ((:save_graph_url __save_graph_url) "")
    )
   (send-super :init)
   (setq _graph_file_name (string __graph_file_name))
   (setq _save_graph_url (string __save_graph_url))
   self)
  (:graph_file_name
   (&optional __graph_file_name)
   (if __graph_file_name (setq _graph_file_name __graph_file_name)) _graph_file_name)
  (:save_graph_url
   (&optional __save_graph_url)
   (if __save_graph_url (setq _save_graph_url __save_graph_url)) _save_graph_url)
  (:serialization-length
   ()
   (+
    ;; string _graph_file_name
    4 (length _graph_file_name)
    ;; string _save_graph_url
    4 (length _save_graph_url)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _graph_file_name
       (write-long (length _graph_file_name) s) (princ _graph_file_name s)
     ;; string _save_graph_url
       (write-long (length _save_graph_url) s) (princ _save_graph_url s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _graph_file_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _graph_file_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _save_graph_url
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _save_graph_url (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(intern "*RESULT_SUCCESS*" (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(shadow '*RESULT_SUCCESS* (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(defconstant graph_msgs::SaveGraphResponse::*RESULT_SUCCESS* 0)
(intern "*RESULT_GRAPH_ALREADY_EXISTS*" (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(shadow '*RESULT_GRAPH_ALREADY_EXISTS* (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(defconstant graph_msgs::SaveGraphResponse::*RESULT_GRAPH_ALREADY_EXISTS* 1)
(intern "*RESULT_INVALID_GRAPH_FILE_NAME*" (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(shadow '*RESULT_INVALID_GRAPH_FILE_NAME* (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(defconstant graph_msgs::SaveGraphResponse::*RESULT_INVALID_GRAPH_FILE_NAME* 2)
(intern "*RESULT_INVALID_GRAPH_FILE_PATH*" (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(shadow '*RESULT_INVALID_GRAPH_FILE_PATH* (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(defconstant graph_msgs::SaveGraphResponse::*RESULT_INVALID_GRAPH_FILE_PATH* 3)
(intern "*RESULT_UNDEFINED_FAILURE*" (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(shadow '*RESULT_UNDEFINED_FAILURE* (find-package "GRAPH_MSGS::SAVEGRAPHRESPONSE"))
(defconstant graph_msgs::SaveGraphResponse::*RESULT_UNDEFINED_FAILURE* 255)

(defun graph_msgs::SaveGraphResponse-to-symbol (const)
  (cond
        ((= const 0) 'graph_msgs::SaveGraphResponse::*RESULT_SUCCESS*)
        ((= const 1) 'graph_msgs::SaveGraphResponse::*RESULT_GRAPH_ALREADY_EXISTS*)
        ((= const 2) 'graph_msgs::SaveGraphResponse::*RESULT_INVALID_GRAPH_FILE_NAME*)
        ((= const 3) 'graph_msgs::SaveGraphResponse::*RESULT_INVALID_GRAPH_FILE_PATH*)
        ((= const 255) 'graph_msgs::SaveGraphResponse::*RESULT_UNDEFINED_FAILURE*)
        (t nil)))

(defclass graph_msgs::SaveGraphResponse
  :super ros::object
  :slots (_graph _result ))

(defmethod graph_msgs::SaveGraphResponse
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

(defclass graph_msgs::SaveGraph
  :super ros::object
  :slots ())

(setf (get graph_msgs::SaveGraph :md5sum-) "70cd2cf58e0678fd28ff2029ea82cfd1")
(setf (get graph_msgs::SaveGraph :datatype-) "graph_msgs/SaveGraph")
(setf (get graph_msgs::SaveGraph :request) graph_msgs::SaveGraphRequest)
(setf (get graph_msgs::SaveGraph :response) graph_msgs::SaveGraphResponse)

(defmethod graph_msgs::SaveGraphRequest
  (:response () (instance graph_msgs::SaveGraphResponse :init)))

(setf (get graph_msgs::SaveGraphRequest :md5sum-) "70cd2cf58e0678fd28ff2029ea82cfd1")
(setf (get graph_msgs::SaveGraphRequest :datatype-) "graph_msgs/SaveGraphRequest")
(setf (get graph_msgs::SaveGraphRequest :definition-)
      "# Either use absolute path to save the graph file like /path/to/save/ or
# use a relative path to a package. For example, package_name/graphs/.
# In case of graph file save being relative to a package, use of '/' is not required.
# The graph name is used to create the filename, for example, graph_file_name.graphml.
# Finally, the graph will be save at save_graph_url/graph_file_name.graphml. 
string graph_file_name
string save_graph_url
---
# Result code defintions
uint8 RESULT_SUCCESS=0
uint8 RESULT_GRAPH_ALREADY_EXISTS=1
uint8 RESULT_INVALID_GRAPH_FILE_NAME=2
uint8 RESULT_INVALID_GRAPH_FILE_PATH=3
uint8 RESULT_UNDEFINED_FAILURE=255

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

(setf (get graph_msgs::SaveGraphResponse :md5sum-) "70cd2cf58e0678fd28ff2029ea82cfd1")
(setf (get graph_msgs::SaveGraphResponse :datatype-) "graph_msgs/SaveGraphResponse")
(setf (get graph_msgs::SaveGraphResponse :definition-)
      "# Either use absolute path to save the graph file like /path/to/save/ or
# use a relative path to a package. For example, package_name/graphs/.
# In case of graph file save being relative to a package, use of '/' is not required.
# The graph name is used to create the filename, for example, graph_file_name.graphml.
# Finally, the graph will be save at save_graph_url/graph_file_name.graphml. 
string graph_file_name
string save_graph_url
---
# Result code defintions
uint8 RESULT_SUCCESS=0
uint8 RESULT_GRAPH_ALREADY_EXISTS=1
uint8 RESULT_INVALID_GRAPH_FILE_NAME=2
uint8 RESULT_INVALID_GRAPH_FILE_PATH=3
uint8 RESULT_UNDEFINED_FAILURE=255

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



(provide :graph_msgs/SaveGraph "70cd2cf58e0678fd28ff2029ea82cfd1")


