;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MissionInfo)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MissionInfo (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MISSIONINFO")
  (make-package "ANSCER_MSGS::MISSIONINFO"))

(in-package "ROS")
;;//! \htmlinclude MissionInfo.msg.html


(defclass anscer_msgs::MissionInfo
  :super ros::object
  :slots (_mission_info ))

(defmethod anscer_msgs::MissionInfo
  (:init
   (&key
    ((:mission_info __mission_info) ())
    )
   (send-super :init)
   (setq _mission_info __mission_info)
   self)
  (:mission_info
   (&rest __mission_info)
   (if (keywordp (car __mission_info))
       (send* _mission_info __mission_info)
     (progn
       (if __mission_info (setq _mission_info (car __mission_info)))
       _mission_info)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/MissionData[] _mission_info
    (apply #'+ (send-all _mission_info :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/MissionData[] _mission_info
     (write-long (length _mission_info) s)
     (dolist (elem _mission_info)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/MissionData[] _mission_info
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _mission_info (let (r) (dotimes (i n) (push (instance anscer_msgs::MissionData :init) r)) r))
     (dolist (elem- _mission_info)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get anscer_msgs::MissionInfo :md5sum-) "29be06f7c3d77e1344134d3a99624eb2")
(setf (get anscer_msgs::MissionInfo :datatype-) "anscer_msgs/MissionInfo")
(setf (get anscer_msgs::MissionInfo :definition-)
      "anscer_msgs/MissionData[] mission_info


================================================================================
MSG: anscer_msgs/MissionData
string mission_name
int16 success_count
int16 mission_count


")



(provide :anscer_msgs/MissionInfo "29be06f7c3d77e1344134d3a99624eb2")


