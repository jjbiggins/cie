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
include lec04ex/CMakeFiles/lec04ex.dir/depend.make

# Include the progress variables for this target.
include lec04ex/CMakeFiles/lec04ex.dir/progress.make

# Include the compile flags for this target's objects.
include lec04ex/CMakeFiles/lec04ex.dir/flags.make

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o: lec04ex/CMakeFiles/lec04ex.dir/flags.make
lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o: ../lec04ex/lec04ex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec04ex.dir/lec04ex.cpp.o -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec04ex/lec04ex.cpp

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec04ex.dir/lec04ex.cpp.i"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec04ex/lec04ex.cpp > CMakeFiles/lec04ex.dir/lec04ex.cpp.i

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec04ex.dir/lec04ex.cpp.s"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec04ex/lec04ex.cpp -o CMakeFiles/lec04ex.dir/lec04ex.cpp.s

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.requires:

.PHONY : lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.requires

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.provides: lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.requires
	$(MAKE) -f lec04ex/CMakeFiles/lec04ex.dir/build.make lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.provides.build
.PHONY : lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.provides

lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.provides.build: lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o


# Object files for target lec04ex
lec04ex_OBJECTS = \
"CMakeFiles/lec04ex.dir/lec04ex.cpp.o"

# External object files for target lec04ex
lec04ex_EXTERNAL_OBJECTS =

lec04ex/lec04ex: lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o
lec04ex/lec04ex: lec04ex/CMakeFiles/lec04ex.dir/build.make
lec04ex/lec04ex: lec04ex/liblec04_support.a
lec04ex/lec04ex: lec04ex/CMakeFiles/lec04ex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lec04ex"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec04ex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lec04ex/CMakeFiles/lec04ex.dir/build: lec04ex/lec04ex

.PHONY : lec04ex/CMakeFiles/lec04ex.dir/build

lec04ex/CMakeFiles/lec04ex.dir/requires: lec04ex/CMakeFiles/lec04ex.dir/lec04ex.cpp.o.requires

.PHONY : lec04ex/CMakeFiles/lec04ex.dir/requires

lec04ex/CMakeFiles/lec04ex.dir/clean:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex && $(CMAKE_COMMAND) -P CMakeFiles/lec04ex.dir/cmake_clean.cmake
.PHONY : lec04ex/CMakeFiles/lec04ex.dir/clean

lec04ex/CMakeFiles/lec04ex.dir/depend:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec04ex /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec04ex/CMakeFiles/lec04ex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lec04ex/CMakeFiles/lec04ex.dir/depend

