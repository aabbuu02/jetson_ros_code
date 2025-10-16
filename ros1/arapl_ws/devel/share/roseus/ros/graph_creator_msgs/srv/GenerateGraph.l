;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::GenerateGraph)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'GenerateGraph (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::GENERATEGRAPH")
  (make-package "GRAPH_CREATOR_MSGS::GENERATEGRAPH"))
(unless (find-package "GRAPH_CREATOR_MSGS::GENERATEGRAPHREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::GENERATEGRAPHREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::GENERATEGRAPHRESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::GENERATEGRAPHRESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::GenerateGraphRequest
  :super ros::object
  :slots (_graph_generator_config ))

(defmethod graph_creator_msgs::GenerateGraphRequest
  (:init
   (&key
    ((:graph_generator_config __graph_generator_config) (instance graph_creator_msgs::GraphGeneratorConfig :init))
    )
   (send-super :init)
   (setq _graph_generator_config __graph_generator_config)
   self)
  (:graph_generator_config
   (&rest __graph_generator_config)
   (if (keywordp (car __graph_generator_config))
       (send* _graph_generator_config __graph_generator_config)
     (progn
       (if __graph_generator_config (setq _graph_generator_config (car __graph_generator_config)))
       _graph_generator_config)))
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/GraphGeneratorConfig _graph_generator_config
    (send _graph_generator_config :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/GraphGeneratorConfig _graph_generator_config
       (send _graph_generator_config :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/GraphGeneratorConfig _graph_generator_config
     (send _graph_generator_config :deserialize buf ptr-) (incf ptr- (send _graph_generator_config :serialization-length))
   ;;
   self)
  )

(defclass graph_creator_msgs::GenerateGraphResponse
  :super ros::object
  :slots (_success _message ))

(defmethod graph_creator_msgs::GenerateGraphResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass graph_creator_msgs::GenerateGraph
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::GenerateGraph :md5sum-) "d85b195d5e52e94013ad042183fa42f4")
(setf (get graph_creator_msgs::GenerateGraph :datatype-) "graph_creator_msgs/GenerateGraph")
(setf (get graph_creator_msgs::GenerateGraph :request) graph_creator_msgs::GenerateGraphRequest)
(setf (get graph_creator_msgs::GenerateGraph :response) graph_creator_msgs::GenerateGraphResponse)

(defmethod graph_creator_msgs::GenerateGraphRequest
  (:response () (instance graph_creator_msgs::GenerateGraphResponse :init)))

(setf (get graph_creator_msgs::GenerateGraphRequest :md5sum-) "d85b195d5e52e94013ad042183fa42f4")
(setf (get graph_creator_msgs::GenerateGraphRequest :datatype-) "graph_creator_msgs/GenerateGraphRequest")
(setf (get graph_creator_msgs::GenerateGraphRequest :definition-)
      "GraphGeneratorConfig graph_generator_config

================================================================================
MSG: graph_creator_msgs/GraphGeneratorConfig
uint8 GRAPH_GENERATION_TYPE_GRID=0
uint8 GRAPH_GENERATION_TYPE_DXF=1

uint8 generation_type
EdgeCreationType edge_creation_type
EdgeDirectionCreationType edge_direction_type
bool ignore_vertex_orientation                      # Ignore vertex orientation
bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation
uint32 edge_count_threshold                         # Edge count threshold

# For generating graph from DXF files
string dxf_file_path                                # File paths can be either relative to a package or absolute
float32 scale_x
float32 scale_y

# For generating grid graphs
geometry_msgs/Pose start_pose
uint32 rows                                         # Rows are along Y-axis
uint32 columns                                      # Columns are along X-axis
float32 row_spacing                                 # Spacing between two vertices along the Y-axis
float32 column_spacing                              # Spacing between two vertics along the X-axis

================================================================================
MSG: graph_creator_msgs/EdgeCreationType
uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1

uint8 type
================================================================================
MSG: graph_creator_msgs/EdgeDirectionCreationType
uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2

uint8 direction_type


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
---
bool success
string message
")

(setf (get graph_creator_msgs::GenerateGraphResponse :md5sum-) "d85b195d5e52e94013ad042183fa42f4")
(setf (get graph_creator_msgs::GenerateGraphResponse :datatype-) "graph_creator_msgs/GenerateGraphResponse")
(setf (get graph_creator_msgs::GenerateGraphResponse :definition-)
      "GraphGeneratorConfig graph_generator_config

================================================================================
MSG: graph_creator_msgs/GraphGeneratorConfig
uint8 GRAPH_GENERATION_TYPE_GRID=0
uint8 GRAPH_GENERATION_TYPE_DXF=1

uint8 generation_type
EdgeCreationType edge_creation_type
EdgeDirectionCreationType edge_direction_type
bool ignore_vertex_orientation                      # Ignore vertex orientation
bool use_edge_count_threshold                       # Use edge count threshold to ignore orientation
uint32 edge_count_threshold                         # Edge count threshold

# For generating graph from DXF files
string dxf_file_path                                # File paths can be either relative to a package or absolute
float32 scale_x
float32 scale_y

# For generating grid graphs
geometry_msgs/Pose start_pose
uint32 rows                                         # Rows are along Y-axis
uint32 columns                                      # Columns are along X-axis
float32 row_spacing                                 # Spacing between two vertices along the Y-axis
float32 column_spacing                              # Spacing between two vertics along the X-axis

================================================================================
MSG: graph_creator_msgs/EdgeCreationType
uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1

uint8 type
================================================================================
MSG: graph_creator_msgs/EdgeDirectionCreationType
uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2

uint8 direction_type


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
---
bool success
string message
")



(provide :graph_creator_msgs/GenerateGraph "d85b195d5e52e94013ad042183fa42f4")


