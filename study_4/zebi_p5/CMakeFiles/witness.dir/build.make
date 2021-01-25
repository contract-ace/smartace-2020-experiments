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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5

# Utility rule file for witness.

# Include the progress variables for this target.
include CMakeFiles/witness.dir/progress.make

CMakeFiles/witness:
	/home/aswesley/Research/seahorn/build/run/bin/sea yama -y /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/yaml/sea.common.yaml -y /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/yaml/sea.cex.yaml exe-cex /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/libverify/verify_seahorn.c /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/harness.c -DMC_USE_STDINT -DMC_USE_EXTERNAL_NONDET -DMC_LOG_ALL -o witness

witness: CMakeFiles/witness
witness: CMakeFiles/witness.dir/build.make

.PHONY : witness

# Rule to build all files generated by this target.
CMakeFiles/witness.dir/build: witness

.PHONY : CMakeFiles/witness.dir/build

CMakeFiles/witness.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/witness.dir/cmake_clean.cmake
.PHONY : CMakeFiles/witness.dir/clean

CMakeFiles/witness.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p5/CMakeFiles/witness.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/witness.dir/depend

