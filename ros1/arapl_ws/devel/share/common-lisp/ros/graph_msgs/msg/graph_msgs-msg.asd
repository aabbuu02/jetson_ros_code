
(cl:in-package :asdf)

(defsystem "graph_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Edge" :depends-on ("_package_Edge"))
    (:file "_package_Edge" :depends-on ("_package"))
    (:file "Graph" :depends-on ("_package_Graph"))
    (:file "_package_Graph" :depends-on ("_package"))
    (:file "GraphMetaData" :depends-on ("_package_GraphMetaData"))
    (:file "_package_GraphMetaData" :depends-on ("_package"))
    (:file "Property" :depends-on ("_package_Property"))
    (:file "_package_Property" :depends-on ("_package"))
    (:file "Vertex" :depends-on ("_package_Vertex"))
    (:file "_package_Vertex" :depends-on ("_package"))
  ))