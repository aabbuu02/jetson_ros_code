;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::PausingFeedback)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'PausingFeedback (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::PAUSINGFEEDBACK")
  (make-package "ANSCER_MSGS::PAUSINGFEEDBACK"))
(unless (find-package "ANSCER_MSGS::PAUSINGFEEDBACKREQUEST")
  (make-package "ANSCER_MSGS::PAUSINGFEEDBACKREQUEST"))
(unless (find-package "ANSCER_MSGS::PAUSINGFEEDBACKRESPONSE")
  (make-package "ANSCER_MSGS::PAUSINGFEEDBACKRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::PausingFeedbackRequest
  :super ros::object
  :slots (_pause_feedback ))

(defmethod anscer_msgs::PausingFeedbackRequest
  (:init
   (&key
    ((:pause_feedback __pause_feedback) nil)
    )
   (send-super :init)
   (setq _pause_feedback __pause_feedback)
   self)
  (:pause_feedback
   (&optional (__pause_feedback :null))
   (if (not (eq __pause_feedback :null)) (setq _pause_feedback __pause_feedback)) _pause_feedback)
  (:serialization-length
   ()
   (+
    ;; bool _pause_feedback
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _pause_feedback
       (if _pause_feedback (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _pause_feedback
     (setq _pause_feedback (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::PausingFeedbackResponse
  :super ros::object
  :slots (_status ))

(defmethod anscer_msgs::PausingFeedbackResponse
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

(defclass anscer_msgs::PausingFeedback
  :super ros::object
  :slots ())

(setf (get anscer_msgs::PausingFeedback :md5sum-) "35c9adc405f74949be455cf9463364f8")
(setf (get anscer_msgs::PausingFeedback :datatype-) "anscer_msgs/PausingFeedback")
(setf (get anscer_msgs::PausingFeedback :request) anscer_msgs::PausingFeedbackRequest)
(setf (get anscer_msgs::PausingFeedback :response) anscer_msgs::PausingFeedbackResponse)

(defmethod anscer_msgs::PausingFeedbackRequest
  (:response () (instance anscer_msgs::PausingFeedbackResponse :init)))

(setf (get anscer_msgs::PausingFeedbackRequest :md5sum-) "35c9adc405f74949be455cf9463364f8")
(setf (get anscer_msgs::PausingFeedbackRequest :datatype-) "anscer_msgs/PausingFeedbackRequest")
(setf (get anscer_msgs::PausingFeedbackRequest :definition-)
      "bool pause_feedback
---
bool status


")

(setf (get anscer_msgs::PausingFeedbackResponse :md5sum-) "35c9adc405f74949be455cf9463364f8")
(setf (get anscer_msgs::PausingFeedbackResponse :datatype-) "anscer_msgs/PausingFeedbackResponse")
(setf (get anscer_msgs::PausingFeedbackResponse :definition-)
      "bool pause_feedback
---
bool status


")



(provide :anscer_msgs/PausingFeedback "35c9adc405f74949be455cf9463364f8")


