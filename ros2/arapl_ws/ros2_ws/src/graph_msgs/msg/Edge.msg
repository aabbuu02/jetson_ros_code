# Edge types
uint8 STRAIGHT_LINE=0
uint8 CUBIC_BEZIER=1

# Edge direction types
uint8 FORWARD=0
uint8 REVERSE=1
uint8 BIDIRECTIONAL=2

# Creation types 
uint8 CREATED=0     # The edge is created
uint8 GENERATED=1   # The edge is generated

string name
string alias
uint8 type
uint8 edge_direction_type
uint8 creation_type
uint32 source_vertex_id
uint32 target_vertex_id
float64 length
float64 cost_factor
bool bidirectional
bool independent_orientation
geometry_msgs/Pose[] control_points
geometry_msgs/Pose control_orientation
geometry_msgs/PoseArray poses
Property[] properties
