cmake_minimum_required(VERSION 3.13)

project(fail
  VERSION 0.1
  LANGUAGES CXX
)

set(VCPKG_BUILD_TYPE release)

set(LIB_NAME "${PROJECT_NAME}")

file(GLOB_RECURSE LIB_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE LIB_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${LIB_NAME} ${LIB_HEADERS} ${LIB_SOURCES})
target_include_directories(${LIB_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
)


enable_testing()
add_subdirectory(test)
