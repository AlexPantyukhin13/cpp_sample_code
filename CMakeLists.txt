cmake_minimum_required(VERSION 3.15)
project(c_pp_sample)

# Fixes bug with gtest and MinGW
set(CMAKE_CXX_STANDARD gnu++0x)

include_directories(third_party/googletest/googletest/include)

add_executable(c_pp_sample main.cpp find_target_sum.h)

add_subdirectory(third_party/googletest)
add_subdirectory(tests)
