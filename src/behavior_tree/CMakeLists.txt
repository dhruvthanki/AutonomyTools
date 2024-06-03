# Create a library from the state machine sources
add_library(behavior_tree_lib INTERFACE)

# Include directories for the state machine library
target_include_directories(behavior_tree_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
