cmake_minimum_required(VERSION 3.0.0...3.5.0)

add_executable(print_array print_array.c)
target_link_libraries(print_array gx_array)
target_include_directories(print_array PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(PRINT print_array)