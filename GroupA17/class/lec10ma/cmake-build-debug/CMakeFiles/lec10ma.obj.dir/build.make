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
CMAKE_SOURCE_DIR = /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lec10ma.obj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lec10ma.obj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lec10ma.obj.dir/flags.make

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj: CMakeFiles/lec10ma.obj.dir/flags.make
CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj: ../lec10ma.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj"
	/usr/bin/avr-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/lec10ma.cpp

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.i"
	/usr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/lec10ma.cpp > CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.i

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.s"
	/usr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/lec10ma.cpp -o CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.s

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.requires:

.PHONY : CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.requires

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.provides: CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.requires
	$(MAKE) -f CMakeFiles/lec10ma.obj.dir/build.make CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.provides.build
.PHONY : CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.provides

CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.provides.build: CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj


CMakeFiles/lec10ma.obj.dir/battery.cpp.obj: CMakeFiles/lec10ma.obj.dir/flags.make
CMakeFiles/lec10ma.obj.dir/battery.cpp.obj: ../battery.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lec10ma.obj.dir/battery.cpp.obj"
	/usr/bin/avr-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec10ma.obj.dir/battery.cpp.obj -c /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/battery.cpp

CMakeFiles/lec10ma.obj.dir/battery.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec10ma.obj.dir/battery.cpp.i"
	/usr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/battery.cpp > CMakeFiles/lec10ma.obj.dir/battery.cpp.i

CMakeFiles/lec10ma.obj.dir/battery.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec10ma.obj.dir/battery.cpp.s"
	/usr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/battery.cpp -o CMakeFiles/lec10ma.obj.dir/battery.cpp.s

CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.requires:

.PHONY : CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.requires

CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.provides: CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.requires
	$(MAKE) -f CMakeFiles/lec10ma.obj.dir/build.make CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.provides.build
.PHONY : CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.provides

CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.provides.build: CMakeFiles/lec10ma.obj.dir/battery.cpp.obj


# Object files for target lec10ma.obj
lec10ma_obj_OBJECTS = \
"CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj" \
"CMakeFiles/lec10ma.obj.dir/battery.cpp.obj"

# External object files for target lec10ma.obj
lec10ma_obj_EXTERNAL_OBJECTS =

lec10ma.obj: CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj
lec10ma.obj: CMakeFiles/lec10ma.obj.dir/battery.cpp.obj
lec10ma.obj: CMakeFiles/lec10ma.obj.dir/build.make
lec10ma.obj: CMakeFiles/lec10ma.obj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lec10ma.obj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec10ma.obj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lec10ma.obj.dir/build: lec10ma.obj

.PHONY : CMakeFiles/lec10ma.obj.dir/build

CMakeFiles/lec10ma.obj.dir/requires: CMakeFiles/lec10ma.obj.dir/lec10ma.cpp.obj.requires
CMakeFiles/lec10ma.obj.dir/requires: CMakeFiles/lec10ma.obj.dir/battery.cpp.obj.requires

.PHONY : CMakeFiles/lec10ma.obj.dir/requires

CMakeFiles/lec10ma.obj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lec10ma.obj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lec10ma.obj.dir/clean

CMakeFiles/lec10ma.obj.dir/depend:
	cd /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug /nfs/s-l011/local/vol01/j/jjbiggins/cie/GroupA17/class/lec10ma/cmake-build-debug/CMakeFiles/lec10ma.obj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lec10ma.obj.dir/depend

