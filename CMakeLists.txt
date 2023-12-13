cmake_minimum_required(VERSION 3.13)

project(fail
  VERSION 0.1
  LANGUAGES CXX
)

set(VCPKG_BUILD_TYPE release)

set(LIB_NAME "${PROJECT_NAME}")

message(STATUS "Enabling sanitizers")
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
  add_compile_options(-fsanitize=address -fsanitize=undefined)
  add_link_options(-fsanitize=address -fsanitize=undefined)
elseif(MSVC)
  # MSVC uses a different flag, and doesn't require passing it to the linker 
  add_compile_options("/fsanitize=address")
endif()
 
enable_testing()
add_subdirectory(test)
