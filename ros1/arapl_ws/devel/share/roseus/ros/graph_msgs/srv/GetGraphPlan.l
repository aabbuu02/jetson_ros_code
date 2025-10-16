;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::GetGraphPlan)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'GetGraphPlan (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::GETGRAPHPLAN")
  (make-package "GRAPH_MSGS::GETGRAPHPLAN"))
(unless (find-package "GRAPH_MSGS::GETGRAPHPLANREQUEST")
  (make-package "GRAPH_MSGS::GETGRAPHPLANREQUEST"))
(unless (find-package "GRAPH_MSGS::GETGRAPHPLANRESPONSE")
  (make-package "GRAPH_MSGS::GETGRAPHPLANRESPONSE"))

(in-package "ROS")



(if (not (find-package "NAV_MSGS"))
  (ros::roseus-add-msgs "nav_msgs"))


(defclass graph_msgs::GetGraphPlanRequest
  :super ros::object
  :slots (_source_id _target_id _ignore_goal_orientation _ignore_path_orientation ))

(defmethod graph_msgs::GetGraphPlanRequest
  (:init
   (&key
    ((:source_id __source_id) 0)
    ((:target_id __target_id) 0)
    ((:ignore_goal_orientation __ignore_goal_orientation) nil)
    ((:ignore_path_orientation __ignore_path_orientation) nil)
    )
   (send-super :init)
   (setq _source_id (round __source_id))
   (setq _target_id (round __target_id))
   (setq _ignore_goal_orientation __ignore_goal_orientation)
   (setq _ignore_path_orientation __ignore_path_orientation)
   self)
  (:source_id
   (&optional __source_id)
   (if __source_id (setq _source_id __source_id)) _source_id)
  (:target_id
   (&optional __target_id)
   (if __target_id (setq _target_id __target_id)) _target_id)
  (:ignore_goal_orientation
   (&optional (__ignore_goal_orientation :null))
   (if (not (eq __ignore_goal_orientation :null)) (setq _ignore_goal_orientation __ignore_goal_orientation)) _ignore_goal_orientation)
  (:ignore_path_orientation
   (&optional (__ignore_path_orientation :null))
   (if (not (eq __ignore_path_orientation :null)) (setq _ignore_path_orientation __ignore_path_orientation)) _ignore_path_orientation)
  (:serialization-length
   ()
   (+
    ;; uint32 _source_id
    4
    ;; uint32 _target_id
    4
    ;; bool _ignore_goal_orientation
    1
    ;; bool _ignore_path_orientation
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _source_id
       (write-long _source_id s)
     ;; uint32 _target_id
       (write-long _target_id s)
     ;; bool _ignore_goal_orientation
       (if _ignore_goal_orientation (write-byte -1 s) (write-byte 0 s))
     ;; bool _ignore_path_orientation
       (if _ignore_path_orientation (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _source_id
     (setq _source_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _target_id
     (setq _target_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _ignore_goal_orientation
     (setq _ignore_goal_orientation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _ignore_path_orientation
     (setq _ignore_path_orientation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass graph_msgs::GetGraphPlanResponse
  :super ros::object
  :slots (_vertices_in_plan _plan _plan_distance _success _message ))

(defmethod graph_msgs::GetGraphPlanResponse
  (:init
   (&key
    ((:vertices_in_plan __vertices_in_plan) ())
    ((:plan __plan) (instance nav_msgs::Path :init))
    ((:plan_distance __plan_distance) 0.0)
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _vertices_in_plan __vertices_in_plan)
   (setq _plan __plan)
   (setq _plan_distance (float __plan_distance))
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:vertices_in_plan
   (&rest __vertices_in_plan)
   (if (keywordp (car __vertices_in_plan))
       (send* _vertices_in_plan __vertices_in_plan)
     (progn
       (if __vertices_in_plan (setq _vertices_in_plan (car __vertices_in_plan)))
       _vertices_in_plan)))
  (:plan
   (&rest __plan)
   (if (keywordp (car __plan))
       (send* _plan __plan)
     (progn
       (if __plan (setq _plan (car __plan)))
       _plan)))
  (:plan_distance
   (&optional __plan_distance)
   (if __plan_distance (setq _plan_distance __plan_distance)) _plan_distance)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; graph_msgs/Vertex[] _vertices_in_plan
    (apply #'+ (send-all _vertices_in_plan :serialization-length)) 4
    ;; nav_msgs/Path _plan
    (send _plan :serialization-length)
    ;; float64 _plan_distance
    8
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_msgs/Vertex[] _vertices_in_plan
     (write-long (length _vertices_in_plan) s)
     (dolist (elem _vertices_in_plan)
       (send elem :serialize s)
       )
     ;; nav_msgs/Path _plan
       (send _plan :serialize s)
     ;; float64 _plan_distance
       (sys::poke _plan_distance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_msgs/Vertex[] _vertices_in_plan
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _vertices_in_plan (let (r) (dotimes (i n) (push (instance graph_msgs::Vertex :init) r)) r))
     (dolist (elem- _vertices_in_plan)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; nav_msgs/Path _plan
     (send _plan :deserialize buf ptr-) (incf ptr- (send _plan :serialization-length))
   ;; float64 _plan_distance
     (setq _plan_distance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass graph_msgs::GetGraphPlan
  :super ros::object
  :slots ())

(setf (get graph_msgs::GetGraphPlan :md5sum-) "246031edd693b7aff99fb77edb89c199")
(setf (get graph_msgs::GetGraphPlan :datatype-) "graph_msgs/GetGraphPlan")
(setf (get graph_msgs::GetGraphPlan :request) graph_msgs::GetGraphPlanRequest)
(setf (get graph_msgs::GetGraphPlan :response) graph_msgs::GetGraphPlanResponse)

(defmethod graph_msgs::GetGraphPlanRequest
  (:response () (instance graph_msgs::GetGraphPlanResponse :init)))

(setf (get graph_msgs::GetGraphPlanRequest :md5sum-) "246031edd693b7aff99fb77edb89c199")
(setf (get graph_msgs::GetGraphPlanRequest :datatype-) "graph_msgs/GetGraphPlanRequest")
(setf (get graph_msgs::GetGraphPlanRequest :definition-)
      "# Source and destination IDs
uint32 source_id
uint32 target_id
bool ignore_goal_orientation
bool ignore_path_orientation
---
Vertex[] vertices_in_plan       # The vertices that are part of the plan
nav_msgs/Path plan              # The plan from the pre-defined graph curves
float64 plan_distance           # Total plan distance

bool success                    # Whether planning was success
string message                  # Messages related to planning

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
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

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
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose
")

(setf (get graph_msgs::GetGraphPlanResponse :md5sum-) "246031edd693b7aff99fb77edb89c199")
(setf (get graph_msgs::GetGraphPlanResponse :datatype-) "graph_msgs/GetGraphPlanResponse")
(setf (get graph_msgs::GetGraphPlanResponse :definition-)
      "# Source and destination IDs
uint32 source_id
uint32 target_id
bool ignore_goal_orientation
bool ignore_path_orientation
---
Vertex[] vertices_in_plan       # The vertices that are part of the plan
nav_msgs/Path plan              # The plan from the pre-defined graph curves
float64 plan_distance           # Total plan distance

bool success                    # Whether planning was success
string message                  # Messages related to planning

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
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

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
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose
")



(provide :graph_msgs/GetGraphPlan "246031edd693b7aff99fb77edb89c199")


