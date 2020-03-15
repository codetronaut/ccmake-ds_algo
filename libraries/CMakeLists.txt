add_library(

    libraries
    src/libraries/BST_non_recursive.c
    src/libraries/circular_queue.c
    src/libraries/general_queue.c
    src/libraries/libr.h

)

target_include_directories(libraries PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
