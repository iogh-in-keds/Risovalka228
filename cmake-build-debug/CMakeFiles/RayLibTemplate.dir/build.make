# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\JetBrains\Tools\apps\CLion\ch-0\212.4746.93\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\JetBrains\Tools\apps\CLion\ch-0\212.4746.93\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\games4k\Risovalka228

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\games4k\Risovalka228\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RayLibTemplate.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/RayLibTemplate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RayLibTemplate.dir/flags.make

CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj: CMakeFiles/RayLibTemplate.dir/flags.make
CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj: CMakeFiles/RayLibTemplate.dir/includes_CXX.rsp
CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj: ../src/Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\games4k\Risovalka228\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RayLibTemplate.dir\src\Object.cpp.obj -c H:\games4k\Risovalka228\src\Object.cpp

CMakeFiles/RayLibTemplate.dir/src/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayLibTemplate.dir/src/Object.cpp.i"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\games4k\Risovalka228\src\Object.cpp > CMakeFiles\RayLibTemplate.dir\src\Object.cpp.i

CMakeFiles/RayLibTemplate.dir/src/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayLibTemplate.dir/src/Object.cpp.s"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\games4k\Risovalka228\src\Object.cpp -o CMakeFiles\RayLibTemplate.dir\src\Object.cpp.s

CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj: CMakeFiles/RayLibTemplate.dir/flags.make
CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj: CMakeFiles/RayLibTemplate.dir/includes_CXX.rsp
CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\games4k\Risovalka228\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RayLibTemplate.dir\src\Point.cpp.obj -c H:\games4k\Risovalka228\src\Point.cpp

CMakeFiles/RayLibTemplate.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayLibTemplate.dir/src/Point.cpp.i"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\games4k\Risovalka228\src\Point.cpp > CMakeFiles\RayLibTemplate.dir\src\Point.cpp.i

CMakeFiles/RayLibTemplate.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayLibTemplate.dir/src/Point.cpp.s"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\games4k\Risovalka228\src\Point.cpp -o CMakeFiles\RayLibTemplate.dir\src\Point.cpp.s

CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj: CMakeFiles/RayLibTemplate.dir/flags.make
CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj: CMakeFiles/RayLibTemplate.dir/includes_CXX.rsp
CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\games4k\Risovalka228\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RayLibTemplate.dir\src\main.cpp.obj -c H:\games4k\Risovalka228\src\main.cpp

CMakeFiles/RayLibTemplate.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayLibTemplate.dir/src/main.cpp.i"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\games4k\Risovalka228\src\main.cpp > CMakeFiles\RayLibTemplate.dir\src\main.cpp.i

CMakeFiles/RayLibTemplate.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayLibTemplate.dir/src/main.cpp.s"
	C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\games4k\Risovalka228\src\main.cpp -o CMakeFiles\RayLibTemplate.dir\src\main.cpp.s

# Object files for target RayLibTemplate
RayLibTemplate_OBJECTS = \
"CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj" \
"CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj" \
"CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj"

# External object files for target RayLibTemplate
RayLibTemplate_EXTERNAL_OBJECTS =

RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/src/Object.cpp.obj
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/src/Point.cpp.obj
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/src/main.cpp.obj
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/build.make
RayLibTemplate.exe: libs/raylib/raylib/libraylib.a
RayLibTemplate.exe: libs/raylib/raylib/external/glfw/src/libglfw3.a
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/linklibs.rsp
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/objects1.rsp
RayLibTemplate.exe: CMakeFiles/RayLibTemplate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\games4k\Risovalka228\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable RayLibTemplate.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RayLibTemplate.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RayLibTemplate.dir/build: RayLibTemplate.exe
.PHONY : CMakeFiles/RayLibTemplate.dir/build

CMakeFiles/RayLibTemplate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RayLibTemplate.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RayLibTemplate.dir/clean

CMakeFiles/RayLibTemplate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\games4k\Risovalka228 H:\games4k\Risovalka228 H:\games4k\Risovalka228\cmake-build-debug H:\games4k\Risovalka228\cmake-build-debug H:\games4k\Risovalka228\cmake-build-debug\CMakeFiles\RayLibTemplate.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RayLibTemplate.dir/depend
