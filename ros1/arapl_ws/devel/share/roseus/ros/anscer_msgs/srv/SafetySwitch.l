;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::SafetySwitch)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'SafetySwitch (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SAFETYSWITCH")
  (make-package "ANSCER_MSGS::SAFETYSWITCH"))
(unless (find-package "ANSCER_MSGS::SAFETYSWITCHREQUEST")
  (make-package "ANSCER_MSGS::SAFETYSWITCHREQUEST"))
(unless (find-package "ANSCER_MSGS::SAFETYSWITCHRESPONSE")
  (make-package "ANSCER_MSGS::SAFETYSWITCHRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::SafetySwitchRequest
  :super ros::object
  :slots (_safety_switch ))

(defmethod anscer_msgs::SafetySwitchRequest
  (:init
   (&key
    ((:safety_switch __safety_switch) 0)
    )
   (send-super :init)
   (setq _safety_switch (round __safety_switch))
   self)
  (:safety_switch
   (&optional __safety_switch)
   (if __safety_switch (setq _safety_switch __safety_switch)) _safety_switch)
  (:serialization-length
   ()
   (+
    ;; int8 _safety_switch
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _safety_switch
       (write-byte _safety_switch s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _safety_switch
     (setq _safety_switch (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _safety_switch 127) (setq _safety_switch (- _safety_switch 256)))
   ;;
   self)
  )

(defclass anscer_msgs::SafetySwitchResponse
  :super ros::object
  :slots (_status ))

(defmethod anscer_msgs::SafetySwitchResponse
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

(defclass anscer_msgs::SafetySwitch
  :super ros::object
  :slots ())

(setf (get anscer_msgs::SafetySwitch :md5sum-) "417735b2444563673e85098665efa4f8")
(setf (get anscer_msgs::SafetySwitch :datatype-) "anscer_msgs/SafetySwitch")
(setf (get anscer_msgs::SafetySwitch :request) anscer_msgs::SafetySwitchRequest)
(setf (get anscer_msgs::SafetySwitch :response) anscer_msgs::SafetySwitchResponse)

(defmethod anscer_msgs::SafetySwitchRequest
  (:response () (instance anscer_msgs::SafetySwitchResponse :init)))

(setf (get anscer_msgs::SafetySwitchRequest :md5sum-) "417735b2444563673e85098665efa4f8")
(setf (get anscer_msgs::SafetySwitchRequest :datatype-) "anscer_msgs/SafetySwitchRequest")
(setf (get anscer_msgs::SafetySwitchRequest :definition-)
      "int8 safety_switch
---
bool status

")

(setf (get anscer_msgs::SafetySwitchResponse :md5sum-) "417735b2444563673e85098665efa4f8")
(setf (get anscer_msgs::SafetySwitchResponse :datatype-) "anscer_msgs/SafetySwitchResponse")
(setf (get anscer_msgs::SafetySwitchResponse :definition-)
      "int8 safety_switch
---
bool status

")



(provide :anscer_msgs/SafetySwitch "417735b2444563673e85098665efa4f8")


