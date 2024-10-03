cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(fmt src/format.cpp)

add_executable(week04 src/week4.cpp)
add_executable(week05 src/week05.cpp)
add_executable(week6 src/week6.cpp)
