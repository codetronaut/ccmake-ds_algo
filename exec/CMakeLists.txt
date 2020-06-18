set(CMAKE_C_STANDARD 11)

include_directories("//usr//local//lib//libgraph-1.0.2//")

build_command("lgraph")

add_executable(proj main.c)
# target_link_libraries(libgraph -lpthread)

target_link_libraries(proj PRIVATE libraries)


set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
