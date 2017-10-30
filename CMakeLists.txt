cmake_minimum_required (VERSION 3.1)

project(arith)

add_subdirectory(cmake-test-child)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(arith STATIC arith.c)

include_directories(
  cmake-test-lfs-child/include
  cmake-test-child)

target_link_libraries(arith
  incr
  ${CMAKE_CURRENT_LIST_DIR}/cmake-test-lfs-child/lib64/libdecr.a)

add_executable(tester test.c)

target_link_libraries(tester
  ${CMAKE_CURRENT_LIST_DIR}/cmake-test-lfs-child/lib64/libdecr.a)
