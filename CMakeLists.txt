cmake_minimum_required(VERSION 3.15)
project(ccdsap)

set(CMAKE_CXX_STANDARD 14)
include_directories(/usr/local/include)

#[[add_executable(main main.cpp)

add_executable(IPCTRAIN heaps/IPCTRAIN.cpp)
add_executable(ANUMLA heaps/ANUMLA.cpp)
add_executable(KSUBSUM heaps/KSUBSUM.cpp)
add_executable(RRATING heaps/RRATING.cpp)]]
add_executable(TSECJ05 heaps/TSECJ05.cpp)
add_executable(WEIRDFN heaps/WEIRDFN.cpp)
add_executable(CAPIMOVE heaps/CAPIMOVE.cpp)
add_executable(RMID2 heaps/RMID2.cpp)
add_executable(EXPEDI heaps/EXPEDI.cpp)