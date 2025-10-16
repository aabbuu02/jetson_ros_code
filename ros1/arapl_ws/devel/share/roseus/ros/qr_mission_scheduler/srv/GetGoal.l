;; Auto-generated. Do not edit!


(when (boundp 'qr_mission_scheduler::GetGoal)
  (if (not (find-package "QR_MISSION_SCHEDULER"))
    (make-package "QR_MISSION_SCHEDULER"))
  (shadow 'GetGoal (find-package "QR_MISSION_SCHEDULER")))
(unless (find-package "QR_MISSION_SCHEDULER::GETGOAL")
  (make-package "QR_MISSION_SCHEDULER::GETGOAL"))
(unless (find-package "QR_MISSION_SCHEDULER::GETGOALREQUEST")
  (make-package "QR_MISSION_SCHEDULER::GETGOALREQUEST"))
(unless (find-package "QR_MISSION_SCHEDULER::GETGOALRESPONSE")
  (make-package "QR_MISSION_SCHEDULER::GETGOALRESPONSE"))

(in-package "ROS")





(defclass qr_mission_scheduler::GetGoalRequest
  :super ros::object
  :slots (_goalType _source_id _target_id ))

(defmethod qr_mission_scheduler::GetGoalRequest
  (:init
   (&key
    ((:goalType __goalType) "")
    ((:source_id __source_id) 0.0)
    ((:target_id __target_id) 0.0)
    )
   (send-super :init)
   (setq _goalType (string __goalType))
   (setq _source_id (float __source_id))
   (setq _target_id (float __target_id))
   self)
  (:goalType
   (&optional __goalType)
   (if __goalType (setq _goalType __goalType)) _goalType)
  (:source_id
   (&optional __source_id)
   (if __source_id (setq _source_id __source_id)) _source_id)
  (:target_id
   (&optional __target_id)
   (if __target_id (setq _target_id __target_id)) _target_id)
  (:serialization-length
   ()
   (+
    ;; string _goalType
    4 (length _goalType)
    ;; float64 _source_id
    8
    ;; float64 _target_id
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _goalType
       (write-long (length _goalType) s) (princ _goalType s)
     ;; float64 _source_id
       (sys::poke _source_id (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _target_id
       (sys::poke _target_id (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _goalType
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goalType (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64 _source_id
     (setq _source_id (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _target_id
     (setq _target_id (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass qr_mission_scheduler::GetGoalResponse
  :super ros::object
  :slots (_result ))

(defmethod qr_mission_scheduler::GetGoalResponse
  (:init
   (&key
    ((:result __result) "")
    )
   (send-super :init)
   (setq _result (string __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; string _result
    4 (length _result)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _result
       (write-long (length _result) s) (princ _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _result
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _result (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass qr_mission_scheduler::GetGoal
  :super ros::object
  :slots ())

(setf (get qr_mission_scheduler::GetGoal :md5sum-) "e20506e2259fb39260e6aaae4121d9e2")
(setf (get qr_mission_scheduler::GetGoal :datatype-) "qr_mission_scheduler/GetGoal")
(setf (get qr_mission_scheduler::GetGoal :request) qr_mission_scheduler::GetGoalRequest)
(setf (get qr_mission_scheduler::GetGoal :response) qr_mission_scheduler::GetGoalResponse)

(defmethod qr_mission_scheduler::GetGoalRequest
  (:response () (instance qr_mission_scheduler::GetGoalResponse :init)))

(setf (get qr_mission_scheduler::GetGoalRequest :md5sum-) "e20506e2259fb39260e6aaae4121d9e2")
(setf (get qr_mission_scheduler::GetGoalRequest :datatype-) "qr_mission_scheduler/GetGoalRequest")
(setf (get qr_mission_scheduler::GetGoalRequest :definition-)
      "# Source and destination IDs
string goalType
float64 source_id
float64 target_id

---
string result
")

(setf (get qr_mission_scheduler::GetGoalResponse :md5sum-) "e20506e2259fb39260e6aaae4121d9e2")
(setf (get qr_mission_scheduler::GetGoalResponse :datatype-) "qr_mission_scheduler/GetGoalResponse")
(setf (get qr_mission_scheduler::GetGoalResponse :definition-)
      "# Source and destination IDs
string goalType
float64 source_id
float64 target_id

---
string result
")



(provide :qr_mission_scheduler/GetGoal "e20506e2259fb39260e6aaae4121d9e2")


