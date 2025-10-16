;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::KeyValues)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'KeyValues (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::KEYVALUES")
  (make-package "ANSCER_MSGS::KEYVALUES"))

(in-package "ROS")
;;//! \htmlinclude KeyValues.msg.html


(defclass anscer_msgs::KeyValues
  :super ros::object
  :slots (_keyvalue ))

(defmethod anscer_msgs::KeyValues
  (:init
   (&key
    ((:keyvalue __keyvalue) ())
    )
   (send-super :init)
   (setq _keyvalue __keyvalue)
   self)
  (:keyvalue
   (&rest __keyvalue)
   (if (keywordp (car __keyvalue))
       (send* _keyvalue __keyvalue)
     (progn
       (if __keyvalue (setq _keyvalue (car __keyvalue)))
       _keyvalue)))
  (:serialization-length
   ()
   (+
    ;; anscer_msgs/KeyValue[] _keyvalue
    (apply #'+ (send-all _keyvalue :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; anscer_msgs/KeyValue[] _keyvalue
     (write-long (length _keyvalue) s)
     (dolist (elem _keyvalue)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; anscer_msgs/KeyValue[] _keyvalue
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _keyvalue (let (r) (dotimes (i n) (push (instance anscer_msgs::KeyValue :init) r)) r))
     (dolist (elem- _keyvalue)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get anscer_msgs::KeyValues :md5sum-) "a0bd91006b3876ff7bb45ae93c1b6f32")
(setf (get anscer_msgs::KeyValues :datatype-) "anscer_msgs/KeyValues")
(setf (get anscer_msgs::KeyValues :definition-)
      "KeyValue[] keyvalue

================================================================================
MSG: anscer_msgs/KeyValue
string key			#Label of the value
string value		#Value to track
string unit
float32 errorlevel			#Errorlevel of the value
")



(provide :anscer_msgs/KeyValues "a0bd91006b3876ff7bb45ae93c1b6f32")


