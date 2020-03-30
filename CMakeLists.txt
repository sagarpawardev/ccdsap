cmake_minimum_required(VERSION 3.15)
project(ccdsap)

set(CMAKE_CXX_STANDARD 14)
include_directories(/usr/local/include)

add_executable(ccdsap main.cpp)

add_executable(IPCTRAIN heaps/IPCTRAIN.cpp)
add_executable(ANUMLA heaps/ANUMLA.cpp)
add_executable(KSUBSUM heaps/KSUBSUM.cpp)