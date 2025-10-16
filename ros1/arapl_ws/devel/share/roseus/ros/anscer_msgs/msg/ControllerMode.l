;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::ControllerMode)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'ControllerMode (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::CONTROLLERMODE")
  (make-package "ANSCER_MSGS::CONTROLLERMODE"))

(in-package "ROS")
;;//! \htmlinclude ControllerMode.msg.html


(intern "*DEFAULT_MOTION*" (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(shadow '*DEFAULT_MOTION* (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(defconstant anscer_msgs::ControllerMode::*DEFAULT_MOTION* 0)
(intern "*CHARGE_DOCK*" (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(shadow '*CHARGE_DOCK* (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(defconstant anscer_msgs::ControllerMode::*CHARGE_DOCK* 1)
(intern "*CHARGE_UNDOCK*" (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(shadow '*CHARGE_UNDOCK* (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(defconstant anscer_msgs::ControllerMode::*CHARGE_UNDOCK* 2)
(intern "*BARCODE_MOTION*" (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(shadow '*BARCODE_MOTION* (find-package "ANSCER_MSGS::CONTROLLERMODE"))
(defconstant anscer_msgs::ControllerMode::*BARCODE_MOTION* 3)

(defun anscer_msgs::ControllerMode-to-symbol (const)
  (cond
        ((= const 0) 'anscer_msgs::ControllerMode::*DEFAULT_MOTION*)
        ((= const 1) 'anscer_msgs::ControllerMode::*CHARGE_DOCK*)
        ((= const 2) 'anscer_msgs::ControllerMode::*CHARGE_UNDOCK*)
        ((= const 3) 'anscer_msgs::ControllerMode::*BARCODE_MOTION*)
        (t nil)))

(defclass anscer_msgs::ControllerMode
  :super ros::object
  :slots (_controller_mode ))

(defmethod anscer_msgs::ControllerMode
  (:init
   (&key
    ((:controller_mode __controller_mode) 0)
    )
   (send-super :init)
   (setq _controller_mode (round __controller_mode))
   self)
  (:controller_mode
   (&optional __controller_mode)
   (if __controller_mode (setq _controller_mode __controller_mode)) _controller_mode)
  (:serialization-length
   ()
   (+
    ;; int8 _controller_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _controller_mode
       (write-byte _controller_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _controller_mode
     (setq _controller_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _controller_mode 127) (setq _controller_mode (- _controller_mode 256)))
   ;;
   self)
  )

(setf (get anscer_msgs::ControllerMode :md5sum-) "8df55bc2a0cb79189a6d96bf669a6495")
(setf (get anscer_msgs::ControllerMode :datatype-) "anscer_msgs/ControllerMode")
(setf (get anscer_msgs::ControllerMode :definition-)
      "uint8 DEFAULT_MOTION=0
uint8 CHARGE_DOCK=1
uint8 CHARGE_UNDOCK=2
uint8 BARCODE_MOTION=3
int8 controller_mode

")



(provide :anscer_msgs/ControllerMode "8df55bc2a0cb79189a6d96bf669a6495")


