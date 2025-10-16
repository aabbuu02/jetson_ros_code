;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ZoneInformation)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ZoneInformation (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::ZONEINFORMATION")
  (make-package "ANSCER_MSGS::ZONEINFORMATION"))

(in-package "ROS")
;;//! \htmlinclude ZoneInformation.msg.html


(defclass anscer_msgs::ZoneInformation
  :super ros::object
  :slots (_indication_info _speed_factor ))

(defmethod anscer_msgs::ZoneInformation
  (:init
   (&key
    ((:indication_info __indication_info) (instance anscer_msgs::Indication :init))
    ((:speed_factor __speed_factor) 0.0)
    )
   (send-super :init)
   (setq _indication_info __indication_info)
   (setq _speed_factor (float __speed_factor))
   self)
  (:indication_info
   (&rest __indication_info)
   (if (keywordp (car __indication_info))
       (send* _indication_info __indication_info)
     (progn
       (if __indication_info (setq _indication_info (car __indication_info)))
       _indication_info)))
  (:speed_factor
   (&optional __speed_factor)
   (if __speed_factor (setq _speed_factor __speed_factor)) _speed_factor)
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/Indication _indication_info
    (send _indication_info :serialization-length)
    ;; float32 _speed_factor
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/Indication _indication_info
       (send _indication_info :serialize s)
     ;; float32 _speed_factor
       (sys::poke _speed_factor (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/Indication _indication_info
     (send _indication_info :deserialize buf ptr-) (incf ptr- (send _indication_info :serialization-length))
   ;; float32 _speed_factor
     (setq _speed_factor (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::ZoneInformation :md5sum-) "37c3f4225b2755242cf0813eaae1cb1a")
(setf (get anscer_msgs::ZoneInformation :datatype-) "anscer_msgs/ZoneInformation")
(setf (get anscer_msgs::ZoneInformation :definition-)
      "anscer_msgs/Indication indication_info
float32 speed_factor

================================================================================
MSG: anscer_msgs/Indication
string color
int8 color_mode
bool buzzer
int8 buzzer_mode
int16 priority



")



(provide :anscer_msgs/ZoneInformation "37c3f4225b2755242cf0813eaae1cb1a")


