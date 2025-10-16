;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MotorFaultFlags)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MotorFaultFlags (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MOTORFAULTFLAGS")
  (make-package "ANSCER_MSGS::MOTORFAULTFLAGS"))

(in-package "ROS")
;;//! \htmlinclude MotorFaultFlags.msg.html


(defclass anscer_msgs::MotorFaultFlags
  :super ros::object
  :slots (_overheat _overvoltage _undervoltage _short_circuit _emergency_stop _motor_setup_fault _mosfet_failure _default_configuration ))

(defmethod anscer_msgs::MotorFaultFlags
  (:init
   (&key
    ((:overheat __overheat) nil)
    ((:overvoltage __overvoltage) nil)
    ((:undervoltage __undervoltage) nil)
    ((:short_circuit __short_circuit) nil)
    ((:emergency_stop __emergency_stop) nil)
    ((:motor_setup_fault __motor_setup_fault) nil)
    ((:mosfet_failure __mosfet_failure) nil)
    ((:default_configuration __default_configuration) nil)
    )
   (send-super :init)
   (setq _overheat __overheat)
   (setq _overvoltage __overvoltage)
   (setq _undervoltage __undervoltage)
   (setq _short_circuit __short_circuit)
   (setq _emergency_stop __emergency_stop)
   (setq _motor_setup_fault __motor_setup_fault)
   (setq _mosfet_failure __mosfet_failure)
   (setq _default_configuration __default_configuration)
   self)
  (:overheat
   (&optional (__overheat :null))
   (if (not (eq __overheat :null)) (setq _overheat __overheat)) _overheat)
  (:overvoltage
   (&optional (__overvoltage :null))
   (if (not (eq __overvoltage :null)) (setq _overvoltage __overvoltage)) _overvoltage)
  (:undervoltage
   (&optional (__undervoltage :null))
   (if (not (eq __undervoltage :null)) (setq _undervoltage __undervoltage)) _undervoltage)
  (:short_circuit
   (&optional (__short_circuit :null))
   (if (not (eq __short_circuit :null)) (setq _short_circuit __short_circuit)) _short_circuit)
  (:emergency_stop
   (&optional (__emergency_stop :null))
   (if (not (eq __emergency_stop :null)) (setq _emergency_stop __emergency_stop)) _emergency_stop)
  (:motor_setup_fault
   (&optional (__motor_setup_fault :null))
   (if (not (eq __motor_setup_fault :null)) (setq _motor_setup_fault __motor_setup_fault)) _motor_setup_fault)
  (:mosfet_failure
   (&optional (__mosfet_failure :null))
   (if (not (eq __mosfet_failure :null)) (setq _mosfet_failure __mosfet_failure)) _mosfet_failure)
  (:default_configuration
   (&optional (__default_configuration :null))
   (if (not (eq __default_configuration :null)) (setq _default_configuration __default_configuration)) _default_configuration)
  (:serialization-length
   ()
   (+
    ;; bool _overheat
    1
    ;; bool _overvoltage
    1
    ;; bool _undervoltage
    1
    ;; bool _short_circuit
    1
    ;; bool _emergency_stop
    1
    ;; bool _motor_setup_fault
    1
    ;; bool _mosfet_failure
    1
    ;; bool _default_configuration
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _overheat
       (if _overheat (write-byte -1 s) (write-byte 0 s))
     ;; bool _overvoltage
       (if _overvoltage (write-byte -1 s) (write-byte 0 s))
     ;; bool _undervoltage
       (if _undervoltage (write-byte -1 s) (write-byte 0 s))
     ;; bool _short_circuit
       (if _short_circuit (write-byte -1 s) (write-byte 0 s))
     ;; bool _emergency_stop
       (if _emergency_stop (write-byte -1 s) (write-byte 0 s))
     ;; bool _motor_setup_fault
       (if _motor_setup_fault (write-byte -1 s) (write-byte 0 s))
     ;; bool _mosfet_failure
       (if _mosfet_failure (write-byte -1 s) (write-byte 0 s))
     ;; bool _default_configuration
       (if _default_configuration (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _overheat
     (setq _overheat (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _overvoltage
     (setq _overvoltage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _undervoltage
     (setq _undervoltage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _short_circuit
     (setq _short_circuit (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _emergency_stop
     (setq _emergency_stop (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _motor_setup_fault
     (setq _motor_setup_fault (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _mosfet_failure
     (setq _mosfet_failure (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _default_configuration
     (setq _default_configuration (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get anscer_msgs::MotorFaultFlags :md5sum-) "5204cec7a2d19b97b19f5f360556d07a")
(setf (get anscer_msgs::MotorFaultFlags :datatype-) "anscer_msgs/MotorFaultFlags")
(setf (get anscer_msgs::MotorFaultFlags :definition-)
      "bool overheat
bool overvoltage
bool undervoltage
bool short_circuit
bool emergency_stop
bool motor_setup_fault
bool mosfet_failure
bool default_configuration

")



(provide :anscer_msgs/MotorFaultFlags "5204cec7a2d19b97b19f5f360556d07a")


