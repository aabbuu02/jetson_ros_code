;; Auto-generated. Do not edit!


(when (boundp 'anscer_msgs::BatteryManagement)
  (if (not (find-package "ANSCER_MSGS"))
    (make-package "ANSCER_MSGS"))
  (shadow 'BatteryManagement (find-package "ANSCER_MSGS")))
(unless (find-package "ANSCER_MSGS::BATTERYMANAGEMENT")
  (make-package "ANSCER_MSGS::BATTERYMANAGEMENT"))
(unless (find-package "ANSCER_MSGS::BATTERYMANAGEMENTREQUEST")
  (make-package "ANSCER_MSGS::BATTERYMANAGEMENTREQUEST"))
(unless (find-package "ANSCER_MSGS::BATTERYMANAGEMENTRESPONSE")
  (make-package "ANSCER_MSGS::BATTERYMANAGEMENTRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass anscer_msgs::BatteryManagementRequest
  :super ros::object
  :slots (_robot_pose ))

(defmethod anscer_msgs::BatteryManagementRequest
  (:init
   (&key
    ((:robot_pose __robot_pose) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _robot_pose __robot_pose)
   self)
  (:robot_pose
   (&rest __robot_pose)
   (if (keywordp (car __robot_pose))
       (send* _robot_pose __robot_pose)
     (progn
       (if __robot_pose (setq _robot_pose (car __robot_pose)))
       _robot_pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose _robot_pose
    (send _robot_pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose _robot_pose
       (send _robot_pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose _robot_pose
     (send _robot_pose :deserialize buf ptr-) (incf ptr- (send _robot_pose :serialization-length))
   ;;
   self)
  )

(defclass anscer_msgs::BatteryManagementResponse
  :super ros::object
  :slots (_id _is_available ))

(defmethod anscer_msgs::BatteryManagementResponse
  (:init
   (&key
    ((:id __id) 0)
    ((:is_available __is_available) nil)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _is_available __is_available)
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:is_available
   (&optional (__is_available :null))
   (if (not (eq __is_available :null)) (setq _is_available __is_available)) _is_available)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ;; bool _is_available
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;; bool _is_available
       (if _is_available (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _is_available
     (setq _is_available (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anscer_msgs::BatteryManagement
  :super ros::object
  :slots ())

(setf (get anscer_msgs::BatteryManagement :md5sum-) "2fdc892b1cd61ba46702fac69928aa1a")
(setf (get anscer_msgs::BatteryManagement :datatype-) "anscer_msgs/BatteryManagement")
(setf (get anscer_msgs::BatteryManagement :request) anscer_msgs::BatteryManagementRequest)
(setf (get anscer_msgs::BatteryManagement :response) anscer_msgs::BatteryManagementResponse)

(defmethod anscer_msgs::BatteryManagementRequest
  (:response () (instance anscer_msgs::BatteryManagementResponse :init)))

(setf (get anscer_msgs::BatteryManagementRequest :md5sum-) "2fdc892b1cd61ba46702fac69928aa1a")
(setf (get anscer_msgs::BatteryManagementRequest :datatype-) "anscer_msgs/BatteryManagementRequest")
(setf (get anscer_msgs::BatteryManagementRequest :definition-)
      "geometry_msgs/Pose robot_pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
---
int32 id
bool is_available


")

(setf (get anscer_msgs::BatteryManagementResponse :md5sum-) "2fdc892b1cd61ba46702fac69928aa1a")
(setf (get anscer_msgs::BatteryManagementResponse :datatype-) "anscer_msgs/BatteryManagementResponse")
(setf (get anscer_msgs::BatteryManagementResponse :definition-)
      "geometry_msgs/Pose robot_pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
---
int32 id
bool is_available


")



(provide :anscer_msgs/BatteryManagement "2fdc892b1cd61ba46702fac69928aa1a")


