;; Auto-generated. Do not edit!


(when (boundp 'lift_action::Home_sensor)
  (if (not (find-package "LIFT_ACTION"))
    (make-package "LIFT_ACTION"))
  (shadow 'Home_sensor (find-package "LIFT_ACTION")))
(unless (find-package "LIFT_ACTION::HOME_SENSOR")
  (make-package "LIFT_ACTION::HOME_SENSOR"))

(in-package "ROS")
;;//! \htmlinclude Home_sensor.msg.html


(defclass lift_action::Home_sensor
  :super ros::object
  :slots (_process _homingStatus ))

(defmethod lift_action::Home_sensor
  (:init
   (&key
    ((:process __process) "")
    ((:homingStatus __homingStatus) nil)
    )
   (send-super :init)
   (setq _process (string __process))
   (setq _homingStatus __homingStatus)
   self)
  (:process
   (&optional __process)
   (if __process (setq _process __process)) _process)
  (:homingStatus
   (&optional (__homingStatus :null))
   (if (not (eq __homingStatus :null)) (setq _homingStatus __homingStatus)) _homingStatus)
  (:serialization-length
   ()
   (+
    ;; string _process
    4 (length _process)
    ;; bool _homingStatus
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _process
       (write-long (length _process) s) (princ _process s)
     ;; bool _homingStatus
       (if _homingStatus (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _process
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _process (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _homingStatus
     (setq _homingStatus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get lift_action::Home_sensor :md5sum-) "4558b3f32ba7b3eceae2851b267cf424")
(setf (get lift_action::Home_sensor :datatype-) "lift_action/Home_sensor")
(setf (get lift_action::Home_sensor :definition-)
      "string process
bool homingStatus
")



(provide :lift_action/Home_sensor "4558b3f32ba7b3eceae2851b267cf424")


