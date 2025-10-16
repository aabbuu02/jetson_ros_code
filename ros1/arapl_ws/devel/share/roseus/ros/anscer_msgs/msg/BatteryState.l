;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::BatteryState)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'BatteryState (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::BATTERYSTATE")
  (make-package "ANSCER_MSGS::BATTERYSTATE"))

(in-package "ROS")
;;//! \htmlinclude BatteryState.msg.html


(defclass anscer_msgs::BatteryState
  :super ros::object
  :slots (_voltage _current ))

(defmethod anscer_msgs::BatteryState
  (:init
   (&key
    ((:voltage __voltage) 0.0)
    ((:current __current) 0.0)
    )
   (send-super :init)
   (setq _voltage (float __voltage))
   (setq _current (float __current))
   self)
  (:voltage
   (&optional __voltage)
   (if __voltage (setq _voltage __voltage)) _voltage)
  (:current
   (&optional __current)
   (if __current (setq _current __current)) _current)
  (:serialization-length
   ()
   (+
    ;; float32 _voltage
    4
    ;; float32 _current
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _voltage
       (sys::poke _voltage (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _current
       (sys::poke _current (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _voltage
     (setq _voltage (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _current
     (setq _current (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::BatteryState :md5sum-) "9e237a0971ec09fc952c0717bd077bf2")
(setf (get anscer_msgs::BatteryState :datatype-) "anscer_msgs/BatteryState")
(setf (get anscer_msgs::BatteryState :definition-)
      "#mission status
float32 voltage
float32 current

")



(provide :anscer_msgs/BatteryState "9e237a0971ec09fc952c0717bd077bf2")


