;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::SafetyZone)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'SafetyZone (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SAFETYZONE")
  (make-package "ANSCER_MSGS::SAFETYZONE"))
(unless (find-package "ANSCER_MSGS::SAFETYZONEREQUEST")
  (make-package "ANSCER_MSGS::SAFETYZONEREQUEST"))
(unless (find-package "ANSCER_MSGS::SAFETYZONERESPONSE")
  (make-package "ANSCER_MSGS::SAFETYZONERESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::SafetyZoneRequest
  :super ros::object
  :slots (_safety_zone ))

(defmethod anscer_msgs::SafetyZoneRequest
  (:init
   (&key
    ((:safety_zone __safety_zone) 0.0)
    )
   (send-super :init)
   (setq _safety_zone (float __safety_zone))
   self)
  (:safety_zone
   (&optional __safety_zone)
   (if __safety_zone (setq _safety_zone __safety_zone)) _safety_zone)
  (:serialization-length
   ()
   (+
    ;; float32 _safety_zone
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _safety_zone
       (sys::poke _safety_zone (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _safety_zone
     (setq _safety_zone (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass anscer_msgs::SafetyZoneResponse
  :super ros::object
  :slots ())

(defmethod anscer_msgs::SafetyZoneResponse
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

(defclass anscer_msgs::SafetyZone
  :super ros::object
  :slots ())

(setf (get anscer_msgs::SafetyZone :md5sum-) "3dfa5a05dd5746de1f5b03b04e0274d1")
(setf (get anscer_msgs::SafetyZone :datatype-) "anscer_msgs/SafetyZone")
(setf (get anscer_msgs::SafetyZone :request) anscer_msgs::SafetyZoneRequest)
(setf (get anscer_msgs::SafetyZone :response) anscer_msgs::SafetyZoneResponse)

(defmethod anscer_msgs::SafetyZoneRequest
  (:response () (instance anscer_msgs::SafetyZoneResponse :init)))

(setf (get anscer_msgs::SafetyZoneRequest :md5sum-) "3dfa5a05dd5746de1f5b03b04e0274d1")
(setf (get anscer_msgs::SafetyZoneRequest :datatype-) "anscer_msgs/SafetyZoneRequest")
(setf (get anscer_msgs::SafetyZoneRequest :definition-)
      "float32 safety_zone
---



")

(setf (get anscer_msgs::SafetyZoneResponse :md5sum-) "3dfa5a05dd5746de1f5b03b04e0274d1")
(setf (get anscer_msgs::SafetyZoneResponse :datatype-) "anscer_msgs/SafetyZoneResponse")
(setf (get anscer_msgs::SafetyZoneResponse :definition-)
      "float32 safety_zone
---



")



(provide :anscer_msgs/SafetyZone "3dfa5a05dd5746de1f5b03b04e0274d1")


