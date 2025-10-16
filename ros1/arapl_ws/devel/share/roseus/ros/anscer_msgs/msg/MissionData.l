;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MissionData)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MissionData (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MISSIONDATA")
  (make-package "ANSCER_MSGS::MISSIONDATA"))

(in-package "ROS")
;;//! \htmlinclude MissionData.msg.html


(defclass anscer_msgs::MissionData
  :super ros::object
  :slots (_mission_name _success_count _mission_count ))

(defmethod anscer_msgs::MissionData
  (:init
   (&key
    ((:mission_name __mission_name) "")
    ((:success_count __success_count) 0)
    ((:mission_count __mission_count) 0)
    )
   (send-super :init)
   (setq _mission_name (string __mission_name))
   (setq _success_count (round __success_count))
   (setq _mission_count (round __mission_count))
   self)
  (:mission_name
   (&optional __mission_name)
   (if __mission_name (setq _mission_name __mission_name)) _mission_name)
  (:success_count
   (&optional __success_count)
   (if __success_count (setq _success_count __success_count)) _success_count)
  (:mission_count
   (&optional __mission_count)
   (if __mission_count (setq _mission_count __mission_count)) _mission_count)
  (:serialization-length
   ()
   (+
    ;; string _mission_name
    4 (length _mission_name)
    ;; int16 _success_count
    2
    ;; int16 _mission_count
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _mission_name
       (write-long (length _mission_name) s) (princ _mission_name s)
     ;; int16 _success_count
       (write-word _success_count s)
     ;; int16 _mission_count
       (write-word _mission_count s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _mission_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _mission_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _success_count
     (setq _success_count (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _mission_count
     (setq _mission_count (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get anscer_msgs::MissionData :md5sum-) "8677a8d3995d6e5101db8568d121c771")
(setf (get anscer_msgs::MissionData :datatype-) "anscer_msgs/MissionData")
(setf (get anscer_msgs::MissionData :definition-)
      "string mission_name
int16 success_count
int16 mission_count


")



(provide :anscer_msgs/MissionData "8677a8d3995d6e5101db8568d121c771")


