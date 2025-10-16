;; Auto-generated. Do not edit!


(when (boundp 'qr_mission_scheduler::goalMsg)
  (if (not (find-package "QR_MISSION_SCHEDULER"))
    (make-package "QR_MISSION_SCHEDULER"))
  (shadow 'goalMsg (find-package "QR_MISSION_SCHEDULER")))
(unless (find-package "QR_MISSION_SCHEDULER::GOALMSG")
  (make-package "QR_MISSION_SCHEDULER::GOALMSG"))

(in-package "ROS")
;;//! \htmlinclude goalMsg.msg.html


(defclass qr_mission_scheduler::goalMsg
  :super ros::object
  :slots (_goalType _source _destination ))

(defmethod qr_mission_scheduler::goalMsg
  (:init
   (&key
    ((:goalType __goalType) "")
    ((:source __source) 0.0)
    ((:destination __destination) 0.0)
    )
   (send-super :init)
   (setq _goalType (string __goalType))
   (setq _source (float __source))
   (setq _destination (float __destination))
   self)
  (:goalType
   (&optional __goalType)
   (if __goalType (setq _goalType __goalType)) _goalType)
  (:source
   (&optional __source)
   (if __source (setq _source __source)) _source)
  (:destination
   (&optional __destination)
   (if __destination (setq _destination __destination)) _destination)
  (:serialization-length
   ()
   (+
    ;; string _goalType
    4 (length _goalType)
    ;; float64 _source
    8
    ;; float64 _destination
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _goalType
       (write-long (length _goalType) s) (princ _goalType s)
     ;; float64 _source
       (sys::poke _source (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _destination
       (sys::poke _destination (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _goalType
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _goalType (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64 _source
     (setq _source (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _destination
     (setq _destination (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get qr_mission_scheduler::goalMsg :md5sum-) "bdc5d71ceffd1361f6883e493cc747c6")
(setf (get qr_mission_scheduler::goalMsg :datatype-) "qr_mission_scheduler/goalMsg")
(setf (get qr_mission_scheduler::goalMsg :definition-)
      "string goalType

float64 source
float64 destination


")



(provide :qr_mission_scheduler/goalMsg "bdc5d71ceffd1361f6883e493cc747c6")


