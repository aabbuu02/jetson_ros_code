;; Auto-generated. Do not edit!


(when (boundp 'wms_data::WMSData)
  (if (not (find-package "WMS_DATA"))
    (make-package "WMS_DATA"))
  (shadow 'WMSData (find-package "WMS_DATA")))
(unless (find-package "WMS_DATA::WMSDATA")
  (make-package "WMS_DATA::WMSDATA"))

(in-package "ROS")
;;//! \htmlinclude WMSData.msg.html


(defclass wms_data::WMSData
  :super ros::object
  :slots (_unique_id _date _priority _rack _shelf _bin _action _status _ean_code _putaway_code _acr_shelf _whole_bin_no _core _level _year _date_data _serial_no ))

(defmethod wms_data::WMSData
  (:init
   (&key
    ((:unique_id __unique_id) "")
    ((:date __date) "")
    ((:priority __priority) 0)
    ((:rack __rack) 0)
    ((:shelf __shelf) 0)
    ((:bin __bin) 0)
    ((:action __action) nil)
    ((:status __status) nil)
    ((:ean_code __ean_code) "")
    ((:putaway_code __putaway_code) "")
    ((:acr_shelf __acr_shelf) 0)
    ((:whole_bin_no __whole_bin_no) "")
    ((:core __core) "")
    ((:level __level) "")
    ((:year __year) "")
    ((:date_data __date_data) "")
    ((:serial_no __serial_no) "")
    )
   (send-super :init)
   (setq _unique_id (string __unique_id))
   (setq _date (string __date))
   (setq _priority (round __priority))
   (setq _rack (round __rack))
   (setq _shelf (round __shelf))
   (setq _bin (round __bin))
   (setq _action __action)
   (setq _status __status)
   (setq _ean_code (string __ean_code))
   (setq _putaway_code (string __putaway_code))
   (setq _acr_shelf (round __acr_shelf))
   (setq _whole_bin_no (string __whole_bin_no))
   (setq _core (string __core))
   (setq _level (string __level))
   (setq _year (string __year))
   (setq _date_data (string __date_data))
   (setq _serial_no (string __serial_no))
   self)
  (:unique_id
   (&optional __unique_id)
   (if __unique_id (setq _unique_id __unique_id)) _unique_id)
  (:date
   (&optional __date)
   (if __date (setq _date __date)) _date)
  (:priority
   (&optional __priority)
   (if __priority (setq _priority __priority)) _priority)
  (:rack
   (&optional __rack)
   (if __rack (setq _rack __rack)) _rack)
  (:shelf
   (&optional __shelf)
   (if __shelf (setq _shelf __shelf)) _shelf)
  (:bin
   (&optional __bin)
   (if __bin (setq _bin __bin)) _bin)
  (:action
   (&optional (__action :null))
   (if (not (eq __action :null)) (setq _action __action)) _action)
  (:status
   (&optional (__status :null))
   (if (not (eq __status :null)) (setq _status __status)) _status)
  (:ean_code
   (&optional __ean_code)
   (if __ean_code (setq _ean_code __ean_code)) _ean_code)
  (:putaway_code
   (&optional __putaway_code)
   (if __putaway_code (setq _putaway_code __putaway_code)) _putaway_code)
  (:acr_shelf
   (&optional __acr_shelf)
   (if __acr_shelf (setq _acr_shelf __acr_shelf)) _acr_shelf)
  (:whole_bin_no
   (&optional __whole_bin_no)
   (if __whole_bin_no (setq _whole_bin_no __whole_bin_no)) _whole_bin_no)
  (:core
   (&optional __core)
   (if __core (setq _core __core)) _core)
  (:level
   (&optional __level)
   (if __level (setq _level __level)) _level)
  (:year
   (&optional __year)
   (if __year (setq _year __year)) _year)
  (:date_data
   (&optional __date_data)
   (if __date_data (setq _date_data __date_data)) _date_data)
  (:serial_no
   (&optional __serial_no)
   (if __serial_no (setq _serial_no __serial_no)) _serial_no)
  (:serialization-length
   ()
   (+
    ;; string _unique_id
    4 (length _unique_id)
    ;; string _date
    4 (length _date)
    ;; int16 _priority
    2
    ;; int16 _rack
    2
    ;; int16 _shelf
    2
    ;; int16 _bin
    2
    ;; bool _action
    1
    ;; bool _status
    1
    ;; string _ean_code
    4 (length _ean_code)
    ;; string _putaway_code
    4 (length _putaway_code)
    ;; int16 _acr_shelf
    2
    ;; string _whole_bin_no
    4 (length _whole_bin_no)
    ;; string _core
    4 (length _core)
    ;; string _level
    4 (length _level)
    ;; string _year
    4 (length _year)
    ;; string _date_data
    4 (length _date_data)
    ;; string _serial_no
    4 (length _serial_no)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _unique_id
       (write-long (length _unique_id) s) (princ _unique_id s)
     ;; string _date
       (write-long (length _date) s) (princ _date s)
     ;; int16 _priority
       (write-word _priority s)
     ;; int16 _rack
       (write-word _rack s)
     ;; int16 _shelf
       (write-word _shelf s)
     ;; int16 _bin
       (write-word _bin s)
     ;; bool _action
       (if _action (write-byte -1 s) (write-byte 0 s))
     ;; bool _status
       (if _status (write-byte -1 s) (write-byte 0 s))
     ;; string _ean_code
       (write-long (length _ean_code) s) (princ _ean_code s)
     ;; string _putaway_code
       (write-long (length _putaway_code) s) (princ _putaway_code s)
     ;; int16 _acr_shelf
       (write-word _acr_shelf s)
     ;; string _whole_bin_no
       (write-long (length _whole_bin_no) s) (princ _whole_bin_no s)
     ;; string _core
       (write-long (length _core) s) (princ _core s)
     ;; string _level
       (write-long (length _level) s) (princ _level s)
     ;; string _year
       (write-long (length _year) s) (princ _year s)
     ;; string _date_data
       (write-long (length _date_data) s) (princ _date_data s)
     ;; string _serial_no
       (write-long (length _serial_no) s) (princ _serial_no s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _unique_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _unique_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _date
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _date (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _priority
     (setq _priority (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _rack
     (setq _rack (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _shelf
     (setq _shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _bin
     (setq _bin (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; bool _action
     (setq _action (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _status
     (setq _status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _ean_code
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _ean_code (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _putaway_code
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _putaway_code (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int16 _acr_shelf
     (setq _acr_shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _whole_bin_no
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _whole_bin_no (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _core
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _core (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _level
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _level (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _year
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _year (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _date_data
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _date_data (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _serial_no
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _serial_no (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get wms_data::WMSData :md5sum-) "338f7a7211a5e9f2655096004ac2e21e")
(setf (get wms_data::WMSData :datatype-) "wms_data/WMSData")
(setf (get wms_data::WMSData :definition-)
      "string unique_id
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



(provide :wms_data/WMSData "338f7a7211a5e9f2655096004ac2e21e")


