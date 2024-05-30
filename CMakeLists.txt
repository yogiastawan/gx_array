cmake_minimum_required(VERSION 3.0.0...3.5.0)
project(gx_array VERSION 0.1.0 LANGUAGES C)

add_subdirectory(src)

include(CTest)
enable_testing()

add_subdirectory(tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
