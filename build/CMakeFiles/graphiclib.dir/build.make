# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build

# Include any dependencies generated for this target.
include CMakeFiles/graphiclib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graphiclib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphiclib.dir/flags.make

CMakeFiles/graphiclib.dir/main.cpp.o: CMakeFiles/graphiclib.dir/flags.make
CMakeFiles/graphiclib.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphiclib.dir/main.cpp.o"
	/usr/bin/clang++-6.0  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphiclib.dir/main.cpp.o -c /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp

CMakeFiles/graphiclib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphiclib.dir/main.cpp.i"
	/usr/bin/clang++-6.0 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp > CMakeFiles/graphiclib.dir/main.cpp.i

CMakeFiles/graphiclib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphiclib.dir/main.cpp.s"
	/usr/bin/clang++-6.0 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp -o CMakeFiles/graphiclib.dir/main.cpp.s

CMakeFiles/graphiclib.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/graphiclib.dir/main.cpp.o.requires

CMakeFiles/graphiclib.dir/main.cpp.o.provides: CMakeFiles/graphiclib.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/graphiclib.dir/build.make CMakeFiles/graphiclib.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/graphiclib.dir/main.cpp.o.provides

CMakeFiles/graphiclib.dir/main.cpp.o.provides.build: CMakeFiles/graphiclib.dir/main.cpp.o


# Object files for target graphiclib
graphiclib_OBJECTS = \
"CMakeFiles/graphiclib.dir/main.cpp.o"

# External object files for target graphiclib
graphiclib_EXTERNAL_OBJECTS =

graphiclib: CMakeFiles/graphiclib.dir/main.cpp.o
graphiclib: CMakeFiles/graphiclib.dir/build.make
graphiclib: CMakeFiles/graphiclib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable graphiclib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graphiclib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphiclib.dir/build: graphiclib

.PHONY : CMakeFiles/graphiclib.dir/build

CMakeFiles/graphiclib.dir/requires: CMakeFiles/graphiclib.dir/main.cpp.o.requires

.PHONY : CMakeFiles/graphiclib.dir/requires

CMakeFiles/graphiclib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graphiclib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graphiclib.dir/clean

CMakeFiles/graphiclib.dir/depend:
	cd /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/build/CMakeFiles/graphiclib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphiclib.dir/depend
