
(cl:in-package :asdf)

(defsystem "graph_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :graph_msgs-msg
               :nav_msgs-msg
)
  :components ((:file "_package")
    (:file "GetGraph" :depends-on ("_package_GetGraph"))
    (:file "_package_GetGraph" :depends-on ("_package"))
    (:file "GetGraphPlan" :depends-on ("_package_GetGraphPlan"))
    (:file "_package_GetGraphPlan" :depends-on ("_package"))
    (:file "LoadGraph" :depends-on ("_package_LoadGraph"))
    (:file "_package_LoadGraph" :depends-on ("_package"))
    (:file "SaveGraph" :depends-on ("_package_SaveGraph"))
    (:file "_package_SaveGraph" :depends-on ("_package"))
  ))