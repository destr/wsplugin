cmake_minimum_required(VERSION 3.8)
project(wsplugin)

include_directories(${CMAKE_SOURCE_DIR}/src/include)

#cmake_policy(SET CMP0071 NEW)

find_package(Qt5 REQUIRED COMPONENTS Core Network)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

option(BUILD_TESTS "Build tests projects" ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_CXX_STANDARD 17)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_definitions(-Wall)
  if (NOT WIN32)
    add_definitions(-fPIC)
  endif()
endif()

add_subdirectory(src)

