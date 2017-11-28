#------------------------------------------------------------------------------
# NAME: cmake_example
# DESC: Minimal structure project c++ with cmake. Using Catch lib for tests
# AUTHOR: Andrey G. França
# DATE: 28/11/2017
#------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.9)
project(cmake_example)

# Including Catch lib in the project
set(CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)
add_library(Catch INTERFACE)

# Set the source and tests directory
file(GLOB SOURCE "src/*.cpp")
file(GLOB TEST_SOURCES "test/*.cpp")

include_directories(src)
include_directories(test)

add_executable(tests ${TEST_SOURCES})
add_executable(App ${SOURCE})
target_link_libraries(tests Catch)

# Enabling Tests
enable_testing()
add_test(NAME tests COMMAND tests)
