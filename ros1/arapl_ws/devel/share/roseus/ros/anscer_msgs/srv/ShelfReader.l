;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ShelfReader)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ShelfReader (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::SHELFREADER")
  (make-package "ANSCER_MSGS::SHELFREADER"))
(unless (find-package "ANSCER_MSGS::SHELFREADERREQUEST")
  (make-package "ANSCER_MSGS::SHELFREADERREQUEST"))
(unless (find-package "ANSCER_MSGS::SHELFREADERRESPONSE")
  (make-package "ANSCER_MSGS::SHELFREADERRESPONSE"))

(in-package "ROS")





(defclass anscer_msgs::ShelfReaderRequest
  :super ros::object
  :slots (_dummy_req ))

(defmethod anscer_msgs::ShelfReaderRequest
  (:init
   (&key
    ((:dummy_req __dummy_req) 0)
    )
   (send-super :init)
   (setq _dummy_req (round __dummy_req))
   self)
  (:dummy_req
   (&optional __dummy_req)
   (if __dummy_req (setq _dummy_req __dummy_req)) _dummy_req)
  (:serialization-length
   ()
   (+
    ;; int64 _dummy_req
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _dummy_req
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _dummy_req (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _dummy_req) (= (length (_dummy_req . bv)) 2)) ;; bignum
              (write-long (ash (elt (_dummy_req . bv) 0) 0) s)
              (write-long (ash (elt (_dummy_req . bv) 1) -1) s))
             ((and (class _dummy_req) (= (length (_dummy_req . bv)) 1)) ;; big1
              (write-long (elt (_dummy_req . bv) 0) s)
              (write-long (if (>= _dummy_req 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _dummy_req s)(write-long (if (>= _dummy_req 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _dummy_req
#+(or :alpha :irix6 :x86_64)
      (setf _dummy_req (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _dummy_req (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
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

(defclass anscer_msgs::ShelfReaderResponse
  :super ros::object
  :slots (_shelf_response ))

(defmethod anscer_msgs::ShelfReaderResponse
  (:init
   (&key
    ((:shelf_response __shelf_response) 0)
    )
   (send-super :init)
   (setq _shelf_response (round __shelf_response))
   self)
  (:shelf_response
   (&optional __shelf_response)
   (if __shelf_response (setq _shelf_response __shelf_response)) _shelf_response)
  (:serialization-length
   ()
   (+
    ;; int64 _shelf_response
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _shelf_response
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _shelf_response (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _shelf_response) (= (length (_shelf_response . bv)) 2)) ;; bignum
              (write-long (ash (elt (_shelf_response . bv) 0) 0) s)
              (write-long (ash (elt (_shelf_response . bv) 1) -1) s))
             ((and (class _shelf_response) (= (length (_shelf_response . bv)) 1)) ;; big1
              (write-long (elt (_shelf_response . bv) 0) s)
              (write-long (if (>= _shelf_response 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _shelf_response s)(write-long (if (>= _shelf_response 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _shelf_response
#+(or :alpha :irix6 :x86_64)
      (setf _shelf_response (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _shelf_response (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
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

(defclass anscer_msgs::ShelfReader
  :super ros::object
  :slots ())

(setf (get anscer_msgs::ShelfReader :md5sum-) "4218f5cbbe42113a859058f65a58f219")
(setf (get anscer_msgs::ShelfReader :datatype-) "anscer_msgs/ShelfReader")
(setf (get anscer_msgs::ShelfReader :request) anscer_msgs::ShelfReaderRequest)
(setf (get anscer_msgs::ShelfReader :response) anscer_msgs::ShelfReaderResponse)

(defmethod anscer_msgs::ShelfReaderRequest
  (:response () (instance anscer_msgs::ShelfReaderResponse :init)))

(setf (get anscer_msgs::ShelfReaderRequest :md5sum-) "4218f5cbbe42113a859058f65a58f219")
(setf (get anscer_msgs::ShelfReaderRequest :datatype-) "anscer_msgs/ShelfReaderRequest")
(setf (get anscer_msgs::ShelfReaderRequest :definition-)
      "int64 dummy_req 
---
int64 shelf_response



")

(setf (get anscer_msgs::ShelfReaderResponse :md5sum-) "4218f5cbbe42113a859058f65a58f219")
(setf (get anscer_msgs::ShelfReaderResponse :datatype-) "anscer_msgs/ShelfReaderResponse")
(setf (get anscer_msgs::ShelfReaderResponse :definition-)
      "int64 dummy_req 
---
int64 shelf_response



")



(provide :anscer_msgs/ShelfReader "4218f5cbbe42113a859058f65a58f219")


