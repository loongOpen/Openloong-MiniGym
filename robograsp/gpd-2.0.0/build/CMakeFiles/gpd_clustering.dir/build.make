# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/jiao/catkin_arm/gpd-2.0.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiao/catkin_arm/gpd-2.0.0/build

# Include any dependencies generated for this target.
include CMakeFiles/gpd_clustering.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gpd_clustering.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gpd_clustering.dir/flags.make

CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o: CMakeFiles/gpd_clustering.dir/flags.make
CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o: ../src/gpd/clustering.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jiao/catkin_arm/gpd-2.0.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o -c /home/jiao/catkin_arm/gpd-2.0.0/src/gpd/clustering.cpp

CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiao/catkin_arm/gpd-2.0.0/src/gpd/clustering.cpp > CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.i

CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiao/catkin_arm/gpd-2.0.0/src/gpd/clustering.cpp -o CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.s

# Object files for target gpd_clustering
gpd_clustering_OBJECTS = \
"CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o"

# External object files for target gpd_clustering
gpd_clustering_EXTERNAL_OBJECTS =

libgpd_clustering.a: CMakeFiles/gpd_clustering.dir/src/gpd/clustering.cpp.o
libgpd_clustering.a: CMakeFiles/gpd_clustering.dir/build.make
libgpd_clustering.a: CMakeFiles/gpd_clustering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jiao/catkin_arm/gpd-2.0.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgpd_clustering.a"
	$(CMAKE_COMMAND) -P CMakeFiles/gpd_clustering.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gpd_clustering.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gpd_clustering.dir/build: libgpd_clustering.a

.PHONY : CMakeFiles/gpd_clustering.dir/build

CMakeFiles/gpd_clustering.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gpd_clustering.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gpd_clustering.dir/clean

CMakeFiles/gpd_clustering.dir/depend:
	cd /home/jiao/catkin_arm/gpd-2.0.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiao/catkin_arm/gpd-2.0.0 /home/jiao/catkin_arm/gpd-2.0.0 /home/jiao/catkin_arm/gpd-2.0.0/build /home/jiao/catkin_arm/gpd-2.0.0/build /home/jiao/catkin_arm/gpd-2.0.0/build/CMakeFiles/gpd_clustering.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gpd_clustering.dir/depend

