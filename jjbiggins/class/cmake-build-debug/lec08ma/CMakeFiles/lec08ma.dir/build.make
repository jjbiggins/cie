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
include lec08ma/CMakeFiles/lec08ma.dir/depend.make

# Include the progress variables for this target.
include lec08ma/CMakeFiles/lec08ma.dir/progress.make

# Include the compile flags for this target's objects.
include lec08ma/CMakeFiles/lec08ma.dir/flags.make

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o: lec08ma/CMakeFiles/lec08ma.dir/flags.make
lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o: ../lec08ma/lec08ma.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec08ma.dir/lec08ma.cpp.o -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec08ma/lec08ma.cpp

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec08ma.dir/lec08ma.cpp.i"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec08ma/lec08ma.cpp > CMakeFiles/lec08ma.dir/lec08ma.cpp.i

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec08ma.dir/lec08ma.cpp.s"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec08ma/lec08ma.cpp -o CMakeFiles/lec08ma.dir/lec08ma.cpp.s

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.requires:

.PHONY : lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.requires

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.provides: lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.requires
	$(MAKE) -f lec08ma/CMakeFiles/lec08ma.dir/build.make lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.provides.build
.PHONY : lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.provides

lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.provides.build: lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o


# Object files for target lec08ma
lec08ma_OBJECTS = \
"CMakeFiles/lec08ma.dir/lec08ma.cpp.o"

# External object files for target lec08ma
lec08ma_EXTERNAL_OBJECTS =

lec08ma/lec08ma: lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o
lec08ma/lec08ma: lec08ma/CMakeFiles/lec08ma.dir/build.make
lec08ma/lec08ma: lec08ma/libsetmath_library.a
lec08ma/lec08ma: lec08ma/CMakeFiles/lec08ma.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lec08ma"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec08ma.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lec08ma/CMakeFiles/lec08ma.dir/build: lec08ma/lec08ma

.PHONY : lec08ma/CMakeFiles/lec08ma.dir/build

lec08ma/CMakeFiles/lec08ma.dir/requires: lec08ma/CMakeFiles/lec08ma.dir/lec08ma.cpp.o.requires

.PHONY : lec08ma/CMakeFiles/lec08ma.dir/requires

lec08ma/CMakeFiles/lec08ma.dir/clean:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma && $(CMAKE_COMMAND) -P CMakeFiles/lec08ma.dir/cmake_clean.cmake
.PHONY : lec08ma/CMakeFiles/lec08ma.dir/clean

lec08ma/CMakeFiles/lec08ma.dir/depend:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec08ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec08ma/CMakeFiles/lec08ma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lec08ma/CMakeFiles/lec08ma.dir/depend
