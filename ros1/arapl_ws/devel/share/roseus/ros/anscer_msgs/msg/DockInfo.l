;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::DockInfo)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'DockInfo (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::DOCKINFO")
  (make-package "ANSCER_MSGS::DOCKINFO"))

(in-package "ROS")
;;//! \htmlinclude DockInfo.msg.html


(intern "*FIDUCIALDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*FIDUCIALDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*FIDUCIALDOCKING* 1)
(intern "*REFLECTORDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*REFLECTORDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*REFLECTORDOCKING* 2)
(intern "*TROLLEYDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*TROLLEYDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*TROLLEYDOCKING* 3)
(intern "*ICPDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*ICPDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*ICPDOCKING* 4)
(intern "*GROUNDMARKERDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*GROUNDMARKERDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*GROUNDMARKERDOCKING* 5)
(intern "*SIDEWISEDOCKING*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*SIDEWISEDOCKING* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*SIDEWISEDOCKING* 6)
(intern "*DOCKSTATE*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*DOCKSTATE* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*DOCKSTATE* 1)
(intern "*UNDOCKSTATE*" (find-package "ANSCER_MSGS::DOCKINFO"))
(shadow '*UNDOCKSTATE* (find-package "ANSCER_MSGS::DOCKINFO"))
(defconstant anscer_msgs::DockInfo::*UNDOCKSTATE* 2)

(defun anscer_msgs::DockInfo-to-symbol (const)
  (cond
        ((= const 1) 'anscer_msgs::DockInfo::*FIDUCIALDOCKING*)
        ((= const 2) 'anscer_msgs::DockInfo::*REFLECTORDOCKING*)
        ((= const 3) 'anscer_msgs::DockInfo::*TROLLEYDOCKING*)
        ((= const 4) 'anscer_msgs::DockInfo::*ICPDOCKING*)
        ((= const 5) 'anscer_msgs::DockInfo::*GROUNDMARKERDOCKING*)
        ((= const 6) 'anscer_msgs::DockInfo::*SIDEWISEDOCKING*)
        ((= const 1) 'anscer_msgs::DockInfo::*DOCKSTATE*)
        ((= const 2) 'anscer_msgs::DockInfo::*UNDOCKSTATE*)
        (t nil)))

(defclass anscer_msgs::DockInfo
  :super ros::object
  :slots (_dock_marker _dock_mode ))

(defmethod anscer_msgs::DockInfo
  (:init
   (&key
    ((:dock_marker __dock_marker) 0)
    ((:dock_mode __dock_mode) 0)
    )
   (send-super :init)
   (setq _dock_marker (round __dock_marker))
   (setq _dock_mode (round __dock_mode))
   self)
  (:dock_marker
   (&optional __dock_marker)
   (if __dock_marker (setq _dock_marker __dock_marker)) _dock_marker)
  (:dock_mode
   (&optional __dock_mode)
   (if __dock_mode (setq _dock_mode __dock_mode)) _dock_mode)
  (:serialization-length
   ()
   (+
    ;; int8 _dock_marker
    1
    ;; int8 _dock_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _dock_marker
       (write-byte _dock_marker s)
     ;; int8 _dock_mode
       (write-byte _dock_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _dock_marker
     (setq _dock_marker (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _dock_marker 127) (setq _dock_marker (- _dock_marker 256)))
   ;; int8 _dock_mode
     (setq _dock_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _dock_mode 127) (setq _dock_mode (- _dock_mode 256)))
   ;;
   self)
  )

(setf (get anscer_msgs::DockInfo :md5sum-) "72372d50c9cb649d61d640ea75a875cc")
(setf (get anscer_msgs::DockInfo :datatype-) "anscer_msgs/DockInfo")
(setf (get anscer_msgs::DockInfo :definition-)
      "uint8 FIDUCIALDOCKING=1
uint8 REFLECTORDOCKING=2
uint8 TROLLEYDOCKING=3
uint8 ICPDOCKING=4
uint8 GROUNDMARKERDOCKING=5
uint8 SIDEWISEDOCKING=6

uint8 DOCKSTATE=1
uint8 UNDOCKSTATE=2

int8 dock_marker
int8 dock_mode


")



(provide :anscer_msgs/DockInfo "72372d50c9cb649d61d640ea75a875cc")


