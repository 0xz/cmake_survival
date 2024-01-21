cmake_minimum_required (VERSION 3.18)

project(tracer CXX)
add_executable(${PROJECT_NAME} main.cpp)

set(CMAKE_BUILD_TYPE "Debug")

target_compile_options(tracer PRIVATE -fno-omit-frame-pointer)
target_link_options(tracer PRIVATE -fno-omit-frame-pointer)
