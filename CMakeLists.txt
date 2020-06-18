cmake_minimum_required(VERSION 3.13)
project(MyProject C) # C compiler on the system will be used

set(CMAKE_C_STANDARD 11)

add_subdirectory(libraries)
add_subdirectory(exec)


set(CMAKE_C_STANDARD 11)

# include_directories("//usr//local//lib//libgraph-1.0.2//")
# 
# build_command("lgraph")
# 
# add_executable(proj exec/main.c)
# target_link_libraries(libgraph -lpthread)
# 
# 
# 
# detect operating system and host processor
message(STATUS "ccmake-algo_ds Project")
message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
message(STATUS "The host processor is ${CMAKE_HOST_SYSTEM_PROCESSOR}")

# target_link_libraries(proj PRIVATE libraries)
# 
# 
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
