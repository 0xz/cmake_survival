cmake_minimum_required (VERSION 3.18)
project(fetch_tpp)

set(CMAKE_BUILD_TYPE "Debug")
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

enable_testing()
add_executable(${PROJECT_NAME} main.cpp)
add_test(NAME ${PROJECT_NAME} COMMAND ./${PROJECT_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

include(FetchContent)

# override default settings to download inside build directory, which is silly for development
set(FETCHCONTENT_BASE_DIR ${PROJECT_DIR}/tpp/cppdict)
FetchContent_Declare(
    cppdict
    GIT_REPOSITORY https://github.com/LaboratoryOfPlasmaPhysics/cppdict
)
FetchContent_MakeAvailable(cppdict)
target_link_libraries(${PROJECT_NAME} cppdict)
