;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MotorStatusFlags)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MotorStatusFlags (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MOTORSTATUSFLAGS")
  (make-package "ANSCER_MSGS::MOTORSTATUSFLAGS"))

(in-package "ROS")
;;//! \htmlinclude MotorStatusFlags.msg.html


(defclass anscer_msgs::MotorStatusFlags
  :super ros::object
  :slots (_serial_mode _pulse_mode _analog_mode _power_stage_off _stall_detected _at_limit _unused _micro_basic_script_running _motor_tuning_mode ))

(defmethod anscer_msgs::MotorStatusFlags
  (:init
   (&key
    ((:serial_mode __serial_mode) nil)
    ((:pulse_mode __pulse_mode) nil)
    ((:analog_mode __analog_mode) nil)
    ((:power_stage_off __power_stage_off) nil)
    ((:stall_detected __stall_detected) nil)
    ((:at_limit __at_limit) nil)
    ((:unused __unused) nil)
    ((:micro_basic_script_running __micro_basic_script_running) nil)
    ((:motor_tuning_mode __motor_tuning_mode) nil)
    )
   (send-super :init)
   (setq _serial_mode __serial_mode)
   (setq _pulse_mode __pulse_mode)
   (setq _analog_mode __analog_mode)
   (setq _power_stage_off __power_stage_off)
   (setq _stall_detected __stall_detected)
   (setq _at_limit __at_limit)
   (setq _unused __unused)
   (setq _micro_basic_script_running __micro_basic_script_running)
   (setq _motor_tuning_mode __motor_tuning_mode)
   self)
  (:serial_mode
   (&optional (__serial_mode :null))
   (if (not (eq __serial_mode :null)) (setq _serial_mode __serial_mode)) _serial_mode)
  (:pulse_mode
   (&optional (__pulse_mode :null))
   (if (not (eq __pulse_mode :null)) (setq _pulse_mode __pulse_mode)) _pulse_mode)
  (:analog_mode
   (&optional (__analog_mode :null))
   (if (not (eq __analog_mode :null)) (setq _analog_mode __analog_mode)) _analog_mode)
  (:power_stage_off
   (&optional (__power_stage_off :null))
   (if (not (eq __power_stage_off :null)) (setq _power_stage_off __power_stage_off)) _power_stage_off)
  (:stall_detected
   (&optional (__stall_detected :null))
   (if (not (eq __stall_detected :null)) (setq _stall_detected __stall_detected)) _stall_detected)
  (:at_limit
   (&optional (__at_limit :null))
   (if (not (eq __at_limit :null)) (setq _at_limit __at_limit)) _at_limit)
  (:unused
   (&optional (__unused :null))
   (if (not (eq __unused :null)) (setq _unused __unused)) _unused)
  (:micro_basic_script_running
   (&optional (__micro_basic_script_running :null))
   (if (not (eq __micro_basic_script_running :null)) (setq _micro_basic_script_running __micro_basic_script_running)) _micro_basic_script_running)
  (:motor_tuning_mode
   (&optional (__motor_tuning_mode :null))
   (if (not (eq __motor_tuning_mode :null)) (setq _motor_tuning_mode __motor_tuning_mode)) _motor_tuning_mode)
  (:serialization-length
   ()
   (+
    ;; bool _serial_mode
    1
    ;; bool _pulse_mode
    1
    ;; bool _analog_mode
    1
    ;; bool _power_stage_off
    1
    ;; bool _stall_detected
    1
    ;; bool _at_limit
    1
    ;; bool _unused
    1
    ;; bool _micro_basic_script_running
    1
    ;; bool _motor_tuning_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _serial_mode
       (if _serial_mode (write-byte -1 s) (write-byte 0 s))
     ;; bool _pulse_mode
       (if _pulse_mode (write-byte -1 s) (write-byte 0 s))
     ;; bool _analog_mode
       (if _analog_mode (write-byte -1 s) (write-byte 0 s))
     ;; bool _power_stage_off
       (if _power_stage_off (write-byte -1 s) (write-byte 0 s))
     ;; bool _stall_detected
       (if _stall_detected (write-byte -1 s) (write-byte 0 s))
     ;; bool _at_limit
       (if _at_limit (write-byte -1 s) (write-byte 0 s))
     ;; bool _unused
       (if _unused (write-byte -1 s) (write-byte 0 s))
     ;; bool _micro_basic_script_running
       (if _micro_basic_script_running (write-byte -1 s) (write-byte 0 s))
     ;; bool _motor_tuning_mode
       (if _motor_tuning_mode (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _serial_mode
     (setq _serial_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _pulse_mode
     (setq _pulse_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _analog_mode
     (setq _analog_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _power_stage_off
     (setq _power_stage_off (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _stall_detected
     (setq _stall_detected (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _at_limit
     (setq _at_limit (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _unused
     (setq _unused (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _micro_basic_script_running
     (setq _micro_basic_script_running (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _motor_tuning_mode
     (setq _motor_tuning_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get anscer_msgs::MotorStatusFlags :md5sum-) "4d1ef401a01f21abeee2855174e79d1f")
(setf (get anscer_msgs::MotorStatusFlags :datatype-) "anscer_msgs/MotorStatusFlags")
(setf (get anscer_msgs::MotorStatusFlags :definition-)
      "bool serial_mode
bool pulse_mode
bool analog_mode
bool power_stage_off
bool stall_detected
bool at_limit
bool unused
bool micro_basic_script_running
bool motor_tuning_mode

")



(provide :anscer_msgs/MotorStatusFlags "4d1ef401a01f21abeee2855174e79d1f")


