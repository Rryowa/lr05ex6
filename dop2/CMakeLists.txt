#CMakeLists.txt
cmake_minimum_required (VERSION 3.18)
project (mylib)
set (CMAKE_CXX_STANDARD_11)
set (SOURCE_FILES pre.c)
add_executable (mylib ${SOURCE_FILES})
target_link_libraries(mylib libm.a)
