;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ACRControl)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ACRControl (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::ACRCONTROL")
  (make-package "ANSCER_MSGS::ACRCONTROL"))

(in-package "ROS")
;;//! \htmlinclude ACRControl.msg.html


(intern "*PICKUP*" (find-package "ANSCER_MSGS::ACRCONTROL"))
(shadow '*PICKUP* (find-package "ANSCER_MSGS::ACRCONTROL"))
(defconstant anscer_msgs::ACRControl::*PICKUP* 0)
(intern "*DROPOFF*" (find-package "ANSCER_MSGS::ACRCONTROL"))
(shadow '*DROPOFF* (find-package "ANSCER_MSGS::ACRCONTROL"))
(defconstant anscer_msgs::ACRControl::*DROPOFF* 1)

(defun anscer_msgs::ACRControl-to-symbol (const)
  (cond
        ((= const 0) 'anscer_msgs::ACRControl::*PICKUP*)
        ((= const 1) 'anscer_msgs::ACRControl::*DROPOFF*)
        (t nil)))

(defclass anscer_msgs::ACRControl
  :super ros::object
  :slots (_acr_shelf _target_shelf _acr_action _bar_code_number _whole_bin_number ))

(defmethod anscer_msgs::ACRControl
  (:init
   (&key
    ((:acr_shelf __acr_shelf) 0)
    ((:target_shelf __target_shelf) 0)
    ((:acr_action __acr_action) 0)
    ((:bar_code_number __bar_code_number) 0)
    ((:whole_bin_number __whole_bin_number) 0)
    )
   (send-super :init)
   (setq _acr_shelf (round __acr_shelf))
   (setq _target_shelf (round __target_shelf))
   (setq _acr_action (round __acr_action))
   (setq _bar_code_number (round __bar_code_number))
   (setq _whole_bin_number (round __whole_bin_number))
   self)
  (:acr_shelf
   (&optional __acr_shelf)
   (if __acr_shelf (setq _acr_shelf __acr_shelf)) _acr_shelf)
  (:target_shelf
   (&optional __target_shelf)
   (if __target_shelf (setq _target_shelf __target_shelf)) _target_shelf)
  (:acr_action
   (&optional __acr_action)
   (if __acr_action (setq _acr_action __acr_action)) _acr_action)
  (:bar_code_number
   (&optional __bar_code_number)
   (if __bar_code_number (setq _bar_code_number __bar_code_number)) _bar_code_number)
  (:whole_bin_number
   (&optional __whole_bin_number)
   (if __whole_bin_number (setq _whole_bin_number __whole_bin_number)) _whole_bin_number)
  (:serialization-length
   ()
   (+
    ;; int16 _acr_shelf
    2
    ;; int16 _target_shelf
    2
    ;; int16 _acr_action
    2
    ;; int64 _bar_code_number
    8
    ;; int64 _whole_bin_number
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _acr_shelf
       (write-word _acr_shelf s)
     ;; int16 _target_shelf
       (write-word _target_shelf s)
     ;; int16 _acr_action
       (write-word _acr_action s)
     ;; int64 _bar_code_number
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _bar_code_number (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _bar_code_number) (= (length (_bar_code_number . bv)) 2)) ;; bignum
              (write-long (ash (elt (_bar_code_number . bv) 0) 0) s)
              (write-long (ash (elt (_bar_code_number . bv) 1) -1) s))
             ((and (class _bar_code_number) (= (length (_bar_code_number . bv)) 1)) ;; big1
              (write-long (elt (_bar_code_number . bv) 0) s)
              (write-long (if (>= _bar_code_number 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _bar_code_number s)(write-long (if (>= _bar_code_number 0) 0 #xffffffff) s)))
     ;; int64 _whole_bin_number
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _whole_bin_number (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _whole_bin_number) (= (length (_whole_bin_number . bv)) 2)) ;; bignum
              (write-long (ash (elt (_whole_bin_number . bv) 0) 0) s)
              (write-long (ash (elt (_whole_bin_number . bv) 1) -1) s))
             ((and (class _whole_bin_number) (= (length (_whole_bin_number . bv)) 1)) ;; big1
              (write-long (elt (_whole_bin_number . bv) 0) s)
              (write-long (if (>= _whole_bin_number 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _whole_bin_number s)(write-long (if (>= _whole_bin_number 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _acr_shelf
     (setq _acr_shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _target_shelf
     (setq _target_shelf (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _acr_action
     (setq _acr_action (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int64 _bar_code_number
#+(or :alpha :irix6 :x86_64)
      (setf _bar_code_number (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _bar_code_number (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _whole_bin_number
#+(or :alpha :irix6 :x86_64)
      (setf _whole_bin_number (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _whole_bin_number (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get anscer_msgs::ACRControl :md5sum-) "fc49709c8d8c7803a2e07e7391600be5")
(setf (get anscer_msgs::ACRControl :datatype-) "anscer_msgs/ACRControl")
(setf (get anscer_msgs::ACRControl :definition-)
      "#mission status
int32 PICKUP =0
int32 DROPOFF =1

int16 acr_shelf
int16 target_shelf
int16 acr_action
int64 bar_code_number
int64 whole_bin_number

")



(provide :anscer_msgs/ACRControl "fc49709c8d8c7803a2e07e7391600be5")


