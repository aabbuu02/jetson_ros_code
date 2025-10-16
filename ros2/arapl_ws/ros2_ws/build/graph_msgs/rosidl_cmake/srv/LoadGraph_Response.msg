
# Result code definitions
uint8 RESULT_SUCCESS=0
uint8 RESULT_GRAPH_DOES_NOT_EXIST=1
uint8 RESULT_INVALID_GRAPH_FILE_PATH=2
uint8 RESULT_UNDEFINED_FAILURE=255

# Returned graph is only valid if result equals RESULT_SUCCESS
graph_msgs/Graph graph
uint8 result
