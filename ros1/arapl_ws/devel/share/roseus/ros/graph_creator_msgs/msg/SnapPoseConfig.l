;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::SnapPoseConfig)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'SnapPoseConfig (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::SNAPPOSECONFIG")
  (make-package "GRAPH_CREATOR_MSGS::SNAPPOSECONFIG"))

(in-package "ROS")
;;//! \htmlinclude SnapPoseConfig.msg.html


(defclass graph_creator_msgs::SnapPoseConfig
  :super ros::object
  :slots (_enable_for_vertices _enable_for_edges _enable_position_snap _enable_orientation_snap _position_snap_grid_size _orientation_snap_angle ))

(defmethod graph_creator_msgs::SnapPoseConfig
  (:init
   (&key
    ((:enable_for_vertices __enable_for_vertices) nil)
    ((:enable_for_edges __enable_for_edges) nil)
    ((:enable_position_snap __enable_position_snap) nil)
    ((:enable_orientation_snap __enable_orientation_snap) nil)
    ((:position_snap_grid_size __position_snap_grid_size) 0.0)
    ((:orientation_snap_angle __orientation_snap_angle) 0.0)
    )
   (send-super :init)
   (setq _enable_for_vertices __enable_for_vertices)
   (setq _enable_for_edges __enable_for_edges)
   (setq _enable_position_snap __enable_position_snap)
   (setq _enable_orientation_snap __enable_orientation_snap)
   (setq _position_snap_grid_size (float __position_snap_grid_size))
   (setq _orientation_snap_angle (float __orientation_snap_angle))
   self)
  (:enable_for_vertices
   (&optional (__enable_for_vertices :null))
   (if (not (eq __enable_for_vertices :null)) (setq _enable_for_vertices __enable_for_vertices)) _enable_for_vertices)
  (:enable_for_edges
   (&optional (__enable_for_edges :null))
   (if (not (eq __enable_for_edges :null)) (setq _enable_for_edges __enable_for_edges)) _enable_for_edges)
  (:enable_position_snap
   (&optional (__enable_position_snap :null))
   (if (not (eq __enable_position_snap :null)) (setq _enable_position_snap __enable_position_snap)) _enable_position_snap)
  (:enable_orientation_snap
   (&optional (__enable_orientation_snap :null))
   (if (not (eq __enable_orientation_snap :null)) (setq _enable_orientation_snap __enable_orientation_snap)) _enable_orientation_snap)
  (:position_snap_grid_size
   (&optional __position_snap_grid_size)
   (if __position_snap_grid_size (setq _position_snap_grid_size __position_snap_grid_size)) _position_snap_grid_size)
  (:orientation_snap_angle
   (&optional __orientation_snap_angle)
   (if __orientation_snap_angle (setq _orientation_snap_angle __orientation_snap_angle)) _orientation_snap_angle)
  (:serialization-length
   ()
   (+
    ;; bool _enable_for_vertices
    1
    ;; bool _enable_for_edges
    1
    ;; bool _enable_position_snap
    1
    ;; bool _enable_orientation_snap
    1
    ;; float64 _position_snap_grid_size
    8
    ;; float64 _orientation_snap_angle
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _enable_for_vertices
       (if _enable_for_vertices (write-byte -1 s) (write-byte 0 s))
     ;; bool _enable_for_edges
       (if _enable_for_edges (write-byte -1 s) (write-byte 0 s))
     ;; bool _enable_position_snap
       (if _enable_position_snap (write-byte -1 s) (write-byte 0 s))
     ;; bool _enable_orientation_snap
       (if _enable_orientation_snap (write-byte -1 s) (write-byte 0 s))
     ;; float64 _position_snap_grid_size
       (sys::poke _position_snap_grid_size (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _orientation_snap_angle
       (sys::poke _orientation_snap_angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _enable_for_vertices
     (setq _enable_for_vertices (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _enable_for_edges
     (setq _enable_for_edges (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _enable_position_snap
     (setq _enable_position_snap (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _enable_orientation_snap
     (setq _enable_orientation_snap (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _position_snap_grid_size
     (setq _position_snap_grid_size (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _orientation_snap_angle
     (setq _orientation_snap_angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get graph_creator_msgs::SnapPoseConfig :md5sum-) "523ee3105beaf49ae3b84f7e22ff96ed")
(setf (get graph_creator_msgs::SnapPoseConfig :datatype-) "graph_creator_msgs/SnapPoseConfig")
(setf (get graph_creator_msgs::SnapPoseConfig :definition-)
      "bool enable_for_vertices            # Enable snap position and orientation for vertices
bool enable_for_edges               # Enable snap position and orientation for edge elements

bool enable_position_snap           # Whether to enable position snap
bool enable_orientation_snap        # Whether to enable orientation snap

float64 position_snap_grid_size     # Position snap grid size in meters
float64 orientation_snap_angle      # Orientation snap angle in radians 
")



(provide :graph_creator_msgs/SnapPoseConfig "523ee3105beaf49ae3b84f7e22ff96ed")


