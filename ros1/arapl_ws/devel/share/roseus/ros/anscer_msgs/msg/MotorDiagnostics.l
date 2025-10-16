;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MotorDiagnostics)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MotorDiagnostics (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MOTORDIAGNOSTICS")
  (make-package "ANSCER_MSGS::MOTORDIAGNOSTICS"))

(in-package "ROS")
;;//! \htmlinclude MotorDiagnostics.msg.html


(defclass anscer_msgs::MotorDiagnostics
  :super ros::object
  :slots (_name _fault_flags _status_flags ))

(defmethod anscer_msgs::MotorDiagnostics
  (:init
   (&key
    ((:name __name) "")
    ((:fault_flags __fault_flags) (instance anscer_msgs::MotorFaultFlags :init))
    ((:status_flags __status_flags) (instance anscer_msgs::MotorStatusFlags :init))
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _fault_flags __fault_flags)
   (setq _status_flags __status_flags)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:fault_flags
   (&rest __fault_flags)
   (if (keywordp (car __fault_flags))
       (send* _fault_flags __fault_flags)
     (progn
       (if __fault_flags (setq _fault_flags (car __fault_flags)))
       _fault_flags)))
  (:status_flags
   (&rest __status_flags)
   (if (keywordp (car __status_flags))
       (send* _status_flags __status_flags)
     (progn
       (if __status_flags (setq _status_flags (car __status_flags)))
       _status_flags)))
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; anscer_msgs/MotorFaultFlags _fault_flags
    (send _fault_flags :serialization-length)
    ;; anscer_msgs/MotorStatusFlags _status_flags
    (send _status_flags :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; anscer_msgs/MotorFaultFlags _fault_flags
       (send _fault_flags :serialize s)
     ;; anscer_msgs/MotorStatusFlags _status_flags
       (send _status_flags :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; anscer_msgs/MotorFaultFlags _fault_flags
     (send _fault_flags :deserialize buf ptr-) (incf ptr- (send _fault_flags :serialization-length))
   ;; anscer_msgs/MotorStatusFlags _status_flags
     (send _status_flags :deserialize buf ptr-) (incf ptr- (send _status_flags :serialization-length))
   ;;
   self)
  )

(setf (get anscer_msgs::MotorDiagnostics :md5sum-) "0632e6a21795b5a1cc88be69506a4af5")
(setf (get anscer_msgs::MotorDiagnostics :datatype-) "anscer_msgs/MotorDiagnostics")
(setf (get anscer_msgs::MotorDiagnostics :definition-)
      "string name
MotorFaultFlags fault_flags
MotorStatusFlags status_flags

================================================================================
MSG: anscer_msgs/MotorFaultFlags
bool overheat
bool overvoltage
bool undervoltage
bool short_circuit
bool emergency_stop
bool motor_setup_fault
bool mosfet_failure
bool default_configuration

================================================================================
MSG: anscer_msgs/MotorStatusFlags
bool serial_mode
bool pulse_mode
bool analog_mode
bool power_stage_off
bool stall_detected
bool at_limit
bool unused
bool micro_basic_script_running
bool motor_tuning_mode

")



(provide :anscer_msgs/MotorDiagnostics "0632e6a21795b5a1cc88be69506a4af5")


