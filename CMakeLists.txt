cmake_minimum_required(VERSION 3.13)

project(doctest-fail
  VERSION 0.1
  LANGUAGES CXX
)

set(VCPKG_BUILD_TYPE release)

enable_testing()
add_subdirectory(test)
