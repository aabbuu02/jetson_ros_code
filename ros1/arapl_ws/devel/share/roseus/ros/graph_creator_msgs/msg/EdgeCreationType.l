;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::EdgeCreationType)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'EdgeCreationType (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE")
  (make-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE"))

(in-package "ROS")
;;//! \htmlinclude EdgeCreationType.msg.html


(intern "*EDGE_CREATION_TYPE_STRAIGHT_LINE*" (find-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE"))
(shadow '*EDGE_CREATION_TYPE_STRAIGHT_LINE* (find-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE"))
(defconstant graph_creator_msgs::EdgeCreationType::*EDGE_CREATION_TYPE_STRAIGHT_LINE* 0)
(intern "*EDGE_CREATION_TYPE_CUBIC_BEZIER*" (find-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE"))
(shadow '*EDGE_CREATION_TYPE_CUBIC_BEZIER* (find-package "GRAPH_CREATOR_MSGS::EDGECREATIONTYPE"))
(defconstant graph_creator_msgs::EdgeCreationType::*EDGE_CREATION_TYPE_CUBIC_BEZIER* 1)

(defun graph_creator_msgs::EdgeCreationType-to-symbol (const)
  (cond
        ((= const 0) 'graph_creator_msgs::EdgeCreationType::*EDGE_CREATION_TYPE_STRAIGHT_LINE*)
        ((= const 1) 'graph_creator_msgs::EdgeCreationType::*EDGE_CREATION_TYPE_CUBIC_BEZIER*)
        (t nil)))

(defclass graph_creator_msgs::EdgeCreationType
  :super ros::object
  :slots (_type ))

(defmethod graph_creator_msgs::EdgeCreationType
  (:init
   (&key
    ((:type __type) 0)
    )
   (send-super :init)
   (setq _type (round __type))
   self)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:serialization-length
   ()
   (+
    ;; uint8 _type
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _type
       (write-byte _type s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _type
     (setq _type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get graph_creator_msgs::EdgeCreationType :md5sum-) "ca84d608a8d470273fdf849e3d46708a")
(setf (get graph_creator_msgs::EdgeCreationType :datatype-) "graph_creator_msgs/EdgeCreationType")
(setf (get graph_creator_msgs::EdgeCreationType :definition-)
      "uint8 EDGE_CREATION_TYPE_STRAIGHT_LINE=0
uint8 EDGE_CREATION_TYPE_CUBIC_BEZIER=1

uint8 type
")



(provide :graph_creator_msgs/EdgeCreationType "ca84d608a8d470273fdf849e3d46708a")


