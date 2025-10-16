;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::KeyValue)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'KeyValue (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::KEYVALUE")
  (make-package "ANSCER_MSGS::KEYVALUE"))

(in-package "ROS")
;;//! \htmlinclude KeyValue.msg.html


(defclass anscer_msgs::KeyValue
  :super ros::object
  :slots (_key _value _unit _errorlevel ))

(defmethod anscer_msgs::KeyValue
  (:init
   (&key
    ((:key __key) "")
    ((:value __value) "")
    ((:unit __unit) "")
    ((:errorlevel __errorlevel) 0.0)
    )
   (send-super :init)
   (setq _key (string __key))
   (setq _value (string __value))
   (setq _unit (string __unit))
   (setq _errorlevel (float __errorlevel))
   self)
  (:key
   (&optional __key)
   (if __key (setq _key __key)) _key)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:unit
   (&optional __unit)
   (if __unit (setq _unit __unit)) _unit)
  (:errorlevel
   (&optional __errorlevel)
   (if __errorlevel (setq _errorlevel __errorlevel)) _errorlevel)
  (:serialization-length
   ()
   (+
    ;; string _key
    4 (length _key)
    ;; string _value
    4 (length _value)
    ;; string _unit
    4 (length _unit)
    ;; float32 _errorlevel
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _key
       (write-long (length _key) s) (princ _key s)
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;; string _unit
       (write-long (length _unit) s) (princ _unit s)
     ;; float32 _errorlevel
       (sys::poke _errorlevel (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _key
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _key (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _unit
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _unit (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _errorlevel
     (setq _errorlevel (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get anscer_msgs::KeyValue :md5sum-) "0366bc3220232a9a18c5cc0865090e86")
(setf (get anscer_msgs::KeyValue :datatype-) "anscer_msgs/KeyValue")
(setf (get anscer_msgs::KeyValue :definition-)
      "string key			#Label of the value
string value		#Value to track
string unit
float32 errorlevel			#Errorlevel of the value
")



(provide :anscer_msgs/KeyValue "0366bc3220232a9a18c5cc0865090e86")


