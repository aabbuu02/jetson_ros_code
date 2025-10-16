;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::Feedback)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'Feedback (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::FEEDBACK")
  (make-package "ANSCER_MSGS::FEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude Feedback.msg.html


(intern "*IDLE*" (find-package "ANSCER_MSGS::FEEDBACK"))
(shadow '*IDLE* (find-package "ANSCER_MSGS::FEEDBACK"))
(defconstant anscer_msgs::Feedback::*IDLE* 0)
(intern "*ACTIVE*" (find-package "ANSCER_MSGS::FEEDBACK"))
(shadow '*ACTIVE* (find-package "ANSCER_MSGS::FEEDBACK"))
(defconstant anscer_msgs::Feedback::*ACTIVE* 1)
(intern "*SUCCESS*" (find-package "ANSCER_MSGS::FEEDBACK"))
(shadow '*SUCCESS* (find-package "ANSCER_MSGS::FEEDBACK"))
(defconstant anscer_msgs::Feedback::*SUCCESS* 2)
(intern "*ABORTED*" (find-package "ANSCER_MSGS::FEEDBACK"))
(shadow '*ABORTED* (find-package "ANSCER_MSGS::FEEDBACK"))
(defconstant anscer_msgs::Feedback::*ABORTED* 3)
(intern "*PAUSED*" (find-package "ANSCER_MSGS::FEEDBACK"))
(shadow '*PAUSED* (find-package "ANSCER_MSGS::FEEDBACK"))
(defconstant anscer_msgs::Feedback::*PAUSED* 4)

(defun anscer_msgs::Feedback-to-symbol (const)
  (cond
        ((= const 0) 'anscer_msgs::Feedback::*IDLE*)
        ((= const 1) 'anscer_msgs::Feedback::*ACTIVE*)
        ((= const 2) 'anscer_msgs::Feedback::*SUCCESS*)
        ((= const 3) 'anscer_msgs::Feedback::*ABORTED*)
        ((= const 4) 'anscer_msgs::Feedback::*PAUSED*)
        (t nil)))

(defclass anscer_msgs::Feedback
  :super ros::object
  :slots (_index _mission_id _number _status _charge_info _completion_percentage _time_elapsed _priority_level ))

(defmethod anscer_msgs::Feedback
  (:init
   (&key
    ((:index __index) "")
    ((:mission_id __mission_id) "")
    ((:number __number) 0)
    ((:status __status) 0)
    ((:charge_info __charge_info) (instance anscer_msgs::ChargeInfo :init))
    ((:completion_percentage __completion_percentage) 0.0)
    ((:time_elapsed __time_elapsed) 0)
    ((:priority_level __priority_level) 0)
    )
   (send-super :init)
   (setq _index (string __index))
   (setq _mission_id (string __mission_id))
   (setq _number (round __number))
   (setq _status (round __status))
   (setq _charge_info __charge_info)
   (setq _completion_percentage (float __completion_percentage))
   (setq _time_elapsed (round __time_elapsed))
   (setq _priority_level (round __priority_level))
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:mission_id
   (&optional __mission_id)
   (if __mission_id (setq _mission_id __mission_id)) _mission_id)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:charge_info
   (&rest __charge_info)
   (if (keywordp (car __charge_info))
       (send* _charge_info __charge_info)
     (progn
       (if __charge_info (setq _charge_info (car __charge_info)))
       _charge_info)))
  (:completion_percentage
   (&optional __completion_percentage)
   (if __completion_percentage (setq _completion_percentage __completion_percentage)) _completion_percentage)
  (:time_elapsed
   (&optional __time_elapsed)
   (if __time_elapsed (setq _time_elapsed __time_elapsed)) _time_elapsed)
  (:priority_level
   (&optional __priority_level)
   (if __priority_level (setq _priority_level __priority_level)) _priority_level)
  (:serialization-length
   ()
   (+
    ;; string _index
    4 (length _index)
    ;; string _mission_id
    4 (length _mission_id)
    ;; int16 _number
    2
    ;; int16 _status
    2
    ;; anscer_msgs/ChargeInfo _charge_info
    (send _charge_info :serialization-length)
    ;; float32 _completion_percentage
    4
    ;; int32 _time_elapsed
    4
    ;; int32 _priority_level
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _index
       (write-long (length _index) s) (princ _index s)
     ;; string _mission_id
       (write-long (length _mission_id) s) (princ _mission_id s)
     ;; int16 _number
       (write-word _number s)
     ;; int16 _status
       (write-word _status s)
     ;; anscer_msgs/ChargeInfo _charge_info
       (send _charge_info :serialize s)
     ;; float32 _completion_percentage
       (sys::poke _completion_percentage (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _time_elapsed
       (write-long _time_elapsed s)
     ;; int32 _priority_level
       (write-long _priority_level s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _index
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _index (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _mission_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _mission_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _status
     (setq _status (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; anscer_msgs/ChargeInfo _charge_info
     (send _charge_info :deserialize buf ptr-) (incf ptr- (send _charge_info :serialization-length))
   ;; float32 _completion_percentage
     (setq _completion_percentage (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _time_elapsed
     (setq _time_elapsed (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _priority_level
     (setq _priority_level (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::Feedback :md5sum-) "8b323bc9ef090763cc665618840a91da")
(setf (get anscer_msgs::Feedback :datatype-) "anscer_msgs/Feedback")
(setf (get anscer_msgs::Feedback :definition-)
      "#mission status
int32 IDLE =0
int32 ACTIVE =1
int32 SUCCESS =2
int32 ABORTED =3
int32 PAUSED =4


string index
string mission_id
int16 number
int16 status
anscer_msgs/ChargeInfo charge_info
float32 completion_percentage
int32 time_elapsed
int32 priority_level

================================================================================
MSG: anscer_msgs/ChargeInfo
uint8 CONNECTED=1
uint8 DISCONNECTED=2
uint8 OVERRIDE=3

bool charger_activate
int32 charge_time
bool ignore_time
float32 charge_percentage
bool ignore_percentage

")



(provide :anscer_msgs/Feedback "8b323bc9ef090763cc665618840a91da")


