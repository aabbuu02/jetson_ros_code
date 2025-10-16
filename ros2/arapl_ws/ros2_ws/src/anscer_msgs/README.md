🤖 anscer_msgs
Custom message, service, and action definitions for the Anscer Robotics platform migrated from ROS 1 to ROS 2.

🚀 Overview
This package provides the custom data types required for communication between nodes in the Anscer Robotics system. By centralizing these definitions, it ensures type safety and consistency across all client and server applications.

Key Conversion Changes (ROS 1 to ROS 2)
Build System: Migrated from Catkin to ament_cmake (using colcon).

Interface Generation: ROS 1 macros (add_message_files, generate_messages) were replaced by the single rosidl_generate_interfaces command in CMakeLists.txt.

Message Referencing: All custom messages are now referenced using the package name prefix (e.g., anscer_msgs/ACRControl).

Standard Types: ROS 1 types like Header and Pose are now prefixed with their standard packages (e.g., std_msgs/Header, geometry_msgs/Pose).

📦 Package Structure
The package follows the standard ROS 2 interface structure:

Directory	Content Type	Purpose
msg/	Messages (.msg)	Simple data structures and arrays (e.g., BatteryInfo.msg, Task.msg).
srv/	Services (.srv)	Synchronous request-response pairs (e.g., MapReload.srv, SavePose.srv).
action/	Actions (.action)	Long-running goals with feedback and results (e.g., Mission.action, Dock.action).
CMakeLists.txt	Build Configuration	Uses ament_cmake and rosidl_default_generators to build interfaces.
package.xml	Package Manifest	Declares build/run dependencies and identifies the package as an rosidl_interface_packages member.
🛠️ Building the Package
This package must be built using the ROS 2 build tool, colcon.

Place the package in the src folder of your ROS 2 workspace.

Build the package from the workspace root:

colcon build --packages-select anscer_msgs

Source the workspace install directory to make the new interfaces available:


source install/setup.bash
📝 Interface List
Message (.msg) Examples
File	Description
ACRControl.msg	Defines commands for the ACR (Automated Carrier Robot) system, including shelf and action IDs.
ChargeInfo.msg	Parameters and state for the charging process.
Feedback.msg	Detailed status feedback used within the Mission.action goal.
Waypoint.msg	Defines a single waypoint, including name, map, type, and geometry_msgs/Pose.
Service (.srv) Examples
File	Request (Input)	Response (Output)
MapReload.srv	string filename	bool is_active, string map_name
SavePose.srv	string waypoint_name, geometry_msgs/Pose...	bool is_saved, string status
MissionAnalytics.srv	string start_date, string end_date	anscer_msgs/MissionDB[] mission_db
SystemPower.srv	int8 power_option	(Empty)
Action (.action) Examples
File	Goal (Input)	Result (Output)	Feedback
Mission.action	Loop count, Mission ID, Task[] mission_list	bool is_success, string mission_id	anscer_msgs/Feedback mission_feedback
Dock.action	Docking flags, undock_distance	bool is_success	anscer_msgs/DockInfo dock_info
NavigationServer.action	Source/Destination locations	bool goalSuceeded, string status	anscer_msgs/MissionStatus missionStatus