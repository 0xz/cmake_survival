
project(hello_world)
cmake_minimum_required (VERSION 3.18)

add_executable(${PROJECT_NAME} main.cpp)
enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
