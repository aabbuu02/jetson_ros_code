;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::SafetyField)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'SafetyField (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SAFETYFIELD")
  (make-package "ANSCER_MSGS::SAFETYFIELD"))

(in-package "ROS")
;;//! \htmlinclude SafetyField.msg.html


(defclass anscer_msgs::SafetyField
  :super ros::object
  :slots (_field_id _is_front _is_rear ))

(defmethod anscer_msgs::SafetyField
  (:init
   (&key
    ((:field_id __field_id) 0)
    ((:is_front __is_front) nil)
    ((:is_rear __is_rear) nil)
    )
   (send-super :init)
   (setq _field_id (round __field_id))
   (setq _is_front __is_front)
   (setq _is_rear __is_rear)
   self)
  (:field_id
   (&optional __field_id)
   (if __field_id (setq _field_id __field_id)) _field_id)
  (:is_front
   (&optional (__is_front :null))
   (if (not (eq __is_front :null)) (setq _is_front __is_front)) _is_front)
  (:is_rear
   (&optional (__is_rear :null))
   (if (not (eq __is_rear :null)) (setq _is_rear __is_rear)) _is_rear)
  (:serialization-length
   ()
   (+
    ;; int8 _field_id
    1
    ;; bool _is_front
    1
    ;; bool _is_rear
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _field_id
       (write-byte _field_id s)
     ;; bool _is_front
       (if _is_front (write-byte -1 s) (write-byte 0 s))
     ;; bool _is_rear
       (if _is_rear (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _field_id
     (setq _field_id (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _field_id 127) (setq _field_id (- _field_id 256)))
   ;; bool _is_front
     (setq _is_front (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _is_rear
     (setq _is_rear (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get anscer_msgs::SafetyField :md5sum-) "02646f6a7b4907b4d9f4e67a0cbf76b2")
(setf (get anscer_msgs::SafetyField :datatype-) "anscer_msgs/SafetyField")
(setf (get anscer_msgs::SafetyField :definition-)
      "int8 field_id
bool is_front
bool is_rear

")



(provide :anscer_msgs/SafetyField "02646f6a7b4907b4d9f4e67a0cbf76b2")


