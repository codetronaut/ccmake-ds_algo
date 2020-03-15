cmake_minimum_required(VERSION 3.13)
project(MyProject C) # C compiler on the system will be used

include_directories(${PROECT_SOURCE_DIR})
add_executable(proj main.c libr.c)
