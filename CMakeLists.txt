cmake_minimum_required(VERSION 3.20)

project(oop-lab-6)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(lab6      src/lab6.cpp      include/lab6.hpp)
add_library(lab6_test src/lab6_test.cpp include/lab6_test.hpp)

add_executable(main src/main.cpp)

target_link_libraries(main lab6_test lab6)