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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GraphicLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GraphicLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GraphicLib.dir/flags.make

CMakeFiles/GraphicLib.dir/src/printer.cpp.o: CMakeFiles/GraphicLib.dir/flags.make
CMakeFiles/GraphicLib.dir/src/printer.cpp.o: ../src/printer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GraphicLib.dir/src/printer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GraphicLib.dir/src/printer.cpp.o -c /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/printer.cpp

CMakeFiles/GraphicLib.dir/src/printer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicLib.dir/src/printer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/printer.cpp > CMakeFiles/GraphicLib.dir/src/printer.cpp.i

CMakeFiles/GraphicLib.dir/src/printer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicLib.dir/src/printer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/printer.cpp -o CMakeFiles/GraphicLib.dir/src/printer.cpp.s

CMakeFiles/GraphicLib.dir/src/vector.cpp.o: CMakeFiles/GraphicLib.dir/flags.make
CMakeFiles/GraphicLib.dir/src/vector.cpp.o: ../src/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GraphicLib.dir/src/vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GraphicLib.dir/src/vector.cpp.o -c /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/vector.cpp

CMakeFiles/GraphicLib.dir/src/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicLib.dir/src/vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/vector.cpp > CMakeFiles/GraphicLib.dir/src/vector.cpp.i

CMakeFiles/GraphicLib.dir/src/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicLib.dir/src/vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/src/vector.cpp -o CMakeFiles/GraphicLib.dir/src/vector.cpp.s

CMakeFiles/GraphicLib.dir/main.cpp.o: CMakeFiles/GraphicLib.dir/flags.make
CMakeFiles/GraphicLib.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GraphicLib.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GraphicLib.dir/main.cpp.o -c /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp

CMakeFiles/GraphicLib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicLib.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp > CMakeFiles/GraphicLib.dir/main.cpp.i

CMakeFiles/GraphicLib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicLib.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/main.cpp -o CMakeFiles/GraphicLib.dir/main.cpp.s

# Object files for target GraphicLib
GraphicLib_OBJECTS = \
"CMakeFiles/GraphicLib.dir/src/printer.cpp.o" \
"CMakeFiles/GraphicLib.dir/src/vector.cpp.o" \
"CMakeFiles/GraphicLib.dir/main.cpp.o"

# External object files for target GraphicLib
GraphicLib_EXTERNAL_OBJECTS =

GraphicLib: CMakeFiles/GraphicLib.dir/src/printer.cpp.o
GraphicLib: CMakeFiles/GraphicLib.dir/src/vector.cpp.o
GraphicLib: CMakeFiles/GraphicLib.dir/main.cpp.o
GraphicLib: CMakeFiles/GraphicLib.dir/build.make
GraphicLib: CMakeFiles/GraphicLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GraphicLib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GraphicLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GraphicLib.dir/build: GraphicLib

.PHONY : CMakeFiles/GraphicLib.dir/build

CMakeFiles/GraphicLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GraphicLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GraphicLib.dir/clean

CMakeFiles/GraphicLib.dir/depend:
	cd /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug /home/stepan/Yandex.Disk/Documents/homeProjects/GraphicLib/cmake-build-debug/CMakeFiles/GraphicLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GraphicLib.dir/depend
