cmake_minimum_required (VERSION 3.18)

project(optimizations CXX)
add_executable(${PROJECT_NAME} main.cpp)

# set(CMAKE_BUILD_TYPE "Debug")

add_executable(optimize_O0 main.cpp)
target_compile_options(optimize_O0 PRIVATE -O0 -g3 -fopt-info-vec)
target_link_options(optimize_O0 PRIVATE -O0  -g3 )

add_executable(optimize_O1 main.cpp)
target_compile_options(optimize_O1 PRIVATE -O1 -fopt-info-vec)
target_link_options(optimize_O1 PRIVATE -O1)

# safe for redistribution generally
add_executable(optimize_O2 main.cpp)
target_compile_options(optimize_O2 PRIVATE -O2 -fopt-info-vec)
target_link_options(optimize_O2 PRIVATE -O2)

# probably not safe redistributable
add_executable(optimize_O3 main.cpp)
target_compile_options(optimize_O3 PRIVATE -O3  -fopt-info-vec)
target_link_options(optimize_O3 PRIVATE -O3)

# very likely not safe redistributable, but best local optimizations
add_executable(optimize_O3_native main.cpp)
target_compile_options(optimize_O3_native PRIVATE -O3 -march=native -mtune=native  -fopt-info-vec)
target_link_options(optimize_O3_native PRIVATE -O0 -march=native -mtune=native)
