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
CMAKE_COMMAND = "/Users/overman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/overman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/overman/CLionProjects/TicTackToe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/overman/CLionProjects/TicTackToe/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TicTackToe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TicTackToe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TicTackToe.dir/flags.make

CMakeFiles/TicTackToe.dir/src/Board.cpp.o: CMakeFiles/TicTackToe.dir/flags.make
CMakeFiles/TicTackToe.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TicTackToe.dir/src/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TicTackToe.dir/src/Board.cpp.o -c /Users/overman/CLionProjects/TicTackToe/src/Board.cpp

CMakeFiles/TicTackToe.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTackToe.dir/src/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/overman/CLionProjects/TicTackToe/src/Board.cpp > CMakeFiles/TicTackToe.dir/src/Board.cpp.i

CMakeFiles/TicTackToe.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTackToe.dir/src/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/overman/CLionProjects/TicTackToe/src/Board.cpp -o CMakeFiles/TicTackToe.dir/src/Board.cpp.s

CMakeFiles/TicTackToe.dir/src/Player.cpp.o: CMakeFiles/TicTackToe.dir/flags.make
CMakeFiles/TicTackToe.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TicTackToe.dir/src/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TicTackToe.dir/src/Player.cpp.o -c /Users/overman/CLionProjects/TicTackToe/src/Player.cpp

CMakeFiles/TicTackToe.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTackToe.dir/src/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/overman/CLionProjects/TicTackToe/src/Player.cpp > CMakeFiles/TicTackToe.dir/src/Player.cpp.i

CMakeFiles/TicTackToe.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTackToe.dir/src/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/overman/CLionProjects/TicTackToe/src/Player.cpp -o CMakeFiles/TicTackToe.dir/src/Player.cpp.s

CMakeFiles/TicTackToe.dir/src/Game.cpp.o: CMakeFiles/TicTackToe.dir/flags.make
CMakeFiles/TicTackToe.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TicTackToe.dir/src/Game.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TicTackToe.dir/src/Game.cpp.o -c /Users/overman/CLionProjects/TicTackToe/src/Game.cpp

CMakeFiles/TicTackToe.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTackToe.dir/src/Game.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/overman/CLionProjects/TicTackToe/src/Game.cpp > CMakeFiles/TicTackToe.dir/src/Game.cpp.i

CMakeFiles/TicTackToe.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTackToe.dir/src/Game.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/overman/CLionProjects/TicTackToe/src/Game.cpp -o CMakeFiles/TicTackToe.dir/src/Game.cpp.s

CMakeFiles/TicTackToe.dir/src/main.cpp.o: CMakeFiles/TicTackToe.dir/flags.make
CMakeFiles/TicTackToe.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TicTackToe.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TicTackToe.dir/src/main.cpp.o -c /Users/overman/CLionProjects/TicTackToe/src/main.cpp

CMakeFiles/TicTackToe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TicTackToe.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/overman/CLionProjects/TicTackToe/src/main.cpp > CMakeFiles/TicTackToe.dir/src/main.cpp.i

CMakeFiles/TicTackToe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TicTackToe.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/overman/CLionProjects/TicTackToe/src/main.cpp -o CMakeFiles/TicTackToe.dir/src/main.cpp.s

# Object files for target TicTackToe
TicTackToe_OBJECTS = \
"CMakeFiles/TicTackToe.dir/src/Board.cpp.o" \
"CMakeFiles/TicTackToe.dir/src/Player.cpp.o" \
"CMakeFiles/TicTackToe.dir/src/Game.cpp.o" \
"CMakeFiles/TicTackToe.dir/src/main.cpp.o"

# External object files for target TicTackToe
TicTackToe_EXTERNAL_OBJECTS =

TicTackToe: CMakeFiles/TicTackToe.dir/src/Board.cpp.o
TicTackToe: CMakeFiles/TicTackToe.dir/src/Player.cpp.o
TicTackToe: CMakeFiles/TicTackToe.dir/src/Game.cpp.o
TicTackToe: CMakeFiles/TicTackToe.dir/src/main.cpp.o
TicTackToe: CMakeFiles/TicTackToe.dir/build.make
TicTackToe: CMakeFiles/TicTackToe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable TicTackToe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TicTackToe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TicTackToe.dir/build: TicTackToe

.PHONY : CMakeFiles/TicTackToe.dir/build

CMakeFiles/TicTackToe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TicTackToe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TicTackToe.dir/clean

CMakeFiles/TicTackToe.dir/depend:
	cd /Users/overman/CLionProjects/TicTackToe/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/overman/CLionProjects/TicTackToe /Users/overman/CLionProjects/TicTackToe /Users/overman/CLionProjects/TicTackToe/cmake-build-debug /Users/overman/CLionProjects/TicTackToe/cmake-build-debug /Users/overman/CLionProjects/TicTackToe/cmake-build-debug/CMakeFiles/TicTackToe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TicTackToe.dir/depend

