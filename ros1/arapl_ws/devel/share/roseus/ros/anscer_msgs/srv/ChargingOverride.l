;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ChargingOverride)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ChargingOverride (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::CHARGINGOVERRIDE")
  (make-package "ANSCER_MSGS::CHARGINGOVERRIDE"))
(unless (find-package "ANSCER_MSGS::CHARGINGOVERRIDEREQUEST")
  (make-package "ANSCER_MSGS::CHARGINGOVERRIDEREQUEST"))
(unless (find-package "ANSCER_MSGS::CHARGINGOVERRIDERESPONSE")
  (make-package "ANSCER_MSGS::CHARGINGOVERRIDERESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::ChargingOverrideRequest
  :super ros::object
  :slots (_charge_override ))

(defmethod anscer_msgs::ChargingOverrideRequest
  (:init
   (&key
    ((:charge_override __charge_override) nil)
    )
   (send-super :init)
   (setq _charge_override __charge_override)
   self)
  (:charge_override
   (&optional (__charge_override :null))
   (if (not (eq __charge_override :null)) (setq _charge_override __charge_override)) _charge_override)
  (:serialization-length
   ()
   (+
    ;; bool _charge_override
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _charge_override
       (if _charge_override (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _charge_override
     (setq _charge_override (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::ChargingOverrideResponse
  :super ros::object
  :slots (_status ))

(defmethod anscer_msgs::ChargingOverrideResponse
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

(defclass anscer_msgs::ChargingOverride
  :super ros::object
  :slots ())

(setf (get anscer_msgs::ChargingOverride :md5sum-) "26611cba0ebbfa060ca1a9e4e8ff36f7")
(setf (get anscer_msgs::ChargingOverride :datatype-) "anscer_msgs/ChargingOverride")
(setf (get anscer_msgs::ChargingOverride :request) anscer_msgs::ChargingOverrideRequest)
(setf (get anscer_msgs::ChargingOverride :response) anscer_msgs::ChargingOverrideResponse)

(defmethod anscer_msgs::ChargingOverrideRequest
  (:response () (instance anscer_msgs::ChargingOverrideResponse :init)))

(setf (get anscer_msgs::ChargingOverrideRequest :md5sum-) "26611cba0ebbfa060ca1a9e4e8ff36f7")
(setf (get anscer_msgs::ChargingOverrideRequest :datatype-) "anscer_msgs/ChargingOverrideRequest")
(setf (get anscer_msgs::ChargingOverrideRequest :definition-)
      "bool charge_override
---
bool status

")

(setf (get anscer_msgs::ChargingOverrideResponse :md5sum-) "26611cba0ebbfa060ca1a9e4e8ff36f7")
(setf (get anscer_msgs::ChargingOverrideResponse :datatype-) "anscer_msgs/ChargingOverrideResponse")
(setf (get anscer_msgs::ChargingOverrideResponse :definition-)
      "bool charge_override
---
bool status

")



(provide :anscer_msgs/ChargingOverride "26611cba0ebbfa060ca1a9e4e8ff36f7")


