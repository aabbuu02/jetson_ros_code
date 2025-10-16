;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MissionDB)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MissionDB (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MISSIONDB")
  (make-package "ANSCER_MSGS::MISSIONDB"))

(in-package "ROS")
;;//! \htmlinclude MissionDB.msg.html


(defclass anscer_msgs::MissionDB
  :super ros::object
  :slots (_timestamp _current_distance _total_distance ))

(defmethod anscer_msgs::MissionDB
  (:init
   (&key
    ((:timestamp __timestamp) "")
    ((:current_distance __current_distance) 0.0)
    ((:total_distance __total_distance) 0.0)
    )
   (send-super :init)
   (setq _timestamp (string __timestamp))
   (setq _current_distance (float __current_distance))
   (setq _total_distance (float __total_distance))
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:current_distance
   (&optional __current_distance)
   (if __current_distance (setq _current_distance __current_distance)) _current_distance)
  (:total_distance
   (&optional __total_distance)
   (if __total_distance (setq _total_distance __total_distance)) _total_distance)
  (:serialization-length
   ()
   (+
    ;; string _timestamp
    4 (length _timestamp)
    ;; float32 _current_distance
    4
    ;; float32 _total_distance
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _timestamp
       (write-long (length _timestamp) s) (princ _timestamp s)
     ;; float32 _current_distance
       (sys::poke _current_distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _total_distance
       (sys::poke _total_distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _timestamp
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _timestamp (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _current_distance
     (setq _current_distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _total_distance
     (setq _total_distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::MissionDB :md5sum-) "45b94f6cc052bb5811d46e7c764cde3c")
(setf (get anscer_msgs::MissionDB :datatype-) "anscer_msgs/MissionDB")
(setf (get anscer_msgs::MissionDB :definition-)
      "string timestamp
float32 current_distance
float32 total_distance

")



(provide :anscer_msgs/MissionDB "45b94f6cc052bb5811d46e7c764cde3c")


