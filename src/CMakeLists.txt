# Include and add directories

# Add the state machine library
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/state_machine)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/state_machine)

# Add the Behavior Tree library
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/behavior_tree)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/behavior_tree)
