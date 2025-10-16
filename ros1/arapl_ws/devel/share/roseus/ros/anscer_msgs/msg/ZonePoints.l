;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ZonePoints)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ZonePoints (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::ZONEPOINTS")
  (make-package "ANSCER_MSGS::ZONEPOINTS"))

(in-package "ROS")
;;//! \htmlinclude ZonePoints.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass anscer_msgs::ZonePoints
  :super ros::object
  :slots (_index _coordinates ))

(defmethod anscer_msgs::ZonePoints
  (:init
   (&key
    ((:index __index) "")
    ((:coordinates __coordinates) ())
    )
   (send-super :init)
   (setq _index (string __index))
   (setq _coordinates __coordinates)
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:coordinates
   (&rest __coordinates)
   (if (keywordp (car __coordinates))
       (send* _coordinates __coordinates)
     (progn
       (if __coordinates (setq _coordinates (car __coordinates)))
       _coordinates)))
  (:serialization-length
   ()
   (+
    ;; string _index
    4 (length _index)
    ;; geometry_msgs/Point[] _coordinates
    (apply #'+ (send-all _coordinates :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _index
       (write-long (length _index) s) (princ _index s)
     ;; geometry_msgs/Point[] _coordinates
     (write-long (length _coordinates) s)
     (dolist (elem _coordinates)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _index
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _index (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; geometry_msgs/Point[] _coordinates
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _coordinates (let (r) (dotimes (i n) (push (instance geometry_msgs::Point :init) r)) r))
     (dolist (elem- _coordinates)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get anscer_msgs::ZonePoints :md5sum-) "c62b504d2caceb162c84163822c2459c")
(setf (get anscer_msgs::ZonePoints :datatype-) "anscer_msgs/ZonePoints")
(setf (get anscer_msgs::ZonePoints :definition-)
      "string index
geometry_msgs/Point[] coordinates

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :anscer_msgs/ZonePoints "c62b504d2caceb162c84163822c2459c")


