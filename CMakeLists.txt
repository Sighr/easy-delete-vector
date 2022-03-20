cmake_minimum_required(VERSION 3.21)
project(spheres)

set(CMAKE_CXX_STANDARD 20)

add_executable(spheres main.cpp GameManager.cpp GameManager.h MyVector.h MinIntHeap.cpp MinIntHeap.h ConstructingDebug.h)
