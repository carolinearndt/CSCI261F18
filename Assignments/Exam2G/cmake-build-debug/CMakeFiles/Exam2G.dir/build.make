# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = Z:\CSCI261F18\Assignments\Exam2G

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exam2G.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exam2G.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exam2G.dir/flags.make

CMakeFiles/Exam2G.dir/main.cpp.obj: CMakeFiles/Exam2G.dir/flags.make
CMakeFiles/Exam2G.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exam2G.dir/main.cpp.obj"
	C:\mingw-w64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Exam2G.dir\main.cpp.obj -c Z:\CSCI261F18\Assignments\Exam2G\main.cpp

CMakeFiles/Exam2G.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exam2G.dir/main.cpp.i"
	C:\mingw-w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E Z:\CSCI261F18\Assignments\Exam2G\main.cpp > CMakeFiles\Exam2G.dir\main.cpp.i

CMakeFiles/Exam2G.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exam2G.dir/main.cpp.s"
	C:\mingw-w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S Z:\CSCI261F18\Assignments\Exam2G\main.cpp -o CMakeFiles\Exam2G.dir\main.cpp.s

# Object files for target Exam2G
Exam2G_OBJECTS = \
"CMakeFiles/Exam2G.dir/main.cpp.obj"

# External object files for target Exam2G
Exam2G_EXTERNAL_OBJECTS =

Exam2G.exe: CMakeFiles/Exam2G.dir/main.cpp.obj
Exam2G.exe: CMakeFiles/Exam2G.dir/build.make
Exam2G.exe: CMakeFiles/Exam2G.dir/linklibs.rsp
Exam2G.exe: CMakeFiles/Exam2G.dir/objects1.rsp
Exam2G.exe: CMakeFiles/Exam2G.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exam2G.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Exam2G.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exam2G.dir/build: Exam2G.exe

.PHONY : CMakeFiles/Exam2G.dir/build

CMakeFiles/Exam2G.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Exam2G.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Exam2G.dir/clean

CMakeFiles/Exam2G.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" Z:\CSCI261F18\Assignments\Exam2G Z:\CSCI261F18\Assignments\Exam2G Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug Z:\CSCI261F18\Assignments\Exam2G\cmake-build-debug\CMakeFiles\Exam2G.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exam2G.dir/depend

