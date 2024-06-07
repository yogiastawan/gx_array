cmake_minimum_required(VERSION 3.0.0...3.5.0)

add_executable(print_array print_array.c)
target_link_libraries(print_array gx_array)
target_include_directories(print_array PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(PRINT print_array)

add_executable(reverse_array reverse_array.c)
target_link_libraries(reverse_array gx_array)
target_include_directories(reverse_array PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(REVERSE reverse_array)

add_executable(reverse_array_copy reverse_array_copy.c)
target_link_libraries(reverse_array_copy gx_array)
target_include_directories(reverse_array_copy PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(REVERSE_COPY reverse_array_copy)

add_executable(combine_array combine_array.c)
target_link_libraries(combine_array gx_array)
target_include_directories(combine_array PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(COMBINE_ARRAY combine_array)

add_executable(insert_array insert_array.c)
target_link_libraries(insert_array gx_array)
target_include_directories(insert_array PRIVATE CMAKE_SOURCE_DIR/src/include)
add_test(INSERT_ARRAY insert_array)