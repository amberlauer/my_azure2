# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amber/Documents/AZURE_new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amber/Documents/AZURE_new/build

# Include any dependencies generated for this target.
include coul/src/CMakeFiles/coul.dir/depend.make

# Include the progress variables for this target.
include coul/src/CMakeFiles/coul.dir/progress.make

# Include the compile flags for this target's objects.
include coul/src/CMakeFiles/coul.dir/flags.make

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o: coul/src/CMakeFiles/coul.dir/flags.make
coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o: ../coul/src/complex_functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amber/Documents/AZURE_new/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coul.dir/complex_functions.cpp.o -c /home/amber/Documents/AZURE_new/coul/src/complex_functions.cpp

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coul.dir/complex_functions.cpp.i"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amber/Documents/AZURE_new/coul/src/complex_functions.cpp > CMakeFiles/coul.dir/complex_functions.cpp.i

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coul.dir/complex_functions.cpp.s"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amber/Documents/AZURE_new/coul/src/complex_functions.cpp -o CMakeFiles/coul.dir/complex_functions.cpp.s

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.requires:

.PHONY : coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.requires

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.provides: coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.requires
	$(MAKE) -f coul/src/CMakeFiles/coul.dir/build.make coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.provides.build
.PHONY : coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.provides

coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.provides.build: coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o


coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o: coul/src/CMakeFiles/coul.dir/flags.make
coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o: ../coul/src/cwfcomp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amber/Documents/AZURE_new/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coul.dir/cwfcomp.cpp.o -c /home/amber/Documents/AZURE_new/coul/src/cwfcomp.cpp

coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coul.dir/cwfcomp.cpp.i"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amber/Documents/AZURE_new/coul/src/cwfcomp.cpp > CMakeFiles/coul.dir/cwfcomp.cpp.i

coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coul.dir/cwfcomp.cpp.s"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amber/Documents/AZURE_new/coul/src/cwfcomp.cpp -o CMakeFiles/coul.dir/cwfcomp.cpp.s

coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.requires:

.PHONY : coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.requires

coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.provides: coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.requires
	$(MAKE) -f coul/src/CMakeFiles/coul.dir/build.make coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.provides.build
.PHONY : coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.provides

coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.provides.build: coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o


coul/src/CMakeFiles/coul.dir/ode_int.cpp.o: coul/src/CMakeFiles/coul.dir/flags.make
coul/src/CMakeFiles/coul.dir/ode_int.cpp.o: ../coul/src/ode_int.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amber/Documents/AZURE_new/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object coul/src/CMakeFiles/coul.dir/ode_int.cpp.o"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coul.dir/ode_int.cpp.o -c /home/amber/Documents/AZURE_new/coul/src/ode_int.cpp

coul/src/CMakeFiles/coul.dir/ode_int.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coul.dir/ode_int.cpp.i"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amber/Documents/AZURE_new/coul/src/ode_int.cpp > CMakeFiles/coul.dir/ode_int.cpp.i

coul/src/CMakeFiles/coul.dir/ode_int.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coul.dir/ode_int.cpp.s"
	cd /home/amber/Documents/AZURE_new/build/coul/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amber/Documents/AZURE_new/coul/src/ode_int.cpp -o CMakeFiles/coul.dir/ode_int.cpp.s

coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.requires:

.PHONY : coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.requires

coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.provides: coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.requires
	$(MAKE) -f coul/src/CMakeFiles/coul.dir/build.make coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.provides.build
.PHONY : coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.provides

coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.provides.build: coul/src/CMakeFiles/coul.dir/ode_int.cpp.o


# Object files for target coul
coul_OBJECTS = \
"CMakeFiles/coul.dir/complex_functions.cpp.o" \
"CMakeFiles/coul.dir/cwfcomp.cpp.o" \
"CMakeFiles/coul.dir/ode_int.cpp.o"

# External object files for target coul
coul_EXTERNAL_OBJECTS =

coul/src/libcoul.a: coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o
coul/src/libcoul.a: coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o
coul/src/libcoul.a: coul/src/CMakeFiles/coul.dir/ode_int.cpp.o
coul/src/libcoul.a: coul/src/CMakeFiles/coul.dir/build.make
coul/src/libcoul.a: coul/src/CMakeFiles/coul.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/amber/Documents/AZURE_new/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libcoul.a"
	cd /home/amber/Documents/AZURE_new/build/coul/src && $(CMAKE_COMMAND) -P CMakeFiles/coul.dir/cmake_clean_target.cmake
	cd /home/amber/Documents/AZURE_new/build/coul/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coul.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
coul/src/CMakeFiles/coul.dir/build: coul/src/libcoul.a

.PHONY : coul/src/CMakeFiles/coul.dir/build

coul/src/CMakeFiles/coul.dir/requires: coul/src/CMakeFiles/coul.dir/complex_functions.cpp.o.requires
coul/src/CMakeFiles/coul.dir/requires: coul/src/CMakeFiles/coul.dir/cwfcomp.cpp.o.requires
coul/src/CMakeFiles/coul.dir/requires: coul/src/CMakeFiles/coul.dir/ode_int.cpp.o.requires

.PHONY : coul/src/CMakeFiles/coul.dir/requires

coul/src/CMakeFiles/coul.dir/clean:
	cd /home/amber/Documents/AZURE_new/build/coul/src && $(CMAKE_COMMAND) -P CMakeFiles/coul.dir/cmake_clean.cmake
.PHONY : coul/src/CMakeFiles/coul.dir/clean

coul/src/CMakeFiles/coul.dir/depend:
	cd /home/amber/Documents/AZURE_new/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amber/Documents/AZURE_new /home/amber/Documents/AZURE_new/coul/src /home/amber/Documents/AZURE_new/build /home/amber/Documents/AZURE_new/build/coul/src /home/amber/Documents/AZURE_new/build/coul/src/CMakeFiles/coul.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : coul/src/CMakeFiles/coul.dir/depend

