;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::Task)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'Task (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::TASK")
  (make-package "ANSCER_MSGS::TASK"))

(in-package "ROS")
;;//! \htmlinclude Task.msg.html


(defclass anscer_msgs::Task
  :super ros::object
  :slots (_index _waypoint_index _number _activate _acr_info _charge_info ))

(defmethod anscer_msgs::Task
  (:init
   (&key
    ((:index __index) "")
    ((:waypoint_index __waypoint_index) 0)
    ((:number __number) 0)
    ((:activate __activate) nil)
    ((:acr_info __acr_info) (instance anscer_msgs::ACRControl :init))
    ((:charge_info __charge_info) (instance anscer_msgs::ChargeInfo :init))
    )
   (send-super :init)
   (setq _index (string __index))
   (setq _waypoint_index (round __waypoint_index))
   (setq _number (round __number))
   (setq _activate __activate)
   (setq _acr_info __acr_info)
   (setq _charge_info __charge_info)
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:waypoint_index
   (&optional __waypoint_index)
   (if __waypoint_index (setq _waypoint_index __waypoint_index)) _waypoint_index)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:activate
   (&optional (__activate :null))
   (if (not (eq __activate :null)) (setq _activate __activate)) _activate)
  (:acr_info
   (&rest __acr_info)
   (if (keywordp (car __acr_info))
       (send* _acr_info __acr_info)
     (progn
       (if __acr_info (setq _acr_info (car __acr_info)))
       _acr_info)))
  (:charge_info
   (&rest __charge_info)
   (if (keywordp (car __charge_info))
       (send* _charge_info __charge_info)
     (progn
       (if __charge_info (setq _charge_info (car __charge_info)))
       _charge_info)))
  (:serialization-length
   ()
   (+
    ;; string _index
    4 (length _index)
    ;; int16 _waypoint_index
    2
    ;; int16 _number
    2
    ;; bool _activate
    1
    ;; anscer_msgs/ACRControl _acr_info
    (send _acr_info :serialization-length)
    ;; anscer_msgs/ChargeInfo _charge_info
    (send _charge_info :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _index
       (write-long (length _index) s) (princ _index s)
     ;; int16 _waypoint_index
       (write-word _waypoint_index s)
     ;; int16 _number
       (write-word _number s)
     ;; bool _activate
       (if _activate (write-byte -1 s) (write-byte 0 s))
     ;; anscer_msgs/ACRControl _acr_info
       (send _acr_info :serialize s)
     ;; anscer_msgs/ChargeInfo _charge_info
       (send _charge_info :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _index
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _index (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _waypoint_index
     (setq _waypoint_index (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _number
     (setq _number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; bool _activate
     (setq _activate (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; anscer_msgs/ACRControl _acr_info
     (send _acr_info :deserialize buf ptr-) (incf ptr- (send _acr_info :serialization-length))
   ;; anscer_msgs/ChargeInfo _charge_info
     (send _charge_info :deserialize buf ptr-) (incf ptr- (send _charge_info :serialization-length))
   ;;
   self)
  )

(setf (get anscer_msgs::Task :md5sum-) "a8514c525e421060a8b705e1ac323b92")
(setf (get anscer_msgs::Task :datatype-) "anscer_msgs/Task")
(setf (get anscer_msgs::Task :definition-)
      "string index
int16 waypoint_index
int16 number
bool activate
anscer_msgs/ACRControl acr_info
anscer_msgs/ChargeInfo charge_info

================================================================================
MSG: anscer_msgs/ACRControl
#mission status
int32 PICKUP =0
int32 DROPOFF =1

int16 acr_shelf
int16 target_shelf
int16 acr_action
int64 bar_code_number
int64 whole_bin_number

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



(provide :anscer_msgs/Task "a8514c525e421060a8b705e1ac323b92")


