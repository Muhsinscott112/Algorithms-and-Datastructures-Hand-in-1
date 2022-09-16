cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)

set(CMAKE_CXX_STANDARD 14)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


add_library(mymath main.cpp)
target_include_directories(mymath PUBLIC include)

add_executable(main main.cpp)
target_link_libraries(main mymath)

enable_testing()
add_subdirectory(tests)
add_subdirectory(Exercise-1)
add_subdirectory(Exercise-3)
add_subdirectory(Exercise-4)
