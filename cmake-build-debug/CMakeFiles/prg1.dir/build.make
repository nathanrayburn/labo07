# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = P:\HEIG\labo07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = P:\HEIG\labo07\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prg1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prg1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prg1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prg1.dir/flags.make

CMakeFiles/prg1.dir/main.cpp.obj: CMakeFiles/prg1.dir/flags.make
CMakeFiles/prg1.dir/main.cpp.obj: ../main.cpp
CMakeFiles/prg1.dir/main.cpp.obj: CMakeFiles/prg1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prg1.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prg1.dir/main.cpp.obj -MF CMakeFiles\prg1.dir\main.cpp.obj.d -o CMakeFiles\prg1.dir\main.cpp.obj -c P:\HEIG\labo07\main.cpp

CMakeFiles/prg1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prg1.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E P:\HEIG\labo07\main.cpp > CMakeFiles\prg1.dir\main.cpp.i

CMakeFiles/prg1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prg1.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S P:\HEIG\labo07\main.cpp -o CMakeFiles\prg1.dir\main.cpp.s

CMakeFiles/prg1.dir/Robot.cpp.obj: CMakeFiles/prg1.dir/flags.make
CMakeFiles/prg1.dir/Robot.cpp.obj: ../Robot.cpp
CMakeFiles/prg1.dir/Robot.cpp.obj: CMakeFiles/prg1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/prg1.dir/Robot.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prg1.dir/Robot.cpp.obj -MF CMakeFiles\prg1.dir\Robot.cpp.obj.d -o CMakeFiles\prg1.dir\Robot.cpp.obj -c P:\HEIG\labo07\Robot.cpp

CMakeFiles/prg1.dir/Robot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prg1.dir/Robot.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E P:\HEIG\labo07\Robot.cpp > CMakeFiles\prg1.dir\Robot.cpp.i

CMakeFiles/prg1.dir/Robot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prg1.dir/Robot.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S P:\HEIG\labo07\Robot.cpp -o CMakeFiles\prg1.dir\Robot.cpp.s

CMakeFiles/prg1.dir/userInterface.cpp.obj: CMakeFiles/prg1.dir/flags.make
CMakeFiles/prg1.dir/userInterface.cpp.obj: ../userInterface.cpp
CMakeFiles/prg1.dir/userInterface.cpp.obj: CMakeFiles/prg1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/prg1.dir/userInterface.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prg1.dir/userInterface.cpp.obj -MF CMakeFiles\prg1.dir\userInterface.cpp.obj.d -o CMakeFiles\prg1.dir\userInterface.cpp.obj -c P:\HEIG\labo07\userInterface.cpp

CMakeFiles/prg1.dir/userInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prg1.dir/userInterface.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E P:\HEIG\labo07\userInterface.cpp > CMakeFiles\prg1.dir\userInterface.cpp.i

CMakeFiles/prg1.dir/userInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prg1.dir/userInterface.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S P:\HEIG\labo07\userInterface.cpp -o CMakeFiles\prg1.dir\userInterface.cpp.s

CMakeFiles/prg1.dir/annex.cpp.obj: CMakeFiles/prg1.dir/flags.make
CMakeFiles/prg1.dir/annex.cpp.obj: ../annex.cpp
CMakeFiles/prg1.dir/annex.cpp.obj: CMakeFiles/prg1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/prg1.dir/annex.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prg1.dir/annex.cpp.obj -MF CMakeFiles\prg1.dir\annex.cpp.obj.d -o CMakeFiles\prg1.dir\annex.cpp.obj -c P:\HEIG\labo07\annex.cpp

CMakeFiles/prg1.dir/annex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prg1.dir/annex.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E P:\HEIG\labo07\annex.cpp > CMakeFiles\prg1.dir\annex.cpp.i

CMakeFiles/prg1.dir/annex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prg1.dir/annex.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S P:\HEIG\labo07\annex.cpp -o CMakeFiles\prg1.dir\annex.cpp.s

CMakeFiles/prg1.dir/BattleRoyal.cpp.obj: CMakeFiles/prg1.dir/flags.make
CMakeFiles/prg1.dir/BattleRoyal.cpp.obj: ../BattleRoyal.cpp
CMakeFiles/prg1.dir/BattleRoyal.cpp.obj: CMakeFiles/prg1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/prg1.dir/BattleRoyal.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prg1.dir/BattleRoyal.cpp.obj -MF CMakeFiles\prg1.dir\BattleRoyal.cpp.obj.d -o CMakeFiles\prg1.dir\BattleRoyal.cpp.obj -c P:\HEIG\labo07\BattleRoyal.cpp

CMakeFiles/prg1.dir/BattleRoyal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prg1.dir/BattleRoyal.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E P:\HEIG\labo07\BattleRoyal.cpp > CMakeFiles\prg1.dir\BattleRoyal.cpp.i

CMakeFiles/prg1.dir/BattleRoyal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prg1.dir/BattleRoyal.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S P:\HEIG\labo07\BattleRoyal.cpp -o CMakeFiles\prg1.dir\BattleRoyal.cpp.s

# Object files for target prg1
prg1_OBJECTS = \
"CMakeFiles/prg1.dir/main.cpp.obj" \
"CMakeFiles/prg1.dir/Robot.cpp.obj" \
"CMakeFiles/prg1.dir/userInterface.cpp.obj" \
"CMakeFiles/prg1.dir/annex.cpp.obj" \
"CMakeFiles/prg1.dir/BattleRoyal.cpp.obj"

# External object files for target prg1
prg1_EXTERNAL_OBJECTS =

prg1.exe: CMakeFiles/prg1.dir/main.cpp.obj
prg1.exe: CMakeFiles/prg1.dir/Robot.cpp.obj
prg1.exe: CMakeFiles/prg1.dir/userInterface.cpp.obj
prg1.exe: CMakeFiles/prg1.dir/annex.cpp.obj
prg1.exe: CMakeFiles/prg1.dir/BattleRoyal.cpp.obj
prg1.exe: CMakeFiles/prg1.dir/build.make
prg1.exe: CMakeFiles/prg1.dir/linklibs.rsp
prg1.exe: CMakeFiles/prg1.dir/objects1.rsp
prg1.exe: CMakeFiles/prg1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=P:\HEIG\labo07\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable prg1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\prg1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prg1.dir/build: prg1.exe
.PHONY : CMakeFiles/prg1.dir/build

CMakeFiles/prg1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\prg1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/prg1.dir/clean

CMakeFiles/prg1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" P:\HEIG\labo07 P:\HEIG\labo07 P:\HEIG\labo07\cmake-build-debug P:\HEIG\labo07\cmake-build-debug P:\HEIG\labo07\cmake-build-debug\CMakeFiles\prg1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prg1.dir/depend

