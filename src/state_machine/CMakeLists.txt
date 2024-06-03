# Create a library from the state machine sources
add_library(state_machine_lib
    state_machine.cc
    states/standing_state.cc
    states/walking_state.cc
    states/manipulating_state.cc
)

# Include directories for the state machine library
target_include_directories(state_machine_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
