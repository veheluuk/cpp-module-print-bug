cmake_minimum_required(VERSION 3.28)

project(cpp-print-bug CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)

add_library(cpp-print-bug-module)

target_sources(
    cpp-print-bug-module
    PUBLIC
    FILE_SET CXX_MODULES FILES
    "module_that_prints.ixx"
)

# Create an executable
add_executable(cpp-print-bug)

target_sources(cpp-print-bug
  PRIVATE
  Main.cpp
)

target_link_libraries(cpp-print-bug cpp-print-bug-module)
