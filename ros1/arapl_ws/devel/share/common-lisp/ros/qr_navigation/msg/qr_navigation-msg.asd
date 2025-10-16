
(cl:in-package :asdf)

(defsystem "qr_navigation-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "goal_msg" :depends-on ("_package_goal_msg"))
    (:file "_package_goal_msg" :depends-on ("_package"))
  ))