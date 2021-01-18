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
CMAKE_COMMAND = /opt/cmake-3.17.1-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.17.1-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5

# Include any dependencies generated for this target.
include CMakeFiles/icmodel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/icmodel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/icmodel.dir/flags.make

cmodel.cpp: cmodel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating cmodel.cpp"
	/opt/cmake-3.17.1-Linux-x86_64/bin/cmake -E copy /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/cmodel.cpp

harness.cpp: harness.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating harness.cpp"
	/opt/cmake-3.17.1-Linux-x86_64/bin/cmake -E copy /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/harness.c /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/harness.cpp

CMakeFiles/icmodel.dir/cmodel.cpp.o: CMakeFiles/icmodel.dir/flags.make
CMakeFiles/icmodel.dir/cmodel.cpp.o: cmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/icmodel.dir/cmodel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/icmodel.dir/cmodel.cpp.o -c /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/cmodel.cpp

CMakeFiles/icmodel.dir/cmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/icmodel.dir/cmodel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/cmodel.cpp > CMakeFiles/icmodel.dir/cmodel.cpp.i

CMakeFiles/icmodel.dir/cmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/icmodel.dir/cmodel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/cmodel.cpp -o CMakeFiles/icmodel.dir/cmodel.cpp.s

CMakeFiles/icmodel.dir/harness.cpp.o: CMakeFiles/icmodel.dir/flags.make
CMakeFiles/icmodel.dir/harness.cpp.o: harness.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/icmodel.dir/harness.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/icmodel.dir/harness.cpp.o -c /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/harness.cpp

CMakeFiles/icmodel.dir/harness.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/icmodel.dir/harness.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/harness.cpp > CMakeFiles/icmodel.dir/harness.cpp.i

CMakeFiles/icmodel.dir/harness.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/icmodel.dir/harness.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/harness.cpp -o CMakeFiles/icmodel.dir/harness.cpp.s

# Object files for target icmodel
icmodel_OBJECTS = \
"CMakeFiles/icmodel.dir/cmodel.cpp.o" \
"CMakeFiles/icmodel.dir/harness.cpp.o"

# External object files for target icmodel
icmodel_EXTERNAL_OBJECTS =

icmodel: CMakeFiles/icmodel.dir/cmodel.cpp.o
icmodel: CMakeFiles/icmodel.dir/harness.cpp.o
icmodel: CMakeFiles/icmodel.dir/build.make
icmodel: libverify/libverify_interactive.a
icmodel: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
icmodel: CMakeFiles/icmodel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable icmodel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/icmodel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/icmodel.dir/build: icmodel

.PHONY : CMakeFiles/icmodel.dir/build

CMakeFiles/icmodel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/icmodel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/icmodel.dir/clean

CMakeFiles/icmodel.dir/depend: cmodel.cpp
CMakeFiles/icmodel.dir/depend: harness.cpp
	cd /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5 /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5 /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5 /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5 /home/aswesley/Research/tacas-2020-eval/study_4/brickblock_p5/CMakeFiles/icmodel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/icmodel.dir/depend

