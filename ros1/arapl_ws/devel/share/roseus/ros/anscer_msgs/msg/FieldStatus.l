;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::FieldStatus)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'FieldStatus (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::FIELDSTATUS")
  (make-package "ANSCER_MSGS::FIELDSTATUS"))

(in-package "ROS")
;;//! \htmlinclude FieldStatus.msg.html


(defclass anscer_msgs::FieldStatus
  :super ros::object
  :slots (_direction _is_safety _is_warning ))

(defmethod anscer_msgs::FieldStatus
  (:init
   (&key
    ((:direction __direction) 0)
    ((:is_safety __is_safety) nil)
    ((:is_warning __is_warning) nil)
    )
   (send-super :init)
   (setq _direction (round __direction))
   (setq _is_safety __is_safety)
   (setq _is_warning __is_warning)
   self)
  (:direction
   (&optional __direction)
   (if __direction (setq _direction __direction)) _direction)
  (:is_safety
   (&optional (__is_safety :null))
   (if (not (eq __is_safety :null)) (setq _is_safety __is_safety)) _is_safety)
  (:is_warning
   (&optional (__is_warning :null))
   (if (not (eq __is_warning :null)) (setq _is_warning __is_warning)) _is_warning)
  (:serialization-length
   ()
   (+
    ;; int8 _direction
    1
    ;; bool _is_safety
    1
    ;; bool _is_warning
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _direction
       (write-byte _direction s)
     ;; bool _is_safety
       (if _is_safety (write-byte -1 s) (write-byte 0 s))
     ;; bool _is_warning
       (if _is_warning (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _direction
     (setq _direction (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _direction 127) (setq _direction (- _direction 256)))
   ;; bool _is_safety
     (setq _is_safety (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _is_warning
     (setq _is_warning (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get anscer_msgs::FieldStatus :md5sum-) "0bad4ea9ecfbe49f072cf1a2ba87fb38")
(setf (get anscer_msgs::FieldStatus :datatype-) "anscer_msgs/FieldStatus")
(setf (get anscer_msgs::FieldStatus :definition-)
      "int8 direction
bool is_safety
bool is_warning

")



(provide :anscer_msgs/FieldStatus "0bad4ea9ecfbe49f072cf1a2ba87fb38")


