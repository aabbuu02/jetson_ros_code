;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::SafetyFields)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'SafetyFields (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SAFETYFIELDS")
  (make-package "ANSCER_MSGS::SAFETYFIELDS"))

(in-package "ROS")
;;//! \htmlinclude SafetyFields.msg.html


(defclass anscer_msgs::SafetyFields
  :super ros::object
  :slots (_warning _safety ))

(defmethod anscer_msgs::SafetyFields
  (:init
   (&key
    ((:warning __warning) ())
    ((:safety __safety) ())
    )
   (send-super :init)
   (setq _warning __warning)
   (setq _safety __safety)
   self)
  (:warning
   (&rest __warning)
   (if (keywordp (car __warning))
       (send* _warning __warning)
     (progn
       (if __warning (setq _warning (car __warning)))
       _warning)))
  (:safety
   (&rest __safety)
   (if (keywordp (car __safety))
       (send* _safety __safety)
     (progn
       (if __safety (setq _safety (car __safety)))
       _safety)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/SafetyField[] _warning
    (apply #'+ (send-all _warning :serialization-length)) 4
    ;; anscer_msgs/SafetyField[] _safety
    (apply #'+ (send-all _safety :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/SafetyField[] _warning
     (write-long (length _warning) s)
     (dolist (elem _warning)
       (send elem :serialize s)
       )
     ;; anscer_msgs/SafetyField[] _safety
     (write-long (length _safety) s)
     (dolist (elem _safety)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/SafetyField[] _warning
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _warning (let (r) (dotimes (i n) (push (instance anscer_msgs::SafetyField :init) r)) r))
     (dolist (elem- _warning)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; anscer_msgs/SafetyField[] _safety
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _safety (let (r) (dotimes (i n) (push (instance anscer_msgs::SafetyField :init) r)) r))
     (dolist (elem- _safety)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get anscer_msgs::SafetyFields :md5sum-) "a7a9ac03c2713cea077fbfe497276db8")
(setf (get anscer_msgs::SafetyFields :datatype-) "anscer_msgs/SafetyFields")
(setf (get anscer_msgs::SafetyFields :definition-)
      "anscer_msgs/SafetyField[] warning
anscer_msgs/SafetyField[] safety

================================================================================
MSG: anscer_msgs/SafetyField
int8 field_id
bool is_front
bool is_rear

")



(provide :anscer_msgs/SafetyFields "a7a9ac03c2713cea077fbfe497276db8")


