# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codetronaut/root_cernv7/assign_progs/proj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codetronaut/root_cernv7/assign_progs/proj/build

# Include any dependencies generated for this target.
include exec/CMakeFiles/proj.dir/depend.make

# Include the progress variables for this target.
include exec/CMakeFiles/proj.dir/progress.make

# Include the compile flags for this target's objects.
include exec/CMakeFiles/proj.dir/flags.make

exec/CMakeFiles/proj.dir/main.c.o: exec/CMakeFiles/proj.dir/flags.make
exec/CMakeFiles/proj.dir/main.c.o: ../exec/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codetronaut/root_cernv7/assign_progs/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object exec/CMakeFiles/proj.dir/main.c.o"
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build/exec && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/proj.dir/main.c.o   -c /home/codetronaut/root_cernv7/assign_progs/proj/exec/main.c

exec/CMakeFiles/proj.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proj.dir/main.c.i"
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build/exec && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codetronaut/root_cernv7/assign_progs/proj/exec/main.c > CMakeFiles/proj.dir/main.c.i

exec/CMakeFiles/proj.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proj.dir/main.c.s"
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build/exec && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codetronaut/root_cernv7/assign_progs/proj/exec/main.c -o CMakeFiles/proj.dir/main.c.s

# Object files for target proj
proj_OBJECTS = \
"CMakeFiles/proj.dir/main.c.o"

# External object files for target proj
proj_EXTERNAL_OBJECTS =

exec/proj: exec/CMakeFiles/proj.dir/main.c.o
exec/proj: exec/CMakeFiles/proj.dir/build.make
exec/proj: libraries/liblibraries.a
exec/proj: exec/CMakeFiles/proj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codetronaut/root_cernv7/assign_progs/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable proj"
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build/exec && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
exec/CMakeFiles/proj.dir/build: exec/proj

.PHONY : exec/CMakeFiles/proj.dir/build

exec/CMakeFiles/proj.dir/clean:
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build/exec && $(CMAKE_COMMAND) -P CMakeFiles/proj.dir/cmake_clean.cmake
.PHONY : exec/CMakeFiles/proj.dir/clean

exec/CMakeFiles/proj.dir/depend:
	cd /home/codetronaut/root_cernv7/assign_progs/proj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codetronaut/root_cernv7/assign_progs/proj /home/codetronaut/root_cernv7/assign_progs/proj/exec /home/codetronaut/root_cernv7/assign_progs/proj/build /home/codetronaut/root_cernv7/assign_progs/proj/build/exec /home/codetronaut/root_cernv7/assign_progs/proj/build/exec/CMakeFiles/proj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : exec/CMakeFiles/proj.dir/depend

