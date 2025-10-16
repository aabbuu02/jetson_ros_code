;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MotorDiagnosticsArray)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MotorDiagnosticsArray (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MOTORDIAGNOSTICSARRAY")
  (make-package "ANSCER_MSGS::MOTORDIAGNOSTICSARRAY"))

(in-package "ROS")
;;//! \htmlinclude MotorDiagnosticsArray.msg.html


(defclass anscer_msgs::MotorDiagnosticsArray
  :super ros::object
  :slots (_motor_diagnostics ))

(defmethod anscer_msgs::MotorDiagnosticsArray
  (:init
   (&key
    ((:motor_diagnostics __motor_diagnostics) ())
    )
   (send-super :init)
   (setq _motor_diagnostics __motor_diagnostics)
   self)
  (:motor_diagnostics
   (&rest __motor_diagnostics)
   (if (keywordp (car __motor_diagnostics))
       (send* _motor_diagnostics __motor_diagnostics)
     (progn
       (if __motor_diagnostics (setq _motor_diagnostics (car __motor_diagnostics)))
       _motor_diagnostics)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/MotorDiagnostics[] _motor_diagnostics
    (apply #'+ (send-all _motor_diagnostics :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/MotorDiagnostics[] _motor_diagnostics
     (write-long (length _motor_diagnostics) s)
     (dolist (elem _motor_diagnostics)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/MotorDiagnostics[] _motor_diagnostics
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _motor_diagnostics (let (r) (dotimes (i n) (push (instance anscer_msgs::MotorDiagnostics :init) r)) r))
     (dolist (elem- _motor_diagnostics)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get anscer_msgs::MotorDiagnosticsArray :md5sum-) "e04d5a81a4ba18dbd66dc15d7fdf969a")
(setf (get anscer_msgs::MotorDiagnosticsArray :datatype-) "anscer_msgs/MotorDiagnosticsArray")
(setf (get anscer_msgs::MotorDiagnosticsArray :definition-)
      "MotorDiagnostics[] motor_diagnostics

================================================================================
MSG: anscer_msgs/MotorDiagnostics
string name
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



(provide :anscer_msgs/MotorDiagnosticsArray "e04d5a81a4ba18dbd66dc15d7fdf969a")


