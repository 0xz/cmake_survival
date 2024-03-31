project(lib1)


add_library(${PROJECT_NAME} SHARED src/src.cpp inc/lib1.hpp)
target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
