;; Auto-generated. Do not edit!


(when (boundp 'lift_action::ErrorStatus)
  (if (not (find-package "LIFT_ACTION"))
    (make-package "LIFT_ACTION"))
  (shadow 'ErrorStatus (find-package "LIFT_ACTION")))
(unless (find-package "LIFT_ACTION::ERRORSTATUS")
  (make-package "LIFT_ACTION::ERRORSTATUS"))

(in-package "ROS")
;;//! \htmlinclude ErrorStatus.msg.html


(defclass lift_action::ErrorStatus
  :super ros::object
  :slots (_lifterFault _extractorFault _turnTableFault _swingArmFault _emergencyPBfault _swingArmSensorZeroFault _swingArmSensorNinetyFault _turntableSensorZeroFault _extractorSensorLaserFault ))

(defmethod lift_action::ErrorStatus
  (:init
   (&key
    ((:lifterFault __lifterFault) nil)
    ((:extractorFault __extractorFault) nil)
    ((:turnTableFault __turnTableFault) nil)
    ((:swingArmFault __swingArmFault) nil)
    ((:emergencyPBfault __emergencyPBfault) nil)
    ((:swingArmSensorZeroFault __swingArmSensorZeroFault) nil)
    ((:swingArmSensorNinetyFault __swingArmSensorNinetyFault) nil)
    ((:turntableSensorZeroFault __turntableSensorZeroFault) nil)
    ((:extractorSensorLaserFault __extractorSensorLaserFault) nil)
    )
   (send-super :init)
   (setq _lifterFault __lifterFault)
   (setq _extractorFault __extractorFault)
   (setq _turnTableFault __turnTableFault)
   (setq _swingArmFault __swingArmFault)
   (setq _emergencyPBfault __emergencyPBfault)
   (setq _swingArmSensorZeroFault __swingArmSensorZeroFault)
   (setq _swingArmSensorNinetyFault __swingArmSensorNinetyFault)
   (setq _turntableSensorZeroFault __turntableSensorZeroFault)
   (setq _extractorSensorLaserFault __extractorSensorLaserFault)
   self)
  (:lifterFault
   (&optional (__lifterFault :null))
   (if (not (eq __lifterFault :null)) (setq _lifterFault __lifterFault)) _lifterFault)
  (:extractorFault
   (&optional (__extractorFault :null))
   (if (not (eq __extractorFault :null)) (setq _extractorFault __extractorFault)) _extractorFault)
  (:turnTableFault
   (&optional (__turnTableFault :null))
   (if (not (eq __turnTableFault :null)) (setq _turnTableFault __turnTableFault)) _turnTableFault)
  (:swingArmFault
   (&optional (__swingArmFault :null))
   (if (not (eq __swingArmFault :null)) (setq _swingArmFault __swingArmFault)) _swingArmFault)
  (:emergencyPBfault
   (&optional (__emergencyPBfault :null))
   (if (not (eq __emergencyPBfault :null)) (setq _emergencyPBfault __emergencyPBfault)) _emergencyPBfault)
  (:swingArmSensorZeroFault
   (&optional (__swingArmSensorZeroFault :null))
   (if (not (eq __swingArmSensorZeroFault :null)) (setq _swingArmSensorZeroFault __swingArmSensorZeroFault)) _swingArmSensorZeroFault)
  (:swingArmSensorNinetyFault
   (&optional (__swingArmSensorNinetyFault :null))
   (if (not (eq __swingArmSensorNinetyFault :null)) (setq _swingArmSensorNinetyFault __swingArmSensorNinetyFault)) _swingArmSensorNinetyFault)
  (:turntableSensorZeroFault
   (&optional (__turntableSensorZeroFault :null))
   (if (not (eq __turntableSensorZeroFault :null)) (setq _turntableSensorZeroFault __turntableSensorZeroFault)) _turntableSensorZeroFault)
  (:extractorSensorLaserFault
   (&optional (__extractorSensorLaserFault :null))
   (if (not (eq __extractorSensorLaserFault :null)) (setq _extractorSensorLaserFault __extractorSensorLaserFault)) _extractorSensorLaserFault)
  (:serialization-length
   ()
   (+
    ;; bool _lifterFault
    1
    ;; bool _extractorFault
    1
    ;; bool _turnTableFault
    1
    ;; bool _swingArmFault
    1
    ;; bool _emergencyPBfault
    1
    ;; bool _swingArmSensorZeroFault
    1
    ;; bool _swingArmSensorNinetyFault
    1
    ;; bool _turntableSensorZeroFault
    1
    ;; bool _extractorSensorLaserFault
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _lifterFault
       (if _lifterFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _extractorFault
       (if _extractorFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _turnTableFault
       (if _turnTableFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _swingArmFault
       (if _swingArmFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _emergencyPBfault
       (if _emergencyPBfault (write-byte -1 s) (write-byte 0 s))
     ;; bool _swingArmSensorZeroFault
       (if _swingArmSensorZeroFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _swingArmSensorNinetyFault
       (if _swingArmSensorNinetyFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _turntableSensorZeroFault
       (if _turntableSensorZeroFault (write-byte -1 s) (write-byte 0 s))
     ;; bool _extractorSensorLaserFault
       (if _extractorSensorLaserFault (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _lifterFault
     (setq _lifterFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _extractorFault
     (setq _extractorFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _turnTableFault
     (setq _turnTableFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _swingArmFault
     (setq _swingArmFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _emergencyPBfault
     (setq _emergencyPBfault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _swingArmSensorZeroFault
     (setq _swingArmSensorZeroFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _swingArmSensorNinetyFault
     (setq _swingArmSensorNinetyFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _turntableSensorZeroFault
     (setq _turntableSensorZeroFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _extractorSensorLaserFault
     (setq _extractorSensorLaserFault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get lift_action::ErrorStatus :md5sum-) "0ad64508a47bfdb3b3558cc9de515c2e")
(setf (get lift_action::ErrorStatus :datatype-) "lift_action/ErrorStatus")
(setf (get lift_action::ErrorStatus :definition-)
      "bool lifterFault
bool extractorFault
bool turnTableFault
bool swingArmFault
bool emergencyPBfault
bool swingArmSensorZeroFault
bool swingArmSensorNinetyFault
bool turntableSensorZeroFault
bool extractorSensorLaserFault
")



(provide :lift_action/ErrorStatus "0ad64508a47bfdb3b3558cc9de515c2e")


