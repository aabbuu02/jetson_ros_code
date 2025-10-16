;; Auto-generated. Do not edit!


(when (boundp 'wms_data::WMSTasks)
  (if (not (find-package "WMS_DATA"))
    (make-package "WMS_DATA"))
  (shadow 'WMSTasks (find-package "WMS_DATA")))
(unless (find-package "WMS_DATA::WMSTASKS")
  (make-package "WMS_DATA::WMSTASKS"))

(in-package "ROS")
;;//! \htmlinclude WMSTasks.msg.html


(defclass wms_data::WMSTasks
  :super ros::object
  :slots (_tasks ))

(defmethod wms_data::WMSTasks
  (:init
   (&key
    ((:tasks __tasks) ())
    )
   (send-super :init)
   (setq _tasks __tasks)
   self)
  (:tasks
   (&rest __tasks)
   (if (keywordp (car __tasks))
       (send* _tasks __tasks)
     (progn
       (if __tasks (setq _tasks (car __tasks)))
       _tasks)))
  (:serialization-length
   ()
   (+
    ;; wms_data/WMSData[] _tasks
    (apply #'+ (send-all _tasks :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; wms_data/WMSData[] _tasks
     (write-long (length _tasks) s)
     (dolist (elem _tasks)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; wms_data/WMSData[] _tasks
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tasks (let (r) (dotimes (i n) (push (instance wms_data::WMSData :init) r)) r))
     (dolist (elem- _tasks)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get wms_data::WMSTasks :md5sum-) "e9c22e6c13dccc15f5397cda86a34fd5")
(setf (get wms_data::WMSTasks :datatype-) "wms_data/WMSTasks")
(setf (get wms_data::WMSTasks :definition-)
      "wms_data/WMSData[] tasks

================================================================================
MSG: wms_data/WMSData
string unique_id
string date
int16 priority
int16 rack
int16 shelf
int16 bin
bool action
bool status
string ean_code
string putaway_code
int16 acr_shelf
string whole_bin_no
string core
string level
string year
string date_data
string serial_no

")



(provide :wms_data/WMSTasks "e9c22e6c13dccc15f5397cda86a34fd5")


