cmake_minimum_required (VERSION 3.22)

project(project_library)

add_library(${PROJECT_NAME} SHARED src.cpp)
