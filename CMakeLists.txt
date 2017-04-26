cmake_minimum_required(VERSION 2.6)
file(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}/CMake" p)
list(APPEND CMAKE_MODULE_PATH "${p}") #For old Imagine++
list(APPEND CMAKE_SYSTEM_PREFIX_PATH /Library/Frameworks)
find_package(Imagine REQUIRED)

project(balls)
add_executable(balls main.cpp
                     vector.cpp vector.h
                     tile.cpp tile.h
                     tools.cpp tools.h)
ImagineUseModules(balls Graphics)
