;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::Vertex)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'Vertex (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::VERTEX")
  (make-package "GRAPH_MSGS::VERTEX"))

(in-package "ROS")
;;//! \htmlinclude Vertex.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*NORMAL*" (find-package "GRAPH_MSGS::VERTEX"))
(shadow '*NORMAL* (find-package "GRAPH_MSGS::VERTEX"))
(defconstant graph_msgs::Vertex::*NORMAL* 0)
(intern "*PARK*" (find-package "GRAPH_MSGS::VERTEX"))
(shadow '*PARK* (find-package "GRAPH_MSGS::VERTEX"))
(defconstant graph_msgs::Vertex::*PARK* 1)
(intern "*CHARGE*" (find-package "GRAPH_MSGS::VERTEX"))
(shadow '*CHARGE* (find-package "GRAPH_MSGS::VERTEX"))
(defconstant graph_msgs::Vertex::*CHARGE* 2)
(intern "*CONTROL*" (find-package "GRAPH_MSGS::VERTEX"))
(shadow '*CONTROL* (find-package "GRAPH_MSGS::VERTEX"))
(defconstant graph_msgs::Vertex::*CONTROL* 3)
(intern "*REPORT*" (find-package "GRAPH_MSGS::VERTEX"))
(shadow '*REPORT* (find-package "GRAPH_MSGS::VERTEX"))
(defconstant graph_msgs::Vertex::*REPORT* 4)

(defun graph_msgs::Vertex-to-symbol (const)
  (cond
        ((= const 0) 'graph_msgs::Vertex::*NORMAL*)
        ((= const 1) 'graph_msgs::Vertex::*PARK*)
        ((= const 2) 'graph_msgs::Vertex::*CHARGE*)
        ((= const 3) 'graph_msgs::Vertex::*CONTROL*)
        ((= const 4) 'graph_msgs::Vertex::*REPORT*)
        (t nil)))

(defclass graph_msgs::Vertex
  :super ros::object
  :slots (_id _name _alias _type _ignore_orientation _pose _properties ))

(defmethod graph_msgs::Vertex
  (:init
   (&key
    ((:id __id) 0)
    ((:name __name) "")
    ((:alias __alias) "")
    ((:type __type) 0)
    ((:ignore_orientation __ignore_orientation) nil)
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    ((:properties __properties) ())
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _name (string __name))
   (setq _alias (string __alias))
   (setq _type (round __type))
   (setq _ignore_orientation __ignore_orientation)
   (setq _pose __pose)
   (setq _properties __properties)
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:alias
   (&optional __alias)
   (if __alias (setq _alias __alias)) _alias)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:ignore_orientation
   (&optional (__ignore_orientation :null))
   (if (not (eq __ignore_orientation :null)) (setq _ignore_orientation __ignore_orientation)) _ignore_orientation)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
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
    ;; uint32 _id
    4
    ;; string _name
    4 (length _name)
    ;; string _alias
    4 (length _alias)
    ;; uint8 _type
    1
    ;; bool _ignore_orientation
    1
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ;; graph_msgs/Property[] _properties
    (apply #'+ (send-all _properties :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _id
       (write-long _id s)
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string _alias
       (write-long (length _alias) s) (princ _alias s)
     ;; uint8 _type
       (write-byte _type s)
     ;; bool _ignore_orientation
       (if _ignore_orientation (write-byte -1 s) (write-byte 0 s))
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;; graph_msgs/Property[] _properties
     (write-long (length _properties) s)
     (dolist (elem _properties)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _alias
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _alias (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _type
     (setq _type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _ignore_orientation
     (setq _ignore_orientation (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
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

(setf (get graph_msgs::Vertex :md5sum-) "da5a52518e6851fa3171e3b059d26164")
(setf (get graph_msgs::Vertex :datatype-) "graph_msgs/Vertex")
(setf (get graph_msgs::Vertex :definition-)
      "# Vertex types
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
")



(provide :graph_msgs/Vertex "da5a52518e6851fa3171e3b059d26164")


