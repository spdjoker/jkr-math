cmake_minimum_required(VERSION 3.15)
project(jkr-math)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Allow testing
include(CTest)
enable_testing()


include_directories(${CMAKE_SOURCE_DIR}/includes)

add_subdirectory(test)
