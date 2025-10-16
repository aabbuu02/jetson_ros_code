;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ClearZones)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ClearZones (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::CLEARZONES")
  (make-package "ANSCER_MSGS::CLEARZONES"))
(unless (find-package "ANSCER_MSGS::CLEARZONESREQUEST")
  (make-package "ANSCER_MSGS::CLEARZONESREQUEST"))
(unless (find-package "ANSCER_MSGS::CLEARZONESRESPONSE")
  (make-package "ANSCER_MSGS::CLEARZONESRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::ClearZonesRequest
  :super ros::object
  :slots ())

(defmethod anscer_msgs::ClearZonesRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass anscer_msgs::ClearZonesResponse
  :super ros::object
  :slots (_status ))

(defmethod anscer_msgs::ClearZonesResponse
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

(defclass anscer_msgs::ClearZones
  :super ros::object
  :slots ())

(setf (get anscer_msgs::ClearZones :md5sum-) "3a1255d4d998bd4d6585c64639b5ee9a")
(setf (get anscer_msgs::ClearZones :datatype-) "anscer_msgs/ClearZones")
(setf (get anscer_msgs::ClearZones :request) anscer_msgs::ClearZonesRequest)
(setf (get anscer_msgs::ClearZones :response) anscer_msgs::ClearZonesResponse)

(defmethod anscer_msgs::ClearZonesRequest
  (:response () (instance anscer_msgs::ClearZonesResponse :init)))

(setf (get anscer_msgs::ClearZonesRequest :md5sum-) "3a1255d4d998bd4d6585c64639b5ee9a")
(setf (get anscer_msgs::ClearZonesRequest :datatype-) "anscer_msgs/ClearZonesRequest")
(setf (get anscer_msgs::ClearZonesRequest :definition-)
      "
---
bool status


")

(setf (get anscer_msgs::ClearZonesResponse :md5sum-) "3a1255d4d998bd4d6585c64639b5ee9a")
(setf (get anscer_msgs::ClearZonesResponse :datatype-) "anscer_msgs/ClearZonesResponse")
(setf (get anscer_msgs::ClearZonesResponse :definition-)
      "
---
bool status


")



(provide :anscer_msgs/ClearZones "3a1255d4d998bd4d6585c64639b5ee9a")


