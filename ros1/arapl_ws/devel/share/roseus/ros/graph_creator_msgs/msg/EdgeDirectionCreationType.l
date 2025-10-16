;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::EdgeDirectionCreationType)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'EdgeDirectionCreationType (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE")
  (make-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))

(in-package "ROS")
;;//! \htmlinclude EdgeDirectionCreationType.msg.html


(intern "*EDGE_DIRECTION_CREATION_TYPE_FORWARD*" (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(shadow '*EDGE_DIRECTION_CREATION_TYPE_FORWARD* (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(defconstant graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_FORWARD* 0)
(intern "*EDGE_DIRECTION_CREATION_TYPE_REVERSE*" (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(shadow '*EDGE_DIRECTION_CREATION_TYPE_REVERSE* (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(defconstant graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_REVERSE* 1)
(intern "*EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL*" (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(shadow '*EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL* (find-package "GRAPH_CREATOR_MSGS::EDGEDIRECTIONCREATIONTYPE"))
(defconstant graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL* 2)

(defun graph_creator_msgs::EdgeDirectionCreationType-to-symbol (const)
  (cond
        ((= const 0) 'graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_FORWARD*)
        ((= const 1) 'graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_REVERSE*)
        ((= const 2) 'graph_creator_msgs::EdgeDirectionCreationType::*EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL*)
        (t nil)))

(defclass graph_creator_msgs::EdgeDirectionCreationType
  :super ros::object
  :slots (_direction_type ))

(defmethod graph_creator_msgs::EdgeDirectionCreationType
  (:init
   (&key
    ((:direction_type __direction_type) 0)
    )
   (send-super :init)
   (setq _direction_type (round __direction_type))
   self)
  (:direction_type
   (&optional __direction_type)
   (if __direction_type (setq _direction_type __direction_type)) _direction_type)
  (:serialization-length
   ()
   (+
    ;; uint8 _direction_type
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _direction_type
       (write-byte _direction_type s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _direction_type
     (setq _direction_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get graph_creator_msgs::EdgeDirectionCreationType :md5sum-) "72ffc1009e4ad91bac1a2f601f8e57c1")
(setf (get graph_creator_msgs::EdgeDirectionCreationType :datatype-) "graph_creator_msgs/EdgeDirectionCreationType")
(setf (get graph_creator_msgs::EdgeDirectionCreationType :definition-)
      "uint8 EDGE_DIRECTION_CREATION_TYPE_FORWARD=0
uint8 EDGE_DIRECTION_CREATION_TYPE_REVERSE=1
uint8 EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL=2

uint8 direction_type


")



(provide :graph_creator_msgs/EdgeDirectionCreationType "72ffc1009e4ad91bac1a2f601f8e57c1")


