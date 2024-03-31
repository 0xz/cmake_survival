cmake_minimum_required (VERSION 3.18)

project(project_library)

add_library(${PROJECT_NAME} STATIC src.cpp)
# target_compile_definitions(${PROJECT_NAME} PRIVATE ABC=1 INTERFACE XYZ=2)
