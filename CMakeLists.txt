cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
project(cpp_tetris)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(external/vendored/SDL EXCLUDE_FROM_ALL)

add_executable(cpp_tetris
    src/main.cpp
)

target_link_libraries(cpp_tetris PRIVATE SDL3::SDL3)
