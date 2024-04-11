cmake_minimum_required (VERSION 3.10)
project (Transformation)

add_executable (Transformation main.cpp)

find_package(Eigen3 CONFIG REQUIRED)

target_link_libraries(Transformation PRIVATE Eigen3::Eigen)
