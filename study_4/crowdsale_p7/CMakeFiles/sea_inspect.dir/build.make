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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7

# Utility rule file for sea_inspect.

# Include the progress variables for this target.
include CMakeFiles/sea_inspect.dir/progress.make

merged.pp.ms.o.ll: sea_temps/merged.pp.ms.o.bc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating merged.pp.ms.o.ll"
	/usr/bin/llvm-dis-10 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/sea_temps/merged.pp.ms.o.bc -o /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/merged.pp.ms.o.ll

CMakeFiles/sea_inspect:
	/home/aswesley/Research/seahorn/build/run/bin/sea inspect --cfg-dot /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/merged.pp.ms.o.ll

sea_temps/merged.pp.ms.o.bc: libverify/verify_seahorn.c
sea_temps/merged.pp.ms.o.bc: cmodel.c
sea_temps/merged.pp.ms.o.bc: harness.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating sea_temps/merged.pp.ms.o.bc"
	/home/aswesley/Research/seahorn/build/run/bin/sea yama -y /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/yaml/sea.common.yaml pf /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/libverify/verify_seahorn.c /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/harness.c -DMC_USE_STDINT -DMC_USE_EXTERNAL_NONDET --save-temps --temp-dir /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/sea_temps

sea_inspect: merged.pp.ms.o.ll
sea_inspect: CMakeFiles/sea_inspect
sea_inspect: sea_temps/merged.pp.ms.o.bc
sea_inspect: CMakeFiles/sea_inspect.dir/build.make

.PHONY : sea_inspect

# Rule to build all files generated by this target.
CMakeFiles/sea_inspect.dir/build: sea_inspect

.PHONY : CMakeFiles/sea_inspect.dir/build

CMakeFiles/sea_inspect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sea_inspect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sea_inspect.dir/clean

CMakeFiles/sea_inspect.dir/depend:
	cd /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7 /home/aswesley/Research/tacas-2020-eval/study_4/crowdsale_p7/CMakeFiles/sea_inspect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sea_inspect.dir/depend

