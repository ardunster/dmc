cmake_minimum_required(VERSION 3.3)

project(dmc)

include_directories(src)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(INCLUDE_DIRS include include/dependencies)

include_directories(${INCLUDE_DIRS})

set(FILES
    include/dmc/UserInterface.hpp
    src/UserInterface.cpp)

add_executable(dmc)
target_sources(dmc PRIVATE main.cpp ${FILES})

# Entry point for tests only
add_executable(dmc_test)
target_sources(dmc_test PRIVATE tests.cpp ${FILES})
