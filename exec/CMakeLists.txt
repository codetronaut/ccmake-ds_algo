add_executable(proj main.c)

# detect operating system and host processor
# message(STATUS "ccmake-algo_ds Project")
message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
message(STATUS "The host processor is ${CMAKE_HOST_SYSTEM_PROCESSOR}")

target_link_libraries(proj PRIVATE libraries)

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
