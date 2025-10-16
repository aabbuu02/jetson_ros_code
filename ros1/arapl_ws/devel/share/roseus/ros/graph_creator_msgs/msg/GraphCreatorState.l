;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::GraphCreatorState)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'GraphCreatorState (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORSTATE")
  (make-package "GRAPH_CREATOR_MSGS::GRAPHCREATORSTATE"))

(in-package "ROS")
;;//! \htmlinclude GraphCreatorState.msg.html


(defclass graph_creator_msgs::GraphCreatorState
  :super ros::object
  :slots (_graph_creator_mode _edge_creation_type _edge_direction_creation_type _snap_pose_config _all_vertices_locked _all_edges_locked ))

(defmethod graph_creator_msgs::GraphCreatorState
  (:init
   (&key
    ((:graph_creator_mode __graph_creator_mode) (instance graph_creator_msgs::GraphCreatorMode :init))
    ((:edge_creation_type __edge_creation_type) (instance graph_creator_msgs::EdgeCreationType :init))
    ((:edge_direction_creation_type __edge_direction_creation_type) (instance graph_creator_msgs::EdgeDirectionCreationType :init))
    ((:snap_pose_config __snap_pose_config) (instance graph_creator_msgs::SnapPoseConfig :init))
    ((:all_vertices_locked __all_vertices_locked) nil)
    ((:all_edges_locked __all_edges_locked) nil)
    )
   (send-super :init)
   (setq _graph_creator_mode __graph_creator_mode)
   (setq _edge_creation_type __edge_creation_type)
   (setq _edge_direction_creation_type __edge_direction_creation_type)
   (setq _snap_pose_config __snap_pose_config)
   (setq _all_vertices_locked __all_vertices_locked)
   (setq _all_edges_locked __all_edges_locked)
   self)
  (:graph_creator_mode
   (&rest __graph_creator_mode)
   (if (keywordp (car __graph_creator_mode))
       (send* _graph_creator_mode __graph_creator_mode)
     (progn
       (if __graph_creator_mode (setq _graph_creator_mode (car __graph_creator_mode)))
       _graph_creator_mode)))
  (:edge_creation_type
   (&rest __edge_creation_type)
   (if (keywordp (car __edge_creation_type))
       (send* _edge_creation_type __edge_creation_type)
     (progn
       (if __edge_creation_type (setq _edge_creation_type (car __edge_creation_type)))
       _edge_creation_type)))
  (:edge_direction_creation_type
   (&rest __edge_direction_creation_type)
   (if (keywordp (car __edge_direction_creation_type))
       (send* _edge_direction_creation_type __edge_direction_creation_type)
     (progn
       (if __edge_direction_creation_type (setq _edge_direction_creation_type (car __edge_direction_creation_type)))
       _edge_direction_creation_type)))
  (:snap_pose_config
   (&rest __snap_pose_config)
   (if (keywordp (car __snap_pose_config))
       (send* _snap_pose_config __snap_pose_config)
     (progn
       (if __snap_pose_config (setq _snap_pose_config (car __snap_pose_config)))
       _snap_pose_config)))
  (:all_vertices_locked
   (&optional (__all_vertices_locked :null))
   (if (not (eq __all_vertices_locked :null)) (setq _all_vertices_locked __all_vertices_locked)) _all_vertices_locked)
  (:all_edges_locked
   (&optional (__all_edges_locked :null))
   (if (not (eq __all_edges_locked :null)) (setq _all_edges_locked __all_edges_locked)) _all_edges_locked)
  (:serialization-length
   ()
   (+
    ;; graph_creator_msgs/GraphCreatorMode _graph_creator_mode
    (send _graph_creator_mode :serialization-length)
    ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
    (send _edge_creation_type :serialization-length)
    ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_creation_type
    (send _edge_direction_creation_type :serialization-length)
    ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
    (send _snap_pose_config :serialization-length)
    ;; bool _all_vertices_locked
    1
    ;; bool _all_edges_locked
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; graph_creator_msgs/GraphCreatorMode _graph_creator_mode
       (send _graph_creator_mode :serialize s)
     ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
       (send _edge_creation_type :serialize s)
     ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_creation_type
       (send _edge_direction_creation_type :serialize s)
     ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
       (send _snap_pose_config :serialize s)
     ;; bool _all_vertices_locked
       (if _all_vertices_locked (write-byte -1 s) (write-byte 0 s))
     ;; bool _all_edges_locked
       (if _all_edges_locked (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; graph_creator_msgs/GraphCreatorMode _graph_creator_mode
     (send _graph_creator_mode :deserialize buf ptr-) (incf ptr- (send _graph_creator_mode :serialization-length))
   ;; graph_creator_msgs/EdgeCreationType _edge_creation_type
     (send _edge_creation_type :deserialize buf ptr-) (incf ptr- (send _edge_creation_type :serialization-length))
   ;; graph_creator_msgs/EdgeDirectionCreationType _edge_direction_creation_type
     (send _edge_direction_creation_type :deserialize buf ptr-) (incf ptr- (send _edge_direction_creation_type :serialization-length))
   ;; graph_creator_msgs/SnapPoseConfig _snap_pose_config
     (send _snap_pose_config :deserialize buf ptr-) (incf ptr- (send _snap_pose_config :serialization-length))
   ;; bool _all_vertices_locked
     (setq _all_vertices_locked (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _all_edges_locked
     (setq _all_edges_locked (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get graph_creator_msgs::GraphCreatorState :md5sum-) "883f7fb23a6fd8276cdc11e15bd98652")
(setf (get graph_creator_msgs::GraphCreatorState :datatype-) "graph_creator_msgs/GraphCreatorState")
(setf (get graph_creator_msgs::GraphCreatorState :definition-)
      "graph_creator_msgs/GraphCreatorMode graph_creator_mode
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
float64 orientation_snap_angle      # Orientation snap angle in radians 
")



(provide :graph_creator_msgs/GraphCreatorState "883f7fb23a6fd8276cdc11e15bd98652")


