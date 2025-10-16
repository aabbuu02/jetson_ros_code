;; Auto-generated. Do not edit!


(when (boundp 'lift_action::Homing_status)
  (if (not (find-package "LIFT_ACTION"))
    (make-package "LIFT_ACTION"))
  (shadow 'Homing_status (find-package "LIFT_ACTION")))
(unless (find-package "LIFT_ACTION::HOMING_STATUS")
  (make-package "LIFT_ACTION::HOMING_STATUS"))

(in-package "ROS")
;;//! \htmlinclude Homing_status.msg.html


(defclass lift_action::Homing_status
  :super ros::object
  :slots (_lifterStatus _extractorSatus _turnTableStatus _isHomed ))

(defmethod lift_action::Homing_status
  (:init
   (&key
    ((:lifterStatus __lifterStatus) nil)
    ((:extractorSatus __extractorSatus) nil)
    ((:turnTableStatus __turnTableStatus) nil)
    ((:isHomed __isHomed) nil)
    )
   (send-super :init)
   (setq _lifterStatus __lifterStatus)
   (setq _extractorSatus __extractorSatus)
   (setq _turnTableStatus __turnTableStatus)
   (setq _isHomed __isHomed)
   self)
  (:lifterStatus
   (&optional (__lifterStatus :null))
   (if (not (eq __lifterStatus :null)) (setq _lifterStatus __lifterStatus)) _lifterStatus)
  (:extractorSatus
   (&optional (__extractorSatus :null))
   (if (not (eq __extractorSatus :null)) (setq _extractorSatus __extractorSatus)) _extractorSatus)
  (:turnTableStatus
   (&optional (__turnTableStatus :null))
   (if (not (eq __turnTableStatus :null)) (setq _turnTableStatus __turnTableStatus)) _turnTableStatus)
  (:isHomed
   (&optional (__isHomed :null))
   (if (not (eq __isHomed :null)) (setq _isHomed __isHomed)) _isHomed)
  (:serialization-length
   ()
   (+
    ;; bool _lifterStatus
    1
    ;; bool _extractorSatus
    1
    ;; bool _turnTableStatus
    1
    ;; bool _isHomed
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _lifterStatus
       (if _lifterStatus (write-byte -1 s) (write-byte 0 s))
     ;; bool _extractorSatus
       (if _extractorSatus (write-byte -1 s) (write-byte 0 s))
     ;; bool _turnTableStatus
       (if _turnTableStatus (write-byte -1 s) (write-byte 0 s))
     ;; bool _isHomed
       (if _isHomed (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _lifterStatus
     (setq _lifterStatus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _extractorSatus
     (setq _extractorSatus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _turnTableStatus
     (setq _turnTableStatus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _isHomed
     (setq _isHomed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get lift_action::Homing_status :md5sum-) "3ca3915b4946dfb69c51af3e4d1a0401")
(setf (get lift_action::Homing_status :datatype-) "lift_action/Homing_status")
(setf (get lift_action::Homing_status :definition-)
      "bool lifterStatus
bool extractorSatus
bool turnTableStatus
bool isHomed
")



(provide :lift_action/Homing_status "3ca3915b4946dfb69c51af3e4d1a0401")


