cmake_minimum_required(VERSION 3.0.0...3.5.0)

file(GLOB SRCS *.c)

add_library(gx_array ${SRCS})

target_include_directories(gx_array PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)