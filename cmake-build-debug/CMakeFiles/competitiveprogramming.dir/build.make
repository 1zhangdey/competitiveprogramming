# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\deyiz\CLionProjects\competitiveprogramming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/competitiveprogramming.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/competitiveprogramming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/competitiveprogramming.dir/flags.make

CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.obj: CMakeFiles/competitiveprogramming.dir/flags.make
CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.obj: ../Team\ Olympiad\ (CF490-D2-A).cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\competitiveprogramming.dir\Team_Olympiad_(CF490-D2-A).cpp.obj -c "C:\Users\deyiz\CLionProjects\competitiveprogramming\Team Olympiad (CF490-D2-A).cpp"

CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\deyiz\CLionProjects\competitiveprogramming\Team Olympiad (CF490-D2-A).cpp" > CMakeFiles\competitiveprogramming.dir\Team_Olympiad_(CF490-D2-A).cpp.i

CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\deyiz\CLionProjects\competitiveprogramming\Team Olympiad (CF490-D2-A).cpp" -o CMakeFiles\competitiveprogramming.dir\Team_Olympiad_(CF490-D2-A).cpp.s

# Object files for target competitiveprogramming
competitiveprogramming_OBJECTS = \
"CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.obj"

# External object files for target competitiveprogramming
competitiveprogramming_EXTERNAL_OBJECTS =

competitiveprogramming.exe: CMakeFiles/competitiveprogramming.dir/Team_Olympiad_(CF490-D2-A).cpp.obj
competitiveprogramming.exe: CMakeFiles/competitiveprogramming.dir/build.make
competitiveprogramming.exe: CMakeFiles/competitiveprogramming.dir/linklibs.rsp
competitiveprogramming.exe: CMakeFiles/competitiveprogramming.dir/objects1.rsp
competitiveprogramming.exe: CMakeFiles/competitiveprogramming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable competitiveprogramming.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\competitiveprogramming.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/competitiveprogramming.dir/build: competitiveprogramming.exe

.PHONY : CMakeFiles/competitiveprogramming.dir/build

CMakeFiles/competitiveprogramming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\competitiveprogramming.dir\cmake_clean.cmake
.PHONY : CMakeFiles/competitiveprogramming.dir/clean

CMakeFiles/competitiveprogramming.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\deyiz\CLionProjects\competitiveprogramming C:\Users\deyiz\CLionProjects\competitiveprogramming C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug C:\Users\deyiz\CLionProjects\competitiveprogramming\cmake-build-debug\CMakeFiles\competitiveprogramming.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/competitiveprogramming.dir/depend

