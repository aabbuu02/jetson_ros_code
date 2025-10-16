;; Auto-generated. Do not edit!


(when (boundp 'graph_creator_msgs::GraphCreatorMode)
  (if (not (find-package "GRAPH_CREATOR_MSGS"))
    (make-package "GRAPH_CREATOR_MSGS"))
  (shadow 'GraphCreatorMode (find-package "GRAPH_CREATOR_MSGS")))
(unless (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE")
  (make-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE"))

(in-package "ROS")
;;//! \htmlinclude GraphCreatorMode.msg.html


(intern "*GRAPH_CREATOR_MODE_CREATE_VERTICES*" (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE"))
(shadow '*GRAPH_CREATOR_MODE_CREATE_VERTICES* (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE"))
(defconstant graph_creator_msgs::GraphCreatorMode::*GRAPH_CREATOR_MODE_CREATE_VERTICES* 0)
(intern "*GRAPH_CREATOR_MODE_CREATE_EDGES*" (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE"))
(shadow '*GRAPH_CREATOR_MODE_CREATE_EDGES* (find-package "GRAPH_CREATOR_MSGS::GRAPHCREATORMODE"))
(defconstant graph_creator_msgs::GraphCreatorMode::*GRAPH_CREATOR_MODE_CREATE_EDGES* 1)

(defun graph_creator_msgs::GraphCreatorMode-to-symbol (const)
  (cond
        ((= const 0) 'graph_creator_msgs::GraphCreatorMode::*GRAPH_CREATOR_MODE_CREATE_VERTICES*)
        ((= const 1) 'graph_creator_msgs::GraphCreatorMode::*GRAPH_CREATOR_MODE_CREATE_EDGES*)
        (t nil)))

(defclass graph_creator_msgs::GraphCreatorMode
  :super ros::object
  :slots (_mode ))

(defmethod graph_creator_msgs::GraphCreatorMode
  (:init
   (&key
    ((:mode __mode) 0)
    )
   (send-super :init)
   (setq _mode (round __mode))
   self)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:serialization-length
   ()
   (+
    ;; uint8 _mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _mode
       (write-byte _mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get graph_creator_msgs::GraphCreatorMode :md5sum-) "bbb0500c90ff3108ea695d6ca1558739")
(setf (get graph_creator_msgs::GraphCreatorMode :datatype-) "graph_creator_msgs/GraphCreatorMode")
(setf (get graph_creator_msgs::GraphCreatorMode :definition-)
      "uint8 GRAPH_CREATOR_MODE_CREATE_VERTICES=0
uint8 GRAPH_CREATOR_MODE_CREATE_EDGES=1

uint8 mode

")



(provide :graph_creator_msgs/GraphCreatorMode "bbb0500c90ff3108ea695d6ca1558739")


