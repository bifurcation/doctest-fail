cmake_minimum_required(VERSION 3.13)

project(fail
  VERSION 0.1
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# Enable sanitizers
add_compile_options("/fsanitize=address")
 
# Dependencies
find_package(doctest REQUIRED)

# Define a test binary
set(TEST_APP_NAME ${PROJECT_NAME})
add_executable(${TEST_APP_NAME} main.cpp doctest.h)

# Enable CTest
enable_testing()
include(doctest)
doctest_discover_tests(${TEST_APP_NAME})

