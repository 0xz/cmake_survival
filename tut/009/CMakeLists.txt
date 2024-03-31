cmake_minimum_required (VERSION 3.18)
project(fetch_tpp CXX)

if(NOT CMAKE_BUILD_TYPE)
  # if not set force release build
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
endif()

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# require C++17 compliant compiler
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
add_executable(${PROJECT_NAME} main.cpp)
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME})

include(FetchContent)

# override default settings to download inside build directory, which is silly for development
set(FETCHCONTENT_BASE_DIR ${PROJECT_DIR}/tpp/cppdict)
FetchContent_Declare(
    cppdict
    GIT_REPOSITORY https://github.com/LaboratoryOfPlasmaPhysics/cppdict
)
FetchContent_MakeAvailable(cppdict)
target_link_libraries(${PROJECT_NAME} PRIVATE cppdict)
