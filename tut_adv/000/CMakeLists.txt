cmake_minimum_required (VERSION 3.18)

project(sanitizer CXX)
add_executable(${PROJECT_NAME} main.cpp)

set(CMAKE_BUILD_TYPE "Debug")

include(CheckLinkerFlag)
check_linker_flag(CXX -fsanitize=address CAN_LINK_WITH)
if(NOT CAN_LINK_WITH)
    message(FATAL_ERROR "Linker does not support -fsanitize=address")
endif(NOT CAN_LINK_WITH)

target_compile_options(sanitizer PRIVATE -fsanitize=address)
target_link_options(sanitizer PRIVATE -fsanitize=address)
target_link_libraries(sanitizer PRIVATE asan)
