# CMake minimum version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(Stocks)

# Set the C++ standard to C++11 or newer
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the header files directory (if needed, in your case it's not necessary as it's local)
include_directories(${PROJECT_SOURCE_DIR})

# Add the executable that will be built
add_executable(stocks usestok0.cpp stock00.cpp)
