cmake_minimum_required(VERSION 3.3)

project(dmc)

include_directories(src)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(dmc main.cpp)

# Entry point for tests only
add_executable(dmc_test tests.cpp)
