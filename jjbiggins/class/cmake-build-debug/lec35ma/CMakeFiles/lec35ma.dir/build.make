# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /nfs/s-l003/local/vol01/usr/css/x86_64/opt/jetbrains/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /nfs/s-l003/local/vol01/usr/css/x86_64/opt/jetbrains/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug

# Include any dependencies generated for this target.
include lec35ma/CMakeFiles/lec35ma.dir/depend.make

# Include the progress variables for this target.
include lec35ma/CMakeFiles/lec35ma.dir/progress.make

# Include the compile flags for this target's objects.
include lec35ma/CMakeFiles/lec35ma.dir/flags.make

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o: lec35ma/CMakeFiles/lec35ma.dir/flags.make
lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o: ../lec35ma/lec35ma.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec35ma.dir/lec35ma.cpp.o -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec35ma/lec35ma.cpp

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec35ma.dir/lec35ma.cpp.i"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec35ma/lec35ma.cpp > CMakeFiles/lec35ma.dir/lec35ma.cpp.i

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec35ma.dir/lec35ma.cpp.s"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec35ma/lec35ma.cpp -o CMakeFiles/lec35ma.dir/lec35ma.cpp.s

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.requires:

.PHONY : lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.requires

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.provides: lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.requires
	$(MAKE) -f lec35ma/CMakeFiles/lec35ma.dir/build.make lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.provides.build
.PHONY : lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.provides

lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.provides.build: lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o


# Object files for target lec35ma
lec35ma_OBJECTS = \
"CMakeFiles/lec35ma.dir/lec35ma.cpp.o"

# External object files for target lec35ma
lec35ma_EXTERNAL_OBJECTS =

lec35ma/lec35ma: lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o
lec35ma/lec35ma: lec35ma/CMakeFiles/lec35ma.dir/build.make
lec35ma/lec35ma: lec35ma/liblec35ma_support.a
lec35ma/lec35ma: lec35ma/CMakeFiles/lec35ma.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lec35ma"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec35ma.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lec35ma/CMakeFiles/lec35ma.dir/build: lec35ma/lec35ma

.PHONY : lec35ma/CMakeFiles/lec35ma.dir/build

lec35ma/CMakeFiles/lec35ma.dir/requires: lec35ma/CMakeFiles/lec35ma.dir/lec35ma.cpp.o.requires

.PHONY : lec35ma/CMakeFiles/lec35ma.dir/requires

lec35ma/CMakeFiles/lec35ma.dir/clean:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma && $(CMAKE_COMMAND) -P CMakeFiles/lec35ma.dir/cmake_clean.cmake
.PHONY : lec35ma/CMakeFiles/lec35ma.dir/clean

lec35ma/CMakeFiles/lec35ma.dir/depend:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec35ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec35ma/CMakeFiles/lec35ma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lec35ma/CMakeFiles/lec35ma.dir/depend

