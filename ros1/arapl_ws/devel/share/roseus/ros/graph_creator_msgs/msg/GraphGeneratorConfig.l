;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::GraphGeneratorConfig)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'GraphGeneratorConfig (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG")
  (make-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG"))

(in-package "ROS")
;;//! \htmlinclude GraphGeneratorConfig.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*GRAPH_GENERATION_TYPE_GRID*" (find-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG"))
(shadow '*GRAPH_GENERATION_TYPE_GRID* (find-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG"))
(defconstant graph_creator_msgs::GraphGeneratorConfig::*GRAPH_GENERATION_TYPE_GRID* 0)
(intern "*GRAPH_GENERATION_TYPE_DXF*" (find-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG"))
(shadow '*GRAPH_GENERATION_TYPE_DXF* (find-package "GRAPH_CREATOR_MSGS::GRAPHGENERATORCONFIG"))
(defconstant graph_creator_msgs::GraphGeneratorConfig::*GRAPH_GENERATION_TYPE_DXF* 1)

(defun graph_creator_msgs::GraphGeneratorConfig-to-symbol (const)
  (cond
        ((= const 0) 'graph_creator_msgs::GraphGeneratorConfig::*GRAPH_GENERATION_TYPE_GRID*)
        ((= const 1) 'graph_creator_msgs::GraphGeneratorConfig::*GRAPH_GENERATION_TYPE_DXF*)
        (t nil)))

(defclass graph_creator_msgs::GraphGeneratorConfig
  :super ros::object
  :slots (_generation_type _edge_creation_type _edge_direction_type _ignore_vertex_orientation _use_edge_count_threshold _edge_count_threshold _dxf_file_path _scale_x _scale_y _start_pose _rows _columns _row_spacing _column_spacing ))

(defmethod graph_creator_msgs::GraphGeneratorConfig
  (:init
   (&key
    ((:generation_type __generation_type) 0)
    ((:edge_creation_type __edge_creation_type) (instance graph_creator_msgs::EdgeCreationType :init))
    ((:edge_direction_type __edge_direction_type) (instance graph_creator_msgs::EdgeDirectionCreationType :init))
    ((:ignore_vertex_orientation __ignore_vertex_orientation) nil)
    ((:use_edge_count_threshold __use_edge_count_threshold) nil)
    ((:edge_count_threshold __edge_count_threshold) 0)
    ((:dxf_file_path __dxf_file_path) "")
    ((:scale_x __scale_x) 0.0)
    ((:scale_y __scale_y) 0.0)
    ((:start_pose __start_pose) (instance geometry_msgs::Pose :init))
    ((:rows __rows) 0)
    ((:columns __columns) 0)
    ((:row_spacing __row_spacing) 0.0)
    ((:column_spacing __column_spacing) 0.0)
    )
   (send-super :init)
   (setq _generation_type (round __generation_type))
   (setq _edge_creation_type __edge_creation_type)
   (setq _edge_direction_type __edge_direction_type)
   (setq _ignore_vertex_orientation __ignore_vertex_orientation)
   (setq _use_edge_count_threshold __use_edge_count_threshold)
   (setq _edge_count_threshold (round __edge_count_threshold))
   (setq _dxf_file_path (string __dxf_file_path))
   (setq _scale_x (float __scale_x))
   (setq _scale_y (float __scale_y))
   (setq _start_pose __start_pose)
   (setq _rows (round __rows))
   (setq _columns (round __columns))
   (setq _row_spacing (float __row_spacing))
   (setq _column_spacing (float __column_spacing))
   self)
  (:generation_type
   (&optional __generation_type)
   (if __generation_type (setq _generation_type __generation_type)) _generation_type)
  (:edge_creation_type
   (&rest __edge_creation_type)
   (if (keywordp (car __edge_creation_type))
       (send* _edge_creation_type __edge_creation_type)
     (progn
       (if __edge_creation_type (setq _edge_creation_type (car __edge_creation_type)))
       _edge_creation_type)))
  (:edge_direction_type
   (&rest __edge_direction_type)
   (if (keywordp (car __edge_direction_type))
       (send* _edge_direction_type __edge_direction_type)
     (progn
       (if __edge_direction_type (setq _edge_direction_type (car __edge_direction_type)))
       _edge_direction_type)))
  (:ignore_vertex_orientation
   (&optional (__ignore_vertex_orientation :null))
   (if (not (eq __ignore_vertex_orientation :null)) (setq _ignore_vertex_orientation __ignore_vertex_orientation)) _ignore_vertex_orientation)
  (:use_edge_count_threshold
   (&optional (__use_edge_count_threshold :null))
   (if (not (eq __use_edge_count_threshold :null)) (setq _use_edge_count_threshold __use_edge_count_threshold)) _use_edge_count_threshold)
  (:edge_count_threshold
   (&optional __edge_count_threshold)
   (if __edge_count_threshold (setq _edge_count_threshold __edge_count_threshold)) _edge_count_threshold)
  (:dxf_file_path
   (&optional __dxf_file_path)
   (if __dxf_file_path (setq _dxf_file_path __dxf_file_path)) _dxf_file_path)
  (:scale_x
   (&optional __scale_x)
   (if __scale_x (setq _scale_x __scale_x)) _scale_x)
  (:scale_y
   (&optional __scale_y)
   (if __scale_y (setq _scale_y __scale_y)) _scale_y)
  (:start_pose
   (&rest __start_pose)
   (if (keywordp (car __start_pose))
       (send* _start_pose __start_pose)
     (progn
       (if __start_pose (setq _start_pose (car __start_pose)))
       _start_pose)))
  (:rows
   (&optional __rows)
   (if __rows (setq _rows __rows)) _rows)
  (:columns
   (&optional __columns)
   (if __columns (setq _columns __columns)) _columns)
  (:row_spacing
   (&optional __row_spacing)
   (if __row_spacing (setq _row_spacing __row_spacing)) _row_spacing)
  (:column_spacing
   (&optional __column_spacing)
   (if __column_spacing (setq _column_spacing __column_spacing)) _column_spacing)
  (:serialization-length
   ()
   (+
    ;; uint8 _generation_type
    1
    ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
    (send _edge_creation_type :serialization-length)
    ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_type
    (send _edge_direction_type :serialization-length)
    ;; bool _ignore_vertex_orientation
    1
    ;; bool _use_edge_count_threshold
    1
    ;; uint32 _edge_count_threshold
    4
    ;; string _dxf_file_path
    4 (length _dxf_file_path)
    ;; float32 _scale_x
    4
    ;; float32 _scale_y
    4
    ;; geometry_msgs/Pose _start_pose
    (send _start_pose :serialization-length)
    ;; uint32 _rows
    4
    ;; uint32 _columns
    4
    ;; float32 _row_spacing
    4
    ;; float32 _column_spacing
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _generation_type
       (write-byte _generation_type s)
     ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
       (send _edge_creation_type :serialize s)
     ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_type
       (send _edge_direction_type :serialize s)
     ;; bool _ignore_vertex_orientation
       (if _ignore_vertex_orientation (write-byte -1 s) (write-byte 0 s))
     ;; bool _use_edge_count_threshold
       (if _use_edge_count_threshold (write-byte -1 s) (write-byte 0 s))
     ;; uint32 _edge_count_threshold
       (write-long _edge_count_threshold s)
     ;; string _dxf_file_path
       (write-long (length _dxf_file_path) s) (princ _dxf_file_path s)
     ;; float32 _scale_x
       (sys::poke _scale_x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _scale_y
       (sys::poke _scale_y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; geometry_msgs/Pose _start_pose
       (send _start_pose :serialize s)
     ;; uint32 _rows
       (write-long _rows s)
     ;; uint32 _columns
       (write-long _columns s)
     ;; float32 _row_spacing
       (sys::poke _row_spacing (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _column_spacing
       (sys::poke _column_spacing (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _generation_type
     (setq _generation_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
     (send _edge_creation_type :deserialize buf ptr-) (incf ptr- (send _edge_creation_type :serialization-length))
   ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_type
     (send _edge_direction_type :deserialize buf ptr-) (incf ptr- (send _edge_direction_type :serialization-length))
   ;; bool _ignore_vertex_orientation
     (setq _ignore_vertex_orientation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _use_edge_count_threshold
     (setq _use_edge_count_threshold (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint32 _edge_count_threshold
     (setq _edge_count_threshold (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _dxf_file_path
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _dxf_file_path (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _scale_x
     (setq _scale_x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _scale_y
     (setq _scale_y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; geometry_msgs/Pose _start_pose
     (send _start_pose :deserialize buf ptr-) (incf ptr- (send _start_pose :serialization-length))
   ;; uint32 _rows
     (setq _rows (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _columns
     (setq _columns (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _row_spacing
     (setq _row_spacing (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _column_spacing
     (setq _column_spacing (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get graph_creator_msgs::GraphGeneratorConfig :md5sum-) "d549626c784b6f02d6bb8ede7bb25247")
(setf (get graph_creator_msgs::GraphGeneratorConfig :datatype-) "graph_creator_msgs/GraphGeneratorConfig")
(setf (get graph_creator_msgs::GraphGeneratorConfig :definition-)
      "uint8 GRAPH_GENERATION_TYPE_GRID=0
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

")



(provide :graph_creator_msgs/GraphGeneratorConfig "d549626c784b6f02d6bb8ede7bb25247")


