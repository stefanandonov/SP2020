# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = "/Users/stefanandonov/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/stefanandonov/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stefanandonov/CLionProjects/SP/SP2020

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task6.dir/flags.make

CMakeFiles/task6.dir/exercise3/task6.c.o: CMakeFiles/task6.dir/flags.make
CMakeFiles/task6.dir/exercise3/task6.c.o: ../exercise3/task6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/task6.dir/exercise3/task6.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/task6.dir/exercise3/task6.c.o   -c /Users/stefanandonov/CLionProjects/SP/SP2020/exercise3/task6.c

CMakeFiles/task6.dir/exercise3/task6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task6.dir/exercise3/task6.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stefanandonov/CLionProjects/SP/SP2020/exercise3/task6.c > CMakeFiles/task6.dir/exercise3/task6.c.i

CMakeFiles/task6.dir/exercise3/task6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task6.dir/exercise3/task6.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stefanandonov/CLionProjects/SP/SP2020/exercise3/task6.c -o CMakeFiles/task6.dir/exercise3/task6.c.s

# Object files for target task6
task6_OBJECTS = \
"CMakeFiles/task6.dir/exercise3/task6.c.o"

# External object files for target task6
task6_EXTERNAL_OBJECTS =

task6: CMakeFiles/task6.dir/exercise3/task6.c.o
task6: CMakeFiles/task6.dir/build.make
task6: CMakeFiles/task6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable task6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task6.dir/build: task6

.PHONY : CMakeFiles/task6.dir/build

CMakeFiles/task6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task6.dir/clean

CMakeFiles/task6.dir/depend:
	cd /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stefanandonov/CLionProjects/SP/SP2020 /Users/stefanandonov/CLionProjects/SP/SP2020 /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles/task6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task6.dir/depend

