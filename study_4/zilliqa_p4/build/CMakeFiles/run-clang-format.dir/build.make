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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/build

# Utility rule file for run-clang-format.

# Include the progress variables for this target.
include CMakeFiles/run-clang-format.dir/progress.make

CMakeFiles/run-clang-format:
	/usr/bin/clang-format -i /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/cmodel.h /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/primitive.h /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/harness.c

run-clang-format: CMakeFiles/run-clang-format
run-clang-format: CMakeFiles/run-clang-format.dir/build.make

.PHONY : run-clang-format

# Rule to build all files generated by this target.
CMakeFiles/run-clang-format.dir/build: run-clang-format

.PHONY : CMakeFiles/run-clang-format.dir/build

CMakeFiles/run-clang-format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run-clang-format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run-clang-format.dir/clean

CMakeFiles/run-clang-format.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4 /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4 /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/build /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/build /home/aswesley/Research/tacas-2020-eval/study_4/zilliqa_p4/build/CMakeFiles/run-clang-format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run-clang-format.dir/depend

