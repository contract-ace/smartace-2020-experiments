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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/build

# Utility rule file for verify.

# Include the progress variables for this target.
include CMakeFiles/verify.dir/progress.make

CMakeFiles/verify:
	/home/aswesley/Research/seahorn/build/run/bin/sea yama -y /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/yaml/sea.common.yaml pf /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/libverify/verify_seahorn.c /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/harness.c -DMC_USE_STDINT -DMC_USE_EXTERNAL_NONDET --show-invars

verify: CMakeFiles/verify
verify: CMakeFiles/verify.dir/build.make

.PHONY : verify

# Rule to build all files generated by this target.
CMakeFiles/verify.dir/build: verify

.PHONY : CMakeFiles/verify.dir/build

CMakeFiles/verify.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/verify.dir/cmake_clean.cmake
.PHONY : CMakeFiles/verify.dir/clean

CMakeFiles/verify.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1 /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1 /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/build /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/build /home/aswesley/Research/tacas-2020-eval/study_4/overview_p1/build/CMakeFiles/verify.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/verify.dir/depend

