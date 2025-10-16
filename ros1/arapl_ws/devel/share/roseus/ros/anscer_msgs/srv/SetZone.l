;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::SetZone)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'SetZone (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SETZONE")
  (make-package "ANSCER_MSGS::SETZONE"))
(unless (find-package "ANSCER_MSGS::SETZONEREQUEST")
  (make-package "ANSCER_MSGS::SETZONEREQUEST"))
(unless (find-package "ANSCER_MSGS::SETZONERESPONSE")
  (make-package "ANSCER_MSGS::SETZONERESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::SetZoneRequest
  :super ros::object
  :slots (_zone_points ))

(defmethod anscer_msgs::SetZoneRequest
  (:init
   (&key
    ((:zone_points __zone_points) ())
    )
   (send-super :init)
   (setq _zone_points __zone_points)
   self)
  (:zone_points
   (&rest __zone_points)
   (if (keywordp (car __zone_points))
       (send* _zone_points __zone_points)
     (progn
       (if __zone_points (setq _zone_points (car __zone_points)))
       _zone_points)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/ZonePoints[] _zone_points
    (apply #'+ (send-all _zone_points :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/ZonePoints[] _zone_points
     (write-long (length _zone_points) s)
     (dolist (elem _zone_points)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/ZonePoints[] _zone_points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _zone_points (let (r) (dotimes (i n) (push (instance anscer_msgs::ZonePoints :init) r)) r))
     (dolist (elem- _zone_points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass anscer_msgs::SetZoneResponse
  :super ros::object
  :slots (_status ))

(defmethod anscer_msgs::SetZoneResponse
  (:init
   (&key
    ((:status __status) nil)
    )
   (send-super :init)
   (setq _status __status)
   self)
  (:status
   (&optional (__status :null))
   (if (not (eq __status :null)) (setq _status __status)) _status)
  (:serialization-length
   ()
   (+
    ;; bool _status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _status
       (if _status (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _status
     (setq _status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::SetZone
  :super ros::object
  :slots ())

(setf (get anscer_msgs::SetZone :md5sum-) "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(setf (get anscer_msgs::SetZone :datatype-) "anscer_msgs/SetZone")
(setf (get anscer_msgs::SetZone :request) anscer_msgs::SetZoneRequest)
(setf (get anscer_msgs::SetZone :response) anscer_msgs::SetZoneResponse)

(defmethod anscer_msgs::SetZoneRequest
  (:response () (instance anscer_msgs::SetZoneResponse :init)))

(setf (get anscer_msgs::SetZoneRequest :md5sum-) "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(setf (get anscer_msgs::SetZoneRequest :datatype-) "anscer_msgs/SetZoneRequest")
(setf (get anscer_msgs::SetZoneRequest :definition-)
      "anscer_msgs/ZonePoints[] zone_points

================================================================================
MSG: anscer_msgs/ZonePoints
string index
geometry_msgs/Point[] coordinates

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
---
bool status


")

(setf (get anscer_msgs::SetZoneResponse :md5sum-) "37c3e3d21bd5bbc35f0e2a546f8b8b1a")
(setf (get anscer_msgs::SetZoneResponse :datatype-) "anscer_msgs/SetZoneResponse")
(setf (get anscer_msgs::SetZoneResponse :definition-)
      "anscer_msgs/ZonePoints[] zone_points

================================================================================
MSG: anscer_msgs/ZonePoints
string index
geometry_msgs/Point[] coordinates

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
---
bool status


")



(provide :anscer_msgs/SetZone "37c3e3d21bd5bbc35f0e2a546f8b8b1a")


