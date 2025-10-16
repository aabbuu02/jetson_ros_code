;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::Debug)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'Debug (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::DEBUG")
  (make-package "ANSCER_MSGS::DEBUG"))

(in-package "ROS")
;;//! \htmlinclude Debug.msg.html


(defclass anscer_msgs::Debug
  :super ros::object
  :slots (_left_rpm_command _right_rpm_command _left_rpm_feedback _right_rpm_feedback ))

(defmethod anscer_msgs::Debug
  (:init
   (&key
    ((:left_rpm_command __left_rpm_command) 0.0)
    ((:right_rpm_command __right_rpm_command) 0.0)
    ((:left_rpm_feedback __left_rpm_feedback) 0.0)
    ((:right_rpm_feedback __right_rpm_feedback) 0.0)
    )
   (send-super :init)
   (setq _left_rpm_command (float __left_rpm_command))
   (setq _right_rpm_command (float __right_rpm_command))
   (setq _left_rpm_feedback (float __left_rpm_feedback))
   (setq _right_rpm_feedback (float __right_rpm_feedback))
   self)
  (:left_rpm_command
   (&optional __left_rpm_command)
   (if __left_rpm_command (setq _left_rpm_command __left_rpm_command)) _left_rpm_command)
  (:right_rpm_command
   (&optional __right_rpm_command)
   (if __right_rpm_command (setq _right_rpm_command __right_rpm_command)) _right_rpm_command)
  (:left_rpm_feedback
   (&optional __left_rpm_feedback)
   (if __left_rpm_feedback (setq _left_rpm_feedback __left_rpm_feedback)) _left_rpm_feedback)
  (:right_rpm_feedback
   (&optional __right_rpm_feedback)
   (if __right_rpm_feedback (setq _right_rpm_feedback __right_rpm_feedback)) _right_rpm_feedback)
  (:serialization-length
   ()
   (+
    ;; float32 _left_rpm_command
    4
    ;; float32 _right_rpm_command
    4
    ;; float32 _left_rpm_feedback
    4
    ;; float32 _right_rpm_feedback
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _left_rpm_command
       (sys::poke _left_rpm_command (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _right_rpm_command
       (sys::poke _right_rpm_command (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _left_rpm_feedback
       (sys::poke _left_rpm_feedback (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _right_rpm_feedback
       (sys::poke _right_rpm_feedback (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _left_rpm_command
     (setq _left_rpm_command (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _right_rpm_command
     (setq _right_rpm_command (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _left_rpm_feedback
     (setq _left_rpm_feedback (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _right_rpm_feedback
     (setq _right_rpm_feedback (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::Debug :md5sum-) "cfb9ea294e0bf87e4f770199a831777a")
(setf (get anscer_msgs::Debug :datatype-) "anscer_msgs/Debug")
(setf (get anscer_msgs::Debug :definition-)
      "float32 left_rpm_command
float32 right_rpm_command
float32 left_rpm_feedback
float32 right_rpm_feedback

")



(provide :anscer_msgs/Debug "cfb9ea294e0bf87e4f770199a831777a")


