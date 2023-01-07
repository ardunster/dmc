cmake_minimum_required(VERSION 3.3)

project(dmc)

include_directories(src)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/UserInterface.cpp)

add_executable(dmc)
target_sources(dmc PRIVATE main.cpp ${SOURCES})

# Entry point for tests only
add_executable(dmc_test)
target_sources(dmc_test PRIVATE tests.cpp ${SOURCES})
