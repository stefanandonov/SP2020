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
include CMakeFiles/zad6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zad6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zad6.dir/flags.make

CMakeFiles/zad6.dir/aud1/zad6.c.o: CMakeFiles/zad6.dir/flags.make
CMakeFiles/zad6.dir/aud1/zad6.c.o: ../aud1/zad6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/zad6.dir/aud1/zad6.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/zad6.dir/aud1/zad6.c.o   -c /Users/stefanandonov/CLionProjects/SP/SP2020/aud1/zad6.c

CMakeFiles/zad6.dir/aud1/zad6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zad6.dir/aud1/zad6.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stefanandonov/CLionProjects/SP/SP2020/aud1/zad6.c > CMakeFiles/zad6.dir/aud1/zad6.c.i

CMakeFiles/zad6.dir/aud1/zad6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zad6.dir/aud1/zad6.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stefanandonov/CLionProjects/SP/SP2020/aud1/zad6.c -o CMakeFiles/zad6.dir/aud1/zad6.c.s

# Object files for target zad6
zad6_OBJECTS = \
"CMakeFiles/zad6.dir/aud1/zad6.c.o"

# External object files for target zad6
zad6_EXTERNAL_OBJECTS =

zad6: CMakeFiles/zad6.dir/aud1/zad6.c.o
zad6: CMakeFiles/zad6.dir/build.make
zad6: CMakeFiles/zad6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable zad6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zad6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zad6.dir/build: zad6

.PHONY : CMakeFiles/zad6.dir/build

CMakeFiles/zad6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zad6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zad6.dir/clean

CMakeFiles/zad6.dir/depend:
	cd /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stefanandonov/CLionProjects/SP/SP2020 /Users/stefanandonov/CLionProjects/SP/SP2020 /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug /Users/stefanandonov/CLionProjects/SP/SP2020/cmake-build-debug/CMakeFiles/zad6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zad6.dir/depend
