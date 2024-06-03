cmake_minimum_required(VERSION 3.0.0)
project(InterviewPrep VERSION 0.1.0 LANGUAGES C CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

add_executable(smMain main.cpp)
target_link_libraries(smMain PRIVATE state_machine_lib)

add_executable(btMain main2.cpp)
target_link_libraries(btMain PRIVATE behavior_tree_lib)
