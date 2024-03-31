cmake_minimum_required (VERSION 3.18)
project(hello_library)

option(BUILD_RELEASE "Build for release" OFF)

set(CMAKE_BUILD_TYPE "Debug")
if(BUILD_RELEASE)
    set(CMAKE_BUILD_TYPE "Release")
endif(BUILD_RELEASE)

enable_testing()
add_executable(${PROJECT_NAME} main.cpp)
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME})


