cmake_minimum_required(VERSION 3.20)

project(lab_6)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(lab_6 src/lab_6.cpp include/lab_6.hpp)
add_library(lab_6_test src/lab_6_test.cpp include/lab_6_test.hpp)

add_executable(setup src/lab_6_main.cpp)
target_link_libraries(setup lab_6_test lab_6)