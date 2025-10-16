;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::MissionAnalytics)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'MissionAnalytics (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::MISSIONANALYTICS")
  (make-package "ANSCER_MSGS::MISSIONANALYTICS"))
(unless (find-package "ANSCER_MSGS::MISSIONANALYTICSREQUEST")
  (make-package "ANSCER_MSGS::MISSIONANALYTICSREQUEST"))
(unless (find-package "ANSCER_MSGS::MISSIONANALYTICSRESPONSE")
  (make-package "ANSCER_MSGS::MISSIONANALYTICSRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::MissionAnalyticsRequest
  :super ros::object
  :slots (_start_date _end_date ))

(defmethod anscer_msgs::MissionAnalyticsRequest
  (:init
   (&key
    ((:start_date __start_date) "")
    ((:end_date __end_date) "")
    )
   (send-super :init)
   (setq _start_date (string __start_date))
   (setq _end_date (string __end_date))
   self)
  (:start_date
   (&optional __start_date)
   (if __start_date (setq _start_date __start_date)) _start_date)
  (:end_date
   (&optional __end_date)
   (if __end_date (setq _end_date __end_date)) _end_date)
  (:serialization-length
   ()
   (+
    ;; string _start_date
    4 (length _start_date)
    ;; string _end_date
    4 (length _end_date)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _start_date
       (write-long (length _start_date) s) (princ _start_date s)
     ;; string _end_date
       (write-long (length _end_date) s) (princ _end_date s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _start_date
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _start_date (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _end_date
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _end_date (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anscer_msgs::MissionAnalyticsResponse
  :super ros::object
  :slots (_mission_db ))

(defmethod anscer_msgs::MissionAnalyticsResponse
  (:init
   (&key
    ((:mission_db __mission_db) ())
    )
   (send-super :init)
   (setq _mission_db __mission_db)
   self)
  (:mission_db
   (&rest __mission_db)
   (if (keywordp (car __mission_db))
       (send* _mission_db __mission_db)
     (progn
       (if __mission_db (setq _mission_db (car __mission_db)))
       _mission_db)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/MissionDB[] _mission_db
    (apply #'+ (send-all _mission_db :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/MissionDB[] _mission_db
     (write-long (length _mission_db) s)
     (dolist (elem _mission_db)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/MissionDB[] _mission_db
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _mission_db (let (r) (dotimes (i n) (push (instance anscer_msgs::MissionDB :init) r)) r))
     (dolist (elem- _mission_db)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass anscer_msgs::MissionAnalytics
  :super ros::object
  :slots ())

(setf (get anscer_msgs::MissionAnalytics :md5sum-) "08b960482269c6ce2305b1dc4350baa3")
(setf (get anscer_msgs::MissionAnalytics :datatype-) "anscer_msgs/MissionAnalytics")
(setf (get anscer_msgs::MissionAnalytics :request) anscer_msgs::MissionAnalyticsRequest)
(setf (get anscer_msgs::MissionAnalytics :response) anscer_msgs::MissionAnalyticsResponse)

(defmethod anscer_msgs::MissionAnalyticsRequest
  (:response () (instance anscer_msgs::MissionAnalyticsResponse :init)))

(setf (get anscer_msgs::MissionAnalyticsRequest :md5sum-) "08b960482269c6ce2305b1dc4350baa3")
(setf (get anscer_msgs::MissionAnalyticsRequest :datatype-) "anscer_msgs/MissionAnalyticsRequest")
(setf (get anscer_msgs::MissionAnalyticsRequest :definition-)
      "string start_date
string end_date
---
anscer_msgs/MissionDB[] mission_db


================================================================================
MSG: anscer_msgs/MissionDB
string timestamp
float32 current_distance
float32 total_distance
")

(setf (get anscer_msgs::MissionAnalyticsResponse :md5sum-) "08b960482269c6ce2305b1dc4350baa3")
(setf (get anscer_msgs::MissionAnalyticsResponse :datatype-) "anscer_msgs/MissionAnalyticsResponse")
(setf (get anscer_msgs::MissionAnalyticsResponse :definition-)
      "string start_date
string end_date
---
anscer_msgs/MissionDB[] mission_db


================================================================================
MSG: anscer_msgs/MissionDB
string timestamp
float32 current_distance
float32 total_distance
")



(provide :anscer_msgs/MissionAnalytics "08b960482269c6ce2305b1dc4350baa3")


