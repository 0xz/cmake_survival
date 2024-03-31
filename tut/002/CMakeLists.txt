cmake_minimum_required (VERSION 3.18)
project(hello_library)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${PROJECT_DIR}/inc) # global headers

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE project_library)

enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME})
