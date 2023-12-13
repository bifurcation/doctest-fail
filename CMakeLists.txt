cmake_minimum_required(VERSION 3.13)

project(fail
  VERSION 0.1
  LANGUAGES CXX
)

# Enable sanitizers
message(STATUS "Enabling sanitizers")
add_compile_options("/fsanitize=address")
 
# Dependencies
find_package(doctest REQUIRED)

# Define a test binary
set(TEST_APP_NAME ${PROJECT_NAME})
add_executable(${TEST_APP_NAME} main.cpp)
target_link_libraries(${TEST_APP_NAME} doctest::doctest)

# Enable CTest
enable_testing()
include(doctest)
doctest_discover_tests(${TEST_APP_NAME} ADD_LABELS 0)

