cmake_minimum_required(VERSION 3.0.0)
project(InterviewPrep VERSION 0.1.0 LANGUAGES C CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the src directory to build the libraries
add_subdirectory(src)

add_executable(InterviewPrep main.cpp)

# Link the FSM and Behavior Tree libraries to the executable
target_link_libraries(InterviewPrep PRIVATE state_machine_lib behavior_tree)