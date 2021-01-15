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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4

# Utility rule file for fuzz.

# Include the progress variables for this target.
include CMakeFiles/fuzz.dir/progress.make

CMakeFiles/fuzz: corpus_dir
	./fuzztest corpus_dir -max_len=20000 -runs=1000000 -timeout=15 -use_value_profile=1 -print_final_stats=1

corpus_dir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/ico_p4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating corpus_dir"
	/opt/cmake-3.17.1-Linux-x86_64/bin/cmake -E make_directory /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4/corpus_dir

fuzz: CMakeFiles/fuzz
fuzz: corpus_dir
fuzz: CMakeFiles/fuzz.dir/build.make

.PHONY : fuzz

# Rule to build all files generated by this target.
CMakeFiles/fuzz.dir/build: fuzz

.PHONY : CMakeFiles/fuzz.dir/build

CMakeFiles/fuzz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fuzz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fuzz.dir/clean

CMakeFiles/fuzz.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4 /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4 /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4 /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4 /home/aswesley/Research/tacas-2020-eval/study_4/ico_p4/CMakeFiles/fuzz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fuzz.dir/depend

