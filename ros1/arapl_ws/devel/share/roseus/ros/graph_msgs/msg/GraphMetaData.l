;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::GraphMetaData)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'GraphMetaData (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::GRAPHMETADATA")
  (make-package "GRAPH_MSGS::GRAPHMETADATA"))

(in-package "ROS")
;;//! \htmlinclude GraphMetaData.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*DIRECTED*" (find-package "GRAPH_MSGS::GRAPHMETADATA"))
(shadow '*DIRECTED* (find-package "GRAPH_MSGS::GRAPHMETADATA"))
(defconstant graph_msgs::GraphMetaData::*DIRECTED* 0)
(intern "*UNDIRECTED*" (find-package "GRAPH_MSGS::GRAPHMETADATA"))
(shadow '*UNDIRECTED* (find-package "GRAPH_MSGS::GRAPHMETADATA"))
(defconstant graph_msgs::GraphMetaData::*UNDIRECTED* 1)

(defun graph_msgs::GraphMetaData-to-symbol (const)
  (cond
        ((= const 0) 'graph_msgs::GraphMetaData::*DIRECTED*)
        ((= const 1) 'graph_msgs::GraphMetaData::*UNDIRECTED*)
        (t nil)))

(defclass graph_msgs::GraphMetaData
  :super ros::object
  :slots (_header _graph_name _graph_type _number_of_vertices _number_of_edges ))

(defmethod graph_msgs::GraphMetaData
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:graph_name __graph_name) "")
    ((:graph_type __graph_type) 0)
    ((:number_of_vertices __number_of_vertices) 0)
    ((:number_of_edges __number_of_edges) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _graph_name (string __graph_name))
   (setq _graph_type (round __graph_type))
   (setq _number_of_vertices (round __number_of_vertices))
   (setq _number_of_edges (round __number_of_edges))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:graph_name
   (&optional __graph_name)
   (if __graph_name (setq _graph_name __graph_name)) _graph_name)
  (:graph_type
   (&optional __graph_type)
   (if __graph_type (setq _graph_type __graph_type)) _graph_type)
  (:number_of_vertices
   (&optional __number_of_vertices)
   (if __number_of_vertices (setq _number_of_vertices __number_of_vertices)) _number_of_vertices)
  (:number_of_edges
   (&optional __number_of_edges)
   (if __number_of_edges (setq _number_of_edges __number_of_edges)) _number_of_edges)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _graph_name
    4 (length _graph_name)
    ;; uint8 _graph_type
    1
    ;; uint32 _number_of_vertices
    4
    ;; uint32 _number_of_edges
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _graph_name
       (write-long (length _graph_name) s) (princ _graph_name s)
     ;; uint8 _graph_type
       (write-byte _graph_type s)
     ;; uint32 _number_of_vertices
       (write-long _number_of_vertices s)
     ;; uint32 _number_of_edges
       (write-long _number_of_edges s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _graph_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _graph_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _graph_type
     (setq _graph_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint32 _number_of_vertices
     (setq _number_of_vertices (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _number_of_edges
     (setq _number_of_edges (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get graph_msgs::GraphMetaData :md5sum-) "c0d170d3d53451a272b88e7364b594fa")
(setf (get graph_msgs::GraphMetaData :datatype-) "graph_msgs/GraphMetaData")
(setf (get graph_msgs::GraphMetaData :definition-)
      "uint8 DIRECTED=0
uint8 UNDIRECTED=1

std_msgs/Header header
string graph_name
uint8 graph_type
uint32 number_of_vertices
uint32 number_of_edges
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

")



(provide :graph_msgs/GraphMetaData "c0d170d3d53451a272b88e7364b594fa")


