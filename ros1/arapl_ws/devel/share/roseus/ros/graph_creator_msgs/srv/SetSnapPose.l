;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SetSnapPose)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SetSnapPose (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SETSNAPPOSE")
  (make-package "GRAPH_CREATOR_MSGS::SETSNAPPOSE"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETSNAPPOSEREQUEST")
  (make-package "GRAPH_CREATOR_MSGS::SETSNAPPOSEREQUEST"))
(unless (find-package "GRAPH_CREATOR_MSGS::SETSNAPPOSERESPONSE")
  (make-package "GRAPH_CREATOR_MSGS::SETSNAPPOSERESPONSE"))

(in-package "ROS")





(defclass graph_creator_msgs::SetSnapPoseRequest
  :super ros::object
  :slots (_snap_pose_config ))

(defmethod graph_creator_msgs::SetSnapPoseRequest
  (:init
   (&key
    ((:snap_pose_config __snap_pose_config) (instance graph_creator_msgs::SnapPoseConfig :init))
    )
   (send-super :init)
   (setq _snap_pose_config __snap_pose_config)
   self)
  (:snap_pose_config
   (&rest __snap_pose_config)
   (if (keywordp (car __snap_pose_config))
       (send* _snap_pose_config __snap_pose_config)
     (progn
       (if __snap_pose_config (setq _snap_pose_config (car __snap_pose_config)))
       _snap_pose_config)))
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
    (send _snap_pose_config :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
       (send _snap_pose_config :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
     (send _snap_pose_config :deserialize buf ptr-) (incf ptr- (send _snap_pose_config :serialization-length))
   ;;
   self)
  )

(defclass graph_creator_msgs::SetSnapPoseResponse
  :super ros::object
  :slots (_success _message ))

(defmethod graph_creator_msgs::SetSnapPoseResponse
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

(defclass graph_creator_msgs::SetSnapPose
  :super ros::object
  :slots ())

(setf (get graph_creator_msgs::SetSnapPose :md5sum-) "5d5ee450554cf1a819df60529bb19a46")
(setf (get graph_creator_msgs::SetSnapPose :datatype-) "graph_creator_msgs/SetSnapPose")
(setf (get graph_creator_msgs::SetSnapPose :request) graph_creator_msgs::SetSnapPoseRequest)
(setf (get graph_creator_msgs::SetSnapPose :response) graph_creator_msgs::SetSnapPoseResponse)

(defmethod graph_creator_msgs::SetSnapPoseRequest
  (:response () (instance graph_creator_msgs::SetSnapPoseResponse :init)))

(setf (get graph_creator_msgs::SetSnapPoseRequest :md5sum-) "5d5ee450554cf1a819df60529bb19a46")
(setf (get graph_creator_msgs::SetSnapPoseRequest :datatype-) "graph_creator_msgs/SetSnapPoseRequest")
(setf (get graph_creator_msgs::SetSnapPoseRequest :definition-)
      "graph_creator_msgs/SnapPoseConfig snap_pose_config

================================================================================
MSG: graph_creator_msgs/SnapPoseConfig
bool enable_for_vertices            # Enable snap position and orientation for vertices
bool enable_for_edges               # Enable snap position and orientation for edge elements

bool enable_position_snap           # Whether to enable position snap
bool enable_orientation_snap        # Whether to enable orientation snap

float64 position_snap_grid_size     # Position snap grid size in meters
---
bool success
string message
")

(setf (get graph_creator_msgs::SetSnapPoseResponse :md5sum-) "5d5ee450554cf1a819df60529bb19a46")
(setf (get graph_creator_msgs::SetSnapPoseResponse :datatype-) "graph_creator_msgs/SetSnapPoseResponse")
(setf (get graph_creator_msgs::SetSnapPoseResponse :definition-)
      "graph_creator_msgs/SnapPoseConfig snap_pose_config

================================================================================
MSG: graph_creator_msgs/SnapPoseConfig
bool enable_for_vertices            # Enable snap position and orientation for vertices
bool enable_for_edges               # Enable snap position and orientation for edge elements

bool enable_position_snap           # Whether to enable position snap
bool enable_orientation_snap        # Whether to enable orientation snap

float64 position_snap_grid_size     # Position snap grid size in meters
---
bool success
string message
")



(provide :graph_creator_msgs/SetSnapPose "5d5ee450554cf1a819df60529bb19a46")


