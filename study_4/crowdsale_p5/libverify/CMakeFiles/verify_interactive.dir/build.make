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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5

# Include any dependencies generated for this target.
include libverify/CMakeFiles/verify_interactive.dir/depend.make

# Include the progress variables for this target.
include libverify/CMakeFiles/verify_interactive.dir/progress.make

# Include the compile flags for this target's objects.
include libverify/CMakeFiles/verify_interactive.dir/flags.make

libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o: libverify/CMakeFiles/verify_interactive.dir/flags.make
libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o: libverify/verify_interactive.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o"
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o -c /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify/verify_interactive.cpp

libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/verify_interactive.dir/verify_interactive.cpp.i"
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify/verify_interactive.cpp > CMakeFiles/verify_interactive.dir/verify_interactive.cpp.i

libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/verify_interactive.dir/verify_interactive.cpp.s"
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify/verify_interactive.cpp -o CMakeFiles/verify_interactive.dir/verify_interactive.cpp.s

# Object files for target verify_interactive
verify_interactive_OBJECTS = \
"CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o"

# External object files for target verify_interactive
verify_interactive_EXTERNAL_OBJECTS =

libverify/libverify_interactive.a: libverify/CMakeFiles/verify_interactive.dir/verify_interactive.cpp.o
libverify/libverify_interactive.a: libverify/CMakeFiles/verify_interactive.dir/build.make
libverify/libverify_interactive.a: libverify/CMakeFiles/verify_interactive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libverify_interactive.a"
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && $(CMAKE_COMMAND) -P CMakeFiles/verify_interactive.dir/cmake_clean_target.cmake
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/verify_interactive.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libverify/CMakeFiles/verify_interactive.dir/build: libverify/libverify_interactive.a

.PHONY : libverify/CMakeFiles/verify_interactive.dir/build

libverify/CMakeFiles/verify_interactive.dir/clean:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify && $(CMAKE_COMMAND) -P CMakeFiles/verify_interactive.dir/cmake_clean.cmake
.PHONY : libverify/CMakeFiles/verify_interactive.dir/clean

libverify/CMakeFiles/verify_interactive.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p5/libverify/CMakeFiles/verify_interactive.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libverify/CMakeFiles/verify_interactive.dir/depend

