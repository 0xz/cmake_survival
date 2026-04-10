cmake_minimum_required (VERSION 3.22)

project(hello_world)

add_executable(${PROJECT_NAME} main.cpp)
enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME})
