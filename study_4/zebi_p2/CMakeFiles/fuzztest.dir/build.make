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
CMAKE_SOURCE_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2

# Include any dependencies generated for this target.
include CMakeFiles/fuzztest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fuzztest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fuzztest.dir/flags.make

cmodel.cpp: cmodel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating cmodel.cpp"
	/opt/cmake-3.17.1-Linux-x86_64/bin/cmake -E copy /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/cmodel.c /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/cmodel.cpp

CMakeFiles/fuzztest.dir/cmodel.cpp.o: CMakeFiles/fuzztest.dir/flags.make
CMakeFiles/fuzztest.dir/cmodel.cpp.o: cmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fuzztest.dir/cmodel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fuzztest.dir/cmodel.cpp.o -c /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/cmodel.cpp

CMakeFiles/fuzztest.dir/cmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fuzztest.dir/cmodel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/cmodel.cpp > CMakeFiles/fuzztest.dir/cmodel.cpp.i

CMakeFiles/fuzztest.dir/cmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fuzztest.dir/cmodel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/cmodel.cpp -o CMakeFiles/fuzztest.dir/cmodel.cpp.s

CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o: CMakeFiles/fuzztest.dir/flags.make
CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o: libverify/verify_libfuzzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o -c /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/libverify/verify_libfuzzer.cpp

CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/libverify/verify_libfuzzer.cpp > CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.i

CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/libverify/verify_libfuzzer.cpp -o CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.s

# Object files for target fuzztest
fuzztest_OBJECTS = \
"CMakeFiles/fuzztest.dir/cmodel.cpp.o" \
"CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o"

# External object files for target fuzztest
fuzztest_EXTERNAL_OBJECTS =

fuzztest: CMakeFiles/fuzztest.dir/cmodel.cpp.o
fuzztest: CMakeFiles/fuzztest.dir/libverify/verify_libfuzzer.cpp.o
fuzztest: CMakeFiles/fuzztest.dir/build.make
fuzztest: CMakeFiles/fuzztest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable fuzztest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fuzztest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fuzztest.dir/build: fuzztest

.PHONY : CMakeFiles/fuzztest.dir/build

CMakeFiles/fuzztest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fuzztest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fuzztest.dir/clean

CMakeFiles/fuzztest.dir/depend: cmodel.cpp
	cd /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2 /home/aswesley/Research/tacas-2020-eval/study_4/zebi_p2/CMakeFiles/fuzztest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fuzztest.dir/depend

