;; Auto-generated. Do not edit!


(when (boundp 'graph_msgs::Property)
  (if (not (find-package "GRAPH_MSGS"))
    (make-package "GRAPH_MSGS"))
  (shadow 'Property (find-package "GRAPH_MSGS")))
(unless (find-package "GRAPH_MSGS::PROPERTY")
  (make-package "GRAPH_MSGS::PROPERTY"))

(in-package "ROS")
;;//! \htmlinclude Property.msg.html


(defclass graph_msgs::Property
  :super ros::object
  :slots (_key _value ))

(defmethod graph_msgs::Property
  (:init
   (&key
    ((:key __key) "")
    ((:value __value) "")
    )
   (send-super :init)
   (setq _key (string __key))
   (setq _value (string __value))
   self)
  (:key
   (&optional __key)
   (if __key (setq _key __key)) _key)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _key
    4 (length _key)
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _key
       (write-long (length _key) s) (princ _key s)
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _key
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _key (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get graph_msgs::Property :md5sum-) "cf57fdc6617a881a88c16e768132149c")
(setf (get graph_msgs::Property :datatype-) "graph_msgs/Property")
(setf (get graph_msgs::Property :definition-)
      "string key
string value
")



(provide :graph_msgs/Property "cf57fdc6617a881a88c16e768132149c")


