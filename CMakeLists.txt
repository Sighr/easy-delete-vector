cmake_minimum_required(VERSION 3.16)
project(spheres)

set(CMAKE_CXX_STANDARD 20)

add_executable(spheres main.cpp MyVector.h MinIntHeap.cpp MinIntHeap.h ConstructingDebug.h)
