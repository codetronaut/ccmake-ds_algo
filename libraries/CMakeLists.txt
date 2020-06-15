add_library(

    libraries
    src/libraries/BST_non_recursive.c
    src/libraries/circular_queue.c
    src/libraries/general_queue.c
    src/libraries/stack.c
    src/libraries/binary_search_with_recur.c
    src/libraries/AVL.c
    src/libraries/anagram.c
    src/libraries/DOUBLE.C
    src/libraries/in_to_prefix.c
    src/libraries/insertio_sort.c
    src/libraries/in_to_post.c
    src/libraries/bubble_sort.c
    src/libraries/shell_sort.c
    src/libraries/selection_sort.c
    src/libraries/quick_sort.c
    src/libraries/LINK.c
    src/libraries/stack_using_linkedlist.c
    src/libraries/TBT.c
    

    src/libraries/libr.h

)

target_include_directories(libraries PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
