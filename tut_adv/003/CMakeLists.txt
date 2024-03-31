cmake_minimum_required (VERSION 3.18)
project(linkage)

SET(CMAKE_SKIP_RPATH FALSE)

add_subdirectory(lib1)
add_subdirectory(lib2)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE lib2)
