project(lib2)


add_library(${PROJECT_NAME} SHARED src/src.cpp inc/lib2.hpp)
target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries(${PROJECT_NAME} PRIVATE lib1)
