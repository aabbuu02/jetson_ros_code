;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::Safety)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'Safety (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SAFETY")
  (make-package "ANSCER_MSGS::SAFETY"))
(unless (find-package "ANSCER_MSGS::SAFETYREQUEST")
  (make-package "ANSCER_MSGS::SAFETYREQUEST"))
(unless (find-package "ANSCER_MSGS::SAFETYRESPONSE")
  (make-package "ANSCER_MSGS::SAFETYRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::SafetyRequest
  :super ros::object
  :slots (_safety_config ))

(defmethod anscer_msgs::SafetyRequest
  (:init
   (&key
    ((:safety_config __safety_config) 0)
    )
   (send-super :init)
   (setq _safety_config (round __safety_config))
   self)
  (:safety_config
   (&optional __safety_config)
   (if __safety_config (setq _safety_config __safety_config)) _safety_config)
  (:serialization-length
   ()
   (+
    ;; int8 _safety_config
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _safety_config
       (write-byte _safety_config s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _safety_config
     (setq _safety_config (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _safety_config 127) (setq _safety_config (- _safety_config 256)))
   ;;
   self)
  )

(defclass anscer_msgs::SafetyResponse
  :super ros::object
  :slots ())

(defmethod anscer_msgs::SafetyResponse
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

(defclass anscer_msgs::Safety
  :super ros::object
  :slots ())

(setf (get anscer_msgs::Safety :md5sum-) "0d401b7765833ddbdd23a78ce7d31162")
(setf (get anscer_msgs::Safety :datatype-) "anscer_msgs/Safety")
(setf (get anscer_msgs::Safety :request) anscer_msgs::SafetyRequest)
(setf (get anscer_msgs::Safety :response) anscer_msgs::SafetyResponse)

(defmethod anscer_msgs::SafetyRequest
  (:response () (instance anscer_msgs::SafetyResponse :init)))

(setf (get anscer_msgs::SafetyRequest :md5sum-) "0d401b7765833ddbdd23a78ce7d31162")
(setf (get anscer_msgs::SafetyRequest :datatype-) "anscer_msgs/SafetyRequest")
(setf (get anscer_msgs::SafetyRequest :definition-)
      "int8 safety_config
---



")

(setf (get anscer_msgs::SafetyResponse :md5sum-) "0d401b7765833ddbdd23a78ce7d31162")
(setf (get anscer_msgs::SafetyResponse :datatype-) "anscer_msgs/SafetyResponse")
(setf (get anscer_msgs::SafetyResponse :definition-)
      "int8 safety_config
---



")



(provide :anscer_msgs/Safety "0d401b7765833ddbdd23a78ce7d31162")


