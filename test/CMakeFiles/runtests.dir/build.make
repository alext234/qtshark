# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/u/qtshark/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/u/qtshark/test

# Include any dependencies generated for this target.
include CMakeFiles/runtests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runtests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runtests.dir/flags.make

CMakeFiles/runtests.dir/main.cpp.o: CMakeFiles/runtests.dir/flags.make
CMakeFiles/runtests.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/u/qtshark/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runtests.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runtests.dir/main.cpp.o -c /home/u/qtshark/test/main.cpp

CMakeFiles/runtests.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtests.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/u/qtshark/test/main.cpp > CMakeFiles/runtests.dir/main.cpp.i

CMakeFiles/runtests.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtests.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/u/qtshark/test/main.cpp -o CMakeFiles/runtests.dir/main.cpp.s

CMakeFiles/runtests.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/runtests.dir/main.cpp.o.requires

CMakeFiles/runtests.dir/main.cpp.o.provides: CMakeFiles/runtests.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/runtests.dir/build.make CMakeFiles/runtests.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/runtests.dir/main.cpp.o.provides

CMakeFiles/runtests.dir/main.cpp.o.provides.build: CMakeFiles/runtests.dir/main.cpp.o


CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o: CMakeFiles/runtests.dir/flags.make
CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o: test_ipaddressstring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/u/qtshark/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o -c /home/u/qtshark/test/test_ipaddressstring.cpp

CMakeFiles/runtests.dir/test_ipaddressstring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtests.dir/test_ipaddressstring.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/u/qtshark/test/test_ipaddressstring.cpp > CMakeFiles/runtests.dir/test_ipaddressstring.cpp.i

CMakeFiles/runtests.dir/test_ipaddressstring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtests.dir/test_ipaddressstring.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/u/qtshark/test/test_ipaddressstring.cpp -o CMakeFiles/runtests.dir/test_ipaddressstring.cpp.s

CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.requires:

.PHONY : CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.requires

CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.provides: CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.requires
	$(MAKE) -f CMakeFiles/runtests.dir/build.make CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.provides.build
.PHONY : CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.provides

CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.provides.build: CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o


# Object files for target runtests
runtests_OBJECTS = \
"CMakeFiles/runtests.dir/main.cpp.o" \
"CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o"

# External object files for target runtests
runtests_EXTERNAL_OBJECTS =

runtests: CMakeFiles/runtests.dir/main.cpp.o
runtests: CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o
runtests: CMakeFiles/runtests.dir/build.make
runtests: CMakeFiles/runtests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/u/qtshark/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable runtests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runtests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runtests.dir/build: runtests

.PHONY : CMakeFiles/runtests.dir/build

CMakeFiles/runtests.dir/requires: CMakeFiles/runtests.dir/main.cpp.o.requires
CMakeFiles/runtests.dir/requires: CMakeFiles/runtests.dir/test_ipaddressstring.cpp.o.requires

.PHONY : CMakeFiles/runtests.dir/requires

CMakeFiles/runtests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runtests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runtests.dir/clean

CMakeFiles/runtests.dir/depend:
	cd /home/u/qtshark/test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/u/qtshark/test /home/u/qtshark/test /home/u/qtshark/test /home/u/qtshark/test /home/u/qtshark/test/CMakeFiles/runtests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runtests.dir/depend
