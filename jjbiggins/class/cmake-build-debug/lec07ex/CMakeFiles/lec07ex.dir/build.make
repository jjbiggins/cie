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
include lec07ex/CMakeFiles/lec07ex.dir/depend.make

# Include the progress variables for this target.
include lec07ex/CMakeFiles/lec07ex.dir/progress.make

# Include the compile flags for this target's objects.
include lec07ex/CMakeFiles/lec07ex.dir/flags.make

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o: lec07ex/CMakeFiles/lec07ex.dir/flags.make
lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o: ../lec07ex/lec07ex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec07ex.dir/lec07ex.cpp.o -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec07ex/lec07ex.cpp

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec07ex.dir/lec07ex.cpp.i"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec07ex/lec07ex.cpp > CMakeFiles/lec07ex.dir/lec07ex.cpp.i

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec07ex.dir/lec07ex.cpp.s"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec07ex/lec07ex.cpp -o CMakeFiles/lec07ex.dir/lec07ex.cpp.s

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.requires:

.PHONY : lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.requires

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.provides: lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.requires
	$(MAKE) -f lec07ex/CMakeFiles/lec07ex.dir/build.make lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.provides.build
.PHONY : lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.provides

lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.provides.build: lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o


# Object files for target lec07ex
lec07ex_OBJECTS = \
"CMakeFiles/lec07ex.dir/lec07ex.cpp.o"

# External object files for target lec07ex
lec07ex_EXTERNAL_OBJECTS =

lec07ex/lec07ex: lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o
lec07ex/lec07ex: lec07ex/CMakeFiles/lec07ex.dir/build.make
lec07ex/lec07ex: lec07ex/CMakeFiles/lec07ex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lec07ex"
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec07ex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lec07ex/CMakeFiles/lec07ex.dir/build: lec07ex/lec07ex

.PHONY : lec07ex/CMakeFiles/lec07ex.dir/build

lec07ex/CMakeFiles/lec07ex.dir/requires: lec07ex/CMakeFiles/lec07ex.dir/lec07ex.cpp.o.requires

.PHONY : lec07ex/CMakeFiles/lec07ex.dir/requires

lec07ex/CMakeFiles/lec07ex.dir/clean:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex && $(CMAKE_COMMAND) -P CMakeFiles/lec07ex.dir/cmake_clean.cmake
.PHONY : lec07ex/CMakeFiles/lec07ex.dir/clean

lec07ex/CMakeFiles/lec07ex.dir/depend:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/lec07ex /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex /nfs/s-l011/local/vol01/j/jjbiggins/cie/jjbiggins/class/cmake-build-debug/lec07ex/CMakeFiles/lec07ex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lec07ex/CMakeFiles/lec07ex.dir/depend
