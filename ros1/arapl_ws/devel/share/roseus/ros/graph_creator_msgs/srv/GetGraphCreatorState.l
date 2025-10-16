;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::GetGraphCreatorState)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'GetGraphCreatorState (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATE")
  (make-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATE"))
(unless (find-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATEREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATEREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATERESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::GETGRAPHCREATORSTATERESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::GetGraphCreatorStateRequest
  :super ros::object
  :slots ())

(defmethod graph_creator_msgs::GetGraphCreatorStateRequest
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

(defclass graph_creator_msgs::GetGraphCreatorStateResponse
  :super ros::object
  :slots (_state _success _message ))

(defmethod graph_creator_msgs::GetGraphCreatorStateResponse
  (:init
   (&key
    ((:state __state) (instance graph_creator_msgs::GraphCreatorState :init))
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _state __state)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:state
   (&rest __state)
   (if (keywordp (car __state))
       (send* _state __state)
     (progn
       (if __state (setq _state (car __state)))
       _state)))
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/GraphCreatorState _state
    (send _state :serialization-length)
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/GraphCreatorState _state
       (send _state :serialize s)
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/GraphCreatorState _state
     (send _state :deserialize buf ptr-) (incf ptr- (send _state :serialization-length))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass graph_creator_msgs::GetGraphCreatorState
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::GetGraphCreatorState :md5sum-) "258429896b8cdbd7d95bd163ecc5ab51")
(setf (get graph_creator_msgs::GetGraphCreatorState :datatype-) "graph_creator_msgs/GetGraphCreatorState")
(setf (get graph_creator_msgs::GetGraphCreatorState :request) graph_creator_msgs::GetGraphCreatorStateRequest)
(setf (get graph_creator_msgs::GetGraphCreatorState :response) graph_creator_msgs::GetGraphCreatorStateResponse)

(defmethod graph_creator_msgs::GetGraphCreatorStateRequest
  (:response () (instance graph_creator_msgs::GetGraphCreatorStateResponse :init)))

(setf (get graph_creator_msgs::GetGraphCreatorStateRequest :md5sum-) "258429896b8cdbd7d95bd163ecc5ab51")
(setf (get graph_creator_msgs::GetGraphCreatorStateRequest :datatype-) "graph_creator_msgs/GetGraphCreatorStateRequest")
(setf (get graph_creator_msgs::GetGraphCreatorStateRequest :definition-)
      "---
graph_creator_msgs/GraphCreatorState state

bool success
string message

================================================================================
MSG: graph_creator_msgs/GraphCreatorState
graph_creator_msgs/GraphCreatorMode graph_creator_mode
graph_creator_msgs/EdgeCreationType edge_creation_type
graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type
graph_creator_msgs/SnapPoseConfig snap_pose_config
bool all_vertices_locked
bool all_edges_locked
================================================================================
MSG: graph_creator_msgs/GraphCreatorMode
uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1

uint8 mode

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
MSG: graph_creator_msgs/SnapPoseConfig
bool enable_for_vertices            # Enable snap position and orientation for vertices
bool enable_for_edges               # Enable snap position and orientation for edge elements

bool enable_position_snap           # Whether to enable position snap
bool enable_orientation_snap        # Whether to enable orientation snap

float64 position_snap_grid_size     # Position snap grid size in meters
")

(setf (get graph_creator_msgs::GetGraphCreatorStateResponse :md5sum-) "258429896b8cdbd7d95bd163ecc5ab51")
(setf (get graph_creator_msgs::GetGraphCreatorStateResponse :datatype-) "graph_creator_msgs/GetGraphCreatorStateResponse")
(setf (get graph_creator_msgs::GetGraphCreatorStateResponse :definition-)
      "---
graph_creator_msgs/GraphCreatorState state

bool success
string message

================================================================================
MSG: graph_creator_msgs/GraphCreatorState
graph_creator_msgs/GraphCreatorMode graph_creator_mode
graph_creator_msgs/EdgeCreationType edge_creation_type
graph_creator_msgs/EdgeDirectionCreationType edge_direction_creation_type
graph_creator_msgs/SnapPoseConfig snap_pose_config
bool all_vertices_locked
bool all_edges_locked
================================================================================
MSG: graph_creator_msgs/GraphCreatorMode
uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1

uint8 mode

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
MSG: graph_creator_msgs/SnapPoseConfig
bool enable_for_vertices            # Enable snap position and orientation for vertices
bool enable_for_edges               # Enable snap position and orientation for edge elements

bool enable_position_snap           # Whether to enable position snap
bool enable_orientation_snap        # Whether to enable orientation snap

float64 position_snap_grid_size     # Position snap grid size in meters
")



(provide :graph_creator_msgs/GetGraphCreatorState "258429896b8cdbd7d95bd163ecc5ab51")


