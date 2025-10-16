;; Auto-generated. Do not edit!


(when (boundp 'qr_navigation::goal_msg)
  (if (not (find-package "QR_NAVIGATION"))
    (make-package "QR_NAVIGATION"))
  (shadow 'goal_msg (find-package "QR_NAVIGATION")))
(unless (find-package "QR_NAVIGATION::GOAL_MSG")
  (make-package "QR_NAVIGATION::GOAL_MSG"))

(in-package "ROS")
;;//! \htmlinclude goal_msg.msg.html


(defclass qr_navigation::goal_msg
  :super ros::object
  :slots (_pose _start _goal _operation ))

(defmethod qr_navigation::goal_msg
  (:init
   (&key
    ((:pose __pose) "")
    ((:start __start) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:goal __goal) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:operation __operation) "")
    )
   (send-super :init)
   (setq _pose (string __pose))
   (setq _start __start)
   (setq _goal __goal)
   (setq _operation (string __operation))
   self)
  (:pose
   (&optional __pose)
   (if __pose (setq _pose __pose)) _pose)
  (:start
   (&optional __start)
   (if __start (setq _start __start)) _start)
  (:goal
   (&optional __goal)
   (if __goal (setq _goal __goal)) _goal)
  (:operation
   (&optional __operation)
   (if __operation (setq _operation __operation)) _operation)
  (:serialization-length
   ()
   (+
    ;; string _pose
    4 (length _pose)
    ;; float64[] _start
    (* 8    (length _start)) 4
    ;; float64[] _goal
    (* 8    (length _goal)) 4
    ;; string _operation
    4 (length _operation)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _pose
       (write-long (length _pose) s) (princ _pose s)
     ;; float64[] _start
     (write-long (length _start) s)
     (dotimes (i (length _start))
       (sys::poke (elt _start i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _goal
     (write-long (length _goal) s)
     (dotimes (i (length _goal))
       (sys::poke (elt _goal i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; string _operation
       (write-long (length _operation) s) (princ _operation s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _pose
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _pose (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64[] _start
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _start (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _start i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _goal
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _goal (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _goal i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; string _operation
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _operation (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get qr_navigation::goal_msg :md5sum-) "65096d2f7dc9c44846c54d624fa429e2")
(setf (get qr_navigation::goal_msg :datatype-) "qr_navigation/goal_msg")
(setf (get qr_navigation::goal_msg :definition-)
      "string pose
float64[] start
float64[] goal
string operation

")



(provide :qr_navigation/goal_msg "65096d2f7dc9c44846c54d624fa429e2")


