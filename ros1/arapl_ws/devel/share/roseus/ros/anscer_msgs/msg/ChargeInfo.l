;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ChargeInfo)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ChargeInfo (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::CHARGEINFO")
  (make-package "ANSCER_MSGS::CHARGEINFO"))

(in-package "ROS")
;;//! \htmlinclude ChargeInfo.msg.html


(intern "*CONNECTED*" (find-package "ANSCER_MSGS::CHARGEINFO"))
(shadow '*CONNECTED* (find-package "ANSCER_MSGS::CHARGEINFO"))
(defconstant anscer_msgs::ChargeInfo::*CONNECTED* 1)
(intern "*DISCONNECTED*" (find-package "ANSCER_MSGS::CHARGEINFO"))
(shadow '*DISCONNECTED* (find-package "ANSCER_MSGS::CHARGEINFO"))
(defconstant anscer_msgs::ChargeInfo::*DISCONNECTED* 2)
(intern "*OVERRIDE*" (find-package "ANSCER_MSGS::CHARGEINFO"))
(shadow '*OVERRIDE* (find-package "ANSCER_MSGS::CHARGEINFO"))
(defconstant anscer_msgs::ChargeInfo::*OVERRIDE* 3)

(defun anscer_msgs::ChargeInfo-to-symbol (const)
  (cond
        ((= const 1) 'anscer_msgs::ChargeInfo::*CONNECTED*)
        ((= const 2) 'anscer_msgs::ChargeInfo::*DISCONNECTED*)
        ((= const 3) 'anscer_msgs::ChargeInfo::*OVERRIDE*)
        (t nil)))

(defclass anscer_msgs::ChargeInfo
  :super ros::object
  :slots (_charger_activate _charge_time _ignore_time _charge_percentage _ignore_percentage ))

(defmethod anscer_msgs::ChargeInfo
  (:init
   (&key
    ((:charger_activate __charger_activate) nil)
    ((:charge_time __charge_time) 0)
    ((:ignore_time __ignore_time) nil)
    ((:charge_percentage __charge_percentage) 0.0)
    ((:ignore_percentage __ignore_percentage) nil)
    )
   (send-super :init)
   (setq _charger_activate __charger_activate)
   (setq _charge_time (round __charge_time))
   (setq _ignore_time __ignore_time)
   (setq _charge_percentage (float __charge_percentage))
   (setq _ignore_percentage __ignore_percentage)
   self)
  (:charger_activate
   (&optional (__charger_activate :null))
   (if (not (eq __charger_activate :null)) (setq _charger_activate __charger_activate)) _charger_activate)
  (:charge_time
   (&optional __charge_time)
   (if __charge_time (setq _charge_time __charge_time)) _charge_time)
  (:ignore_time
   (&optional (__ignore_time :null))
   (if (not (eq __ignore_time :null)) (setq _ignore_time __ignore_time)) _ignore_time)
  (:charge_percentage
   (&optional __charge_percentage)
   (if __charge_percentage (setq _charge_percentage __charge_percentage)) _charge_percentage)
  (:ignore_percentage
   (&optional (__ignore_percentage :null))
   (if (not (eq __ignore_percentage :null)) (setq _ignore_percentage __ignore_percentage)) _ignore_percentage)
  (:serialization-length
   ()
   (+
    ;; bool _charger_activate
    1
    ;; int32 _charge_time
    4
    ;; bool _ignore_time
    1
    ;; float32 _charge_percentage
    4
    ;; bool _ignore_percentage
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _charger_activate
       (if _charger_activate (write-byte -1 s) (write-byte 0 s))
     ;; int32 _charge_time
       (write-long _charge_time s)
     ;; bool _ignore_time
       (if _ignore_time (write-byte -1 s) (write-byte 0 s))
     ;; float32 _charge_percentage
       (sys::poke _charge_percentage (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _ignore_percentage
       (if _ignore_percentage (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _charger_activate
     (setq _charger_activate (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _charge_time
     (setq _charge_time (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _ignore_time
     (setq _ignore_time (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _charge_percentage
     (setq _charge_percentage (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _ignore_percentage
     (setq _ignore_percentage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get anscer_msgs::ChargeInfo :md5sum-) "07a5813f322d0f1699de1925e6361210")
(setf (get anscer_msgs::ChargeInfo :datatype-) "anscer_msgs/ChargeInfo")
(setf (get anscer_msgs::ChargeInfo :definition-)
      "uint8 CONNECTED=1
uint8 DISCONNECTED=2
uint8 OVERRIDE=3

bool charger_activate
int32 charge_time
bool ignore_time
float32 charge_percentage
bool ignore_percentage

")



(provide :anscer_msgs/ChargeInfo "07a5813f322d0f1699de1925e6361210")


