;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::Edge)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'Edge (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::EDGE")
  (make-package "GRAPH_MSGS::EDGE"))

(in-package "ROS")
;;//! \htmlinclude Edge.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*STRAIGHT_LINE*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*STRAIGHT_LINE* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*STRAIGHT_LINE* 0)
(intern "*CUBIC_BEZIER*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*CUBIC_BEZIER* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*CUBIC_BEZIER* 1)
(intern "*FORWARD*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*FORWARD* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*FORWARD* 0)
(intern "*REVERSE*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*REVERSE* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*REVERSE* 1)
(intern "*BIDIRECTIONAL*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*BIDIRECTIONAL* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*BIDIRECTIONAL* 2)
(intern "*CREATED*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*CREATED* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*CREATED* 0)
(intern "*GENERATED*" (find-package "GRAPH_MSGS::EDGE"))
(shadow '*GENERATED* (find-package "GRAPH_MSGS::EDGE"))
(defconstant graph_msgs::Edge::*GENERATED* 1)

(defun graph_msgs::Edge-to-symbol (const)
  (cond
        ((= const 0) 'graph_msgs::Edge::*STRAIGHT_LINE*)
        ((= const 1) 'graph_msgs::Edge::*CUBIC_BEZIER*)
        ((= const 0) 'graph_msgs::Edge::*FORWARD*)
        ((= const 1) 'graph_msgs::Edge::*REVERSE*)
        ((= const 2) 'graph_msgs::Edge::*BIDIRECTIONAL*)
        ((= const 0) 'graph_msgs::Edge::*CREATED*)
        ((= const 1) 'graph_msgs::Edge::*GENERATED*)
        (t nil)))

(defclass graph_msgs::Edge
  :super ros::object
  :slots (_name _alias _type _edge_direction_type _creation_type _source_vertex_id _target_vertex_id _length _cost_factor _bidirectional _independent_orientation _control_points _control_orientation _poses _properties ))

(defmethod graph_msgs::Edge
  (:init
   (&key
    ((:name __name) "")
    ((:alias __alias) "")
    ((:type __type) 0)
    ((:edge_direction_type __edge_direction_type) 0)
    ((:creation_type __creation_type) 0)
    ((:source_vertex_id __source_vertex_id) 0)
    ((:target_vertex_id __target_vertex_id) 0)
    ((:length __length) 0.0)
    ((:cost_factor __cost_factor) 0.0)
    ((:bidirectional __bidirectional) nil)
    ((:independent_orientation __independent_orientation) nil)
    ((:control_points __control_points) ())
    ((:control_orientation __control_orientation) (instance geometry_msgs::Pose :init))
    ((:poses __poses) (instance geometry_msgs::PoseArray :init))
    ((:properties __properties) ())
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _alias (string __alias))
   (setq _type (round __type))
   (setq _edge_direction_type (round __edge_direction_type))
   (setq _creation_type (round __creation_type))
   (setq _source_vertex_id (round __source_vertex_id))
   (setq _target_vertex_id (round __target_vertex_id))
   (setq _length (float __length))
   (setq _cost_factor (float __cost_factor))
   (setq _bidirectional __bidirectional)
   (setq _independent_orientation __independent_orientation)
   (setq _control_points __control_points)
   (setq _control_orientation __control_orientation)
   (setq _poses __poses)
   (setq _properties __properties)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:alias
   (&optional __alias)
   (if __alias (setq _alias __alias)) _alias)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:edge_direction_type
   (&optional __edge_direction_type)
   (if __edge_direction_type (setq _edge_direction_type __edge_direction_type)) _edge_direction_type)
  (:creation_type
   (&optional __creation_type)
   (if __creation_type (setq _creation_type __creation_type)) _creation_type)
  (:source_vertex_id
   (&optional __source_vertex_id)
   (if __source_vertex_id (setq _source_vertex_id __source_vertex_id)) _source_vertex_id)
  (:target_vertex_id
   (&optional __target_vertex_id)
   (if __target_vertex_id (setq _target_vertex_id __target_vertex_id)) _target_vertex_id)
  (:length
   (&optional __length)
   (if __length (setq _length __length)) _length)
  (:cost_factor
   (&optional __cost_factor)
   (if __cost_factor (setq _cost_factor __cost_factor)) _cost_factor)
  (:bidirectional
   (&optional (__bidirectional :null))
   (if (not (eq __bidirectional :null)) (setq _bidirectional __bidirectional)) _bidirectional)
  (:independent_orientation
   (&optional (__independent_orientation :null))
   (if (not (eq __independent_orientation :null)) (setq _independent_orientation __independent_orientation)) _independent_orientation)
  (:control_points
   (&rest __control_points)
   (if (keywordp (car __control_points))
       (send* _control_points __control_points)
     (progn
       (if __control_points (setq _control_points (car __control_points)))
       _control_points)))
  (:control_orientation
   (&rest __control_orientation)
   (if (keywordp (car __control_orientation))
       (send* _control_orientation __control_orientation)
     (progn
       (if __control_orientation (setq _control_orientation (car __control_orientation)))
       _control_orientation)))
  (:poses
   (&rest __poses)
   (if (keywordp (car __poses))
       (send* _poses __poses)
     (progn
       (if __poses (setq _poses (car __poses)))
       _poses)))
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
    ;; string _name
    4 (length _name)
    ;; string _alias
    4 (length _alias)
    ;; uint8 _type
    1
    ;; uint8 _edge_direction_type
    1
    ;; uint8 _creation_type
    1
    ;; uint32 _source_vertex_id
    4
    ;; uint32 _target_vertex_id
    4
    ;; float64 _length
    8
    ;; float64 _cost_factor
    8
    ;; bool _bidirectional
    1
    ;; bool _independent_orientation
    1
    ;; geometry_msgs/Pose[] _control_points
    (apply #'+ (send-all _control_points :serialization-length)) 4
    ;; geometry_msgs/Pose _control_orientation
    (send _control_orientation :serialization-length)
    ;; geometry_msgs/PoseArray _poses
    (send _poses :serialization-length)
    ;; graph_msgs/Property[] _properties
    (apply #'+ (send-all _properties :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string _alias
       (write-long (length _alias) s) (princ _alias s)
     ;; uint8 _type
       (write-byte _type s)
     ;; uint8 _edge_direction_type
       (write-byte _edge_direction_type s)
     ;; uint8 _creation_type
       (write-byte _creation_type s)
     ;; uint32 _source_vertex_id
       (write-long _source_vertex_id s)
     ;; uint32 _target_vertex_id
       (write-long _target_vertex_id s)
     ;; float64 _length
       (sys::poke _length (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _cost_factor
       (sys::poke _cost_factor (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _bidirectional
       (if _bidirectional (write-byte -1 s) (write-byte 0 s))
     ;; bool _independent_orientation
       (if _independent_orientation (write-byte -1 s) (write-byte 0 s))
     ;; geometry_msgs/Pose[] _control_points
     (write-long (length _control_points) s)
     (dolist (elem _control_points)
       (send elem :serialize s)
       )
     ;; geometry_msgs/Pose _control_orientation
       (send _control_orientation :serialize s)
     ;; geometry_msgs/PoseArray _poses
       (send _poses :serialize s)
     ;; graph_msgs/Property[] _properties
     (write-long (length _properties) s)
     (dolist (elem _properties)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _alias
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _alias (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _type
     (setq _type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _edge_direction_type
     (setq _edge_direction_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _creation_type
     (setq _creation_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint32 _source_vertex_id
     (setq _source_vertex_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _target_vertex_id
     (setq _target_vertex_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _length
     (setq _length (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _cost_factor
     (setq _cost_factor (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _bidirectional
     (setq _bidirectional (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _independent_orientation
     (setq _independent_orientation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; geometry_msgs/Pose[] _control_points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _control_points (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _control_points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/Pose _control_orientation
     (send _control_orientation :deserialize buf ptr-) (incf ptr- (send _control_orientation :serialization-length))
   ;; geometry_msgs/PoseArray _poses
     (send _poses :deserialize buf ptr-) (incf ptr- (send _poses :serialization-length))
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

(setf (get graph_msgs::Edge :md5sum-) "7db65fe0ed203a54cf7e26bd678adbcf")
(setf (get graph_msgs::Edge :datatype-) "graph_msgs/Edge")
(setf (get graph_msgs::Edge :definition-)
      "# Edge types
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
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

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
MSG: graph_msgs/Property
string key
string value
")



(provide :graph_msgs/Edge "7db65fe0ed203a54cf7e26bd678adbcf")


